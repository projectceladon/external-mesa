"""
Copyright © 2024 Google, Inc.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice (including the next
paragraph) shall be included in all copies or substantial portions of the
Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
"""

import unittest
from pathlib import Path

import meson_to_hermetic.meson_impl as impl

abs_toml_path = Path(__file__).parent.resolve() / 'test_toml_files'


class TestConfigParsing(unittest.TestCase):
    """
    Contains methods that directly parse project config files
    I.E. *.toml files
    """

    def test_load_dependencies(self):
        expected = {
            'test_dep': {
                'test_target': 1
            },
            'test_dep_two': {
                'test_target': 1
            },
        }
        path = str(abs_toml_path / 'load_dependencies.toml')
        impl.load_dependencies(path)
        self.assertEqual(impl.external_dep, expected)

    def test_empty_dependencies(self):
        expected = {}
        path = str(abs_toml_path / 'empty_dependencies.toml')
        impl.load_dependencies(path)
        self.assertEqual(impl.external_dep, expected)


class TestMesonAPI(unittest.TestCase):
    def test_dependency(self):
        path = str(abs_toml_path / 'load_dependencies.toml')
        # {
        #   'test_dep': {
        #     'test_target': 1
        #   },
        #   'test_dep_two': {
        #     'test_target': 1
        #   },
        # }
        impl.load_dependencies(path)

        dep = impl.dependency('test_dep')
        expected = impl.Dependency(
            'test_dep',
            targets=[
                impl.DependencyTarget('test_target', impl.DependencyTargetType.SHARED_LIBRARY)
            ],
            version='',
            found=True,
        )

        self.assertEqual(
            dep.name,
            expected.name
        )
        self.assertEqual(
            dep.found(),
            expected.found()
        )
        self.assertEqual(
            len(dep.targets),
            len(expected.targets),
        )
        for index, target in enumerate(dep.targets):
            expected_target = expected.targets[index]
            self.assertEqual(
                target.target_name,
                expected_target.target_name,
            )
            self.assertEqual(
                target.target_type,
                expected_target.target_type,
            )


if __name__ == '__main__':
    unittest.main()
