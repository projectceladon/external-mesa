#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <stdbool.h>
#include <cutils/properties.h>
#include "util/macros.h"
#include "util/log.h"
#include "drm-uapi/i915_drm.h"
#include "intel_check.h"

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
#ifndef PROPERTY_VALUE_MAX
#define PROPERTY_VALUE_MAX 92
#endif

static void
get_pid_name(pid_t pid, char *task_name)
{
   char process_path[BUF_SIZE];
   char name_buf[BUF_SIZE];

   sprintf(process_path, "/proc/%d/status", pid);
   FILE* fp = fopen(process_path, "r");
   if(NULL != fp){
      if( fgets(name_buf, BUF_SIZE-1, fp)== NULL ){
          fclose(fp);
      }
      fclose(fp);
      sscanf(name_buf, "%*s %s", task_name);
   }
}

static bool
use_dgpu_render(char *target)
{
   char dGPU_prop[BUF_SIZE];
   char vendor_buf[PROPERTY_VALUE_MAX];
   sprintf(dGPU_prop, "persist.vendor.intel.dGPU.%s",target);
   if (property_get(dGPU_prop, vendor_buf, NULL) > 0) {
      if (vendor_buf[0] == '1') {
         return true;
      }
   }
   return false;
}

static bool
is_target_process(char *target)
{
   char *str_char[] = { "k.lite:refinery", "k.lite:transfer", NULL };
   char **ptr = str_char;

   for (ptr=str_char; *ptr!=NULL; ptr++)
   {
      if(!strcmp(target, *ptr)) {
         char vendor_buf[PROPERTY_VALUE_MAX];
         if (property_get("persist.vendor.intel.dGPU.ABenchMark.lite",
             vendor_buf, NULL) > 0) {
            if (vendor_buf[0] == '1') {
               return true;
            }
         }
      }
   }
   return false;
}

bool intel_is_dgpu_render(void) {
   pid_t process_id = getpid();
   char process_name[BUF_SIZE];

   get_pid_name(process_id, process_name);
   return (use_dgpu_render(process_name) || is_target_process(process_name));
}

bool intel_lower_ctx_priority(void)
{
   pid_t process_id = getpid();
   char process_name[BUF_SIZE];
   get_pid_name(process_id, process_name);

   char lower_pri[BUF_SIZE];
   char vendor_buf[PROPERTY_VALUE_MAX];
   sprintf(lower_pri, "persist.vendor.intel.lowPir.%s",process_name);
   if (property_get(lower_pri, vendor_buf, NULL) > 0) {
      if (vendor_buf[0] == '1') {
         return true;
      }
   }
   return false;
}

bool has_local_mem(int fd)
{
   struct drm_i915_query_item item = {
      .query_id = DRM_I915_QUERY_MEMORY_REGIONS,
   };

   struct drm_i915_query query = {
      .num_items = 1, .items_ptr = (uintptr_t)&item,
   };
   if (drmIoctl(fd, DRM_IOCTL_I915_QUERY, &query)) {
      mesa_loge("ioctl fail\n");
      return false;
   }
   struct drm_i915_query_memory_regions *meminfo = calloc(1, item.length);
   if (!meminfo) {
      mesa_loge("memory fail\n");
      return false;
   }
   item.data_ptr = (uintptr_t)meminfo;
   if (drmIoctl(fd, DRM_IOCTL_I915_QUERY, &query) || item.length <= 0) {
      free(meminfo);
      mesa_loge("item.length <= 0\n");
      return false;
   }

   uint64_t lmem_regions = 0;
   for (uint32_t i = 0; i < meminfo->num_regions; i++) {
      const struct drm_i915_memory_region_info *mem = &meminfo->regions[i];
      if (mem->region.memory_class == I915_MEMORY_CLASS_DEVICE)
         lmem_regions += 1;
   }

   free(meminfo);

   return lmem_regions > 0;
}

bool is_dgpu(int fd)
{
   return has_local_mem(fd);
}

int get_intel_node_num(void)
{
   drmDevicePtr devices[8];
   int num_devs;
   num_devs = drmGetDevices2(0, devices, ARRAY_SIZE(devices));

   int intel_node_num = 0;
   for (int i = 0; i < num_devs; i++) {
      if (!(devices[i]->available_nodes & (1 << DRM_NODE_RENDER)) ||
         devices[i]->bustype != DRM_BUS_PCI ||
         devices[i]->deviceinfo.pci->vendor_id != 0x8086) {
         continue;
      }
      else {
        ++intel_node_num;
      }
   }
   return intel_node_num;
}
