"""
Copyright 2024 Google LLC
SPDX-License-Identifier: MIT
"""

import os
import meson_impl as impl
import tomllib
import re

from jinja2 import Environment, FileSystemLoader
from pathlib import Path

from meson_build_state import *

jinja_env = Environment(
    loader=FileSystemLoader(Path(__file__).parent.resolve() / 'templates/')
)

# A map that holds the build-system to build file
# Keep the keys lower-case for non-case sensitivity
OUTPUT_FILES = {'soong': r'Android_res.bp', 'bazel': r'BUILD.bazel'}


def generate_build_file(translator, build_type: str):
    defaults_gen = jinja_env.get_template('defaults/all_defaults.txt')
    defaults = defaults_gen.render()
    # Write our manually defined defaults
    with open(OUTPUT_FILES[build_type], 'w') as file:
        if build_type == 'soong':
            file.write(defaults)
        path = build_type + '/'
        # Render all static libraries
        static_libs_template = jinja_env.get_template(path + 'static_library.txt')
        for static_lib in translator.meson_state.static_libraries:
            if static_lib.library_type is LibraryType.LibraryShared:
                static_libs_template = jinja_env.get_template(
                    path + 'shared_library.txt'
                )
            cc_lib = static_libs_template.render(
                name=static_lib.name,
                host_supported='false',  # TODO(bpnguyen): Fix hardcoded host_supported
                srcs=static_lib.srcs,
                hdrs=static_lib.generated_headers,
                generated_headers=static_lib.generated_headers,
                generated_sources=static_lib.generated_sources,
                copts=static_lib.copts,
                c_std_val=static_lib.cstd,
                cpp_std_val=static_lib.cpp_std,
                cflags=static_lib.conlyflags,
                cppflags=static_lib.cppflags,
                include_directories=static_lib.local_include_dirs,
                static_libs=static_lib.static_libs,
                whole_static_libs=static_lib.whole_static_libs,
                shared_libs=static_lib.shared_libs,
                header_libs=static_lib.header_libs,
                target_compatible_with=static_lib.target_compatible_with,
                deps=static_lib.deps,
            )
            # Set the template back to static by default
            if static_lib.library_type is LibraryType.LibraryShared:
                static_libs_template = jinja_env.get_template(
                    path + 'static_library.txt'
                )
            file.write(cc_lib)

        # Render genrules / custom targets
        custom_target_template = jinja_env.get_template(path + 'genrule.txt')
        for custom_target in translator.meson_state.custom_targets:
            genrule = custom_target_template.render(
                name=custom_target.name,
                srcs=custom_target.srcs,
                outs=custom_target.out,
                tools=custom_target.tools,
                export=len(custom_target.export_include_dirs) > 0,
                export_include_dirs=custom_target.export_include_dirs,
                cmd=custom_target.cmd,
            )
            file.write(genrule)

        # python binary hosts
        py_binary_host_template = jinja_env.get_template(path + 'py_binary.txt')
        for py_binary in translator.meson_state.custom_py_targets:
            py_binary_render = py_binary_host_template.render(
                name=py_binary.name,
                main=py_binary.main,
                srcs=py_binary.srcs,
                imports=py_binary.imports,
            )
            file.write(py_binary_render)

        include_dir_template = jinja_env.get_template(path + 'include_directories.txt')
        for include_dir in translator.meson_state.include_dirs:
            include_dir_render = include_dir_template.render(
                name=include_dir.name,
                hdrs=include_dir.dirs,
            )
            file.write(include_dir_render)


class SoongGenerator(impl.Compiler):
    def has_header_symbol(
        self,
        header: str,
        symbol: str,
        args=[],
        dependencies=[],
        include_directories=[],
        no_builtin_args=False,
        prefix=[],
        required=False,
    ):
        # Exclude what is currently not working.
        result = self.is_symbol_supported(header, symbol)
        print("has_header_symbol '%s', '%s': %s" % (header, symbol, str(result)))
        return result

    def check_header(self, header, prefix=''):
        result = self.is_header_supported(header)
        print("check_header '%s': %s" % (header, str(result)))
        return result

    def has_function(self, function, args=[], prefix='', dependencies=''):
        # Exclude what is currently not working.
        result = self.is_function_supported(function)
        print("has_function '%s': %s" % (function, str(result)))
        return result

    def links(self, snippet, name, args=[], dependencies=[]):
        # Exclude what is currently not working.
        result = self.is_link_supported(name)
        print("links '%s': %s" % (name, str(result)))
        return result

    def generate(self, translator):
        """
        Generates a Soong valid build file
        :return: None
        """
        # Render all the defaults to the file first.
        generate_build_file(translator, 'soong')


