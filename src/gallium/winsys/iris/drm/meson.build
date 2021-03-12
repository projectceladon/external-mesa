# Copyright © 2017 Intel Corporation
# SPDX-License-Identifier: MIT

iris_drm_winsys_c_args = []
if with_gallium_kmsro
  iris_drm_winsys_c_args += '-DGALLIUM_KMSRO'
endif

libiriswinsys = static_library(
  'iriswinsys',
  files('iris_drm_winsys.c'),
  include_directories : [
    inc_src, inc_include,
    inc_gallium, inc_gallium_aux, inc_gallium_drivers, inc_gallium_winsys, inc_intel
  ],
  c_args : [iris_drm_winsys_c_args],
  gnu_symbol_visibility : 'hidden',
  dependencies: idep_mesautil,
)
