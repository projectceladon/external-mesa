#ifndef _CHECK_DGPU_H
#define _CHECK_DGPU_H
#include <stdbool.h>
#include "util/libdrm.h"
#ifdef __cplusplus
extern "C" {
#endif
bool intel_is_dgpu_render(void);
bool intel_lower_ctx_priority(void);
bool is_dgpu(int id);
int get_intel_node_num(void);
#ifdef __cplusplus
}
#endif
#endif