class BazelGenerator(impl.Compiler):
    def is_symbol_supported(self, header: str, symbol: str):
        if header in meson_translator.config.headers_not_supported:
            return False
        if symbol in meson_translator.config.symbols_not_supported:
            return False
        return super().is_symbol_supported(header, symbol)

    def is_function_supported(self, function):
        if function in meson_translator.config.functions_not_supported:
            return False
        return super().is_function_supported(function)

    def is_link_supported(self, name):
        if name in meson_translator.config.links_not_supported:
            return False
        return super().is_link_supported(name)

    def has_header_symbol(
        self,
        header: str,
        symbol: str,
        args=None,
        dependencies=None,
        include_directories=None,
        no_builtin_args=False,
        prefix=None,
        required=False,
    ):
        if args is None:
            args = []
        if dependencies is None:
            dependencies = []
        if include_directories is None:
            include_directories = []
        if prefix is None:
            prefix = []
        # Exclude what is currently not working.
        result = self.is_symbol_supported(header, symbol)
        print("has_header_symbol '%s', '%s': %s" % (header, symbol, str(result)))
        return result

    def check_header(self, header, prefix=''):
        result = self.is_header_supported(header)
        print(f"check_header '{header}': {result}")
        return result

    def has_function(self, function, args=[], prefix='', dependencies='') -> bool:
        # Exclude what is currently not working.
        result = self.is_function_supported(function)
        print(f"has_function '{function}': {result}")
        return result

    def links(self, snippet, name, args=[], dependencies=[]):
        # Exclude what is currently not working.
        result = self.is_link_supported(name)
        print(f"links '{name}': {result}")
        return result

    def generate(self, translator):
        generate_build_file(translator, 'bazel')


class BazelPkgConfigModule(impl.PkgConfigModule):
    def generate(
        self,
        lib,
        name='',
        description='',
        extra_cflags=None,
        filebase='',
        version='',
        libraries=None,
        libraries_private=None,
    ):
        if extra_cflags is None:
            extra_cflags = []
        impl.fprint('# package library')
        impl.fprint('cc_library(')
        impl.fprint('  name = "%s",' % name)
        assert type(lib) is impl.StaticLibrary
        impl.fprint('  deps = [ "%s" ],' % lib.target_name)
        # This line tells Bazel to use -isystem for targets that depend on this one,
        # which is needed for clients that include package headers with angle brackets.
        impl.fprint('  includes = [ "." ],')
        impl.fprint('  visibility = [ "//visibility:public" ],')
        impl.fprint(')')


class MesonTranslator:
    """
    Abstract class that defines all common attributes
    between different build systems (Soong, Bazel, etc...)
    """

    def __init__(self):
        self._generator = None
        self._config_file = None
        self._build = ''
        # configs and meson_project_states are ordered with each other.
        self._configs: list[ProjectConfig] = []
        self._meson_project_states: list[MesonProjectState] = []
        # TODO(357080225): Fix the use hardcoded state 0
        self._state = 0  # index of self._configs

    def init_data(self, config_file: str):
        self._config_file: str = config_file
        print('CONFIG:', self._config_file)
        self._init_metadata()
        _generator = (
            SoongGenerator(self.config.cpu_family)
            if self._build.lower() == 'soong'
            else BazelGenerator(self.config.cpu_family)
        )
        self._generator: impl.Compiler = _generator
        return self

    @property
    def config_file(self) -> Path:
        return self._config_file

    @property
    def host_machine(self) -> str:
        return self._configs[self._state].host_machine

    @property
    def build_machine(self) -> str:
        return self._configs[self._state].build_machine

    @property
    def generator(self) -> impl.Compiler:
        return self._generator

    @property
    def build(self) -> str:
        return self._build

    @property
    def config(self) -> ProjectConfig:
        return self._configs[self._state]

    @property
    def meson_state(self):
        return self._meson_project_states[self._state]

    def is_soong(self):
        return self._build.lower() == 'soong'

    def is_bazel(self):
        return self._build.lower() == 'bazel'

    def get_output_filename(self) -> str:
        return OUTPUT_FILES[self._build.lower()]

    def _init_metadata(self):
        """
        To be called after self._config_file has alredy been assigned.
        Parses the given config files for common build attributes
        Fills the list of all project configs
        :return: None
        """
        with open(self._config_file, 'rb') as f:
            data = tomllib.load(f)
            self._build = data.get('build')
            base_config = data.get('base_project_config')

            configs = data.get('project_config')
            for config in configs:
                proj_config = ProjectConfig.create_project_config(self._build, **config)
                self._configs.append(
                    proj_config
                )
                self._meson_project_states.append(MesonProjectState())

            new_configs = []
            # Handle Inheritance
            for config in self._configs:
                # Parent config, that contains shared attributes
                base_proj_config = ProjectConfig.create_project_config(self._build, **base_config)
                if not config.inherits_from:
                    new_configs.append(config)
                    continue
                if config.inherits_from == 'base_project_config':
                    new_configs.append(
                        base_proj_config.extend(config).deepcopy()
                    )
                else:
                    for proj_config in self._configs:
                        if config.inherits_from == proj_config.name:
                            new_configs.append(
                                proj_config.extend(config).deepcopy()
                            )
            self._configs = new_configs


# Declares an empty attribute data class
# metadata is allocated during Generators-runtime (I.E. generate_<host>_build.py)
meson_translator = MesonTranslator()

_gIncludeDirectories = {}


def load_meson_data(config_file: str):
    meson_translator.init_data(config_file)


def open_output_file():
    impl.open_output_file(meson_translator.get_output_filename())


def close_output_file():
    impl.close_output_file()


def add_subdirs_to_set(dir_, dir_set):
    subdirs = os.listdir(dir_)
    for subdir in subdirs:
        subdir = os.path.join(dir_, subdir)
        if os.path.isdir(subdir):
            dir_set.add(subdir)


