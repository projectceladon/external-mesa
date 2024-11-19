# Copyright © 2023 Intel Corporation
# SPDX-License-Identifier: MIT

if with_intel_vk
  intel_float64_spv_h = custom_target(
    'float64_spv.h',
    input : [glsl2spirv, float64_glsl_file],
    output : 'float64_spv.h',
    command : [
      prog_python, '@INPUT@', '@OUTPUT@',
      prog_glslang,
      '--create-entry', 'main',
      '--vn', 'float64_spv_source',
      '--glsl-version', '450',
      '-Olib',
      glslang_depfile,
    ],
    depfile : 'float64_spv.h.d',
  )
endif

intel_shader_files = files(
  'libintel_shaders.h',
  'generate.cl',
  'generate_draws.cl',
  'generate_draws_iris.cl',
  'memcpy.cl',
  'query_copy.cl',
)

prepended_input_args = []
foreach input_arg : intel_shader_files
  prepended_input_args += ['--in', input_arg]
endforeach

intel_shaders_clc_wa_args = []
if with_intel_clc
  if chosen_llvm_version_major >= 17
    intel_shaders_clc_wa_args += ['--llvm17-wa']
  endif
endif

intel_shaders_gens = [ [ 80,   8],
                       [ 90,   9],
                       [110,  11],
                       [120,  12],
                       [125, 125],
                       [200,  20] ]
intel_shaders = []
foreach gen : intel_shaders_gens
  intel_shaders += 'intel_gfx@0@_shaders_code.h'.format(gen[1])
endforeach

idep_intel_shaders = declare_dependency(
  sources : intel_shaders,
  include_directories : include_directories('.'),
)
