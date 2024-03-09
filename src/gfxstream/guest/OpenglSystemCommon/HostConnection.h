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
#ifndef __COMMON_HOST_CONNECTION_H
#define __COMMON_HOST_CONNECTION_H

#include <cstring>
#include <memory>
#include <mutex>
#include <optional>
#include <string>

#include "ANativeWindow.h"
#include "EmulatorFeatureInfo.h"
#include "Gralloc.h"
#include "Sync.h"
#include "VirtGpu.h"
#include "gfxstream/guest/ChecksumCalculator.h"
#include "gfxstream/guest/IOStream.h"

#if GFXSTREAM_ENABLE_GUEST_GLES
#include "HostConnectionGles.h"
#endif

namespace gfxstream {
namespace vk {
class VkEncoder;
}  // namespace vk
}  // namespace gfxstream

struct EGLThreadInfo;

class HostConnection
{
public:
    static HostConnection *get();
    static HostConnection* getOrCreate(enum VirtGpuCapset capset = kCapsetNone);

    static HostConnection* getWithThreadInfo(EGLThreadInfo* tInfo,
                                             enum VirtGpuCapset capset = kCapsetNone);
    static void exit();
    static void exitUnclean(); // for testing purposes

    static std::unique_ptr<HostConnection> createUnique(enum VirtGpuCapset capset = kCapsetNone);
    HostConnection(const HostConnection&) = delete;

    ~HostConnection();

#if GFXSTREAM_ENABLE_GUEST_GLES
    GLEncoder *glEncoder();
    GL2Encoder* gl2Encoder();
    ExtendedRCEncoderContext *rcEncoder();
    gfxstream::guest::ChecksumCalculator* checksumHelper() { return &m_checksumHelper; }
#endif

    gfxstream::vk::VkEncoder* vkEncoder();

    int getRendernodeFd() { return m_rendernodeFd; }

    gfxstream::Gralloc* grallocHelper() { return m_grallocHelper; }
    void setGrallocHelperForTesting(gfxstream::Gralloc* gralloc) { m_grallocHelper = gralloc; }

    gfxstream::SyncHelper* syncHelper() { return m_syncHelper.get(); }
    void setSyncHelperForTesting(gfxstream::SyncHelper* sync) { m_syncHelper.reset(sync); }

    gfxstream::ANativeWindowHelper* anwHelper() { return m_anwHelper; }
    void setANativeWindowHelperForTesting(gfxstream::ANativeWindowHelper* anw) { m_anwHelper = anw; }

    void flush() {
        if (m_stream) {
            m_stream->flush();
        }
    }

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wthread-safety-analysis"
#endif
    void lock() const { m_lock.lock(); }
    void unlock() const { m_lock.unlock(); }
#ifdef __clang__
#pragma clang diagnostic pop
#endif

    bool exitUncleanly; // for testing purposes

private:
    // If the connection failed, |conn| is deleted.
    // Returns NULL if connection failed.
 static std::unique_ptr<HostConnection> connect(enum VirtGpuCapset capset);

 HostConnection();

#if GFXSTREAM_ENABLE_GUEST_GLES
 static gl_client_context_t* s_getGLContext();
 static gl2_client_context_t* s_getGL2Context();

 const std::string& queryHostExtensions(ExtendedRCEncoderContext* rcEnc);
 void setChecksumHelper(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetSyncImpl(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetDmaImpl(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetGLESMaxVersion(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetNoErrorState(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetHostCompositionImpl(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetDirectMemSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetDeferredVulkanCommandsSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanNullOptionalStringsSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanCreateResourcesWithRequirementsSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanIgnoredHandles(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetYUVCache(ExtendedRCEncoderContext* mrcEnc);
 void queryAndSetAsyncUnmapBuffer(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVirtioGpuNext(ExtendedRCEncoderContext* rcEnc);
 void queryHasSharedSlotsHostMemoryAllocator(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanFreeMemorySync(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVirtioGpuNativeSync(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanShaderFloat16Int8Support(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanAsyncQueueSubmitSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetHostSideTracingSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetAsyncFrameCommands(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanQueueSubmitWithCommandsSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanBatchedDescriptorSetUpdateSupport(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetSyncBufferData(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanAsyncQsri(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetReadColorBufferDma(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetHWCMultiConfigs(ExtendedRCEncoderContext* rcEnc);
 void queryAndSetVulkanAuxCommandBufferMemory(ExtendedRCEncoderContext* rcEnc);
 GLint queryVersion(ExtendedRCEncoderContext* rcEnc);
#endif

private:
    HostConnectionType m_connectionType;
    GrallocType m_grallocType;

    // intrusively refcounted
    gfxstream::guest::IOStream* m_stream = nullptr;

#if GFXSTREAM_ENABLE_GUEST_GLES
    std::unique_ptr<GLEncoder> m_glEnc;
    std::unique_ptr<GL2Encoder> m_gl2Enc;
    std::unique_ptr<ExtendedRCEncoderContext> m_rcEnc;
    gfxstream::guest::ChecksumCalculator m_checksumHelper;
#endif

    // intrusively refcounted
    gfxstream::vk::VkEncoder* m_vkEnc = nullptr;

    gfxstream::ANativeWindowHelper* m_anwHelper = nullptr;
    gfxstream::Gralloc* m_grallocHelper = nullptr;
    std::unique_ptr<gfxstream::SyncHelper> m_syncHelper;
    std::string m_hostExtensions;
    bool m_noHostError;
    mutable std::mutex m_lock;
    int m_rendernodeFd;
};

#endif
