#!/bin/bash

set -e

if [ ! -f meson_options.txt ]; then
    echo "Run this script from the repo root"
    exit 1
fi

BIN_DIR=$(dirname "$0")
ROOT_DIR=$BIN_DIR/../../..
PYTHON_BUILD=generate_fuchsia_build.py

function unwrap_zlib {
    rm -rf fuchsia-build/third_party/download fuchsia-build/third_party/zlib-*
    SOURCE_URL=`grep -Eo 'http://[^ ]+zlib[0-9\.-]+\.tar\.gz' subprojects/zlib.wrap`
    wget -P fuchsia-build/third_party/download $SOURCE_URL
    tar -C fuchsia-build/third_party -xf fuchsia-build/third_party/download/zlib-*

    PATCH_URL=`grep -Eo 'https://[^ ]+get_patch' subprojects/zlib.wrap`
    wget -P fuchsia-build/third_party/download $PATCH_URL
    # get_patch is a zip file
    unzip -d fuchsia-build/third_party fuchsia-build/third_party/download/get_patch

    pushd fuchsia-build/third_party/zlib-*
    # Create an empty workspace
    touch WORKSPACE.bazel
    ln -s ../../../python-build python-build
    python3 python-build/generate_python_build.py --target fuchsia
    PYTHONPATH=$PWD/python-build python3 generate_fuchsia_build.py
    popd
}

REGEN=0
if [ "$1" == "-regen" ]; then
    REGEN=1
fi
if [ ! -f $PYTHON_BUILD ]; then
    REGEN=1
fi
if [ ! -d fuchsia-build/third_party/zlib-* ]; then
    REGEN=1
fi

if [ "$REGEN" == "1" ]; then
    unwrap_zlib
    time python3 $BIN_DIR/generate_python_build.py --target fuchsia
else
    echo "Python build found; use -regen to regenerate it"
fi

# Always generate Android.bp because it's fast
PYTHONPATH=$BIN_DIR python3 generate_fuchsia_build.py \
    -Dplatforms=none \
    -Dgallium-drivers= \
    -Dvulkan-drivers=freedreno \
    -Dfreedreno-kmds=magma \
    -Dplatform-sdk-version=33 \
    -Dshader-cache=disabled

$BIN_DIR/../tools/bazel --bazelrc=fuchsia-build/third_party/fuchsia-infra-bazel-rules/config/common_config.bazelrc \
    build --config=fuchsia_arm64 --platforms=@fuchsia_sdk//fuchsia/constraints/platforms:fuchsia_arm64 \
    //:vulkan_freedreno
