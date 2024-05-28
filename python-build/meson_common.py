from enum import Enum
import os
import re
import warnings
import meson_impl as impl

_gArrayOptions = []
_gFeatureOptions = []
_gBooleanOptions = []
_gComboOptions = []
_gSimpleOptions = []


def noop():
  return


def message(str):
  print(str)


def error(message):
  exit(message)


def warning(message):
  warnings.warn(message)


def set_relative_dir(dir):
  impl.set_relative_dir(dir)


def files(*filenames):
  file_list = []
  for file in filenames:
    file_list.append(impl.File(os.path.join(impl.get_relative_dir(), file)))
  return file_list


def declare_dependency(
    compile_args=[],
    d_import_dirs=[],
    d_module_versions='',
    dependencies=[],
    extra_files=[],
    include_directories=[],
    link_args=[],
    link_whole=[],
    link_with=[],
    objects=[],
    sources=[],
    variables=[],
    version='',
):
  link_with = impl.get_linear_list([link_with])
  link_whole = impl.get_linear_list([link_whole])

  return impl.Dependency(
      'declared',
      version,
      found=True,
      compile_args=compile_args,
      include_directories=include_directories,
      dependencies=dependencies,
      sources=sources,
      link_with=link_with,
      link_whole=link_whole,
  )


def find_program(
    name: str, required=False, native=False, disabler=False, version=''
):
  maybe_filename = impl.get_relative_dir(name)

  # may be a script in the current directory
  if os.path.isfile(maybe_filename):
    return impl.Program(maybe_filename, found=True)

  # These are required for building turnip though not tagged as such
  if name == 'bison' or name == 'flex' or name == 'gzip':
    return impl.Program(name, found=True)

  if (
      name == 'byacc'
      or name == 'glslangValidator'
      or name == 'install_megadrivers.py'
      or name == 'nm'
      or name == 'python'
      or name == 'symbols-check.py'
  ):
    return impl.Program(name, found=required)

  exit('Unhandled program check: ' + name)


def add_project_arguments(args, language=[], native=False):
  impl.add_project_arguments(args, language, native)


def add_project_link_arguments(args, language=[], native=False):
  return


# Used by meson_options.txt to define an option
def option(
    name: str,
    type: str,
    min: int = 0,
    max: int = 0,
    value='',
    choices=[],
    description='',
    deprecated=None,
):
  if type == 'array':
    global _gArrayOptions
    _gArrayOptions.append(impl.ArrayOption(name, value))
    return
  if type == 'feature':
    global _gFeatureOptions
    if value == '' or value == 'auto':
      state = impl.EnableState.AUTO
    elif value == 'disabled':
      state = impl.EnableState.DISABLED
    elif value == 'enabled':
      state = impl.EnableState.ENABLED
    else:
      exit('Unhandled feature option value')
    _gFeatureOptions.append(impl.FeatureOption(name, state))
    return
  if type == 'boolean':
    global _gBooleanOptions
    if isinstance(value, str):
      flag = True if value.lower() == 'true' else False
      _gBooleanOptions.append(impl.BooleanOption(name, flag))
    else:
      _gBooleanOptions.append(impl.BooleanOption(name, value))
    return
  if type == 'combo':
    global _gComboOptions
    _gComboOptions.append(impl.ComboOption(name, value))
    return
  if type == 'string' or type == 'integer':
    global _gSimpleOptions
    _gSimpleOptions.append(impl.SimpleOption(name, value))
    return


def set_option(name, value: str):
  print('set_option: %s=%s' % (name, value))
  for option in _gArrayOptions:
    if option.name == name:
      option.set(value)

  for option in _gFeatureOptions:
    if option.name == name:
      option.set(value)

  for option in _gBooleanOptions:
    if option.name == name:
      option.set(value)

  for option in _gComboOptions:
    if option.name == name:
      option.set(value)

  for option in _gSimpleOptions:
    if option.name == name:
      option.set(value)

  for option in impl.get_project_options():
    if option.name == name:
      option.set(value)


def get_option(name):
  for option in _gArrayOptions:
    if option.name == name:
      return option.strings

  for option in _gFeatureOptions:
    if option.name == name:
      return option

  for option in _gBooleanOptions:
    if option.name == name:
      return option.value

  for option in _gComboOptions:
    if option.name == name:
      return option.value

  for option in _gSimpleOptions:
    if option.name == name:
      return option.value

  for option in impl.get_project_options():
    if option.name == name:
      return option.value

  # built-in options
  if name == 'layout':
    return 'mirror'
  if name == 'prefix':
    return 'prefix'
  if name == 'libdir':
    return 'libdir'
  if name == 'datadir':
    return 'datadir'
  if name == 'sysconfdir':
    return 'sysconfdir'
  if name == 'includedir':
    return 'includedir'
  if name == 'c_args':
    return ''
  if name == 'cpp_rtti':
    return False
  if name == 'debug':
    return True
  if name == 'b_sanitize':
    return False
  if name == 'backend':
    return 'custom'

  exit('Unhandled option: ' + name)


def project(
    name, language_list, version, license, meson_version, default_options=[]
):
  impl.project(
      name, language_list, version, license, meson_version, default_options
  )


def run_command(program, *commands, check=False):
  return program.run_command(commands)


def environment():
  return impl.Environment()


def join_paths(*paths):
  joined_path = ''
  for path in paths:
    joined_path = os.path.join(joined_path, path)
  return joined_path


def executable(
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
    dependencies=[],
    export_dynamic=False,
    extra_files='',
    gnu_symbol_visibility='',
    gui_app=False,
    implib=False,
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
    pie=False,
    rust_crate_type='',
    rust_dependency_map={},
    sources='',
    vala_args=[],
    vs_module_defs='',
    win_subsystem='',
):
  return impl.Executable(target_name)


def test(
    name,
    executable,
    args=[],
    depends=[],
    env=[],
    is_parallel=False,
    priority=0,
    protocol='',
    should_fail=False,
    suite='',
    timeout=0,
    verbose=False,
    workdir='',
):
  return


def summary(entry, bool_yn=False, list_sep='', section=''):
  return


def install_headers(*headers, subdir=''):
  return


def install_data(
    *files,
    follow_symlinks=False,
    install_dir='',
    install_mode=[],
    install_tag='',
    preserve_path=False,
    rename=[],
    sources=[],
):
  return
