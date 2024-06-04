import os
import re
import meson_impl as impl


class Compiler(impl.Compiler):

  def is_symbol_supported(self, header: str, symbol: str):
    if header == 'sys/sysmacros.h':
      return False
    return super().is_symbol_supported(header, symbol)

  def is_function_supported(self, function):
    if function == 'getrandom' or function == 'memfd_create':
      return False
    return super().is_function_supported(function)

  def is_link_supported(self, name):
    if name == 'strtod has locale support':
      return False
    return super().is_link_supported(name)

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


class PkgconfigModule:

  def generate(self, lib, name='', description='', extra_cflags=[]):
    impl.fprint('# package library')
    impl.fprint('cc_library(')
    impl.fprint('  name = "%s",' % name)
    assert type(lib) == impl.StaticLibrary
    impl.fprint('  deps = [ "%s" ],' % lib.target_name)
    # This line tells Bazel to use -isystem for targets that depend on this one,
    # which is needed for clients that include package headers with angle brackets.
    impl.fprint('  includes = [ "." ],')
    impl.fprint('  visibility = [ "//visibility:public" ],')
    impl.fprint(')')


# These globals exposed by the meson API
meson = impl.Meson(Compiler())
host_machine = impl.Machine('fuchsia')
build_machine = impl.Machine('linux')

_gIncludeDirectories = dict()


def open_output_file():
  impl.open_output_file(r'BUILD.bazel')


def close_output_file():
  impl.close_output_file()


def load_config_file():
  impl.load_config_file('python-build/generate_fuchsia_build.config')


def include_directories(*paths, is_system=False):
  dirs = impl.get_include_dirs(paths)
  name = dirs[0].replace('/', '_')
  if is_system:
    name += '_sys'

  global _gIncludeDirectories
  if name not in _gIncludeDirectories:
    # Mesa likes to include files at a level down from the include path,
    # so ensure Bazel allows this by including all of the possibilities.
    # Hopefully we don't need to go two or more levels down.
    # Can't repeat entries so use a set.
    dir_set = set()
    for dir in dirs:
      dir = os.path.normpath(dir)
      dir_set.add(dir)
      subdirs = os.listdir(dir)
      for subdir in subdirs:
        subdir = os.path.join(dir, subdir)
        if os.path.isdir(subdir):
          dir_set.add(subdir)

    impl.fprint('# header library')
    impl.fprint('cc_library(')
    impl.fprint('  name = "%s",' % name)
    impl.fprint('  hdrs = []')
    for dir in dir_set:
      impl.fprint(
          '    + glob(["%s"])' % os.path.normpath(os.path.join(dir, '*.h'))
      )
      # C files included because...
      impl.fprint(
          '    + glob(["%s"])' % os.path.normpath(os.path.join(dir, '*.c'))
      )
    impl.fprint('  ,')
    impl.fprint('  visibility = [ "//visibility:public" ],')
    impl.fprint(')')
    _gIncludeDirectories[name] = impl.IncludeDirectories(name, dirs)

  return _gIncludeDirectories[name]


def module_import(name: str):
  if name == 'python':
    return impl.PythonModule()
  if name == 'pkgconfig':
    return PkgconfigModule()
  exit('Unhandled module: ' + name)


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
    native=False
):
  for name in names:
    if name == 'zlib':
      return impl.Dependency(
          name,
          version,
          targets=[
              impl.DependencyTarget(
                  '@zlib//:zlib',
                  impl.DependencyTargetType.STATIC_LIBRARY,
              ),
          ],
          found=True,
      )

    if name == 'libmagma':
      return impl.Dependency(
          name,
          targets=[
              impl.DependencyTarget(
                  '@fuchsia_sdk//pkg/magma_client',
                  impl.DependencyTargetType.STATIC_LIBRARY,
              )
          ],
          found=True,
      )

    if name == 'libmagma_virt':
      return impl.Dependency(name, version, found=True)

  # common deps
  return impl.dependency(*names)


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
    win_subsystem=''
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
      static=True,
      c_args=c_args,
      cpp_args=cpp_args,
      dependencies=dependencies,
      include_directories=include_directories,
      link_with=link_with,
      link_whole=link_whole,
  )

  return impl.StaticLibrary(
      target_name, link_with=link_with, link_whole=link_whole
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
    win_subsystem=''
):
  print('shared_library: ' + target_name)

  link_with = impl.get_linear_list([link_with])
  link_whole = impl.get_linear_list([link_whole])

  _emit_builtin_target(
      target_name,
      *source,
      static=False,
      c_args=c_args,
      cpp_args=cpp_args,
      dependencies=dependencies,
      include_directories=include_directories,
      link_with=link_with,
      link_whole=link_whole,
  )
  return impl.SharedLibrary(target_name)