def include_directories(*paths, is_system=False):
    if meson_translator.host_machine == 'android':
        return impl.IncludeDirectories('', impl.get_include_dirs(paths))
    # elif host_machine == 'fuchsia'
    dirs = impl.get_include_dirs(paths)
    name = dirs[0].replace('/', '_')
    if is_system:
        name += '_sys'

    global _gIncludeDirectories
    if name not in _gIncludeDirectories:
        # Mesa likes to include files at a level down from the include path,
        # so ensure Bazel allows this by including all of the possibilities.
        # Can't repeat entries so use a set.
        dir_set = set()
        for dir_ in dirs:
            dir_ = os.path.normpath(dir_)
            dir_set.add(dir_)
            add_subdirs_to_set(dir_, dir_set)

        # HACK: For special cases we go down two levels:
        # - Mesa vulkan runtime does #include "vulkan/wsi/..."
        paths_needing_two_levels = ['src/vulkan']
        for dir_ in list(dir_set):
            if dir_ in paths_needing_two_levels:
                add_subdirs_to_set(dir_, dir_set)

        include_dir = IncludeDirectories()
        include_dir.name = name

        for dir_ in dir_set:
            include_dir.dirs.append(os.path.normpath(os.path.join(dir_, '*.h')))
            include_dir.dirs.append(os.path.normpath(os.path.join(dir_, '*.c')))
        include_dir.visibility.append('//visibility:public')
        _gIncludeDirectories[name] = impl.IncludeDirectories(name, dirs)
        meson_translator.meson_state.include_dirs.append(include_dir)
    return _gIncludeDirectories[name]


def module_import(name: str):
    if name == 'python':
        return impl.PythonModule()
    if name == 'pkgconfig' and meson_translator.host_machine.lower() == 'fuchsia':
        return BazelPkgConfigModule()
    if name == 'pkgconfig' and meson_translator.host_machine.lower() == 'android':
        return impl.PkgConfigModule()
    if name == 'pkgconfig' and meson_translator.host_machine.lower() == 'linux':
        return impl.PkgConfigModule()
    exit(
        f'Unhandled module: "{name}" for host machine: "{meson_translator.host_machine}"'
    )


def load_dependencies():
    impl.load_dependencies(meson_translator.config_file)


def dependency(
    *names,
    required=True,
    version='',
    allow_fallback=False,
    method='',
    modules=[],
    optional_modules=[],
    static=True,
    fallback=[],
    include_type='',
    native=False,
):
    return impl.dependency(*names, required=required, version=version)


def static_library(
    target_name,
    *source_files,
    c_args=[],
    cpp_args=[],
    c_pch='',
    build_by_default=False,
    build_rpath='',
    d_debug=[],
    d_import_dirs=[],
    d_module_versions=[],
    d_unittest=False,
    dependencies=[],
    extra_files='',
    gnu_symbol_visibility='',
    gui_app=False,
    implicit_include_directories=False,
    include_directories=[],
    install=False,
    install_dir='',
    install_mode=[],
    install_rpath='',
    install_tag='',
    link_args=[],
    link_depends='',
    link_language='',
    link_whole=[],
    link_with=[],
    name_prefix='',
    name_suffix='',
    native=False,
    objects=[],
    override_options=[],
    pic=False,
    prelink=False,
    rust_abi='',
    rust_crate_type='',
    rust_dependency_map={},
    sources='',
    vala_args=[],
    win_subsystem='',
):
    print('static_library: ' + target_name)

    link_with = impl.get_linear_list(link_with)
    link_whole = impl.get_linear_list(link_whole)

    # Emitting link_with/link_whole into a static library isn't useful for building,
    # shared libraries must specify the whole chain of dependencies.
    # Leaving them here for traceability though maybe it's less confusing to remove them?
    _emit_builtin_target(
        target_name,
        *source_files,
        c_args=c_args,
        cpp_args=cpp_args,
        dependencies=dependencies,
        include_directories=include_directories,
        link_with=link_with,
        link_whole=link_whole,
        builtin_type_name='cc_library_static',
        static=meson_translator.is_bazel(),
        library_type=LibraryType.LibraryStatic,
    )

    return impl.StaticLibrary(target_name, link_with=link_with, link_whole=link_whole)


def _get_sources(input_sources, sources, generated_sources, generated_headers):
    def generate_sources_fuchsia(source_):
        if type(source_) is impl.CustomTarget:
            generated_sources.add(source_.target_name())
            for out in source_.outputs:
                sources.add(out)
        elif type(source_) is impl.CustomTargetItem:
            target = source_.target
            generated_sources.add(target.target_name())
            sources.add(target.outputs[source_.index])

    def generate_sources_android(source_):
        if type(source_) is impl.CustomTarget:
            if source_.generates_h():
                generated_headers.add(source_.target_name_h())
            if source_.generates_c():
                generated_sources.add(source_.target_name_c())
        elif type(source_) is impl.CustomTargetItem:
            source_ = source_.target
            if source_.generates_h():
                generated_headers.add(source_.target_name_h())
            if source_.generates_c():
                generated_sources.add(source_.target_name_c())

    for source in input_sources:
        if type(source) is list:
            _get_sources(source, sources, generated_sources, generated_headers)
        elif type(source) is impl.CustomTarget or type(source) is impl.CustomTargetItem:
            if meson_translator.is_bazel():
                generate_sources_fuchsia(source)
            else:  # is_soong
                generate_sources_android(source)
        elif type(source) is impl.File:
            sources.add(source.name)
        elif type(source) is str:
            sources.add(impl.get_relative_dir(source))
        else:
            exit(f'source type not handled: {type(source)}')


