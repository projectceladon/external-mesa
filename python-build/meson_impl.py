from enum import Enum
import os
import re
import subprocess

# The file used to write output build definitions.
_gOutputFile = ''

# The relative directory that is currently being processed. When files are
# referenced they are relative to this path.
_gRelativeDir = ''

# Global compiler flags
_gProjectCflags = []
_gProjectCppflags = []

# Parameters set by config file
_gCpuFamily = 'unknown'
_gCpu = _gCpuFamily

_gProjectVersion = 'unknown'
_gProjectOptions = []


class IncludeDirectories:

  def __init__(self, name: str, dirs: []):
    self.name = name
    self.dirs = dirs

  def __iter__(self):
    return iter([self])


class File:

  def __init__(self, name: str):
    self.name = name


class Machine:
  def __init__(self, system):
    self._system = system

  def system(self):
    return self._system

  def cpu_family(self):
    return _gCpuFamily

  def cpu(self):
    return _gCpuFamily


class DependencyTargetType(Enum):
  SHARED_LIBRARY = 1
  STATIC_LIBRARY = 2
  HEADER_LIBRARY = 3


class DependencyTarget:

  def __init__(self, target_name: str, target_type: DependencyTargetType):
    self.target_name = target_name
    self.target_type = target_type


class Dependency:
  _id_generator = 1000

  def __init__(
      self,
      name: str,
      version='',
      found=False,
      targets=[],
      compile_args=[],
      include_directories=[],
      dependencies=[],
      sources=[],
      link_with=[],
      link_whole=[],
  ):
    self.name = name
    self.targets = targets
    self._version = version
    self._found = found
    self.compile_args = compile_args
    self.include_directories = include_directories
    self.dependencies = dependencies
    self.sources = sources
    self.link_with = link_with
    self.link_whole = link_whole
    Dependency._id_generator += 1
    self.unique_id = Dependency._id_generator

  def version(self):
    return self._version

  def found(self):
    return self._found

  def partial_dependency(self, compile_args=''):
    return self

  def __iter__(self):
    return iter([self])

  def __hash__(self):
    return hash(self.unique_id)

  def __eq__(self, other):
    return self.unique_id == other._unique_id


class CommandReturn:

  def __init__(self, completed_process):
    self.completed_process = completed_process

  def returncode(self):
    return self.completed_process.returncode

  def stdout(self):
    return self.completed_process.stdout


class Program:

  def __init__(self, command, found: bool):
    self.command = command
    self._found = found

  # Running commands from the ambient system may give wrong/misleading results, since
  # some build systems use hermetic installations of tools like python.
  def run_command(self, *commands, capture_output=False):
    command_line = [self.command]
    for command in commands:
      command_line += command

    completed_process = subprocess.run(
        command_line, check=False, capture_output=capture_output
    )
    return CommandReturn(completed_process)

  def found(self):
    return self._found

  def full_path(self):
    return 'full_path'


class PythonModule:

  def find_installation(self, name: str):
    if name == 'python3':
      return Program(name, found=True)
    exit('Unhandled python installation: ' + name)


class EnableState(Enum):
  ENABLED = 1
  DISABLED = 2
  AUTO = 3


class FeatureOption:

  def __init__(self, name, state=EnableState.AUTO):
    self.name = name
    self.state = state

  def allowed(self):
    return self.state == EnableState.ENABLED or self.state == EnableState.AUTO

  def enabled(self):
    return self.state == EnableState.ENABLED

  def disabled(self):
    return self.state == EnableState.DISABLED

  def disable_auto_if(self, value: bool):
    if value and self.state == EnableState.AUTO:
      self.state = EnableState.DISABLED
    return self

  def disable_if(self, value: bool, error_message: str):
    if not value:
      return self
    if self.state == EnableState.ENABLED:
      exit(error_message)
    return FeatureOption(self.name, state=EnableState.DISABLED)

  def require(self, value: bool, error_message: str):
    if value:
      return self
    if self.state == EnableState.ENABLED:
      exit(error_message)
    return FeatureOption(self.name, state=EnableState.DISABLED)

  def set(self, value: str):
    value = value.lower()
    if value == 'auto':
      self.state = EnableState.AUTO
    elif value == 'enabled':
      self.state = EnableState.ENABLED
    elif value == 'disabled':
      self.state = EnableState.DISABLED
    else:
      exit('Unable to set feature to: %s' % value)


