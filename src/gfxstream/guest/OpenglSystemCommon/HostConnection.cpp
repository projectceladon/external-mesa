/*
* Copyright (C) 2011 The Android Open Source Project
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include "HostConnection.h"

#include "GoldfishAddressSpaceStream.h"
#include "GrallocGoldfish.h"
#include "GrallocMinigbm.h"
#include "VirtioGpuAddressSpaceStream.h"
#include "aemu/base/AndroidHealthMonitor.h"
#include "aemu/base/AndroidHealthMonitorConsumerBasic.h"
#include "aemu/base/threads/AndroidThread.h"

#if defined(__ANDROID__)
#include "ANativeWindowAndroid.h"
#include "android-base/properties.h"
#endif

#include "aemu/base/Process.h"

using gfxstream::guest::CreateHealthMonitor;
using gfxstream::guest::HealthMonitor;
using gfxstream::guest::HealthMonitorConsumerBasic;
using gfxstream::guest::IOStream;
using gfxstream::GoldfishGralloc;
using gfxstream::MinigbmGralloc;

#include "VkEncoder.h"
#include "AddressSpaceStream.h"

using gfxstream::vk::VkEncoder;

#include <unistd.h>

#include "ProcessPipe.h"
#include "QemuPipeStream.h"
#include "ThreadInfo.h"

using gfxstream::guest::getCurrentThreadId;

#include "VirtGpu.h"
#include "VirtioGpuPipeStream.h"
#include "virtgpu_drm.h"

#if defined(__linux__) || defined(__ANDROID__)
#include <fstream>
#include <string>
#include <unistd.h>

static const size_t kPageSize = getpagesize();
#else
constexpr size_t kPageSize = PAGE_SIZE;
#endif

#undef LOG_TAG
#define LOG_TAG "HostConnection"
#include <cutils/log.h>

#define STREAM_BUFFER_SIZE  (4*1024*1024)
#define STREAM_PORT_NUM     22468

constexpr const auto kEglProp = "ro.hardware.egl";

HealthMonitor<>* getGlobalHealthMonitor() {
    // Initialize HealthMonitor
    // Rather than inject as a construct arg, we keep it as a static variable in the .cpp
    // to avoid setting up dependencies in other repos (external/qemu)
    static HealthMonitorConsumerBasic sHealthMonitorConsumerBasic;
    static std::unique_ptr<HealthMonitor<>> sHealthMonitor = CreateHealthMonitor(sHealthMonitorConsumerBasic);
    return sHealthMonitor.get();
}

static HostConnectionType getConnectionTypeFromProperty(enum VirtGpuCapset capset) {
#if defined(__Fuchsia__) || defined(LINUX_GUEST_BUILD)
    return HOST_CONNECTION_VIRTIO_GPU_ADDRESS_SPACE;
#else
    std::string transport;

#if defined(__ANDROID__)
    transport = android::base::GetProperty("ro.boot.hardware.gltransport", "");
#else
    const char* transport_envvar = getenv("GFXSTREAM_TRANSPORT");
    if (transport_envvar != nullptr) {
        transport = std::string(transport_envvar);
    }
#endif

    if (transport.empty()) {
#if defined(__ANDROID__)
        return HOST_CONNECTION_QEMU_PIPE;
#else
        return HOST_CONNECTION_VIRTIO_GPU_ADDRESS_SPACE;
#endif
    }

    if (transport == "asg") {
        return HOST_CONNECTION_ADDRESS_SPACE;
    }
    if (transport == "pipe") {
        return HOST_CONNECTION_QEMU_PIPE;
    }

    if (transport == "virtio-gpu-asg" || transport == "virtio-gpu-pipe") {
        std::string egl;
#if defined(__ANDROID__)
        egl = android::base::GetProperty(kEglProp, "");
#endif
        // ANGLE doesn't work well without ASG, particularly if HostComposer uses a pipe
        // transport and VK uses ASG.
        if (capset == kCapsetGfxStreamVulkan || egl == "angle") {
            return HOST_CONNECTION_VIRTIO_GPU_ADDRESS_SPACE;
        } else {
            return HOST_CONNECTION_VIRTIO_GPU_PIPE;
        }
    }

    return HOST_CONNECTION_QEMU_PIPE;
#endif
}

static GrallocType getGrallocTypeFromProperty() {
    std::string value;

#if defined(__ANDROID__)
    value = android::base::GetProperty("ro.hardware.gralloc", "");
#endif

    if (value.empty()) {
        return GRALLOC_TYPE_RANCHU;
    }
    if (value == "minigbm") {
        return GRALLOC_TYPE_MINIGBM;
    }
    if (value == "ranchu") {
        return GRALLOC_TYPE_RANCHU;
    }
    return GRALLOC_TYPE_RANCHU;
}

#if defined(__ANDROID__)
static GoldfishGralloc m_goldfishGralloc;
#endif

HostConnection::HostConnection()
    : exitUncleanly(false),
      m_hostExtensions(),
      m_noHostError(true),
      m_rendernodeFd(-1) { }

HostConnection::~HostConnection()
{
    // round-trip to ensure that queued commands have been processed
    // before process pipe closure is detected.
#if GFXSTREAM_GUEST_USE_GLES
    if (m_rcEnc && !exitUncleanly) {
        (void)m_rcEnc->rcGetRendererVersion(m_rcEnc.get());
    }
#endif

    if (m_grallocType == GRALLOC_TYPE_MINIGBM) {
        delete m_grallocHelper;
    }

    if (m_vkEnc) {
        m_vkEnc->decRef();
    }

    if (m_stream) {
        m_stream->decRef();
    }
}


// static
std::unique_ptr<HostConnection> HostConnection::connect(enum VirtGpuCapset capset) {
    const enum HostConnectionType connType = getConnectionTypeFromProperty(capset);
    uint32_t noRenderControlEnc = 0;

    // Use "new" to access a non-public constructor.
    auto con = std::unique_ptr<HostConnection>(new HostConnection);
    con->m_connectionType = connType;

    switch (connType) {
        case HOST_CONNECTION_ADDRESS_SPACE: {
#if defined(__ANDROID__) || defined(__Fuchsia__)
            auto stream = createGoldfishAddressSpaceStream(STREAM_BUFFER_SIZE, getGlobalHealthMonitor());
            if (!stream) {
                ALOGE("Failed to create AddressSpaceStream for host connection\n");
                return nullptr;
            }
            con->m_stream = stream;
#else
            ALOGE("Fatal: HOST_CONNECTION_ADDRESS_SPACE not supported on this host.");
            abort();
#endif
            con->m_grallocType = GRALLOC_TYPE_RANCHU;
#if defined(__ANDROID__)
            con->m_grallocHelper = &m_goldfishGralloc;
#endif
            break;
        }
#if !defined(__Fuchsia__)
        case HOST_CONNECTION_QEMU_PIPE: {
            auto stream = new QemuPipeStream(STREAM_BUFFER_SIZE);
            if (!stream) {
                ALOGE("Failed to create QemuPipeStream for host connection\n");
                return nullptr;
            }
            if (stream->connect() < 0) {
                ALOGE("Failed to connect to host (QemuPipeStream)\n");
                return nullptr;
            }
            con->m_grallocType = GRALLOC_TYPE_RANCHU;
            con->m_stream = stream;
#if defined(__ANDROID__)
            con->m_grallocHelper = &m_goldfishGralloc;
#endif
            break;
        }
#endif
        case HOST_CONNECTION_VIRTIO_GPU_PIPE: {
            auto stream = new VirtioGpuPipeStream(STREAM_BUFFER_SIZE);
            if (!stream) {
                ALOGE("Failed to create VirtioGpu for host connection\n");
                return nullptr;
            }
            if (stream->connect() < 0) {
                ALOGE("Failed to connect to host (VirtioGpu)\n");
                return nullptr;
            }
            con->m_grallocType = getGrallocTypeFromProperty();
            auto rendernodeFd = stream->getRendernodeFd();
            con->m_stream = stream;
            con->m_rendernodeFd = rendernodeFd;
#if defined(__ANDROID__)
            switch (con->m_grallocType) {
                case GRALLOC_TYPE_RANCHU:
                    con->m_grallocHelper = &m_goldfishGralloc;
                    break;
                case GRALLOC_TYPE_MINIGBM: {
                    MinigbmGralloc* m = new MinigbmGralloc;
                    m->setFd(rendernodeFd);
                    con->m_grallocHelper = m;
                    break;
                }
                default:
                    ALOGE("Fatal: Unknown gralloc type 0x%x\n", con->m_grallocType);
                    abort();
            }
#endif
            break;
        }
        case HOST_CONNECTION_VIRTIO_GPU_ADDRESS_SPACE: {
            // Use kCapsetGfxStreamVulkan for now, Ranchu HWC needs to be modified to pass in
            // right capset.
            auto device = VirtGpuDevice::getInstance(kCapsetGfxStreamVulkan);
            auto deviceHandle = device->getDeviceHandle();
            auto stream =
                createVirtioGpuAddressSpaceStream(kCapsetGfxStreamVulkan, getGlobalHealthMonitor());
            if (!stream) {
                ALOGE("Failed to create virtgpu AddressSpaceStream\n");
                return nullptr;
            }
            con->m_grallocType = getGrallocTypeFromProperty();
            con->m_stream = stream;
            con->m_rendernodeFd = deviceHandle;
#if defined(__ANDROID__)
            switch (con->m_grallocType) {
                case GRALLOC_TYPE_RANCHU:
                    con->m_grallocHelper = &m_goldfishGralloc;
                    break;
                case GRALLOC_TYPE_MINIGBM: {
                    MinigbmGralloc* m = new gfxstream::MinigbmGralloc;
                    m->setFd(deviceHandle);
                    con->m_grallocHelper = m;
                    break;
                }
                default:
                    ALOGE("Fatal: Unknown gralloc type 0x%x\n", con->m_grallocType);
                    abort();
            }
#endif
            break;
        }
        default:
            break;
    }

#if defined(__ANDROID__)
    con->m_anwHelper = new gfxstream::ANativeWindowHelperAndroid();
#else
    // Host builds are expected to set an ANW helper for testing.
#endif
    con->m_syncHelper.reset(gfxstream::createPlatformSyncHelper());

    // send zero 'clientFlags' to the host.
    unsigned int *pClientFlags =
            (unsigned int *)con->m_stream->allocBuffer(sizeof(unsigned int));
    *pClientFlags = 0;
    con->m_stream->commitBuffer(sizeof(unsigned int));

    if (capset == kCapsetGfxStreamMagma) {
        noRenderControlEnc = 1;
    } else if (capset == kCapsetGfxStreamVulkan) {
        VirtGpuDevice* instance = VirtGpuDevice::getInstance(kCapsetGfxStreamVulkan);
        auto caps = instance->getCaps();
        noRenderControlEnc = caps.vulkanCapset.noRenderControlEnc;
    }

    auto fd = (connType == HOST_CONNECTION_VIRTIO_GPU_ADDRESS_SPACE) ? con->m_rendernodeFd : -1;
    processPipeInit(fd, connType, noRenderControlEnc);
    return con;
}

HostConnection* HostConnection::get() { return getWithThreadInfo(getEGLThreadInfo(), kCapsetNone); }

HostConnection* HostConnection::getOrCreate(enum VirtGpuCapset capset) {
    return getWithThreadInfo(getEGLThreadInfo(), capset);
}

HostConnection* HostConnection::getWithThreadInfo(EGLThreadInfo* tinfo, enum VirtGpuCapset capset) {
    // Get thread info
    if (!tinfo) {
        return NULL;
    }

    if (tinfo->hostConn == NULL) {
        tinfo->hostConn = HostConnection::createUnique(capset);
    }

    return tinfo->hostConn.get();
}

void HostConnection::exit() {
    EGLThreadInfo *tinfo = getEGLThreadInfo();
    if (!tinfo) {
        return;
    }

    tinfo->hostConn.reset();
}

void HostConnection::exitUnclean() {
    EGLThreadInfo *tinfo = getEGLThreadInfo();
    if (!tinfo) {
        return;
    }

    tinfo->hostConn->exitUncleanly = true;
    tinfo->hostConn.reset();
}

// static
std::unique_ptr<HostConnection> HostConnection::createUnique(enum VirtGpuCapset capset) {
    return connect(capset);
}

VkEncoder* HostConnection::vkEncoder() {
    if (!m_vkEnc) {
        m_vkEnc = new VkEncoder(m_stream, getGlobalHealthMonitor());
    }
    return m_vkEnc;
}
