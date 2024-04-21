from enum import Enum
import os
import re
import subprocess
import warnings

def noop():
  return

# TODO: allow options to be specified on the command line
gCommandLineOptions = ['-Dbuildtype=debug']

# The file used to write output build definitions.
gOutputFile = ''

# The relative directory that is currently being processed. When files are
# referenced they are relative to this path.
gRelativeDir = ''

# Global compiler flags
gProjectCflags = []
gProjectCppflags = []

gCpuFamily = 'unknown'
gCpu = gCpuFamily

def load_config_file():
  with open('python-build/generate_android_build.config', 'r') as file:
    for line in file:
      key, value = line.strip().split('=')
      if key == 'cpu_family':
        global gCpuFamily
        gCpuFamily = value
        print('Config: cpu_family=%s' % gCpuFamily)
      elif key == 'cpu':
        global gCpu
        gCpu = value
        print('Config: cpu=%s' % gCpu)
      else:
        exit('Unhandled config key: %s' % key)

def open_output_file():
  global gOutputFile
  gOutputFile = open(r"Android.bp", "w")

def close_output_file():
  global gOutputFile
  gOutputFile.close()

def set_relative_dir(dir):
  global gRelativeDir
  gRelativeDir = dir

def get_relative_dir(path_or_file=''):
  if isinstance(path_or_file, File):
    return path_or_file._name

  assert(isinstance(path_or_file, str))
  return os.path.join(gRelativeDir, path_or_file)

# Must match get_relative_build_dir because some codegen scripts assume
# that previously generated scripts are located there.
def get_relative_gen_dir(path=''):
  return get_relative_build_dir(path)

def get_relative_build_dir(path=''):
  return os.path.join(gRelativeDir, path)

# Adds project specific arguments to the compiler command line
def add_project_arguments(args, language = [], native = False):
  global gProjectCflags, gProjectCppflags
  if not type(args) is list:
    args = [args]
  for l in language:
    for arg in args:
      if isinstance(arg, list):
        add_project_arguments(arg, language=language, native=native)
        continue
      assert(isinstance(arg, str))
      if l == 'c':
        print('cflags: ' + arg)
        gProjectCflags.append(arg)
      elif l == 'cpp':
        print('cppflags: ' + arg)
        gProjectCppflags.append(arg)
      else:
        exit('Unhandle arguments language: ' + l)

# Adds project specific arguments to the compiler command line
def add_project_link_arguments(args, language = [], native = False):
  # TODO
  return

class File:
  _name = ''
  def __init__(self, name):
    self._name = name

def files(*filenames):
  file_list = []
  for file in filenames:
    file_list.append(File(os.path.join(gRelativeDir, file)))
  return file_list

class DependencyTargetType(Enum):
  SHARED_LIBRARY = 1
  STATIC_LIBRARY = 2
  HEADER_LIBRARY = 3

class DependencyTarget:
  def __init__(self, target_name: str, target_type: DependencyTargetType):
    self._target_name = target_name
    self._target_type = target_type

class Dependency:
  _name = 'unknown'
  _target_list = []
  _version = ''
  _found = False
  _include_directories = []
  _dependencies = []
  _sources = []
  _link_with = []
  _link_whole = []
  _unique_id = 0
  _id_generator = 1000

  def __init__(self, name,
    version='', found=False, targets=[], include_directories=[], dependencies=[], sources=[], link_with=[], link_whole=[]):
    self._name = name
    self._targets = targets
    self._version = version
    self._found = found
    self._include_directories = include_directories
    self._dependencies = dependencies
    self._sources = sources
    self._link_with = link_with
    self._link_whole = link_whole
    Dependency._id_generator += 1
    self._unique_id = Dependency._id_generator

  def version(self):
    return self._version

  def found(self):
    return self._found

  def partial_dependency(self, compile_args=""):
    return self # ???

  def __iter__(self):
    return iter([self])

  def __hash__(self):
    return hash(self._unique_id)

  def __eq__(self, other):
      return self._unique_id == other._unique_id


def dependency(*names, required=True, version = '', allow_fallback=False, method='', modules=[], optional_modules=[], static=True, fallback=[], include_type='', native=False):
  for name in names:
    if name == '':
      return Dependency('null', version, found=False)

    if name == 'zlib':
      return Dependency(name, targets=[DependencyTarget('libz', DependencyTargetType.STATIC_LIBRARY)], version=version, found=True)

    if name == 'hardware':
      return Dependency(name, targets=[
        DependencyTarget('libhardware', DependencyTargetType.SHARED_LIBRARY),
        DependencyTarget('hwvulkan_headers', DependencyTargetType.HEADER_LIBRARY)
      ], version=version, found=True)

    if name == 'cutils' or \
      name == 'log' or \
      name == 'nativewindow':
      return Dependency(name, targets=[DependencyTarget('lib' + name, DependencyTargetType.SHARED_LIBRARY)], version=version, found=True)

    if name == 'sync':
      return Dependency(name, targets=[DependencyTarget('lib' + name, DependencyTargetType.STATIC_LIBRARY)], version=version, found=True)

    if name == 'android.hardware.graphics.mapper':
      assert(version == '>= 4.0')
      return Dependency(name, targets=[DependencyTarget('libgralloctypes', DependencyTargetType.STATIC_LIBRARY),
                                       DependencyTarget('android.hardware.graphics.mapper@4.0', DependencyTargetType.STATIC_LIBRARY),
                                       DependencyTarget('libhidlbase', DependencyTargetType.SHARED_LIBRARY),
                                       DependencyTarget('libutils', DependencyTargetType.SHARED_LIBRARY),
                                       ], version=version, found=True)

    if name == 'backtrace' \
      or name == 'curses' \
      or name == 'expat' \
      or name == 'libconfig' \
      or name == 'libva' \
      or name == 'libzstd' \
      or name == 'libdrm' \
      or name == 'libglvnd' \
      or name == 'libudev' \
      or name == 'libunwind' \
      or name == 'llvm' \
      or name == 'libxml-2.0' \
      or name == 'lua' \
      or name == 'valgrind' \
      or name == 'wayland-scanner':
      return Dependency(name, version, found=False)

    if name == 'libmagma_virt':
      return Dependency(name, version, found=True)

    if name == '' \
      or name == 'libarchive' \
      or name == 'libelf' \
      or name == 'threads' \
      or name == 'vdpau':
      return Dependency(name, version, found=required)

  exit("Unhandled dependency: " + name)