class ArrayOption:

  def __init__(self, name: str, value: []):
    self.name = name
    self.strings = value

  def set(self, value: str):
    if value == '':
      self.strings = []
    else:
      self.strings = [value]


class ComboOption:

  def __init__(self, name: str, value: str):
    self.name = name
    self.value = value

  def set(self, value: str):
    self.value = value


class BooleanOption:

  def __init__(self, name, value: bool):
    assert type(value) is bool
    self.name = name
    self.value = value

  def set(self, value: str):
    self.value = bool(value)


# Value can be string or other type
class SimpleOption:

  def __init__(self, name, value):
    self.name = name
    self.value = value

  def set(self, value: str):
    if type(self.value) == int:
      self.value = int(value)
    else:
      self.value = value


class Environment:

  def set(self, var, val):
    return

  def append(self, var, val):
    return


class StaticLibrary:

  def __init__(self, target_name, link_with=[], link_whole=[]):
    self.target_name = target_name
    self.link_with = link_with
    self.link_whole = link_whole


class SharedLibrary:
  name = ''

  def __init__(self, name):
    self.name = name


class Executable:

  def __init__(self, name):
    self.name = name


class CustomTargetItem:

  def __init__(self, custom_target, index):
    self.target = custom_target
    self.index = index


class CustomTarget:

  def __init__(self, name, outputs=[], generates_h=False, generates_c=False):
    self._name = name
    self._outputs = outputs
    self._generates_h = generates_h
    self._generates_c = generates_c

  def generates_h(self):
    return self._generates_h

  def generates_c(self):
    return self._generates_c

  def target_name(self):
    return self._name

  def target_name_h(self):
    if self._generates_h and self._generates_c:
      return self._name + '.h'
    return self._name

  def target_name_c(self):
    if self._generates_h and self._generates_c:
      return self._name + '.c'
    return self._name

  def __iter__(self):
    return iter([self])

  def __getitem__(self, index):
    return CustomTargetItem(self, index)

  def full_path(self):
    return 'fullpath'


class Meson:

  def __init__(self, compiler):
    self._compiler = compiler

  def get_compiler(self, language_string, native=False):
    return self._compiler

  def project_version(self):
    return _gProjectVersion

  def project_source_root(self):
    return os.getcwd()

  def is_cross_build(self):
    return True

  def can_run_host_binaries(self):
    return False

  def current_source_dir(self):
    return os.getcwd()

  def current_build_dir(self):
    return '@CURRENT_BUILD_DIR@'

  def project_build_root(self):
    return '@PROJECT_BUILD_ROOT@'

  def add_devenv(self, env):
    return


