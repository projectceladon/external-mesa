#!/bin/bash

set -e

if [ ! -f meson_options.txt ]; then
    echo "Run this script from the repo root"
    exit 1
fi

BIN_DIR=$(dirname "$0")
ROOT_DIR=$BIN_DIR/../../..

PYTHON_BUILD=generate_android_build.py

REGEN=0
if [ "$1" == "-regen" ]; then
    REGEN=1
fi
if [ ! -f $PYTHON_BUILD ]; then
    REGEN=1
fi

if [ "$REGEN" == "1" ]; then
    time python3 $BIN_DIR/generate_python_build.py
else
    echo "Python build found; use -regen to regenerate it"
fi

# Always generate Android.bp because it's fast
PYTHONPATH=$BIN_DIR python3 generate_android_build.py \
    -Dplatforms=android \
    -Dgallium-drivers= \
    -Dvulkan-drivers=freedreno \
    -Dfreedreno-kmds=kgsl \
    -Dplatform-sdk-version=33

source $ROOT_DIR/build/envsetup.sh
lunch aosp_trout_arm64-trunk_staging-userdebug

m vulkan_freedreno
