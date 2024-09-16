"""
Copyright 2024 Google LLC
SPDX-License-Identifier: MIT
"""

class StaticLibrary:
    """
    Represents the cc_library_static / cc_library module in build files
    """
    def __init__(self):
        """
        Attributes here favor a Soong attribute naming scheme
        """
        self.name: str = ''
        self.srcs: list[str] = []
        # In Bazel, these headers are one merged list.
        self.generated_headers: list[str] = []
        self.generated_sources: list[str] = []
        # In Bazel, these c options are copts
        self.cstd: str = ''
        self.cpp_std: str = ''
        self.conlyflags: list[str] = []
        self.cppflags: list[str] = []

        self.deps: list[str] = []
        self.target_compatible_with: list[str] = []
        self.visibility: list[str] = []

        self.local_include_dirs: list[str] = []
        self.static_libs: list[str] = []
        self.whole_static_libs: list[str] = []
        self.shared_libs: list[str] = []
        self.header_libs: list[str] = []

class CustomTarget:
    """
    Denoted as genrule in both build files
    """
    def __init__(self):
        self.name: str = ''
        self.srcs: list[str] = []
        self.out: list[str] = [] # 'outs' in bazel
        self.tools: list[str] = []
        self.export_include_dirs: list[str] = []
        self.cmd: str = ''

class PythonCustomTarget(CustomTarget):
    def __init__(self):
        super().__init__()
        self.imports: list[str] = []
        self.version = {}