class Compiler:

  def get_id(self):
    return 'clang'

  def is_symbol_supported(self, header: str, symbol: str):
    if header == 'sys/mkdev.h' or symbol == 'program_invocation_name':
      return False
    return True

  def is_function_supported(self, function: str):
    if (
        function == 'qsort_s'
        or function == 'pthread_setaffinity_np'
        or function == 'secure_getenv'
    ):
      return False
    return True

  def is_link_supported(self, name):
    if name == 'GNU qsort_r' or name == 'BSD qsort_r':
      return False
    return True

  def is_header_supported(self, header):
    if (
        header == 'xlocale.h'
        or header == 'pthread_np.h'
        or header == 'renderdoc_app.h'
    ):
      return False
    return True

  def get_define(self, define, prefix):
    if define == 'ETIME':
      return 'ETIME'
    exit('Unhandled define: ' + define)

  def get_supported_function_attributes(self, attributes):
    # Assume all are supported
    return attributes

  def has_function_attribute(self, attribute):
    return True

  def has_argument(self, name):
    result = True
    print("has_argument '%s': %s" % (name, str(result)))
    return result

  def has_link_argument(self, name):
    result = True
    print("has_link_argument '%s': %s" % (name, str(result)))
    return result

  def compiles(self, snippet, name):
    # Exclude what is currently not working.
    result = True
    if name == '__uint128_t':
      result = False
    print("compiles '%s': %s" % (name, str(result)))
    return result

  def has_member(sef, struct, member, prefix):
    # Assume it does
    return True

  def get_argument_syntax(self):
    return 'gcc'

  def get_supported_arguments(self, args):
    supported_args = []
    for arg in args:
      if (
          arg.startswith('-flifetime-dse')
          or arg.startswith('-Wno-format-truncation')
          or arg.startswith('-Wno-nonnull-compare')
          or arg.startswith('-Wno-class-memaccess')
          or arg.startswith('-Wno-format-truncation')
      ):
        continue
      supported_args.append(arg)
    return supported_args

  def get_supported_link_arguments(self, args):
    return args

  def find_library(self, name, required=False):
    if name == 'ws2_32' or name == 'elf' or name == 'm' or name == 'sensors':
      return Dependency(name, found=required)
    exit('Unhandled library: ' + name)

  def sizeof(self, string):
    table = _get_sizeof_table()

    if not string in table:
      exit('Unhandled compiler sizeof: ' + string)
    return table[string]


###################################################################################################


def fprint(args):
  print(args, file=_gOutputFile)


def set_relative_dir(dir):
  global _gRelativeDir
  _gRelativeDir = dir


def open_output_file(name):
  global _gOutputFile
  _gOutputFile = open(name, 'w')


def close_output_file():
  global _gOutputFile
  _gOutputFile.close()


def get_relative_dir(path_or_file=''):
  if isinstance(path_or_file, File):
    return path_or_file.name

  assert isinstance(path_or_file, str)
  if path_or_file == '':
    return _gRelativeDir
  return os.path.join(_gRelativeDir, path_or_file)


def get_relative_gen_dir(path=''):
  return os.path.join(_gRelativeDir, path)


def project(
    name, language_list, version, license, meson_version, default_options
):
  if type(version) == str:
    _gProjectVersion = version
  else:
    assert type(version) == list
    version_file = version[0]
    assert type(version_file) == File
    with open(version_file.name, 'r') as file:
      for line in file:
        _gProjectVersion = line.strip()
        break

  for option in default_options:
    value_pair = option.split('=')
    _gProjectOptions.append(SimpleOption(value_pair[0], value_pair[1]))


def get_project_options():
  return _gProjectOptions


def load_config_file(filename):
  with open(filename, 'r') as file:
    for line in file:
      key, value = line.strip().split('=')
      if key == 'cpu_family':
        global _gCpuFamily
        _gCpuFamily = value
        print('Config: cpu_family=%s' % _gCpuFamily)
      elif key == 'cpu':
        global _gCpu
        _gCpu = value
        print('Config: cpu=%s' % _gCpu)
      else:
        exit('Unhandled config key: %s' % key)


def add_project_arguments(args, language=[], native=False):
  global _gProjectCflags, _gProjectCppflags
  if not type(args) is list:
    args = [args]
  for l in language:
    for arg in args:
      if isinstance(arg, list):
        add_project_arguments(arg, language=language, native=native)
        continue
      assert isinstance(arg, str)
      if l == 'c':
        print('cflags: ' + arg)
        _gProjectCflags.append(arg)
      elif l == 'cpp':
        print('cppflags: ' + arg)
        _gProjectCppflags.append(arg)
      else:
        exit('Unhandle arguments language: ' + l)


def get_project_cflags():
  return _gProjectCflags


def get_project_cppflags():
  return _gProjectCppflags


