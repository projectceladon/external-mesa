/*
 * Mesa 3-D graphics library
 *
 * Copyright (C) 2021 GlobalLogic Ukraine
 * Copyright (C) 2021-2022 Roman Stratiienko (r.stratiienko@gmail.com)
 * SPDX-License-Identifier: MIT
 */

#include <aidl/android/hardware/graphics/allocator/IAllocator.h>
#include <aidl/android/hardware/graphics/common/BufferUsage.h>
#include <aidl/android/hardware/graphics/common/ChromaSiting.h>
#include <aidl/android/hardware/graphics/common/Dataspace.h>
#include <aidl/android/hardware/graphics/common/ExtendableType.h>
#include <aidl/android/hardware/graphics/common/PixelFormat.h>
#include <aidl/android/hardware/graphics/common/PlaneLayoutComponent.h>
#include <aidl/android/hardware/graphics/common/PlaneLayoutComponentType.h>
#include <aidl/android/hardware/graphics/common/StandardMetadataType.h>
#include <android/hardware/graphics/mapper/IMapper.h>
#include <android/hardware/graphics/mapper/utils/IMapperMetadataTypes.h>
#include <android/binder_manager.h>
#include <dlfcn.h>
#include <gralloctypes/Gralloc4.h>
#include <hidl/HidlSupport.h>
#include <ui/FatVector.h>
#include <vndksupport/linker.h>

#include "util/log.h"
#include "u_gralloc_internal.h"

using namespace aidl::android::hardware::graphics::allocator;
using aidl::android::hardware::graphics::common::BufferUsage;
using aidl::android::hardware::graphics::common::StandardMetadataType;
using aidl::android::hardware::graphics::common::ChromaSiting;
using aidl::android::hardware::graphics::common::Dataspace;
using aidl::android::hardware::graphics::common::ExtendableType;
using aidl::android::hardware::graphics::common::PlaneLayout;
using aidl::android::hardware::graphics::common::PlaneLayoutComponent;
using aidl::android::hardware::graphics::common::PlaneLayoutComponentType;
using android::hardware::graphics::common::V1_2::PixelFormat;
using android::hardware::graphics::mapper::StandardMetadata;
using android::hardware::hidl_handle;

static const auto kIAllocatorServiceName = IAllocator::descriptor + std::string("/default");
static const auto kIAllocatorMinimumVersion = 2;

typedef AIMapper_Error (*AIMapper_loadIMapperFn)(AIMapper *_Nullable *_Nonnull outImplementation);

static std::shared_ptr<IAllocator> waitForAllocator() {
    if (__builtin_available(android 31, *)) {
        if (!AServiceManager_isDeclared(kIAllocatorServiceName.c_str())) {
            mesa_loge("AllocatorService not declared");
            return nullptr;
        }
        auto allocator = IAllocator::fromBinder(
                ndk::SpAIBinder(AServiceManager_waitForService(kIAllocatorServiceName.c_str())));
        if (!allocator) {
            mesa_loge("AIDL IAllocator declared but failed to get service");
            return nullptr;
        }

        int32_t version = 0;
        if (!allocator->getInterfaceVersion(&version).isOk()) {
            mesa_loge("Failed to query interface version");
            return nullptr;
        }
        if (version < kIAllocatorMinimumVersion) {
            mesa_loge("version is < kIAllocatorMinimumVersion");
            return nullptr;
        }
        return allocator;
    } else {
        mesa_loge("API level < 31");
        return nullptr;
    }
}

static void *loadIMapperLibrary() {
    static void *imapperLibrary = []() -> void * {
        auto allocator = waitForAllocator();
        if (allocator == nullptr)
           return NULL;

        std::string mapperSuffix;
        auto status = allocator->getIMapperLibrarySuffix(&mapperSuffix);
        if (!status.isOk()) {
            mesa_loge("Failed to get IMapper library suffix");
            return NULL;
        }
        std::string lib_name = "mapper." + mapperSuffix + ".so";
        mesa_logi("Loading mapper.%s.so", mapperSuffix.c_str());
        void *so = android_load_sphal_library(lib_name.c_str(), RTLD_LOCAL | RTLD_NOW);
        if (!so) {
            mesa_loge("Failed to load mapper.%s.so", mapperSuffix.c_str());
        }
        return so;
    }();
    return imapperLibrary;
}