def library(
    target_name,
    *sources,
    c_args=[],
    install=False,
    link_args=[],
    vs_module_defs='',
    version=''
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


def _get_sources(input_sources, sources, generated_sources, generated_headers):
  for source in input_sources:
    if type(source) is list:
      _get_sources(source, sources, generated_sources, generated_headers)
    elif type(source) is impl.CustomTarget:
      generated_sources.add(source.target_name())
      for out in source._outputs:
        sources.add(out)
    elif type(source) is impl.CustomTargetItem:
      target = source.target
      generated_sources.add(target.target_name())
      sources.add(target._outputs[source.index])
    elif type(source) is impl.File:
      sources.add(source.name)
    elif type(source) is str:
      sources.add(impl.get_relative_dir(source))
    else:
      exit('source type not handled: ' + str(type(source)))


def _emit_builtin_target(
    target_name,
    *source,
    static=False,
    c_args=[],
    cpp_args=[],
    dependencies=[],
    include_directories=[],
    link_with=[],
    link_whole=[]
):
  impl.fprint('cc_library(')
  target_name_so = target_name
  target_name = target_name if static else '_' + target_name
  impl.fprint('  name = "%s",' % target_name)

  srcs = set()
  generated_sources = set()
  generated_headers = set()
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
      if type(src) == impl.CustomTargetItem:
        generated_headers.add(src.target.target_name_h())
      elif type(src) == impl.CustomTarget:
        generated_headers.add(src.target_name_h())
      else:
        exit('Unhandled source dependency: ' + str(type(src)))
    include_directories.extend(
        impl.get_include_directories(dep.include_directories)
    )
    for target in impl.get_static_libs([dep.link_with]):
      assert type(target) == impl.StaticLibrary
      static_libs.append(target.target_name)
    for target in impl.get_linear_list([dep.link_whole]):
      assert type(target) == impl.StaticLibrary
      whole_static_libs.append(target.target_name)
    for target in dep.targets:
      if target.target_type == impl.DependencyTargetType.SHARED_LIBRARY:
        shared_libs.append(target.target_name)
      elif target.target_type == impl.DependencyTargetType.STATIC_LIBRARY:
        static_libs.append(target.target_name)
      elif target.target_type == impl.DependencyTargetType.HEADER_LIBRARY:
        exit('Header library not supported')

  for target in impl.get_static_libs(link_with):
    if type(target) == impl.StaticLibrary:
      static_libs.append(target.target_name)
    else:
      exit('Unhandled link_with type: ' + str(type(target)))

  for target in impl.get_whole_static_libs(link_whole):
    if type(target) == impl.StaticLibrary:
      whole_static_libs.append(target.target_name())
    else:
      exit('Unhandled link_whole type: ' + str(type(target)))

  # Android turns all warnings into errors but thirdparty projects typically can't handle that
  cflags = ['-Wno-error'] + impl.get_linear_list(
      impl.get_project_cflags() + c_args
  )
  cppflags = ['-Wno-error'] + impl.get_linear_list(
      impl.get_project_cppflags() + cpp_args
  )

  has_c_files = False
  impl.fprint('  srcs = [')
  for src in srcs:
    if src.endswith('.c'):
      has_c_files = True
    impl.fprint('    "%s",' % src)
  impl.fprint('  ],')

  # For Bazel to find headers in the "current area", we have to include
  # not just the headers in the relative dir, but also relative subdirs
  # that aren't themselves areas (containing meson.build).
  # We only look one level deep.
  local_include_dirs = [impl.get_relative_dir()]
  local_entries = (
      []
      if impl.get_relative_dir() == ''
      else os.listdir(impl.get_relative_dir())
  )
  for entry in local_entries:
    entry = os.path.join(impl.get_relative_dir(), entry)
    if os.path.isdir(entry):
      subdir_entries = os.listdir(entry)
      if not 'meson.build' in subdir_entries:
        local_include_dirs.append(entry)

  impl.fprint(
      '  # hdrs are our files that might be included; listed here so Bazel will'
      ' allow them to be included'
  )
  impl.fprint('  hdrs = []')
  for hdr in local_include_dirs:
    impl.fprint(
        '    + glob(["%s"])' % os.path.normpath(os.path.join(hdr, '*.h'))
    )

  impl.fprint('  ,')

  impl.fprint('  copts = [')
  # Needed for subdir sources
  impl.fprint('    "-I %s",' % impl.get_relative_dir())
  impl.fprint('    "-I $(GENDIR)/%s",' % impl.get_relative_dir())
  for inc in include_directories:
    for dir in inc.dirs:
      impl.fprint('    "-I %s",' % dir)
      impl.fprint('    "-I $(GENDIR)/%s",' % dir)

  if has_c_files:
    for arg in cflags:
      # Double escape double quotations
      arg = re.sub(r'"', '\\\\\\"', arg)
      impl.fprint("    '%s'," % arg)
  else:
    for arg in cppflags:
      # Double escape double quotations
      arg = re.sub(r'"', '\\\\\\"', arg)
      impl.fprint("    '%s'," % arg)

  impl.fprint('  ],')

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

  impl.fprint('  deps = [')
  for bdep in bazel_deps:
    impl.fprint('    "%s",' % bdep)
  impl.fprint('  ],')

  impl.fprint('  target_compatible_with = [ "@platforms//os:fuchsia" ],')
  impl.fprint('  visibility = [ "//visibility:public" ],')
  impl.fprint(')')

  if not static:
    impl.fprint('cc_shared_library(')
    impl.fprint('  name = "%s",' % target_name_so)
    impl.fprint('  deps = [')
    impl.fprint('    "%s",' % target_name)
    impl.fprint('  ],')
    impl.fprint(')')


def _process_target_name(name):
  name = re.sub(r'[\[\]]', '', name)
  return name


# Returns string or list of string
def _location_wrapper(name_or_list):
  if isinstance(name_or_list, list):
    ret = []
    for i in name_or_list:
      ret.append('$(location %s)' % i)
    return ret

  assert isinstance(name_or_list, str)
  return '$(location %s)' % name_or_list


def _is_header(name):
  return re.search(r'\.h[xx|pp]?$', name) != None


def _is_source(name):
  return re.search(r'\.c[c|xx|pp]?$', name) != None


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
  for command_item in command[1:]:
    if isinstance(command_item, list):
      for item in command_item:
        assert type(item) == impl.File
        args.append(
            _location_wrapper(item.name) if location_wrap else item.name
        )
      continue

    assert type(command_item) is str
    match = re.match(r'@INPUT([0-9])?@', command_item)
    if match != None:
      if match.group(1) != None:
        input_index = int(match.group(1))
        input_list = impl.get_list_of_relative_inputs(input[input_index])
      else:
        input_list = impl.get_list_of_relative_inputs(input)
      args.extend(
          _location_wrapper(input_list) if location_wrap else input_list
      )
      continue

    match = re.match(r'(.*?)@OUTPUT([0-9])?@', command_item)
    if match != None:
      output_list = []
      if match.group(2) != None:
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
              match.group(1) + '$(GENDIR)/%s' % out if location_wrap else out
          )
        else:
          if _is_source(out) and obfuscate_output_c:
            out += obfuscate_suffix
          args.append(
              match.group(1) + _location_wrapper(out) if location_wrap else out
          )
      continue

    # Assume used to locate generated outputs
    match = re.match(r'(.*?)@CURRENT_BUILD_DIR@', command_item)
    if match != None:
      args.append('$(GENDIR)' + '/' + impl.get_relative_dir())
      continue

    match = re.match(r'@PROJECT_BUILD_ROOT@(.*)', command_item)
    if match != None:
      args.append('$(GENDIR)%s' % match.group(1))
      continue

    # A plain arg
    if ' ' in command_item:
      args.append("'%s'" % command_item)
    else:
      args.append(command_item)

  return args


