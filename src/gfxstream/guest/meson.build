# Copyright 2022 Android Open Source Project
# SPDX-License-Identifier: MIT

#===============#
# Configuration #
#===============#
gfxstream_guest_args = []

# Our internal guest build
gfxstream_guest_args += '-DLINUX_GUEST_BUILD'
# This should just be called NO_TRACE eventually
gfxstream_guest_args += '-DFUCHSIA_NO_TRACE'
# Include the gfxstream private VkStructureType definitions
gfxstream_guest_args += '-DVK_GFXSTREAM_STRUCTURE_TYPE_EXT'

#===============#
# Dependencies  #
#===============#

dl_dep = cc.find_library('dl', required: false)
drm_dep = dependency('libdrm')
thread_dep = dependency('threads')

#===============#
# Includes      #
#===============#

inc_vulkan_headers = inc_include
inc_opengl_headers = inc_include
inc_android_emu = include_directories('android-emu')
inc_opengl_codec = include_directories('OpenglCodecCommon')
inc_opengl_system = include_directories('OpenglSystemCommon')
inc_system = include_directories('include')
inc_vulkan_enc = include_directories('vulkan_enc')

#================#
# Subdirectories #
#================#

subdir('fuchsia')
subdir('iostream')
subdir('platform')
subdir('android-emu/aemu/base')
subdir('GoldfishAddressSpace')
subdir('qemupipe')
subdir('OpenglCodecCommon')
subdir('vulkan_enc')
subdir('OpenglSystemCommon')
subdir('vulkan')