# TODO(bpnguyen): Implement some bazel/soong parser that would merge
# logic from this function to _emit_builtin_target_android
def _emit_builtin_target_fuchsia(
    target_name,
    *source,
    static=False,
    c_args=[],
    cpp_args=[],
    dependencies=[],
    include_directories=[],
    link_with=[],
    link_whole=[],
    library_type=LibraryType.Library,
):
    sl = StaticLibrary()
    target_name_so = target_name
    target_name = target_name if static else '_' + target_name
    sl.name = target_name
    sl.library_type = library_type

    srcs = set()
    generated_sources = set()
    generated_headers = set()
    generated_header_files = []
    for source_arg in source:
        assert type(source_arg) is list
        _get_sources(source_arg, srcs, generated_sources, generated_headers)

    deps = impl.get_set_of_deps(dependencies)
    include_directories = impl.get_include_directories(include_directories)
    static_libs = []
    whole_static_libs = []
    shared_libs = []
    for dep in deps:
        print('  dep: ' + dep.name)
        for src in impl.get_linear_list([dep.sources]):
            if type(src) is impl.CustomTargetItem:
                generated_headers.add(src.target.target_name_h())
                generated_header_files.extend(src.target.header_outputs())
            elif type(src) is impl.CustomTarget:
                generated_headers.add(src.target_name_h())
                generated_header_files.extend(src.header_outputs())
            else:
                exit('Unhandled source dependency: ' + str(type(src)))
        include_directories.extend(
            impl.get_include_directories(dep.include_directories)
        )
        for target in impl.get_static_libs([dep.link_with]):
            assert type(target) is impl.StaticLibrary
            static_libs.append(target.target_name)
        for target in impl.get_linear_list([dep.link_whole]):
            assert type(target) is impl.StaticLibrary
            whole_static_libs.append(target.target_name)
        for target in dep.targets:
            if target.target_type == impl.DependencyTargetType.SHARED_LIBRARY:
                shared_libs.append(target.target_name)
            elif target.target_type == impl.DependencyTargetType.STATIC_LIBRARY:
                static_libs.append(target.target_name)
            elif target.target_type == impl.DependencyTargetType.HEADER_LIBRARY:
                exit('Header library not supported')
        c_args.append(dep.compile_args)
        cpp_args.append(dep.compile_args)

    for target in impl.get_static_libs(link_with):
        if type(target) is impl.StaticLibrary:
            static_libs.append(target.target_name)
        else:
            exit('Unhandled link_with type: ' + str(type(target)))

    for target in impl.get_whole_static_libs(link_whole):
        if type(target) is impl.StaticLibrary:
            whole_static_libs.append(target.target_name())
        else:
            exit('Unhandled link_whole type: ' + str(type(target)))

    # Android turns all warnings into errors but thirdparty projects typically can't handle that
    cflags = ['-Wno-error'] + impl.get_linear_list(impl.get_project_cflags() + c_args)
    cppflags = ['-Wno-error'] + impl.get_linear_list(
        impl.get_project_cppflags() + cpp_args
    )

    has_c_files = False
    for src in srcs:
        if src.endswith('.c'):
            has_c_files = True
        sl.srcs.append(src)

    # For Bazel to find headers in the "current area", we have to include
    # not just the headers in the relative dir, but also relative subdirs
    # that aren't themselves areas (containing meson.build).
    # We only look one level deep.
    local_include_dirs = [impl.get_relative_dir()]
    local_entries = (
        [] if impl.get_relative_dir() == '' else os.listdir(impl.get_relative_dir())
    )
    for entry in local_entries:
        entry = os.path.join(impl.get_relative_dir(), entry)
        if os.path.isdir(entry):
            subdir_entries = os.listdir(entry)
            if 'meson.build' not in subdir_entries:
                local_include_dirs.append(entry)

    for hdr in set(generated_header_files):
        sl.generated_headers.append(hdr)
    for hdr in local_include_dirs:
        sl.local_include_dirs.append(os.path.normpath(os.path.join(hdr, '*.h')))
    # Needed for subdir sources
    sl.copts.append(f'-I {impl.get_relative_dir()}')
    sl.copts.append(f'-I $(GENDIR)/{impl.get_relative_dir()}')
    for inc in include_directories:
        for dir in inc.dirs:
            sl.copts.append(f'-I {dir}')
            sl.copts.append(f'-I $(GENDIR)/{dir}')

    if has_c_files:
        for arg in cflags:
            # Double escape double quotations
            arg = re.sub(r'"', '\\\\\\"', arg)
            sl.copts.append(arg)
    else:
        for arg in cppflags:
            # Double escape double quotations
            arg = re.sub(r'"', '\\\\\\"', arg)
            sl.copts.append(arg)

    # Ensure bazel deps are unique
    bazel_deps = set()
    for lib in static_libs:
        bazel_deps.add(lib)
    for lib in whole_static_libs:
        bazel_deps.add(lib)
    for inc in include_directories:
        bazel_deps.add(inc.name)
    for target in generated_headers:
        bazel_deps.add(target)
    for target in generated_sources:
        bazel_deps.add(target)

    for bdep in bazel_deps:
        sl.deps.append(bdep)

    sl.target_compatible_with.append('@platforms//os:fuchsia')
    sl.visibility.append('//visibility:public')

    meson_translator.meson_state.static_libraries.append(sl)

    if not static:
        shared_sl = StaticLibrary()
        shared_sl.library_type = LibraryType.LibraryShared
        shared_sl.name = target_name_so
        shared_sl.deps.append(target_name)
        meson_translator.meson_state.static_libraries.append(shared_sl)