def _process_wrapped_args_for_python(
    wrapped_args, python_script, python_script_target_name, deps
):
  # The python script arg should be replaced with the python binary target name
  args = impl.replace_wrapped_input_with_target(
      wrapped_args, python_script, python_script_target_name
  )
  return args


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
    python_script_target_name = (
        target_name + '_' + os.path.basename(python_script)
    )
    srcs = [python_script] + impl.get_list_of_relative_inputs(depend_files)
    impl.fprint('py_binary(')
    impl.fprint('  name = "%s",' % python_script_target_name)
    impl.fprint('  main = "%s",' % python_script)
    impl.fprint('  srcs = [')
    for src in srcs:
      if src.endswith('.py'):
        impl.fprint('    "%s",' % src)
    impl.fprint('  ],')
    # So scripts can find other scripts
    impl.fprint('  imports = [')
    for src in srcs:
      if src.endswith('.py'):
        impl.fprint('    "%s",' % os.path.dirname(src))
    impl.fprint('  ],')
    impl.fprint(')')

  relative_inputs = impl.get_list_of_relative_inputs(input)
  # We use python_host_binary instead of calling python scripts directly;
  # however there's an issue with python locating modules in the same directory
  # as the script; to workaround that (see process_wrapped_args_for_python) we
  # ensure the script is listed in the genrule targets.
  if python_script != '' and not python_script in relative_inputs:
    relative_inputs.append(python_script)
  relative_inputs.extend(impl.get_list_of_relative_inputs(depend_files))

  relative_outputs = []
  if isinstance(output, list):
    for file in output:
      relative_outputs.append(impl.get_relative_gen_dir(file))
  else:
    assert type(output) == str
    relative_outputs.append(impl.get_relative_gen_dir(output))

  custom_target = impl.CustomTarget(target_name, relative_outputs)

  program_command = program.command
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

  impl.fprint('genrule(')
  impl.fprint('  name = "%s",' % custom_target.target_name())
  impl.fprint('  srcs = [')
  for src in relative_inputs:
    impl.fprint('    "%s",' % src)
  for dep in depends:
    assert type(dep) is impl.CustomTarget
    impl.fprint('    ":%s",' % dep.target_name())
  impl.fprint('  ],')
  impl.fprint('  outs = [')
  for out in relative_outputs:
    impl.fprint('    "%s",' % out)
  impl.fprint('  ],')
  if python_script_target_name != '':
    impl.fprint('  tools = [ "%s" ],' % python_script_target_name)
  impl.fprint('  cmd = "%s"' % command_line)
  impl.fprint(')')

  return custom_target
