/*
 * Copyright (C) 2024 The Android Open Source Project
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
#include "ProcessPipe.h"
#include "ThreadInfo.h"

#if defined(__ANDROID__)
#include "android-base/properties.h"
#endif

using gfxstream::guest::ChecksumCalculator;
using gfxstream::guest::IOStream;

static uint32_t getDrawCallFlushIntervalFromProperty() {
    constexpr uint32_t kDefaultValue = 800;
    uint32_t value = kDefaultValue;

#if defined(__ANDROID__)
    value =
        android::base::GetUintProperty("ro.boot.qemu.gltransport.drawFlushInterval", kDefaultValue);
#endif
    return value;
}

GLEncoder* HostConnection::glEncoder() {
    if (!m_glEnc) {
        m_glEnc = std::make_unique<GLEncoder>(m_stream, checksumHelper());
        DBG("HostConnection::glEncoder new encoder %p, tid %lu", m_glEnc, getCurrentThreadId());
        m_glEnc->setContextAccessor(s_getGLContext);
    }
    return m_glEnc.get();
}

GL2Encoder* HostConnection::gl2Encoder() {
    if (!m_gl2Enc) {
        m_gl2Enc = std::make_unique<GL2Encoder>(m_stream, checksumHelper());
        DBG("HostConnection::gl2Encoder new encoder %p, tid %lu", m_gl2Enc, getCurrentThreadId());
        m_gl2Enc->setContextAccessor(s_getGL2Context);
        m_gl2Enc->setNoHostError(m_noHostError);
        m_gl2Enc->setDrawCallFlushInterval(getDrawCallFlushIntervalFromProperty());
        m_gl2Enc->setHasAsyncUnmapBuffer(m_rcEnc->hasAsyncUnmapBuffer());
        m_gl2Enc->setHasSyncBufferData(m_rcEnc->hasSyncBufferData());
    }
    return m_gl2Enc.get();
}

ExtendedRCEncoderContext* HostConnection::rcEncoder() {
    if (!m_rcEnc) {
        m_rcEnc = std::make_unique<ExtendedRCEncoderContext>(m_stream, checksumHelper());

        ExtendedRCEncoderContext* rcEnc = m_rcEnc.get();
        setChecksumHelper(rcEnc);
        queryAndSetSyncImpl(rcEnc);
        queryAndSetGLESMaxVersion(rcEnc);
        queryAndSetNoErrorState(rcEnc);
        queryAndSetHostCompositionImpl(rcEnc);
        queryAndSetDirectMemSupport(rcEnc);
        queryAndSetVulkanSupport(rcEnc);
        queryAndSetDeferredVulkanCommandsSupport(rcEnc);
        queryAndSetVulkanNullOptionalStringsSupport(rcEnc);
        queryAndSetVulkanCreateResourcesWithRequirementsSupport(rcEnc);
        queryAndSetVulkanIgnoredHandles(rcEnc);
        queryAndSetYUVCache(rcEnc);
        queryAndSetAsyncUnmapBuffer(rcEnc);
        queryAndSetVirtioGpuNext(rcEnc);
        queryHasSharedSlotsHostMemoryAllocator(rcEnc);
        queryAndSetVulkanFreeMemorySync(rcEnc);
        queryAndSetVirtioGpuNativeSync(rcEnc);
        queryAndSetVulkanShaderFloat16Int8Support(rcEnc);
        queryAndSetVulkanAsyncQueueSubmitSupport(rcEnc);
        queryAndSetHostSideTracingSupport(rcEnc);
        queryAndSetAsyncFrameCommands(rcEnc);
        queryAndSetVulkanQueueSubmitWithCommandsSupport(rcEnc);
        queryAndSetVulkanBatchedDescriptorSetUpdateSupport(rcEnc);
        queryAndSetSyncBufferData(rcEnc);
        queryAndSetVulkanAsyncQsri(rcEnc);
        queryAndSetReadColorBufferDma(rcEnc);
        queryAndSetHWCMultiConfigs(rcEnc);
        queryAndSetVulkanAuxCommandBufferMemory(rcEnc);
        queryVersion(rcEnc);

        rcEnc->rcSetPuid(rcEnc, getPuid());
    }
    return m_rcEnc.get();
}

gl_client_context_t* HostConnection::s_getGLContext() {
    EGLThreadInfo* ti = getEGLThreadInfo();
    if (ti->hostConn) {
        return ti->hostConn->m_glEnc.get();
    }
    return NULL;
}

gl2_client_context_t* HostConnection::s_getGL2Context() {
    EGLThreadInfo* ti = getEGLThreadInfo();
    if (ti->hostConn) {
        return ti->hostConn->m_gl2Enc.get();
    }
    return NULL;
}

const std::string& HostConnection::queryHostExtensions(ExtendedRCEncoderContext* rcEnc) {
    if (!m_hostExtensions.empty()) {
        return m_hostExtensions;
    }

    // Extensions strings are usually quite long, preallocate enough here.
    std::string extensionsBuffer(1023, '\0');

    // Returns the required size including the 0-terminator, so
    // account it when passing/using the sizes.
    int extensionSize =
        rcEnc->rcGetHostExtensionsString(rcEnc, extensionsBuffer.size() + 1, &extensionsBuffer[0]);
    if (extensionSize < 0) {
        extensionsBuffer.resize(-extensionSize);
        extensionSize =
            rcEnc->rcGetHostExtensionsString(rcEnc, -extensionSize + 1, &extensionsBuffer[0]);
    }

    if (extensionSize > 0) {
        extensionsBuffer.resize(extensionSize - 1);
        m_hostExtensions.swap(extensionsBuffer);
    }

    return m_hostExtensions;
}

void HostConnection::queryAndSetHostCompositionImpl(ExtendedRCEncoderContext* rcEnc) {
    const std::string& hostExtensions = queryHostExtensions(rcEnc);
    ALOGV("HostComposition ext %s", hostExtensions.c_str());
    // make sure V2 is checked first before V1, as host may declare supporting both
    if (hostExtensions.find(kHostCompositionV2) != std::string::npos) {
        rcEnc->setHostComposition(HOST_COMPOSITION_V2);
    } else if (hostExtensions.find(kHostCompositionV1) != std::string::npos) {
        rcEnc->setHostComposition(HOST_COMPOSITION_V1);
    } else {
        rcEnc->setHostComposition(HOST_COMPOSITION_NONE);
    }
}

void HostConnection::setChecksumHelper(ExtendedRCEncoderContext* rcEnc) {
    const std::string& hostExtensions = queryHostExtensions(rcEnc);
    // check the host supported version
    uint32_t checksumVersion = 0;
    const char* checksumPrefix = ChecksumCalculator::getMaxVersionStrPrefix();
    const char* glProtocolStr = strstr(hostExtensions.c_str(), checksumPrefix);
    if (glProtocolStr) {
        uint32_t maxVersion = ChecksumCalculator::getMaxVersion();
        sscanf(glProtocolStr + strlen(checksumPrefix), "%d", &checksumVersion);
        if (maxVersion < checksumVersion) {
            checksumVersion = maxVersion;
        }
        // The ordering of the following two commands matters!
        // Must tell the host first before setting it in the guest
        rcEnc->rcSelectChecksumHelper(rcEnc, checksumVersion, 0);
        m_checksumHelper.setVersion(checksumVersion);
    }
}

void HostConnection::queryAndSetSyncImpl(ExtendedRCEncoderContext* rcEnc) {
    const std::string& hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kRCNativeSyncV4) != std::string::npos) {
        rcEnc->setSyncImpl(SYNC_IMPL_NATIVE_SYNC_V4);
    } else if (hostExtensions.find(kRCNativeSyncV3) != std::string::npos) {
        rcEnc->setSyncImpl(SYNC_IMPL_NATIVE_SYNC_V3);
    } else if (hostExtensions.find(kRCNativeSyncV2) != std::string::npos) {
        rcEnc->setSyncImpl(SYNC_IMPL_NATIVE_SYNC_V2);
    } else {
        rcEnc->setSyncImpl(SYNC_IMPL_NONE);
    }
}

void HostConnection::queryAndSetGLESMaxVersion(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kGLESMaxVersion_2) != std::string::npos) {
        rcEnc->setGLESMaxVersion(GLES_MAX_VERSION_2);
    } else if (hostExtensions.find(kGLESMaxVersion_3_0) != std::string::npos) {
        rcEnc->setGLESMaxVersion(GLES_MAX_VERSION_3_0);
    } else if (hostExtensions.find(kGLESMaxVersion_3_1) != std::string::npos) {
        rcEnc->setGLESMaxVersion(GLES_MAX_VERSION_3_1);
    } else if (hostExtensions.find(kGLESMaxVersion_3_2) != std::string::npos) {
        rcEnc->setGLESMaxVersion(GLES_MAX_VERSION_3_2);
    } else {
        ALOGW("Unrecognized GLES max version string in extensions: %s", hostExtensions.c_str());
        rcEnc->setGLESMaxVersion(GLES_MAX_VERSION_2);
    }
}

void HostConnection::queryAndSetNoErrorState(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kGLESUseHostError) != std::string::npos) {
        m_noHostError = false;
    }
}

void HostConnection::queryAndSetDirectMemSupport(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kGLDirectMem) != std::string::npos) {
        rcEnc->featureInfo()->hasDirectMem = true;
    }
}

void HostConnection::queryAndSetVulkanSupport(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkan) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkan = true;
    }
}

void HostConnection::queryAndSetDeferredVulkanCommandsSupport(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kDeferredVulkanCommands) != std::string::npos) {
        rcEnc->featureInfo()->hasDeferredVulkanCommands = true;
    }
}

void HostConnection::queryAndSetVulkanNullOptionalStringsSupport(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanNullOptionalStrings) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanNullOptionalStrings = true;
    }
}

void HostConnection::queryAndSetVulkanCreateResourcesWithRequirementsSupport(
    ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanCreateResourcesWithRequirements) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanCreateResourcesWithRequirements = true;
    }
}

void HostConnection::queryAndSetVulkanIgnoredHandles(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanIgnoredHandles) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanIgnoredHandles = true;
    }
}

void HostConnection::queryAndSetYUVCache(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kYUVCache) != std::string::npos) {
        rcEnc->featureInfo()->hasYUVCache = true;
    }
}

void HostConnection::queryAndSetAsyncUnmapBuffer(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kAsyncUnmapBuffer) != std::string::npos) {
        rcEnc->featureInfo()->hasAsyncUnmapBuffer = true;
    }
}

void HostConnection::queryAndSetVirtioGpuNext(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVirtioGpuNext) != std::string::npos) {
        rcEnc->featureInfo()->hasVirtioGpuNext = true;
    }
}

void HostConnection::queryHasSharedSlotsHostMemoryAllocator(ExtendedRCEncoderContext* rcEnc) {
    const std::string& hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kHasSharedSlotsHostMemoryAllocator) != std::string::npos) {
        rcEnc->featureInfo()->hasSharedSlotsHostMemoryAllocator = true;
    }
}

void HostConnection::queryAndSetVulkanFreeMemorySync(ExtendedRCEncoderContext* rcEnc) {
    const std::string& hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanFreeMemorySync) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanFreeMemorySync = true;
    }
}

void HostConnection::queryAndSetVirtioGpuNativeSync(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVirtioGpuNativeSync) != std::string::npos) {
        rcEnc->featureInfo()->hasVirtioGpuNativeSync = true;
    }
}

void HostConnection::queryAndSetVulkanShaderFloat16Int8Support(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanShaderFloat16Int8) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanShaderFloat16Int8 = true;
    }
}

void HostConnection::queryAndSetVulkanAsyncQueueSubmitSupport(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanAsyncQueueSubmit) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanAsyncQueueSubmit = true;
    }
}

void HostConnection::queryAndSetHostSideTracingSupport(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kHostSideTracing) != std::string::npos) {
        rcEnc->featureInfo()->hasHostSideTracing = true;
    }
}

void HostConnection::queryAndSetAsyncFrameCommands(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kAsyncFrameCommands) != std::string::npos) {
        rcEnc->featureInfo()->hasAsyncFrameCommands = true;
    }
}

void HostConnection::queryAndSetVulkanQueueSubmitWithCommandsSupport(
    ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanQueueSubmitWithCommands) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanQueueSubmitWithCommands = true;
    }
}

void HostConnection::queryAndSetVulkanBatchedDescriptorSetUpdateSupport(
    ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanBatchedDescriptorSetUpdate) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanBatchedDescriptorSetUpdate = true;
    }
}

void HostConnection::queryAndSetSyncBufferData(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kSyncBufferData) != std::string::npos) {
        rcEnc->featureInfo()->hasSyncBufferData = true;
    }
}

void HostConnection::queryAndSetVulkanAsyncQsri(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kVulkanAsyncQsri) != std::string::npos) {
        rcEnc->featureInfo()->hasVulkanAsyncQsri = true;
    }
}

void HostConnection::queryAndSetReadColorBufferDma(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kReadColorBufferDma) != std::string::npos) {
        rcEnc->featureInfo()->hasReadColorBufferDma = true;
    }
}

void HostConnection::queryAndSetHWCMultiConfigs(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    if (hostExtensions.find(kHWCMultiConfigs) != std::string::npos) {
        rcEnc->featureInfo()->hasHWCMultiConfigs = true;
    }
}

void HostConnection::queryAndSetVulkanAuxCommandBufferMemory(ExtendedRCEncoderContext* rcEnc) {
    std::string hostExtensions = queryHostExtensions(rcEnc);
    rcEnc->featureInfo()->hasVulkanAuxCommandMemory =
        hostExtensions.find(kVulkanAuxCommandMemory) != std::string::npos;
}

GLint HostConnection::queryVersion(ExtendedRCEncoderContext* rcEnc) {
    GLint version = m_rcEnc->rcGetRendererVersion(m_rcEnc.get());
    return version;
}