def declare_dependency(
  compile_args = [],
  d_import_dirs = [],
  d_module_versions = '',
  dependencies = [],
  extra_files = [],
  include_directories = [],
  link_args = [],
  link_whole = [],
  link_with = [],
  objects = [],
  sources = [],
  variables = [],
  version = ''
):
  link_with = get_linear_list([link_with])
  link_whole = get_linear_list([link_whole])

  return Dependency('declared', version, found=True, include_directories=include_directories, dependencies=dependencies, sources=sources, link_with=link_with, link_whole=link_whole)

class CommandReturn:
  def __init__(self, completed_process):
    self._completed_process = completed_process

  def returncode(self):
    return self._completed_process.returncode

  def stdout(self):
    return self._completed_process.stdout

class Program:
  _command: str
  _found: bool

  def __init__(self, command, found: bool):
    self._command = command
    self._found = found

  # Doesn't make sense to actually run most commands (like python to check for mako):
  # tools are from the ambient system, not the build environment
  def run_command(self, *commands, capture_output=False):
    command_line = [self._command]
    for command in commands:
      command_line += command

    completed_process = subprocess.run(command_line, check=False, capture_output=capture_output)
    return CommandReturn(completed_process)

  def found(self):
    return self._found

  def full_path(self):
    return "full_path"

class PythonProgram(Program):
   _is_python = True

def find_program(name: str, required=False, native=False, disabler=False, version=''):
  maybe_filename = get_relative_dir(name)

  # program may be a script in the current directory
  if os.path.isfile(maybe_filename):
    return Program(maybe_filename, found=True)

  # These are needed for building turnip though not tagged as such
  if name == 'bison' or\
    name == 'flex' or\
    name == 'gzip':
    return Program(name, found=True)

  if name == 'byacc' or\
     name == 'glslangValidator' or\
     name == 'install_megadrivers.py' or\
     name == 'nm' or\
     name == 'python' or\
     name == 'symbols-check.py':
    return Program(name, found=required)
  exit("Unhandled program: " + name)

class EnableState(Enum):
  ENABLED = 1
  DISABLED = 2
  AUTO = 3

class FeatureOption:
  def __init__(self, name, state=EnableState.AUTO):
    self._name = name
    self._state = state

  def allowed(self):
    return self._state == EnableState.ENABLED or self._state == EnableState.AUTO

  def enabled(self):
    return self._state == EnableState.ENABLED

  def disable_auto_if(self, value: bool):
    if value and self._state == EnableState.AUTO:
      self._state = EnableState.DISABLED
    return self

  def disable_if(self, value: bool, error_message : str):
    if not value:
      return self
    if self._state == EnableState.ENABLED:
      exit(error_message)
    return FeatureOption(self._name, state=EnableState.DISABLED)

  def require(self, value: bool, error_message : str):
    if value:
      return self
    if self._state == EnableState.ENABLED:
      exit(error_message)
    return FeatureOption(self._name, state=EnableState.DISABLED)

class ArrayOption:
   name = 'unknown'
   string_array = []

   def __init__(self, name: str, value: str):
      self.name = name
      self.string_array = value

# combo options must return a string because strings are
# assigned to objects of this type.
class ComboOption:
   name = 'unknown'
   value = 'value'

   def __init__(self, name: str, value: str):
      self.name = name
      self.value = value

class BooleanOption:
   name = 'unknown'
   value = False

   def __init__(self, name, value: bool):
      self.name = name
      self.value = value

# Value can be string or other type
class SimpleOption:
  name: str
  value = False

  def __init__(self, name, value):
    self.name = name
    self.value = value

gArrayOptions = []
gFeatureOptions = []
gBooleanOptions = []
gComboOptions = []
gSimpleOptions = []
gDefaultOptions = []

# Used by meson_options.txt to define an option
def option(name: str, type: str, min: int = 0, max:int = 0, value ='', choices = [], description = '', deprecated=None):
  if type == 'array':
    global gArrayOptions
    gArrayOptions.append(ArrayOption(name, value))
    print("Got array option: " + name)
    return
  if type == 'feature':
    global gFeatureOptions
    gFeatureOptions.append(FeatureOption(name))
    print("Got feature option: " + name)
    return
  if type == 'boolean':
    global gBooleanOptions
    if value == '':
      gBooleanOptions.append(BooleanOption(name, False))
      print("Got boolean option: " + name + " default value: False")
    else:
      # Assume it's a boolean not a string
      gBooleanOptions.append(BooleanOption(name, value))
      print("Got boolean option: " + name + " value: %d" % value)
    return
  if type == 'combo':
    global gComboOptions
    gComboOptions.append(ComboOption(name, value))
    print("Got combo option: " + name)
    return
  if type == 'string' or type == 'integer':
    global gSimpleOptions
    gSimpleOptions.append(SimpleOption(name, value))
    print("Got simple option: " + name)
    return

  print("Got other option: " + name)

