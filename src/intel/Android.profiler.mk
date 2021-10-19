LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_CPP_EXTENSION := .cc
LOCAL_MODULE := libmesa_intel_profiler

LOCAL_STATIC_LIBRARIES := \
        libmesa_intel_ds \
        libmesa_intel_dev \
        libmesa_intel_perf \
        libmesa_util

LOCAL_MODULE_CLASS := STATIC_LIBRARIES

LOCAL_SHARED_LIBRARIES := liblog \
    libbase

LOCAL_C_INCLUDES := \
        $(MESA_TOP)/include/drm-uapi \
        $(MESA_TOP)/src/intel/perf \
        $(MESA_TOP)/src/intel/dev \
        $(MESA_TOP)/src/intel/ds \
        $(MESA_TOP)/src/intel/profiler

LOCAL_SRC_FILES := $(PROFILER_FILES)
LOCAL_CFLAGS += -DPPS_INTEL

include $(MESA_COMMON_MK)
include $(BUILD_STATIC_LIBRARY)