template <StandardMetadataType T>
static auto getStandardMetadata(AIMapper *mapper, buffer_handle_t bufferHandle)
        -> decltype(StandardMetadata<T>::value::decode(NULL, 0)) {
    using Value = typename StandardMetadata<T>::value;
    // TODO: Tune for common-case better
    android::FatVector<uint8_t, 128> buffer;
    int32_t sizeRequired = mapper->v5.getStandardMetadata(bufferHandle,
                                                          static_cast<int64_t>(T),
                                                          buffer.data(), buffer.size());
    if (sizeRequired < 0) {
        ALOGW_IF(-AIMAPPER_ERROR_UNSUPPORTED != sizeRequired,
                 "Unexpected error %d from valid getStandardMetadata call", -sizeRequired);
        return std::nullopt;
    }
    if ((size_t)sizeRequired > buffer.size()) {
        buffer.resize(sizeRequired);
        sizeRequired = mapper->v5.getStandardMetadata(bufferHandle, static_cast<int64_t>(T),
                                                      buffer.data(), buffer.size());
    }
    if (sizeRequired < 0 || (size_t)sizeRequired > buffer.size()) {
        mesa_logw("getStandardMetadata failed, received %d with buffer size %zd", sizeRequired,
              buffer.size());
        // Generate a fail type
        return std::nullopt;
    }
    return Value::decode(buffer.data(), sizeRequired);
}

struct gralloc5 {
   struct u_gralloc base;
   AIMapper *mapper = NULL;
};