def get_option(name):
  for option in gArrayOptions:
    if option.name == name:
      return option.string_array

  for option in gFeatureOptions:
    if option._name == name:
      return option

  for option in gBooleanOptions:
    if option.name == name:
      return option.value

  for option in gComboOptions:
    if option.name == name:
      return option.value

  for option in gSimpleOptions:
    if option.name == name:
      return option.value

  for option in gDefaultOptions:
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

  exit("Unhandled option: " + name)

def error(message):
  exit(message)

def warning(message):
  warnings.warn(message)

class Compiler:
  def get_id(self):
    return 'clang'

  def has_header_symbol(self, 
    header: str,
    symbol: str,
    args = [],
    dependencies = [],
    include_directories = [],
    no_builtin_args = False,
    prefix = [],
    required = False,
  ):
    # Exclude what is currently not working.
    result = True
    if header == 'sys/mkdev.h' or\
      symbol == 'program_invocation_name':
      result = False
    print('has_header_symbol \'%s\', \'%s\': %s' % (header, symbol, str(result)))
    return result

  def get_define(self, define, prefix):
    if define == 'ETIME':
      return 'ETIME'
    exit("Unhandled define: " + define)

  def get_supported_function_attributes(self, attributes):
    # Assume all are supported
    return attributes

  def has_function_attribute(self, attribute):
    # Assume it does
    return True

  def has_argument(self, name):
    result = True
    print('has_argument \'%s\': %s' % (name, str(result)))
    return result

  def has_link_argument(self, name):
    result = True
    print('has_link_argument \'%s\': %s' % (name, str(result)))
    return result

  def compiles(self, snippet, name):
    # Exclude what is currently not working.
    result = True
    if name == '__uint128_t':
      result = False
    print('compiles \'%s\': %s' % (name, str(result)))
    return result

  def has_function(self, function, args=[], prefix='', dependencies=''):
    # Exclude what is currently not working.
    result = True
    if function == 'qsort_s' or\
      function == 'pthread_setaffinity_np' or\
      function == 'secure_getenv':
      result = False
    print('has_function \'%s\': %s' % (function, str(result)))
    return result

  def has_member(sef, struct, member, prefix):
    # Assume it does
    return True

  def links(self, snippet, name, args=[], dependencies=[]):
    # Exclude what is currently not working.
    result = True
    if name == 'GNU qsort_r' or\
      name == 'BSD qsort_r':
      result = False
    print('links \'%s\': %s' % (name, str(result)))
    return result

  def get_argument_syntax(self):
    return 'gcc'

  def get_supported_arguments(self, args):
    supported_args = []
    for arg in args:
      if arg.startswith('-flifetime-dse') or \
        arg.startswith('-Wno-format-truncation') or \
        arg.startswith('-Wno-nonnull-compare') or \
        arg.startswith('-Wno-class-memaccess') or \
        arg.startswith('-Wno-format-truncation'):
        continue
      supported_args.append(arg)
    return supported_args

  def get_supported_link_arguments(self, args):
    return args

  def find_library(self, name, required=False):
    if name == 'ws2_32' \
      or name == 'elf' \
      or name == 'm' \
      or name == 'sensors':
      return Dependency(name, found=required)
    exit("Unhandled library: " + name)

  def check_header(self, header):
    result = True
    if header == 'xlocale.h' or\
      header == 'pthread_np.h' or\
      header == 'renderdoc_app.h':
      result = False
    print('check_header \'%s\': %s' % (header, str(result)))
    return result

  def sizeof(self, string):
    table_32 = { 'void*': 4}
    table_64 = { 'void*': 8}
    if gCpuFamily == 'arm':
      table = table_32
    elif gCpuFamily == 'aarch64':
      table = table_64
    else:
      exit('sizeof unhandled cpu family: %s' % gCpuFamily)

    if not string in table:
      exit('Unhandled compiler sizeof: ' + string)
    return table[string]

class Meson:
  _project_version: str

  def get_compiler(self, language_string, native=False):
    return Compiler()

  def project_version(self):
    return self._project_version

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

meson = Meson()

def project(name, language_list, version, license, meson_version, default_options):
  # Assume version is a file list
  version_file = version[0]
  with open(version_file._name, 'r') as file:
    for line in file:
      meson._project_version = line.strip()
      break

  for option in default_options:
    value_pair = option.split('=')
    gDefaultOptions.append(SimpleOption(value_pair[0], value_pair[1]))

  for option in gCommandLineOptions:
    if not option.startswith('-D'):
      exit('Bad command line option: ' + option)
    option = option[2:]
    value_pair = option.split('=')
    handled = False
    for index, simple_option in enumerate(gDefaultOptions):
      if simple_option.name == value_pair[0]:
        simple_option.value = value_pair[1]
        gDefaultOptions[index] = simple_option
        handled = True
        break
    if not handled:
      gDefaultOptions.append(SimpleOption(value_pair[0], value_pair[1]))

class Machine:
  name = ""

  def system(self):
    return 'linux'

  def cpu_family(self):
    return gCpuFamily

  def cpu(self):
    return gCpuFamily

