# meson_to_hermetic_test: unit tests for meson_to_hermetic

NOTE: This README assumes your terminal is located in the root directory: `mesa3d/`

## Environment Setup
IGNORE STEPS 1-3 if your venv has already been set up previously and your terminal is `source` to the venv.
1. Run: `cd meson_to_hermetic`
2. Run `./setup-venv.sh`
3. Run `source venv/bin/activate`
4. Navigate to `mesa3d/` directory.

## Running Tests
See official [py-unittest docs](https://docs.python.org/3/library/unittest.html#command-line-interface) for command line usage.
Here are some example commands that can be ran:
```bash
# This will run all tests within meson_impl_unittest module
python -m unittest meson_to_hermetic_test/meson_impl_unittest.py
```
