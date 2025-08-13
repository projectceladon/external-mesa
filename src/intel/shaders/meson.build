# Copyright © 2023 Intel Corporation
# SPDX-License-Identifier: MIT

if with_intel_vk
  intel_float64_spv_h = files(
    'float64_spv.h',
  )
endif

intel_shader_files = files(
  'libintel_shaders.h',
  'generate.cl',
  'generate_draws.cl',
  'generate_draws_iris.cl',
  'query_copy.cl',
  'util.cl',
)

intel_shaders_gens = [ [ 80,   8],
                       [ 90,   9],
                       [110,  11],
                       [120,  12],
                       [125, 125],
                       [200,  20],
                       [300,  30] ]
intel_shaders = []
intel_shaders_headers = []
foreach gen : intel_shaders_gens
  intel_shaders += 'intel_gfx@0@_shaders_binding.cpp'.format(gen[0])
  intel_shaders_headers += 'intel_gfx@0@_shaders_binding.h'.format(gen[0])
endforeach

libintel_shaders = static_library(
  'intel_shaders',
  intel_shaders,
  dependencies : idep_nir,
)

idep_intel_shaders = declare_dependency(
  link_with : libintel_shaders,
  sources : intel_shaders_headers,
  include_directories : include_directories('.'),
)