host_machine = Machine()
build_machine = Machine()


class PythonModule:
  def find_installation(self, name:str):
    if name == 'python3':
      return PythonProgram(name, found=True)
    exit("Unhandled python installation: " + name)

def module_import(name: str):
  if name == 'python':
    return PythonModule()
  if name == 'pkgconfig':
    return 0
  exit("Unhandled module: " + name)

def run_command(program, *commands, check = False):
  return program.run_command(commands)

class Environment:
  def set(self, var, val):
    return

  def append(self, var, val):
    return

def environment():
  return Environment()

def join_paths(*paths):
  joined_path = ''
  for path in paths:
    joined_path = os.path.join(joined_path, path)
  return joined_path

class IncludeDirectories:
  _dirs = []
  def __init__(self, dirs):
    self._dirs = dirs

def get_include_dirs(paths):
  dir_list = []
  for path in paths:
    if type(path) is list:
      dir_list.extend(get_include_dirs(p for p in path))
    elif type(path) is IncludeDirectories:
      dir_list.extend(path._dirs)
    else:
      assert(type(path) is str)
      dir_list.append(get_relative_dir(path))
  return dir_list

def include_directories(*paths, is_system=False):
  return IncludeDirectories(get_include_dirs(paths))

def install_headers(*headers, subdir=''):
  return

class StaticLibrary:
  _target_name = ''
  _link_with = []
  _link_whole = []

  def __init__(self, target_name, link_with=[], link_whole=[]):
    self._target_name = target_name
    self._link_with = link_with
    self._link_whole = link_whole

  def target_name(self):
    return self._target_name

def static_library(
  target_name,
  *source_files,
  c_args = [],
  cpp_args = [],
  c_pch = '',
  build_by_default = False,
  build_rpath = '',
  d_debug = [],
  d_import_dirs = [],
  d_module_versions = [],
  d_unittest = False,
  dependencies = [],
  extra_files = '',
  gnu_symbol_visibility = '',
  gui_app = False,
  implicit_include_directories = False,
  include_directories = [],
  install = False,
  install_dir = '',
  install_mode = [],
  install_rpath = '',
  install_tag = '',
  link_args = [],
  link_depends = '',
  link_language = '',
  link_whole = [],
  link_with = [],
  name_prefix = '',
  name_suffix = '',
  native = False,
  objects = [],
  override_options = [],
  pic = False,
  prelink = False,
  rust_abi = '',
  rust_crate_type = '',
  rust_dependency_map = {},
  sources = '',
  vala_args = [],
  win_subsystem = ''
):
  print('static_library: ' + target_name)

  link_with = get_linear_list(link_with)
  link_whole = get_linear_list(link_whole)

  # Emitting link_with/link_whole into a static library isn't useful for building,
  # shared libraries must specify the whole chain of dependencies.
  # Leaving them here for traceability though maybe it's less confusing to remove them?
  emit_builtin_target('cc_library_static', target_name, *source_files,
    c_args=c_args, cpp_args=cpp_args, dependencies=dependencies, include_directories=include_directories, link_with=link_with, link_whole=link_whole)

  return StaticLibrary(target_name, link_with=link_with, link_whole=link_whole)

class SharedLibrary:
  _name = ''
  def __init__(self, name):
    self._name = name

def get_set_of_deps(deps, set_of_deps=set()):
  for dep in deps:
    if type(dep) == list:
      set_of_deps = get_set_of_deps(dep, set_of_deps)
    elif dep not in set_of_deps:
      set_of_deps.add(dep)
      set_of_deps = get_set_of_deps(dep._dependencies, set_of_deps)
  return set_of_deps

def get_include_directories(includes):
  dirs = []
  if type(includes) == list:
    for inc in includes:
      dirs.extend(get_include_directories(inc))
  elif type(includes) == IncludeDirectories:
    dirs.extend(includes._dirs)
  else:
    assert(type(includes) == str)
    dirs.append(includes)
  return dirs

def get_static_libs(arg_list):
  libs = []
  for arg in arg_list:
    if type(arg) == list:
      libs.extend(get_static_libs(arg))
    else:
      assert(type(arg) == StaticLibrary)
      libs.extend(get_static_libs(arg._link_with))
      libs.append(arg)
  return libs

def get_whole_static_libs(arg_list):
  libs = []
  for arg in arg_list:
    if type(arg) == list:
      libs.extend(get_whole_static_libs(arg))
    else:
      assert(type(arg) == StaticLibrary)
      libs.extend(get_whole_static_libs(arg._link_whole))
      libs.append(arg)
  return libs

def get_linear_list(arg_list):
  args = []
  for arg in arg_list:
    if type(arg) == list:
      args.extend(get_linear_list(arg))
    else:
      args.append(arg)
  return args

def get_sources(input_sources, sources, generated_sources, generated_headers):
  for source in input_sources:
    if type(source) is list:
      get_sources(source, sources, generated_sources, generated_headers)
    elif type(source) is CustomTarget:
      if source.generates_h():
        generated_headers.add(source.target_name_h())
      if source.generates_c():
        generated_sources.add(source.target_name_c())
    elif type(source) is CustomTargetItem:
      source = source._target
      if source.generates_h():
        generated_headers.add(source.target_name_h())
      if source.generates_c():
        generated_sources.add(source.target_name_c())
    elif type(source) is File:
      sources.add(source._name)
    elif type(source) is str:
      sources.add(get_relative_dir(source))
    else:
      exit("source type not handled: " + str(type(source)))

