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

#ifndef HOST_CONNECTION_GLES_H
#define HOST_CONNECTION_GLES_H

#include "GLEncoder.h"
#include "GL2Encoder.h"
#include "renderControl_enc.h"
#include "renderControl_types.h"

// ExtendedRCEncoderContext is an extended version of renderControl_encoder_context_t
// that will be used to track available emulator features.
class ExtendedRCEncoderContext : public renderControl_encoder_context_t {
public:
    ExtendedRCEncoderContext(gfxstream::guest::IOStream *stream,
                             gfxstream::guest::ChecksumCalculator *checksumCalculator)
        : renderControl_encoder_context_t(stream, checksumCalculator) {}
    void setSyncImpl(SyncImpl syncImpl) { m_featureInfo.syncImpl = syncImpl; }
    void setHostComposition(HostComposition hostComposition) {
        m_featureInfo.hostComposition = hostComposition; }
    bool hasNativeSync() const { return m_featureInfo.syncImpl >= SYNC_IMPL_NATIVE_SYNC_V2; }
    bool hasNativeSyncV3() const { return m_featureInfo.syncImpl >= SYNC_IMPL_NATIVE_SYNC_V3; }
    bool hasNativeSyncV4() const { return m_featureInfo.syncImpl >= SYNC_IMPL_NATIVE_SYNC_V4; }
    bool hasVirtioGpuNativeSync() const { return m_featureInfo.hasVirtioGpuNativeSync; }
    bool hasHostCompositionV1() const {
        return m_featureInfo.hostComposition == HOST_COMPOSITION_V1; }
    bool hasHostCompositionV2() const {
        return m_featureInfo.hostComposition == HOST_COMPOSITION_V2; }
    bool hasYUVCache() const {
        return m_featureInfo.hasYUVCache; }
    bool hasAsyncUnmapBuffer() const {
        return m_featureInfo.hasAsyncUnmapBuffer; }
    bool hasHostSideTracing() const {
        return m_featureInfo.hasHostSideTracing;
    }
    bool hasAsyncFrameCommands() const {
        return m_featureInfo.hasAsyncFrameCommands;
    }
    bool hasSyncBufferData() const {
        return m_featureInfo.hasSyncBufferData; }
    bool hasHWCMultiConfigs() const {
        return m_featureInfo.hasHWCMultiConfigs;
    }
    void setGLESMaxVersion(GLESMaxVersion ver) { m_featureInfo.glesMaxVersion = ver; }
    GLESMaxVersion getGLESMaxVersion() const { return m_featureInfo.glesMaxVersion; }
    bool hasDirectMem() const {
        return m_featureInfo.hasDirectMem;
    }

    const EmulatorFeatureInfo* featureInfo_const() const { return &m_featureInfo; }
    EmulatorFeatureInfo* featureInfo() { return &m_featureInfo; }
private:
    EmulatorFeatureInfo m_featureInfo;
};

#endif