# TODO(bpnguyen): Implement some bazel/soong parser that would merge
# logic from this function to _emit_builtin_target_fuchsia
def _emit_builtin_target_android(
    target_name,
    *source,
    c_args=[],
    cpp_args=[],
    dependencies=[],
    include_directories=[],
    link_with=[],
    link_whole=[],
    builtin_type_name='',
    static=False,
    library_type=LibraryType.Library,
):
    static_lib = StaticLibrary()
    static_lib.name = target_name
    static_lib.library_type = library_type

    srcs = set()
    generated_sources = set()
    generated_headers = set()
    for source_arg in source:
        assert type(source_arg) is list
        _get_sources(source_arg, srcs, generated_sources, generated_headers)

    deps = impl.get_set_of_deps(dependencies)
    include_directories = [impl.get_relative_dir()] + impl.get_include_dirs(
        include_directories
    )
    static_libs = []
    whole_static_libs = []
    shared_libs = []
    header_libs = []
    for dep in deps:
        print('  dep: ' + dep.name)
        for src in impl.get_linear_list([dep.sources]):
            if type(src) is impl.CustomTargetItem:
                generated_headers.add(src.target.target_name_h())
            elif type(src) is impl.CustomTarget:
                generated_headers.add(src.target_name_h())
            else:
                exit('Unhandled source dependency: ' + str(type(src)))
        include_directories.extend(impl.get_include_dirs(dep.include_directories))
        for target in impl.get_static_libs([dep.link_with]):
            assert type(target) is impl.StaticLibrary
            static_libs.append(target.target_name)
        for target in impl.get_linear_list([dep.link_whole]):
            assert type(target) is impl.StaticLibrary
            whole_static_libs.append(target.target_name)
        for target in dep.targets:
            if target.target_type is impl.DependencyTargetType.SHARED_LIBRARY:
                shared_libs.append(target.target_name)
            elif target.target_type is impl.DependencyTargetType.STATIC_LIBRARY:
                static_libs.append(target.target_name)
            elif target.target_type is impl.DependencyTargetType.HEADER_LIBRARY:
                header_libs.append(target.target_name)
        c_args.append(dep.compile_args)
        cpp_args.append(dep.compile_args)

    for target in impl.get_static_libs(link_with):
        if type(target) is impl.StaticLibrary:
            static_libs.append(target.target_name)
        else:
            exit(f'Unhandled link_with type: {type(target)}')

    for target in impl.get_whole_static_libs(link_whole):
        if type(target) is impl.StaticLibrary:
            whole_static_libs.append(target.target_name())
        else:
            exit(f'Unhandled link_whole type: {type(target)}')

    # Android turns all warnings into errors but thirdparty projects typically can't handle that
    cflags = ['-Wno-error'] + impl.get_linear_list(impl.get_project_cflags() + c_args)
    cppflags = ['-Wno-error'] + impl.get_linear_list(
        impl.get_project_cppflags() + cpp_args
    )

    for src in srcs:
        # Filter out header files
        if not src.endswith('.h'):
            static_lib.srcs.append(src)
    for generated in generated_headers:
        static_lib.generated_headers.append(generated)
    for generated in generated_sources:
        static_lib.generated_sources.append(generated)

    for arg in impl.get_project_options():
        if arg.name == 'c_std':
            static_lib.cstd = arg.value
        elif arg.name == 'cpp_std':
            static_lib.cpp_std = arg.value

    for arg in cflags:
        # Escape double quotations
        arg = re.sub(r'"', '\\"', arg)
        static_lib.conlyflags.append(arg)
    for arg in cppflags:
        # Escape double quotations
        arg = re.sub(r'"', '\\"', arg)
        static_lib.cppflags.append(arg)

    for inc in include_directories:
        static_lib.local_include_dirs.append(inc)

    for lib in static_libs:
        static_lib.static_libs.append(lib)

    for lib in whole_static_libs:
        static_lib.whole_static_libs.append(lib)

    for lib in shared_libs:
        static_lib.shared_libs.append(lib)

    for lib in header_libs:
        static_lib.header_libs.append(lib)

    meson_translator.meson_state.static_libraries.append(static_lib)


def _emit_builtin_target(
    target_name,
    *source,
    c_args=[],
    cpp_args=[],
    dependencies=[],
    include_directories=[],
    link_with=[],
    link_whole=[],
    builtin_type_name='',
    static=False,
    library_type=LibraryType.Library,
):
    if meson_translator.is_bazel():
        _emit_builtin_target_fuchsia(
            target_name,
            *source,
            c_args=c_args,
            cpp_args=cpp_args,
            dependencies=dependencies,
            include_directories=include_directories,
            link_with=link_with,
            link_whole=link_whole,
            static=static,
            library_type=library_type,
        )
    else:  # meson_translator.is_soong()
        _emit_builtin_target_android(
            target_name,
            *source,
            c_args=c_args,
            cpp_args=cpp_args,
            dependencies=dependencies,
            include_directories=include_directories,
            link_with=link_with,
            link_whole=link_whole,
            builtin_type_name=builtin_type_name,
            library_type=library_type,
        )