def emit_builtin_target(builtin_type_name, target_name, *source, c_args=[], cpp_args=[], dependencies=[], include_directories=[], link_with=[], link_whole=[]):
  print('%s {' % builtin_type_name, file=gOutputFile)
  print('  name: \"%s\",' % target_name, file=gOutputFile)

  srcs = set()
  generated_sources = set()
  generated_headers = set()
  for source_arg in source:
    assert(type(source_arg) is list)
    get_sources(source_arg, srcs, generated_sources, generated_headers)

  deps = get_set_of_deps(dependencies)
  include_directories = [get_relative_dir()] + get_include_directories(include_directories)
  static_libs = []
  whole_static_libs = []
  shared_libs = []
  header_libs = []
  for dep in deps:
    print('  dep: ' + dep._name)
    for src in get_linear_list([dep._sources]):
      if type(src) == CustomTargetItem:
        generated_headers.add(src._target.target_name_h())
      elif type(src) == CustomTarget:
        generated_headers.add(src.target_name_h())
      else:
        exit('Unhandled source dependency: ' + str(type(src)))
    include_directories.extend(get_include_directories(dep._include_directories))
    for target in get_static_libs([dep._link_with]):
      assert(type(target) == StaticLibrary)
      static_libs.append(target.target_name())
    for target in get_linear_list([dep._link_whole]):
      assert(type(target) == StaticLibrary)
      whole_static_libs.append(target.target_name())
    for target in dep._targets:
      if target._target_type == DependencyTargetType.SHARED_LIBRARY:
        shared_libs.append(target._target_name)
      elif target._target_type == DependencyTargetType.STATIC_LIBRARY:
        static_libs.append(target._target_name)
      elif target._target_type == DependencyTargetType.HEADER_LIBRARY:
        header_libs.append(target._target_name)

  for target in get_static_libs(link_with):
    if type(target) == StaticLibrary:
      static_libs.append(target.target_name())
    else:
      exit('Unhandled link_with type: ' + str(type(target)))

  for target in get_whole_static_libs(link_whole):
    if type(target) == StaticLibrary:
      whole_static_libs.append(target.target_name())
    else:
      exit('Unhandled link_whole type: ' + str(type(target)))

  # Android turns all warnings into errors but thirdparty projects typically can't handle that
  cflags = ['-Wno-error'] + get_linear_list(gProjectCflags + c_args)
  cppflags = ['-Wno-error'] + get_linear_list(gProjectCppflags + cpp_args)

  print('  srcs: [', file=gOutputFile)
  for src in srcs:
    # Filter out header files
    if not src.endswith('.h'):
      print('    \"%s\",' % src, file=gOutputFile)
  print('  ],', file=gOutputFile)

  print('  generated_headers: [', file=gOutputFile)
  for generated in generated_headers:
    print('    \"%s\",' % generated, file=gOutputFile)
  print('  ],', file=gOutputFile)

  print('  generated_sources: [', file=gOutputFile)
  for generated in generated_sources:
    print('    \"%s\",' % generated, file=gOutputFile)
  print('  ],', file=gOutputFile)

  for arg in gDefaultOptions:
    if arg.name == 'c_std':
      print('  c_std: \"%s\",' % arg.value, file=gOutputFile)
    elif arg.name == 'cpp_std':
      print('  cpp_std: \"%s\",' % arg.value, file=gOutputFile)

  print('  conlyflags: [', file=gOutputFile)
  for arg in cflags:
    # Escape double quotations
    arg = re.sub(r'"', '\\"', arg)
    print('    \"%s\",' % arg, file=gOutputFile)
  print('  ],', file=gOutputFile)
  print('  cppflags: [', file=gOutputFile)
  for arg in cppflags:
    # Escape double quotations
    arg = re.sub(r'"', '\\"', arg)
    print('    \"%s\",' % arg, file=gOutputFile)
  print('  ],', file=gOutputFile)
  
  print('  local_include_dirs: [', file=gOutputFile)
  for inc in include_directories:
    print('    \"%s\",' % inc, file=gOutputFile)
  print('  ],', file=gOutputFile)

  print('  static_libs: [', file=gOutputFile)
  for lib in static_libs:
    print('    \"%s\",' % lib, file=gOutputFile)
  print('  ],', file=gOutputFile)

  print('  whole_static_libs: [', file=gOutputFile)
  for lib in whole_static_libs:
    print('    \"%s\",' % lib, file=gOutputFile)
  print('  ],', file=gOutputFile)

  print('  shared_libs: [', file=gOutputFile)
  for lib in shared_libs:
    print('    \"%s\",' % lib, file=gOutputFile)
  print('  ],', file=gOutputFile)

  print('  header_libs: [', file=gOutputFile)
  for lib in header_libs:
    print('    \"%s\",' % lib, file=gOutputFile)
  print('  ],', file=gOutputFile)

  print('}', file=gOutputFile)

