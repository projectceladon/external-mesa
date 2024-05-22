# python-build: automated build system generation

Goal: ease the integration of Mesa as a component inside larger projects like
Android (AOSP).

How: parse the meson build tree into a python build script, which can be used
together with configuration and options to generate other kinds of build scripts.

Status: useful inside AOSP but very rough, still work in progress really.
Android is the only supported target build system, but this work can hopefully 
also support Bazel.  Many meson features are unimplemented and some are probably
poorly implemented.  Python code needs a thorough cleanup.

## 1 - Generate python from meson

generate_python_build.py: reads meson.build files (following subdir() commands)
and uses meson2python to transform the meson into python.

meson2python.py: passes meson.build input and the meson grammar to python lark
(https://github.com/lark-parser/lark) to perform lexing and parsing; then
transforms the parse tree into valid python. The result is one large python script.

## 2 - Generate Android.bp from python

meson_android.py defines the meson API entry points and emits Android.bp build
constructs.  A config file is read to determine some build parameters such as
`cpu_family` (similar to meson's cross file).

## Limitations

Meson build options must be set by modifying the defaults in meson_options.txt.