def shared_library(
    target_name,
    *source,
    c_args=[],
    cpp_args=[],
    c_pch='',
    build_by_default=False,
    build_rpath='',
    d_debug=[],
    d_import_dirs=[],
    d_module_versions=[],
    d_unittest=False,
    darwin_versions='',
    dependencies=[],
    extra_files='',
    gnu_symbol_visibility='',
    gui_app=False,
    implicit_include_directories=False,
    include_directories=[],
    install=False,
    install_dir='',
    install_mode=[],
    install_rpath='',
    install_tag='',
    link_args=[],
    link_depends=[],
    link_language='',
    link_whole=[],
    link_with=[],
    name_prefix='',
    name_suffix='',
    native=False,
    objects=[],
    override_options=[],
    rust_abi='',
    rust_crate_type='',
    rust_dependency_map={},
    sources=[],
    soversion='',
    vala_args=[],
    version='',
    vs_module_defs='',
    win_subsystem='',
):
    print('shared_library: ' + target_name)

    link_with = impl.get_linear_list([link_with])
    link_whole = impl.get_linear_list([link_whole])

    _emit_builtin_target(
        target_name,
        *source,
        c_args=c_args,
        static=False,
        cpp_args=cpp_args,
        dependencies=dependencies,
        include_directories=include_directories,
        link_with=link_with,
        link_whole=link_whole,
        builtin_type_name='cc_library_shared',
        library_type=LibraryType.LibraryStatic,
    )
    return impl.SharedLibrary(target_name)


def _process_target_name(name):
    name = re.sub(r'[\[\]]', '', name)
    return name


def _location_wrapper(name_or_list) -> str | list[str]:
    if isinstance(name_or_list, list):
        ret = []
        for i in name_or_list:
            ret.append(f'$(location {i})')
        return ret

    assert isinstance(name_or_list, str)
    return f'$(location {name_or_list})'


def _is_header(name):
    return re.search(r'\.h[xx|pp]?$', name) is not None


def _is_source(name):
    return re.search(r'\.c[c|xx|pp]?$', name) is not None


def _get_command_args(
    command,
    input,
    output,
    deps,
    location_wrap=False,
    obfuscate_output_c=False,
    obfuscate_output_h=False,
    obfuscate_suffix='',
):
    args = []
    gendir = 'GENDIR' if meson_translator.is_bazel() else 'genDir'
    for command_item in command[1:]:
        if isinstance(command_item, list):
            for item in command_item:
                if type(item) is impl.File:
                    args.append(
                        _location_wrapper(item.name) if location_wrap else item.name
                    )
                elif type(item) is str:
                    args.append(item)
            continue

        assert type(command_item) is str
        match = re.match(r'@INPUT([0-9])?@', command_item)
        if match is not None:
            if match.group(1) is not None:
                input_index = int(match.group(1))
                input_list = impl.get_list_of_relative_inputs(input[input_index])
            else:
                input_list = impl.get_list_of_relative_inputs(input)
            args.extend(_location_wrapper(input_list) if location_wrap else input_list)
            continue

        match = re.match(r'(.*?)@OUTPUT([0-9])?@', command_item)
        if match is not None:
            output_list = []
            if match.group(2) is not None:
                output_index = int(match.group(2))
                selected_output = (
                    output[output_index] if isinstance(output, list) else output
                )
                output_list.append(impl.get_relative_gen_dir(selected_output))
            elif isinstance(output, list):
                for out in output:
                    output_list.append(impl.get_relative_gen_dir(out))
            else:
                output_list.append(impl.get_relative_gen_dir(output))
            for out in output_list:
                if _is_header(out) and obfuscate_output_h:
                    args.append(
                        match.group(1) + f'$({gendir})/{out}' if location_wrap else out
                    )
                else:
                    if _is_source(out) and obfuscate_output_c:
                        out += obfuscate_suffix
                    args.append(
                        match.group(1) + _location_wrapper(out)
                        if location_wrap
                        else out
                    )
            continue

        # Assume used to locate generated outputs
        match = re.match(r'(.*?)@CURRENT_BUILD_DIR@', command_item)
        if match is not None:
            args.append(f'$({gendir})' + '/' + impl.get_relative_dir())
            continue

        if meson_translator.is_bazel():
            match = re.match(r'@PROJECT_BUILD_ROOT@(.*)', command_item)
            if match is not None:
                args.append(f'$({gendir}){match.group(1)}')
                continue

        # A plain arg
        if ' ' in command_item:
            args.append(f"'{command_item}'")
        else:
            args.append(command_item)

    return args


def library(
    target_name,
    *sources,
    c_args=[],
    install=False,
    link_args=[],
    vs_module_defs='',
    version='',
):
    print('library: ' + target_name)

    return static_library(
        target_name,
        *sources,
        c_args=c_args,
        install=install,
        link_args=link_args,
        sources=sources,
    )


# Assume dependencies of custom targets are custom targets that are generating
# python scripts; build a python path of their locations.
def _get_python_path(deps):
    python_path = ''
    for index, dep in enumerate(deps):
        assert type(dep) is impl.CustomTarget
        if index > 0:
            python_path += ':'
        python_path += '`dirname %s`' % _location_wrapper(':%s' % dep.target_name())
    return python_path