def shared_library(
  target_name,
  *source,

  c_args = [],
  cpp_args = [],
  c_pch = '',
  build_by_default = False,
  build_rpath = '',
  d_debug = [],
  d_import_dirs = [],
  d_module_versions = [],
  d_unittest = False,
  darwin_versions = '',
  dependencies = [],
  extra_files = '',
  gnu_symbol_visibility = '',
  gui_app = False,
  implicit_include_directories = False,
  include_directories = [],
  install = False,
  install_dir = '',
  install_mode = [],
  install_rpath = '',
  install_tag = '',
  link_args = [],
  link_depends = [],
  link_language = '',
  link_whole = [],
  link_with = [],
  name_prefix = '',
  name_suffix = '',
  native = False,
  objects = [],
  override_options = [],
  rust_abi = '',
  rust_crate_type = '',
  rust_dependency_map = {},
  sources = [],
  soversion = '',
  vala_args = [],
  version = '',
  vs_module_defs = '',
  win_subsystem = ''
):
  print('shared_library: ' + target_name)

  link_with = get_linear_list([link_with])
  link_whole = get_linear_list([link_whole])

  emit_builtin_target('cc_library_shared', target_name, *source,
    c_args=c_args, cpp_args=cpp_args, dependencies=dependencies, include_directories=include_directories, link_with=link_with, link_whole=link_whole)
  return SharedLibrary(target_name)

class CustomTargetItem:
  def __init__(self, custom_target, index):
    self._target = custom_target
    self._index = index

class CustomTarget:
  _name = ''
  _outputs = []
  _generates_h = False
  _generates_c = False

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
    assert(not (self._generates_h and self._generates_c))
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

def get_list_of_relative_inputs(list_or_string):
  if isinstance(list_or_string, list):
    ret = []
    for item in list_or_string:
      ret.extend(get_list_of_relative_inputs(item))
    return ret

  return [get_relative_dir(list_or_string)]

def process_target_name(name):
  name = re.sub(r'[\[\]]', '', name)
  return name

# Returns string or list of string
def location_wrapper(name_or_list):
  if isinstance(name_or_list, list):
    ret = []
    for i in name_or_list:
      ret.append('$(location %s)' % i)
    return ret

  assert(isinstance(name_or_list, str))
  return '$(location %s)' % name_or_list

def is_header(name):
  return re.search(r'\.h[xx|pp]?$', name) != None

def is_source(name):
  return re.search(r'\.c[c|xx|pp]?$', name) != None

def get_command_args(command, input, output, deps,
  location_wrap=False, obfuscate_output_c=False, obfuscate_output_h=False, obfuscate_suffix=''):
  args = []
  for command_item in command[1:]:
    if isinstance(command_item, list):
      for item in command_item:
        assert(type(item) == File)
        args.append(location_wrapper(item._name) if location_wrap else item._name)
      continue

    assert(type(command_item) is str)
    match = re.match(r"@INPUT([0-9])?@", command_item)
    if match != None:
      if match.group(1) != None:
        input_index = int(match.group(1))
        input_list = get_list_of_relative_inputs(input[input_index])
      else:
        input_list = get_list_of_relative_inputs(input)
      args.extend(location_wrapper(input_list) if location_wrap else input_list)
      continue

    match = re.match(r"(.*?)@OUTPUT([0-9])?@", command_item)
    if match != None:
      output_list = []
      if match.group(2) != None:
        output_index = int(match.group(2))
        selected_output = output[output_index] if isinstance(output, list) else output
        output_list.append(get_relative_gen_dir(selected_output))
      elif isinstance(output, list):
        for out in output:
          output_list.append(get_relative_gen_dir(out))
      else:
        output_list.append(get_relative_gen_dir(output))
      for out in output_list:
        if is_header(out) and obfuscate_output_h:
          args.append(match.group(1) + '$(genDir)/%s' % out if location_wrap else out)
        else:
          if is_source(out) and obfuscate_output_c:
            out += obfuscate_suffix
          args.append(match.group(1) + location_wrapper(out) if location_wrap else out)
      continue

    # Assume used to locate generated outputs
    match = re.match(r"(.*?)@CURRENT_BUILD_DIR@", command_item)
    if match != None:
      args.append('$(genDir)' + '/' + get_relative_dir())
      continue

    # A plain arg
    if ' ' in command_item:
      args.append("'%s'" % command_item)
    else:
      args.append(command_item)

  return args

def replace_wrapped_input_with_target(args, python_script, python_script_target_name):
  outargs = []
  for index, arg in enumerate(args):
    pattern = '(.*?)(' + python_script + ')'
    replace = '\g<1>' + python_script_target_name
    outargs.append(re.sub(pattern, replace, arg))
  return outargs

def get_command_line_from_args(args: list):
  command_line = ''
  for arg in args:
    command_line += ' ' + arg
  # Escape angle brackets
  command_line = re.sub(r"(<|>)", "\\\\\\\\\g<1>", command_line)
  return command_line

# Assume dependencies of custom targets are custom targets that are generating
# python scripts; build a python path of their locations.
def get_python_path(deps):
  python_path = ''
  for index, dep in enumerate(deps):
    assert(type(dep) == CustomTarget)
    if index > 0:
      python_path += ':'
    python_path += '`dirname %s`' % location_wrapper(':%s' % dep.target_name())
  return python_path

def get_export_include_dirs():
  dirs = [get_relative_dir()]
  # HACK for source files that expect that include generated files like:
  # include "vulkan/runtime/...h"
  if get_relative_dir().startswith('src'):
    dirs.append('src')
  return dirs

def process_wrapped_args_for_python(wrapped_args, python_script, python_script_target_name, deps):
  # The python script arg should be replaced with the python binary target name
  args = replace_wrapped_input_with_target(wrapped_args, python_script, python_script_target_name)
  python_path = 'PYTHONPATH='
  # Python scripts expect to be able to import other scripts from the same directory, but this
  # doesn't work in the soong execution environment, so we have to explicitly add the script dir.
  # We can't use $(location python_binary) because that is missing the relative path;
  # instead we can use $(location python_script), which happens to work, and we're careful to ensure
  # the script is in the list of sources even when it's used as the command directly.
  python_path += '`dirname $(location %s)`' % python_script
  # Also ensure that scripts generated by dependent custom targets can be imported.
  if len(deps) > 0:
    python_path += ':' + get_python_path(deps)
  args.insert(0, python_path)
  return args