def _get_sizeof_table():
  table_32 = {'void*': 4}
  table_64 = {'void*': 8}
  if _gCpuFamily == 'arm':
    table = table_32
  elif _gCpuFamily == 'aarch64':
    table = table_64
  else:
    exit('sizeof unhandled cpu family: %s' % _gCpuFamily)
  return table


def get_linear_list(arg_list):
  args = []
  for arg in arg_list:
    if type(arg) == list:
      args.extend(get_linear_list(arg))
    else:
      args.append(arg)
  return args


def dependency(*names, required=True, version=''):
  for name in names:
    print('dependency: %s' % name)
    if name == '':
      return Dependency('null', version, found=False)

    if (
        name == 'backtrace'
        or name == 'curses'
        or name == 'expat'
        or name == 'libconfig'
        or name == 'libmagma_virt'
        or name == 'libva'
        or name == 'libzstd'
        or name == 'libdrm'
        or name == 'libglvnd'
        or name == 'libudev'
        or name == 'libunwind'
        or name == 'llvm'
        or name == 'libxml-2.0'
        or name == 'lua54'
        or name == 'valgrind'
        or name == 'wayland-scanner'
    ):
      return Dependency(name, version, found=False)

    if (
        name == ''
        or name == 'libarchive'
        or name == 'libelf'
        or name == 'threads'
        or name == 'vdpau'
    ):
      return Dependency(name, version, found=required)

    exit('Unhandled dependency: ' + name)


def get_set_of_deps(deps, set_of_deps=set()):
  for dep in deps:
    if type(dep) == list:
      set_of_deps = get_set_of_deps(dep, set_of_deps)
    elif dep not in set_of_deps:
      set_of_deps.add(dep)
      set_of_deps = get_set_of_deps(dep.dependencies, set_of_deps)
  return set_of_deps


def get_include_dirs(paths) -> list[str]:
  dir_list = []
  for path in paths:
    if type(path) is list:
      dir_list.extend(get_include_dirs(p for p in path))
    elif type(path) is IncludeDirectories:
      dir_list.extend(path.dirs)
    else:
      assert type(path) is str
      dir_list.append(get_relative_dir(path))
  return dir_list


def get_include_directories(includes) -> list[IncludeDirectories]:
  dirs = []
  if type(includes) == list:
    for inc in includes:
      dirs.extend(get_include_directories(inc))
  elif type(includes) == IncludeDirectories:
    dirs.extend(includes)
  else:
    assert type(includes) == str
    exit('get_include_directories got string: %s' % includes)
  return dirs


def get_static_libs(arg_list):
  libs = []
  for arg in arg_list:
    if type(arg) == list:
      libs.extend(get_static_libs(arg))
    else:
      assert type(arg) == StaticLibrary
      libs.extend(get_static_libs(arg.link_with))
      libs.append(arg)
  return libs


def get_whole_static_libs(arg_list):
  libs = []
  for arg in arg_list:
    if type(arg) == list:
      libs.extend(get_whole_static_libs(arg))
    else:
      assert type(arg) == StaticLibrary
      libs.extend(get_whole_static_libs(arg._link_whole))
      libs.append(arg)
  return libs


def get_list_of_relative_inputs(list_or_string):
  if isinstance(list_or_string, list):
    ret = []
    for item in list_or_string:
      ret.extend(get_list_of_relative_inputs(item))
    return ret

  return [get_relative_dir(list_or_string)]


def get_command_line_from_args(args: list):
  command_line = ''
  for arg in args:
    command_line += ' ' + arg
  # Escape angle brackets
  command_line = re.sub(r'(<|>)', '\\\\\\\\\g<1>', command_line)
  return command_line


def replace_wrapped_input_with_target(
    args, python_script, python_script_target_name
):
  outargs = []
  for index, arg in enumerate(args):
    pattern = '(.*?)(' + python_script + ')'
    replace = '\g<1>' + python_script_target_name
    outargs.append(re.sub(pattern, replace, arg))
  return outargs