def _get_export_include_dirs():
    dirs = [impl.get_relative_dir()]
    # HACK for source files that expect that include generated files like:
    # include "vulkan/runtime/...h"
    if impl.get_relative_dir().startswith('src'):
        dirs.append('src')
    return dirs


def _process_wrapped_args_for_python(
    wrapped_args, python_script, python_script_target_name, deps
):
    # The python script arg should be replaced with the python binary target name
    args = impl.replace_wrapped_input_with_target(
        wrapped_args, python_script, python_script_target_name
    )
    if meson_translator.is_bazel():
        return args
    # else is_soong():
    python_path = 'PYTHONPATH='
    # Python scripts expect to be able to import other scripts from the same directory, but this
    # doesn't work in the soong execution environment, so we have to explicitly add the script
    # dir. We can't use $(location python_binary) because that is missing the relative path;
    # instead we can use $(location python_script), which happens to work, and we're careful to
    # ensure the script is in the list of sources even when it's used as the command directly.
    python_path += '`dirname $(location %s)`' % python_script
    # Also ensure that scripts generated by dependent custom targets can be imported.
    if type(deps) is impl.CustomTarget:
        python_path += ':' + _get_python_path([deps])
    if type(deps) is list:
        python_path += ':' + _get_python_path(deps)
    args.insert(0, python_path)
    return args


