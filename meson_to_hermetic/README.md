# meson-to-hermetic: automated build system generation

Goal: ease the integration of Mesa as a component inside larger projects like
Android (AOSP).

How: parse the meson build tree into a python build script, which can be used
together with configuration and options to generate other kinds of build scripts.

Status: useful, but rough.  Supports Android (Soong) and Fuchsia (Bazel).

## Python Dependencies
- Python 3.11+
  - See `requirements.txt`
  - [![Ruff](https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/astral-sh/ruff/main/assets/badge/v2.json)](https://github.com/astral-sh/ruff)

## Environment Setup

1. Open a terminal within `mesa3d/meson_to_hermetic`
2. Run the `setup-venv.sh` file to automatically create a python3 venv and install dependencies.

## Linting the code
1. Before pushing code for review; run `lint.sh` to automatically lint all of the python scripts.
    - IMPORTANT: Run the lint.sh from the `meson_to_hermetic` directory.

## 1 - Generate python from meson

generate_python_build.py: reads meson.build files (following subdir() commands)
and uses meson2python to transform the meson into python.

meson2python.py: passes meson.build input and the meson grammar to
[python lark](https://github.com/lark-parser/lark) to perform lexing and parsing; then
transforms the parse tree into valid python. The result is one large python script.

## 2 - Generate Android.bp from python

meson_android.py defines the meson API entry points and emits Android.bp build
constructs.  A config file is read to determine some build parameters such as
`cpu_family` (similar to meson's cross file).

## Limitations

Meson build options must be set by modifying the defaults in meson_options.txt.