# Create a custom top level build target
# Issues: 
# - python scripts that call python modules from other directories:
#   may pass an absolute path to the module directory which violates the sandbox.
def custom_target(
  target_name: str,
  build_always = False,
  build_always_stale = False,
  build_by_default = False,
  capture = False,
  command = [],
  console = False,
  depend_files = [],
  depends = [],
  depfile = '',
  env = [],
  feed = False,
  input = [],
  install = False,
  install_dir = '',
  install_mode = [],
  install_tag = [],
  output = []
):
  target_name = process_target_name(target_name)
  print('Custom target: ' + target_name)
  assert(type(command) is list)
  program = command[0]
  program_args = []

  # The program can be an array that includes arguments
  if isinstance(program, list):
    for arg in program[1:]:
      assert(type(arg) is str)
      program_args.append(arg)
    program = program[0]

  assert(isinstance(program, Program))
  assert(program.found())

  args = program_args + get_command_args(command, input, output, depends)

  # Python scripts need special handling to find mako library
  python_script = ''
  python_script_target_name = ''
  if program._command.endswith('.py'):
    python_script = program._command
  else:
    for index, arg in enumerate(args):
      if arg.endswith('.py'):
        python_script = arg
        break

  if python_script != '':
    python_script_target_name = target_name + '_' + os.path.basename(python_script)
    srcs = [python_script] + get_list_of_relative_inputs(depend_files)
    print('python_binary_host {', file=gOutputFile)
    print('  name: \"%s\",' % python_script_target_name, file=gOutputFile)
    print('  main: \"%s\",' % python_script, file=gOutputFile)
    print('  srcs: [', file=gOutputFile)
    for src in srcs:
      if src.endswith('.py'):
        print('    \"%s\",' % src, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  libs: ["mako"],', file=gOutputFile)
    # For the PYTHONPATH to work in our genrules command, we need the python interpreter,
    # not a compiled binary, so disable embedded_launcher.
    print('  version: {', file=gOutputFile)
    print('    py3: {', file=gOutputFile)
    print('      embedded_launcher: false,', file=gOutputFile)
    print('    },', file=gOutputFile)
    print('  },', file=gOutputFile)
    print('}', file=gOutputFile)

  relative_inputs = get_list_of_relative_inputs(input)
  # We use python_host_binary instead of calling python scripts directly;
  # however there's an issue with python locating modules in the same directory
  # as the script; to workaround that (see process_wrapped_args_for_python) we
  # ensure the script is listed in the genrule targets.
  if python_script != '' and not python_script in relative_inputs:
    relative_inputs.append(python_script)
  relative_inputs.extend(get_list_of_relative_inputs(depend_files))

  relative_outputs = []
  if isinstance(output, list):
    for file in output:
      relative_outputs.append(get_relative_gen_dir(file))
  else:
    assert(type(output) == str)
    relative_outputs.append(get_relative_gen_dir(output))

  # Soong requires genrule to generate only headers OR non-headers
  generates_h = False
  generates_c = False
  for out in relative_outputs:
    if is_header(out):
      generates_h = True
    if is_source(out):
      generates_c = True

  custom_target = CustomTarget(target_name, relative_outputs, generates_h, generates_c)

  program_command = program._command
  if program_command == 'bison':
    program_command_arg = 'M4=$(location m4) $(location bison)'
  elif program_command == 'flex':
    program_command_arg = 'M4=$(location m4) $(location flex)'
  elif program_command.endswith('.py'):
    program_command_arg = location_wrapper(program_command)
  else:
    program_command_arg = program_command

  program_args = [program_command_arg] + program_args

  if custom_target.generates_h() and custom_target.generates_c():
    # Make a rule for only the headers
    obfuscate_suffix = '.dummy.h'
    wrapped_args = program_args + get_command_args(command, input, output, depends,
      location_wrap=True, obfuscate_output_c=True, obfuscate_suffix=obfuscate_suffix)
    if python_script:
      wrapped_args = process_wrapped_args_for_python(wrapped_args, python_script, python_script_target_name, depends)

    command_line = get_command_line_from_args(wrapped_args)
    if capture:
      command_line += ' > %s' % location_wrapper(get_relative_gen_dir(output))

    print('genrule {', file=gOutputFile)
    print('  name: \"%s\",' % custom_target.target_name_h(), file=gOutputFile)
    print('  srcs: [', file=gOutputFile)
    for src in relative_inputs:
      print('    \"%s\",' % src, file=gOutputFile)
    for dep in depends:
      assert(type(dep) is CustomTarget)
      print('    \":%s\",' % dep.target_name(), file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  out: [', file=gOutputFile)
    for out in relative_outputs:
      if is_source(out):
        out += obfuscate_suffix
        print('    \"%s\",' % out, file=gOutputFile)
        # The scripts may still write to the assumed .c file, ensure the obfuscated file exists
        command_line += '; echo \'//nothing to see here\' > ' + location_wrapper(out)
      else:
        print('    \"%s\",' % out, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  tools: [', file=gOutputFile)
    if python_script_target_name != '':
      print('    \"%s\",' % python_script_target_name, file=gOutputFile)
    if program_command == 'bison' or program_command == 'flex':
      print('    \"%s\",' % "m4", file=gOutputFile)
      print('    \"%s\",' % program_command, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  export_include_dirs: [', file=gOutputFile)
    for dir in get_export_include_dirs():
      print('    \"%s\",' % dir, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  cmd: \"%s\"' % command_line, file=gOutputFile)
    print('}', file=gOutputFile)

    # Make a rule for only the sources
    obfuscate_suffix = '.dummy.c'
    wrapped_args = program_args + get_command_args(command, input, output, depends,
      location_wrap=True, obfuscate_output_h=True, obfuscate_suffix=obfuscate_suffix)
    if python_script:
      wrapped_args = process_wrapped_args_for_python(wrapped_args, python_script, python_script_target_name, depends)

    command_line = get_command_line_from_args(wrapped_args)
    if capture:
      command_line += ' > %s' % location_wrapper(get_relative_gen_dir(output))

    # We keep the header as an output with an obfuscated name because some scripts insist on having
    # --out-h (like vk_entrypoints_gen.py).
    # When Soong depends on this genrule it'll insist on compiling all the outputs, so we replace the 
    # content of all header outputs.
    print('genrule {', file=gOutputFile)
    print('  name: \"%s\",' % custom_target.target_name_c(), file=gOutputFile)
    print('  srcs: [', file=gOutputFile)
    for src in relative_inputs:
      print('    \"%s\",' % src, file=gOutputFile)
    for dep in depends:
      assert(type(dep) is CustomTarget)
      print('    \":%s\",' % dep.target_name(), file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  out: [', file=gOutputFile)
    for out in relative_outputs:
      if is_header(out):
        out += obfuscate_suffix
        print('    \"%s\",' % out, file=gOutputFile)
        # Remove the content because Soong will compile this dummy source file
        command_line += '; echo \'//nothing to see here\' > ' + location_wrapper(out)
      else:
        print('    \"%s\",' % out, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  tools: [', file=gOutputFile)
    if python_script_target_name != '':
      print('    \"%s\",' % python_script_target_name, file=gOutputFile)
    if program_command == 'bison' or program_command == 'flex':
      print('    \"%s\",' % "m4", file=gOutputFile)
      print('    \"%s\",' % program_command, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  cmd: \"%s\"' % command_line, file=gOutputFile)
    print('}', file=gOutputFile)

    return custom_target
  else:
    wrapped_args = program_args + get_command_args(command, input, output, depends,
      location_wrap=True)
    if python_script:
      wrapped_args = process_wrapped_args_for_python(wrapped_args, python_script, python_script_target_name, depends)

    command_line = get_command_line_from_args(wrapped_args)
    if capture:
      command_line += ' > %s' % location_wrapper(get_relative_gen_dir(output))

    print('genrule {', file=gOutputFile)
    print('  name: \"%s\",' % custom_target.target_name(), file=gOutputFile)
    print('  srcs: [', file=gOutputFile)
    for src in relative_inputs:
      print('    \"%s\",' % src, file=gOutputFile)
    for dep in depends:
      assert(type(dep) is CustomTarget)
      print('    \":%s\",' % dep.target_name(), file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  out: [', file=gOutputFile)
    for out in relative_outputs:
      print('    \"%s\",' % out, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  tools: [', file=gOutputFile)
    if python_script_target_name != '':
      print('    \"%s\",' % python_script_target_name, file=gOutputFile)
    if program_command == 'bison' or program_command == 'flex':
      print('    \"%s\",' % "m4", file=gOutputFile)
      print('    \"%s\",' % program_command, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  export_include_dirs: [', file=gOutputFile)
    for dir in get_export_include_dirs():
      print('    \"%s\",' % dir, file=gOutputFile)
    print('  ],', file=gOutputFile)
    print('  cmd: \"%s\"' % command_line, file=gOutputFile)
    print('}', file=gOutputFile)

  return custom_target

def install_data(*files,
  follow_symlinks = False,
  install_dir = '',
  install_mode = [],
  install_tag = '',
  preserve_path = False,
  rename = [],
  sources = []
):
  return

class Executable:
  _name = ''
  def __init__(self, name):
    self._name = name

def executable(
  target_name,
  *source,
  c_args = [],
  cpp_args = [],
  c_pch = '',
  build_by_default = False,
  build_rpath = '',
  d_debug = [],
  d_import_dirs = [],
  d_module_versions = [],
  d_unittest = False,
  dependencies = [],
  export_dynamic = False,
  extra_files = '',
  gnu_symbol_visibility = '',
  gui_app = False,
  implib = False,
  implicit_include_directories = False,
  include_directories = [],
  install = False,
  install_dir = '',
  install_mode = [],
  install_rpath = '',
  install_tag = '',
  link_args = [],
  link_depends = '',
  link_language = '',
  link_whole = [],
  link_with = [],
  name_prefix = '',
  name_suffix = '',
  native = False,
  objects = [],
  override_options = [],
  pie = False,
  rust_crate_type = '',
  rust_dependency_map = {},
  sources = '',
  vala_args = [],
  vs_module_defs = '',
  win_subsystem = '',
):
  return Executable(target_name)

def test(
  name,
  executable,
  args =[],
  depends = [],
  env = [],
  is_parallel = False,
  priority = 0,
  protocol = '',
  should_fail = False,
  suite = '',
  timeout = 0,
  verbose = False,
  workdir = '',
):
  return

def summary(
  entry,
  bool_yn = False,
  list_sep = '',
  section = ''
):
  return
