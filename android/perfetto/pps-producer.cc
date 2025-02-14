#include <cstdio>
#include <dlfcn.h>

typedef void (*pps_main_fn_t)(int, const char **);

#define PPS_LIB "/vendor/lib64/libgpudataproducer.so"

int main(int argc, const char **argv) {
  char *error;

  void *handle = dlopen(PPS_LIB, RTLD_GLOBAL);
  if ((error = dlerror()) != nullptr || handle == nullptr) {
    fprintf(stdout, "Error loading lib: %s\n", error);
    return -1;
  }

  pps_main_fn_t ppsFn = (pps_main_fn_t)dlsym(handle, "pps_main");
  if (((error = dlerror()) != nullptr) || (ppsFn == nullptr)) {
    fprintf(stdout, "Error looking for pps_main symbol: %s\n", error);
    dlclose(handle);
    return -1;
  }

  fprintf(stdout, "start call pps_main\n");
  (*ppsFn)(argc, argv);
  fprintf(stdout, "end call pps_main\n");

  dlclose(handle);
  return 0;
}