# TODO(bpnguyen): merge custom_target
def custom_target(
    target_name: str,
    build_always=False,
    build_always_stale=False,
    build_by_default=False,
    capture=False,
    command=[],
    console=False,
    depend_files=[],
    depends=[],
    depfile='',
    env=[],
    feed=False,
    input=[],
    install=False,
    install_dir='',
    install_mode=[],
    install_tag=[],
    output=[],
):
    target_name = _process_target_name(target_name)
    print('Custom target: ' + target_name)
    assert type(command) is list
    program = command[0]
    program_args = []

    # The program can be an array that includes arguments
    if isinstance(program, list):
        for arg in program[1:]:
            assert type(arg) is str
            program_args.append(arg)
        program = program[0]

    assert isinstance(program, impl.Program)
    assert program.found()

    args = program_args + _get_command_args(command, input, output, depends)

    # Python scripts need special handling to find mako library
    python_script = ''
    python_script_target_name = ''
    if program.command.endswith('.py'):
        python_script = program.command
    else:
        for index, arg in enumerate(args):
            if arg.endswith('.py'):
                python_script = arg
                break
    if python_script != '':
        python_script_target_name = target_name + '_' + os.path.basename(python_script)
        srcs = [python_script] + impl.get_list_of_relative_inputs(depend_files)
        python_custom_target = PythonCustomTarget()
        python_custom_target.name = python_script_target_name
        python_custom_target.main = python_script
        for src in srcs:
            if src.endswith('.py'):
                python_custom_target.srcs.append(src)
        for src in set(srcs):
            if src.endswith('.py'):
                python_custom_target.imports.append(os.path.dirname(src))

        meson_translator.meson_state.custom_py_targets.append(python_custom_target)

    relative_inputs = impl.get_list_of_relative_inputs(input)
    # We use python_host_binary instead of calling python scripts directly;
    # however there's an issue with python locating modules in the same directory
    # as the script; to workaround that (see _process_wrapped_args_for_python) we
    # ensure the script is listed in the genrule targets.
    if python_script != '' and python_script not in relative_inputs:
        relative_inputs.append(python_script)
    relative_inputs.extend(impl.get_list_of_relative_inputs(depend_files))

    relative_inputs_set = set()
    if meson_translator.is_soong():
        for src in relative_inputs:
            relative_inputs_set.add(src)

    relative_outputs = []
    if isinstance(output, list):
        for file in output:
            relative_outputs.append(impl.get_relative_gen_dir(file))
    else:
        assert type(output) is str
        relative_outputs.append(impl.get_relative_gen_dir(output))

    generates_h = False
    generates_c = False
    custom_target_ = None
    if meson_translator.is_soong():
        # Soong requires genrule to generate only headers OR non-headers
        for out in relative_outputs:
            if _is_header(out):
                generates_h = True
            if _is_source(out):
                generates_c = True
        custom_target_ = impl.CustomTarget(
            target_name, relative_outputs, generates_h, generates_c
        )
    else:  # is_bazel:
        custom_target_ = impl.CustomTarget(target_name, relative_outputs)

    program_command = program.command
    if meson_translator.is_soong():
        if program_command == 'bison':
            program_command_arg = 'M4=$(location m4) $(location bison)'
        elif program_command == 'flex':
            program_command_arg = 'M4=$(location m4) $(location flex)'
        elif program_command.endswith('.py'):
            program_command_arg = _location_wrapper(program_command)
        else:
            program_command_arg = program_command

        program_args = [program_command_arg] + program_args

        if custom_target_.generates_h() and custom_target_.generates_c():
            # Make a rule for only the headers
            obfuscate_suffix = '.dummy.h'
            wrapped_args = program_args + _get_command_args(
                command,
                input,
                output,
                depends,
                location_wrap=True,
                obfuscate_output_c=True,
                obfuscate_suffix=obfuscate_suffix,
            )
            if python_script:
                wrapped_args = _process_wrapped_args_for_python(
                    wrapped_args, python_script, python_script_target_name, depends
                )

            command_line = impl.get_command_line_from_args(wrapped_args)
            if capture:
                command_line += ' > %s' % _location_wrapper(
                    impl.get_relative_gen_dir(output)
                )
            ct = CustomTarget()
            ct.name = custom_target_.target_name_h()
            for src in relative_inputs_set:
                ct.srcs.append(src)
            for dep in depends:
                assert type(dep) is impl.CustomTarget
                ct.srcs.append(':' + dep.target_name())
            for out in relative_outputs:
                if _is_source(out):
                    out += obfuscate_suffix
                    # The scripts may still write to the assumed .c file, ensure the obfuscated
                    # file exists
                    command_line += (
                        "; echo '//nothing to see here' > " + _location_wrapper(out)
                    )
                ct.out.append(out)
            if python_script_target_name != '':
                ct.tools.append(python_script_target_name)

            if program_command == 'bison' or program_command == 'flex':
                ct.tools.append('m4')
                ct.tools.append(program_command)

            for dir in _get_export_include_dirs():
                ct.export_include_dirs.append(dir)

            ct.cmd = command_line
            meson_translator.meson_state.custom_targets.append(ct)
            # Make a rule for only the sources
            obfuscate_suffix = '.dummy.c'
            wrapped_args = program_args + _get_command_args(
                command,
                input,
                output,
                depends,
                location_wrap=True,
                obfuscate_output_h=True,
                obfuscate_suffix=obfuscate_suffix,
            )
            if python_script:
                wrapped_args = _process_wrapped_args_for_python(
                    wrapped_args, python_script, python_script_target_name, depends
                )

            command_line = impl.get_command_line_from_args(wrapped_args)
            if capture:
                command_line += ' > %s' % _location_wrapper(
                    impl.get_relative_gen_dir(output)
                )

            # We keep the header as an output with an obfuscated name because some scripts insist
            # on having --out-h (like vk_entrypoints_gen.py). When Soong depends on this genrule
            # it'll insist on compiling all the outputs, so we replace the content of all header
            # outputs.
            ct_ = CustomTarget()
            ct_.name = custom_target_.target_name_c()

            for src in relative_inputs_set:
                ct_.srcs.append(src)
            for dep in depends:
                assert type(dep) is impl.CustomTarget
                ct_.srcs.append(':' + dep.target_name())
            for out in relative_outputs:
                if _is_header(out):
                    out += obfuscate_suffix
                    ct_.out.append(out)
                    # Remove the content because Soong will compile this dummy source file
                    command_line += (
                        "; echo '//nothing to see here' > " + _location_wrapper(out)
                    )
                ct_.out.append(out)
            if python_script_target_name != '':
                ct_.tools.append(python_script_target_name)
            if program_command == 'bison' or program_command == 'flex':
                ct.tools.append('m4')
                ct.tools.append(program_command)
            ct_.cmd = command_line
            meson_translator.meson_state.custom_targets.append(ct_)
            return custom_target_
        else:
            wrapped_args = program_args + _get_command_args(
                command, input, output, depends, location_wrap=True
            )
            if python_script:
                wrapped_args = _process_wrapped_args_for_python(
                    wrapped_args, python_script, python_script_target_name, depends
                )

            command_line = impl.get_command_line_from_args(wrapped_args)
            if capture:
                command_line += ' > %s' % _location_wrapper(
                    impl.get_relative_gen_dir(output)
                )
            ct = CustomTarget()
            ct.name = custom_target_.target_name()
            for src in relative_inputs_set:
                ct.srcs.append(src)
            for dep in depends:
                assert type(dep) is impl.CustomTarget
                ct.srcs.append(':' + dep.target_name())
            for out in relative_outputs:
                ct.out.append(out)
            if python_script_target_name != '':
                ct.tools.append(python_script_target_name)
            if program_command == 'bison' or program_command == 'flex':
                ct.tools.append('m4')
                ct.tools.append(program_command)
            for dir_ in _get_export_include_dirs():
                ct.export_include_dirs.append(dir_)
            ct.cmd = command_line
            meson_translator.meson_state.custom_targets.append(ct)
    else:  # is_bazel
        if program_command.endswith('.py'):
            program_command_arg = _location_wrapper(program_command)
        else:
            program_command_arg = program_command

        program_args = [program_command_arg] + program_args

        wrapped_args = program_args + _get_command_args(
            command, input, output, depends, location_wrap=True
        )
        if python_script:
            wrapped_args = _process_wrapped_args_for_python(
                wrapped_args, python_script, python_script_target_name, depends
            )

        command_line = impl.get_command_line_from_args(wrapped_args)
        if capture:
            command_line += ' > %s' % _location_wrapper(
                impl.get_relative_gen_dir(output)
            )

        ct = CustomTarget()
        ct.name = custom_target_.target_name()
        for src in set(relative_inputs):
            ct.srcs.append(src)
        for dep in depends:
            assert type(dep) is impl.CustomTarget
            ct.srcs.append(dep.target_name())
        for out in set(relative_outputs):
            ct.out.append(out)
        if python_script_target_name != '':
            ct.tools.append(python_script_target_name)
        ct.cmd = command_line
        meson_translator.meson_state.custom_targets.append(ct)

    return custom_target_
