"""
Copyright 2024 Google LLC
SPDX-License-Identifier: MIT
"""

from enum import Enum


class LibraryType(Enum):
    Library = 0  # Default undefined library value
    LibraryShared = 1
    LibraryStatic = 2


class IncludeDirectories:
    def __init__(self):
        self.name: str = ''
        self.dirs: list[str] = []
        self.visibility: list[str] = []


class StaticLibrary(IncludeDirectories):
    """
    Represents the cc_library_static / cc_library module in build files
    """

    def __init__(self):
        """
        Attributes here favor a Soong attribute naming scheme
        """
        super().__init__()
        self.srcs: list[str] = []
        self.library_type: LibraryType = (
            LibraryType.Library
        )  # Can be cc_library_static or cc_library_shared
        # In Bazel, these headers are one merged list.
        self.generated_headers: list[str] = []
        self.generated_sources: list[str] = []
        # In Bazel, these c options are copts
        self.copts: list[str] = []
        self.cstd: str = ''
        self.cpp_std: str = ''
        self.conlyflags: list[str] = []
        self.cppflags: list[str] = []

        self.deps: list[str] = []
        self.target_compatible_with: list[str] = []

        self.local_include_dirs: list[str] = []
        self.static_libs: list[str] = []
        self.whole_static_libs: list[str] = []
        self.shared_libs: list[str] = []
        self.header_libs: list[str] = []

    @property
    def hdrs(self):
        return self.generated_headers + self.generated_sources

    def __str__(self):
        return f"@StaticLibrary: name: {self.name}, LibraryType: {self.library_type}"


class CustomTarget:
    """
    Denoted as genrule in both build files
    """

    def __init__(self):
        self.name: str = ''
        self.srcs: list[str] = []
        self.out: list[str] = []  # 'outs' in bazel
        self.tools: list[str] = []
        self.export_include_dirs: list[str] = []
        self.cmd: str = ''

    def __str__(self):
        return (
            f'name: {self.name}\n'
            f'srcs: {self.srcs}\n'
            f'out: {self.out}\n'
            f'tools: {self.tools}\n'
            f'export_include_dirs: {self.export_include_dirs}\n'
            f'cmd: {self.cmd}'
        )


class PythonCustomTarget(CustomTarget):
    def __init__(self):
        super().__init__()
        self.main: str = ''
        self.libs: list[str] = []
        self.imports: list[str] = []
        self.version = {}

    def __str__(self):
        return (
            f'name: {self.name}\n'
            f'main: {self.main}\n'
            f'srcs: {self.srcs}\n'
            f'libs: {self.libs}'
        )


class ProjectConfig:
    """
    Class that represents a singular project_config within aosp.toml/fuchsia.toml
    in python objects. There are multiple project_config within each .toml
    file
    """

    def __init__(self):
        self._build: str = ''  # Global across all configs
        self._name: str = ''  # name of this config
        # project_config.host_machine
        self._cpu_family: str = ''
        self._cpu: str = ''
        self._host_machine: str = ''
        self._build_machine: str = ''
        # project_config.meson_options
        self._meson_options: dict[str, int | str] = {}
        # project_config.header_not_supported
        self._headers_not_supported: list[str] = []
        # project_config.symbol_not_supported
        self._symbols_not_supported: list[str] = []
        # project_config.function_not_supported
        self._functions_not_supported: list[str] = []
        # project_config.link_not_supported
        self._links_not_supported: list[str] = []
        # project_config.ext_dependencies
        self._ext_dependencies: dict[str, list[dict[str, str | int]]] = {}
        # Example structure for ext_dependencies
        # {
        #   zlib = [
        #       {
        #           'target_name': '@zlib//:zlib',
        #           'target_type': 2
        #       },
        #       ...
        #   ]

    @staticmethod
    def create_project_config(build, **kwargs):
        project_config = ProjectConfig()
        project_config._build = kwargs.get(build)  # Global across all configs
        project_config._name = kwargs.get('name')  # name of this config
        project_config._cpu_family = kwargs.get('host_machine').get('cpu_family')
        project_config._cpu = kwargs.get('host_machine').get('cpu')
        project_config._host_machine = kwargs.get('host_machine').get('host_machine')
        project_config._build_machine = kwargs.get('host_machine').get('build_machine')
        project_config._meson_options = kwargs.get('meson_options')
        project_config._headers_not_supported = kwargs.get('header_not_supported').get(
            'headers'
        )
        project_config._symbols_not_supported = kwargs.get('symbol_not_supported').get(
            'symbols'
        )
        project_config._functions_not_supported = kwargs.get(
            'function_not_supported'
        ).get('functions')
        project_config._links_not_supported = kwargs.get('link_not_supported').get(
            'links'
        )
        project_config._ext_dependencies = kwargs.get('ext_dependencies')
        return project_config

    @property
    def build(self):
        return self._build

    @property
    def name(self):
        return self._name

    @property
    def cpu(self):
        return self._cpu

    @property
    def cpu_family(self):
        return self._cpu_family

    @property
    def host_machine(self):
        return self._host_machine

    @property
    def build_machine(self):
        return self._build_machine

    @property
    def meson_options(self):
        return self._meson_options

    @property
    def headers_not_supported(self):
        return self._headers_not_supported

    @property
    def symbols_not_supported(self):
        return self._symbols_not_supported

    @property
    def functions_not_supported(self):
        return self._functions_not_supported

    @property
    def links_not_supported(self):
        return self._links_not_supported

    @property
    def ext_dependencies(self):
        return self._ext_dependencies


class MesonProjectState:
    """
    Represents a singular build config
    """

    def __init__(self):
        self.static_libraries: list[StaticLibrary] = []
        self.custom_targets: list[CustomTarget] = []
        self.custom_py_targets: list[PythonCustomTarget] = []
        self.include_dirs: list[IncludeDirectories] = []

    def __str__(self):
        return (
            f'static libraries len: {len(self.static_libraries)}\n'
            f'custom targets len: {len(self.custom_targets)}\n'
            f'custom py targets len: {len(self.custom_py_targets)}\n'
            f'include dirs len: {len(self.include_dirs)}\n'
        )