extern "C" {

static buffer_handle_t import_buffer(struct u_gralloc *gralloc, const buffer_handle_t rawHandle)
{
   buffer_handle_t outBuffer = nullptr;
   gralloc5 *gr = (gralloc5 *)gralloc;

   if (gr->mapper == nullptr) {
      mesa_loge("mapper is null");
   } else {
      AIMapper_Error error = gr->mapper->v5.importBuffer(hidl_handle(rawHandle),
                                                         &outBuffer);
      if (error != AIMAPPER_ERROR_NONE) {
         mesa_loge("importBuffer failed");
      }
   }

    return outBuffer;
}

static int free_buffer(struct u_gralloc *gralloc, const buffer_handle_t handle)
{
   gralloc5 *gr = (gralloc5 *)gralloc;

   if (gr->mapper == nullptr) {
      mesa_loge("mapper is null");
      return -EINVAL;
   }

   if (!handle) {
      mesa_loge("buffer handle is null");
      return -EINVAL;
   }

   AIMapper_Error error = gr->mapper->v5.freeBuffer(handle);
   if (error != AIMAPPER_ERROR_NONE) {
      mesa_loge("freeBuffer failed");
      return - EINVAL;
   }

   return 0;
}

static int
mapper_resolve_format(struct u_gralloc *gralloc, struct u_gralloc_buffer_handle *hnd,
                      int32_t *format)
{
   gralloc5 *gr = (gralloc5 *)gralloc;
   int error = 0;

   if (gr->mapper == nullptr) {
      mesa_loge("mapper is null");
      return -EINVAL;
   }

   if (!hnd->handle) {
      mesa_loge("buffer handle is null");
      return -EINVAL;
   }

   auto importedHandle = import_buffer(gralloc, hnd->handle);
   if (nullptr == importedHandle) {
      mesa_loge("import_buffer failed");
      return -EINVAL;
   }

   auto value =
         getStandardMetadata<StandardMetadataType::PIXEL_FORMAT_REQUESTED>(gr->mapper,
                                                                           importedHandle);
   if (!value.has_value()) {
      mesa_loge("PIXEL_FORMAT_REQUESTED get failed");
      error = -EINVAL;
   } else {
      *format = static_cast<std::underlying_type_t<PixelFormat>>(*value);
   }

   (void)free_buffer(gralloc, importedHandle);
   return error;
}

static int
mapper_get_buffer_basic_info(struct u_gralloc *gralloc,
                              struct u_gralloc_buffer_handle *hnd,
                              struct u_gralloc_buffer_basic_info *out)
{
   gralloc5 *gr = (gralloc5 *)gralloc;
   int error = -EINVAL;

   if (gr->mapper == nullptr) {
      mesa_loge("mapper is null");
      return -EINVAL;
   }

   if (!hnd->handle) {
      mesa_loge("buffer handle is null");
      return -EINVAL;
   }

   auto importedHandle = import_buffer(gralloc, hnd->handle);
   if (nullptr == importedHandle) {
      mesa_loge("import_buffer failed");
      return -EINVAL;
   }

   {
      auto value =
         getStandardMetadata<StandardMetadataType::PIXEL_FORMAT_FOURCC>(gr->mapper,
                                                                        importedHandle);
      if (!value.has_value()) {
         mesa_loge("PIXEL_FORMAT_FOURCC get failed");
         goto out;
      }

      out->drm_fourcc = *value;
   }

   {
      auto value = getStandardMetadata<StandardMetadataType::PIXEL_FORMAT_MODIFIER>(
                                                                        gr->mapper,
                                                                        importedHandle);
      if (!value.has_value()) {
         mesa_loge("PIXEL_FORMAT_MODIFIER get failed");
         goto out;
      }

      out->modifier = *value;
   }

   {
      auto layouts_opt = getStandardMetadata<StandardMetadataType::PLANE_LAYOUTS>(gr->mapper,
                                                                                  importedHandle);
      if (!(layouts_opt.has_value())) {
         mesa_loge("PLANE_LAYOUTS get failed");
         goto out;
      } else {
         std::vector<PlaneLayout> &layouts = *layouts_opt;
         int fd_index = 0;
         int droid_format = 0, resolve_format = 0;
         enum chroma_order chroma_order = chroma_order::YCbCr;
         int chroma_step = 0;

         out->num_planes = layouts.size();


         for (uint32_t i = 0; i < layouts.size(); i++) {
            out->strides[i] = layouts[i].strideInBytes;
            out->offsets[i] = layouts[i].offsetInBytes;

            /* offset == 0 means layer is located in different dma-buf */
            if (out->offsets[i] == 0 && i > 0)
               fd_index++;

            if (fd_index >= hnd->handle->numFds)
               goto out;

            out->fds[i] = hnd->handle->data[fd_index];
         }

         if (mapper_resolve_format(gralloc, hnd, &droid_format)) {
            mesa_loge("mapper_resolve_format failed");
            goto out;
         }

         if (is_hal_format_yuv(droid_format)) {
            if (layouts[1].components[0].type == android::gralloc4::PlaneLayoutComponentType_CB)
               chroma_order = chroma_order::YCbCr;
            else
               chroma_order = chroma_order::YCrCb;

            chroma_step = layouts[1].sampleIncrementInBits / 8;
            resolve_format = get_fourcc_yuv(droid_format, chroma_order, chroma_step);
            out->drm_fourcc = resolve_format;

            if (layouts.size() == 2) {
               out->strides[2] = out->strides[1];
               out->offsets[2] = out->offsets[1] + (chroma_step/2);
            }
         }
      }
   }

   error = 0;
out:
   (void)free_buffer(gralloc, importedHandle);
   return error;
}

static int
mapper_get_buffer_color_info(struct u_gralloc *gralloc,
                              struct u_gralloc_buffer_handle *hnd,
                              struct u_gralloc_buffer_color_info *out)
{
   gralloc5 *gr = (gralloc5 *)gralloc;

   if (gr->mapper == nullptr) {
      mesa_loge("mapper is null");
      return -EINVAL;
   }

   if (!hnd->handle) {
      mesa_loge("buffer handle is null");
      return -EINVAL;
   }

   int droid_format = 0;

   if (mapper_resolve_format(gralloc, hnd, &droid_format)) {
      mesa_loge("mapper_resolve_format failed");
      return -EINVAL;
   }

   if (is_hal_format_yuv(droid_format)) {
      out->yuv_color_space = __DRI_YUV_COLOR_SPACE_ITU_REC601;
      out->sample_range = __DRI_YUV_NARROW_RANGE;
      out->horizontal_siting = __DRI_YUV_CHROMA_SITING_0;
      out->vertical_siting = __DRI_YUV_CHROMA_SITING_0;

      return 0;
   }

   auto importedHandle = import_buffer(gralloc, hnd->handle);
   if (nullptr == importedHandle) {
      mesa_loge("import_buffer failed");
      return -EINVAL;
   }

   /* optional attributes */
   std::optional<ChromaSiting> chroma_siting;
   {
      auto value = getStandardMetadata<StandardMetadataType::CHROMA_SITING>(gr->mapper,
                                                                            importedHandle);
      if (value.has_value()) {
         ExtendableType chroma_siting_ext = *value;

         chroma_siting =
            android::gralloc4::getStandardChromaSitingValue(chroma_siting_ext);
      }
   }

   {
      auto value = getStandardMetadata<StandardMetadataType::DATASPACE>(gr->mapper,
                                                                        importedHandle);
      if (value.has_value()) {
         Dataspace dataspace = static_cast<Dataspace>(*value);

         Dataspace standard =
            (Dataspace)((int)dataspace & (uint32_t)Dataspace::STANDARD_MASK);
         switch (standard) {
         case Dataspace::STANDARD_BT709:
            out->yuv_color_space = __DRI_YUV_COLOR_SPACE_ITU_REC709;
            break;
         case Dataspace::STANDARD_BT601_625:
         case Dataspace::STANDARD_BT601_625_UNADJUSTED:
         case Dataspace::STANDARD_BT601_525:
         case Dataspace::STANDARD_BT601_525_UNADJUSTED:
            out->yuv_color_space = __DRI_YUV_COLOR_SPACE_ITU_REC601;
            break;
         case Dataspace::STANDARD_BT2020:
         case Dataspace::STANDARD_BT2020_CONSTANT_LUMINANCE:
            out->yuv_color_space = __DRI_YUV_COLOR_SPACE_ITU_REC2020;
            break;
         default:
            break;
         }

         Dataspace range =
            (Dataspace)((int)dataspace & (uint32_t)Dataspace::RANGE_MASK);
         switch (range) {
         case Dataspace::RANGE_FULL:
            out->sample_range = __DRI_YUV_FULL_RANGE;
            break;
         case Dataspace::RANGE_LIMITED:
            out->sample_range = __DRI_YUV_NARROW_RANGE;
            break;
         default:
            break;
         }
      }
   }

   if (chroma_siting) {
      switch (*chroma_siting) {
      case ChromaSiting::SITED_INTERSTITIAL:
         out->horizontal_siting = __DRI_YUV_CHROMA_SITING_0_5;
         out->vertical_siting = __DRI_YUV_CHROMA_SITING_0_5;
         break;
      case ChromaSiting::COSITED_HORIZONTAL:
         out->horizontal_siting = __DRI_YUV_CHROMA_SITING_0;
         out->vertical_siting = __DRI_YUV_CHROMA_SITING_0_5;
         break;
      default:
         break;
      }
   }

   (void)free_buffer(gralloc, importedHandle);
   return 0;
}

static int
mapper_get_front_rendering_usage(struct u_gralloc *gralloc,
                                  uint64_t *out_usage)
{
   assert(out_usage);
#if ANDROID_API_LEVEL >= 33
   *out_usage = static_cast<uint64_t>(BufferUsage::FRONT_BUFFER);

   return 0;
#else
   return -ENOTSUP;
#endif
}

static int
destroy(struct u_gralloc *gralloc)
{
   gralloc5 *gr = (struct gralloc5 *)gralloc;
   delete gr;

   return 0;
}

struct u_gralloc *
u_gralloc_imapper_api_create()
{
   void *so = loadIMapperLibrary();
   if (!so) {
       mesa_loge("loadIMapperLibrary failed");
       return NULL;
   }
   auto loadIMapper = (AIMapper_loadIMapperFn)dlsym(so, "AIMapper_loadIMapper");
   AIMapper *mapper = nullptr;
   AIMapper_Error error = loadIMapper(&mapper);
   if (error != AIMAPPER_ERROR_NONE) {
       mesa_loge("AIMapper_loadIMapper failed %d", error);
       return NULL;
   }

   auto gr = new gralloc5;
   gr->mapper = mapper;
   gr->base.ops.get_buffer_basic_info = mapper_get_buffer_basic_info;
   gr->base.ops.get_buffer_color_info = mapper_get_buffer_color_info;
   gr->base.ops.get_front_rendering_usage = mapper_get_front_rendering_usage;
   gr->base.ops.destroy = destroy;

   mesa_logi("Using IMapper5 API");

   return &gr->base;
}

} // extern "C"
