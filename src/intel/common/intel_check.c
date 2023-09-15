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

bool intel_is_dgpu_render() {
   pid_t process_id = getpid();
   char process_name[BUF_SIZE];

   get_pid_name(process_id, process_name);
   return (use_dgpu_render(process_name) || is_target_process(process_name));
}
