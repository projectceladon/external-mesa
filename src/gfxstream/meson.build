# Copyright 2023 Android Open Source Project
# SPDX-License-Identifier: MIT

build = 'both'

with_guest = build.contains('guest') or build.contains('both')
with_host = build.contains('host') or build.contains('both')

#========================#
# Logging + error report #
#========================#
log_level = 'error'

#===============#
# Decoders      #
#===============#
decoders = 'vulkan'
with_guest = true
with_host = true

genvk = files('codegen/vulkan/vulkan-docs-next/scripts/genvk.py')
vk_gfxstream_xml = files('codegen/vulkan/vulkan-docs-next/xml/vk_gfxstream.xml')

use_auto = decoders.contains('auto') and with_host
use_gles = decoders.contains('gles') and with_host
use_vulkan = decoders.contains('vulkan') and with_host
use_magma = decoders.contains('magma') and with_host
use_composer = decoders.contains('composer') and with_host

if with_guest
  subdir('guest')
endif
if with_host
  subdir('common')
  #subdir('host')
endif
