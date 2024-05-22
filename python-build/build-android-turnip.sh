#!/bin/bash

set -e

BIN_DIR=$(dirname "$0")
ROOT_DIR=$BIN_DIR/../../..

time python3 $BIN_DIR/generate_python_build.py
PYTHONPATH=$BIN_DIR python3 generate_android_build.py

source $ROOT_DIR/build/envsetup.sh
# Just some aarch64 build
lunch starnix_wear_arm64-trunk_staging-userdebug

m vulkan_freedreno
