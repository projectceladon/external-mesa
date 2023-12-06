# Copyright 2023 Android Open Source Project
# SPDX-License-Identifier: MIT

host_dec_path = meson.current_build_dir()
output_host_path = meson.current_build_dir() + '/../'
inc_cereal_common = include_directories('.')
      
output = [
  # Headers
  'goldfish_vk_extension_structs.h',
  'goldfish_vk_marshaling.h',
  'goldfish_vk_deepcopy.h',
  'goldfish_vk_dispatch.h',
  'goldfish_vk_transform.h',
  'VkDecoder.h',
  'VkDecoderSnapshot.h',
  'goldfish_vk_reserved_marshaling.h',
  # Impl
  'goldfish_vk_extension_structs.cpp',
  'goldfish_vk_marshaling.cpp',
  'goldfish_vk_reserved_marshaling.cpp',
  'goldfish_vk_deepcopy.cpp',
  'goldfish_vk_dispatch.cpp',
  'goldfish_vk_transform.cpp',
  'VkDecoder.cpp',
  'VkDecoderSnapshot.cpp',
]

gfxstream_vk_autogen = custom_target(
    'gfxstream_vk_autogen',
    output : output,
    env: {'CEREAL_VARIANT' : 'host', 'GFXSTREAM_HOST_DECODER_DIR': host_dec_path, 'GFXSTREAM_OUTPUT_DIR' : output_host_path},
    input: [genvk, vk_api_xml, vk_gfxstream_xml],
    command: [prog_python, '@INPUT0@', '-registry', '@INPUT1@', '-registryGfxstream', '@INPUT2@',
              'cereal', '-o', output_host_path],
)

cereal_cpp_args = [
  '-DVK_GFXSTREAM_STRUCTURE_TYPE_EXT',
  '-DVK_GOOGLE_address_space',
]

if host_machine.system() == 'qnx'
  cereal_cpp_args += '-DVK_USE_PLATFORM_SCREEN_QNX'
endif

lib_vulkan_cereal = static_library(
  'cereal',
  gfxstream_vk_autogen,
  cpp_args: cereal_cpp_args + gfxstream_host_args,
  include_directories: [inc_cereal, inc_cereal_common, inc_stream_servers,
                        inc_vulkan_server, inc_utils, inc_include, inc_apigen_codec,
                        inc_gfxstream_include, inc_vulkan_headers, inc_root, inc_gl_host_common,
                        inc_renderdoc_external],
  dependencies: [aemu_base_dep, aemu_common_dep, aemu_snapshot_dep],
)

dep_cereal_common = declare_dependency(
  sources: [gfxstream_vk_autogen[0], gfxstream_vk_autogen[1], gfxstream_vk_autogen[2],
            gfxstream_vk_autogen[3], gfxstream_vk_autogen[4], gfxstream_vk_autogen[5],
            gfxstream_vk_autogen[6], gfxstream_vk_autogen[7]],
  include_directories: lib_vulkan_cereal.private_dir_include(),
  link_with: lib_vulkan_cereal,
)
