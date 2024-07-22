import os
import re
import meson_impl as impl


class Compiler(impl.Compiler):

  def is_symbol_supported(self, header: str, symbol: str):
    return super().is_symbol_supported(header, symbol)

  def is_function_supported(self, function):
    return super().is_function_supported(function)

  def is_link_supported(self, name):
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
    return


# These globals exposed by the meson API
meson = impl.Meson(Compiler())
host_machine = impl.Machine('android')
build_machine = impl.Machine('linux')


def open_output_file():
  impl.open_output_file(r'Android.bp')


def close_output_file():
  impl.close_output_file()


def load_config_file():
  impl.load_config_file('python-build/generate_android_build.config')


def include_directories(*paths, is_system=False):
  return impl.IncludeDirectories('', impl.get_include_dirs(paths))


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
          targets=[
              impl.DependencyTarget(
                  'libz', impl.DependencyTargetType.STATIC_LIBRARY
              )
          ],
          version=version,
          found=True,
      )

    if name == 'hardware':
      return impl.Dependency(
          name,
          targets=[
              impl.DependencyTarget(
                  'libhardware', impl.DependencyTargetType.SHARED_LIBRARY
              ),
              impl.DependencyTarget(
                  'hwvulkan_headers', impl.DependencyTargetType.HEADER_LIBRARY
              ),
          ],
          version=version,
          found=True,
      )

    if name == 'cutils' or name == 'log' or name == 'nativewindow':
      return impl.Dependency(
          name,
          targets=[
              impl.DependencyTarget(
                  'lib' + name, impl.DependencyTargetType.SHARED_LIBRARY
              )
          ],
          version=version,
          found=True,
      )

    if name == 'sync':
      return impl.Dependency(
          name,
          targets=[
              impl.DependencyTarget(
                  'lib' + name, impl.DependencyTargetType.STATIC_LIBRARY
              )
          ],
          version=version,
          found=True,
      )

    if name == 'android.hardware.graphics.mapper':
      assert version == '>= 4.0'
      return impl.Dependency(
          name,
          targets=[
              impl.DependencyTarget(
                  'libgralloctypes', impl.DependencyTargetType.STATIC_LIBRARY
              ),
              impl.DependencyTarget(
                  'android.hardware.graphics.mapper@4.0',
                  impl.DependencyTargetType.STATIC_LIBRARY,
              ),
              impl.DependencyTarget(
                  'libhidlbase', impl.DependencyTargetType.SHARED_LIBRARY
              ),
              impl.DependencyTarget(
                  'libutils', impl.DependencyTargetType.SHARED_LIBRARY
              ),
          ],
          version=version,
          found=True,
      )

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
    win_subsystem=''
):
  print('static_library: ' + target_name)

  link_with = impl.get_linear_list(link_with)
  link_whole = impl.get_linear_list(link_whole)

  # Emitting link_with/link_whole into a static library isn't useful for building,
  # shared libraries must specify the whole chain of dependencies.
  # Leaving them here for traceability though maybe it's less confusing to remove them?
  _emit_builtin_target(
      'cc_library_static',
      target_name,
      *source_files,
      c_args=c_args,
      cpp_args=cpp_args,
      dependencies=dependencies,
      include_directories=include_directories,
      link_with=link_with,
      link_whole=link_whole
  )

  return impl.StaticLibrary(
      target_name, link_with=link_with, link_whole=link_whole
  )


def _get_sources(input_sources, sources, generated_sources, generated_headers):
  for source in input_sources:
    if type(source) is list:
      _get_sources(source, sources, generated_sources, generated_headers)
    elif type(source) is impl.CustomTarget:
      if source.generates_h():
        generated_headers.add(source.target_name_h())
      if source.generates_c():
        generated_sources.add(source.target_name_c())
    elif type(source) is impl.CustomTargetItem:
      source = source.target
      if source.generates_h():
        generated_headers.add(source.target_name_h())
      if source.generates_c():
        generated_sources.add(source.target_name_c())
    elif type(source) is impl.File:
      sources.add(source.name)
    elif type(source) is str:
      sources.add(impl.get_relative_dir(source))
    else:
      exit('source type not handled: ' + str(type(source)))


def _emit_builtin_target(
    builtin_type_name,
    target_name,
    *source,
    c_args=[],
    cpp_args=[],
    dependencies=[],
    include_directories=[],
    link_with=[],
    link_whole=[]
):
  impl.fprint('%s {' % builtin_type_name)
  impl.fprint('  name: "%s",' % target_name)

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
      if type(src) == impl.CustomTargetItem:
        generated_headers.add(src.target.target_name_h())
      elif type(src) == impl.CustomTarget:
        generated_headers.add(src.target_name_h())
      else:
        exit('Unhandled source dependency: ' + str(type(src)))
    include_directories.extend(impl.get_include_dirs(dep.include_directories))
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
        header_libs.append(target.target_name)

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

  impl.fprint('  srcs: [')
  for src in srcs:
    # Filter out header files
    if not src.endswith('.h'):
      impl.fprint('    "%s",' % src)
  impl.fprint('  ],')

  impl.fprint('  generated_headers: [')
  for generated in generated_headers:
    impl.fprint('    "%s",' % generated)
  impl.fprint('  ],')

  impl.fprint('  generated_sources: [')
  for generated in generated_sources:
    impl.fprint('    "%s",' % generated)
  impl.fprint('  ],')

  for arg in impl.get_project_options():
    if arg.name == 'c_std':
      impl.fprint('  c_std: "%s",' % arg.value)
    elif arg.name == 'cpp_std':
      impl.fprint('  cpp_std: "%s",' % arg.value)

  impl.fprint('  conlyflags: [')
  for arg in cflags:
    # Escape double quotations
    arg = re.sub(r'"', '\\"', arg)
    impl.fprint('    "%s",' % arg)
  impl.fprint('  ],')
  impl.fprint('  cppflags: [')
  for arg in cppflags:
    # Escape double quotations
    arg = re.sub(r'"', '\\"', arg)
    impl.fprint('    "%s",' % arg)
  impl.fprint('  ],')

  impl.fprint('  local_include_dirs: [')
  for inc in include_directories:
    impl.fprint('    "%s",' % inc)
  impl.fprint('  ],')

  impl.fprint('  static_libs: [')
  for lib in static_libs:
    impl.fprint('    "%s",' % lib)
  impl.fprint('  ],')

  impl.fprint('  whole_static_libs: [')
  for lib in whole_static_libs:
    impl.fprint('    "%s",' % lib)
  impl.fprint('  ],')

  impl.fprint('  shared_libs: [')
  for lib in shared_libs:
    impl.fprint('    "%s",' % lib)
  impl.fprint('  ],')

  impl.fprint('  header_libs: [')
  for lib in header_libs:
    impl.fprint('    "%s",' % lib)
  impl.fprint('  ],')

  impl.fprint('}')


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
      'cc_library_shared',
      target_name,
      *source,
      c_args=c_args,
      cpp_args=cpp_args,
      dependencies=dependencies,
      include_directories=include_directories,
      link_with=link_with,
      link_whole=link_whole
  )
  return impl.SharedLibrary(target_name)


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
              match.group(1) + '$(genDir)/%s' % out if location_wrap else out
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
      args.append('$(genDir)' + '/' + impl.get_relative_dir())
      continue

    # A plain arg
    if ' ' in command_item:
      args.append("'%s'" % command_item)
    else:
      args.append(command_item)

  return args


# Assume dependencies of custom targets are custom targets that are generating
# python scripts; build a python path of their locations.
def _get_python_path(deps):
  python_path = ''
  for index, dep in enumerate(deps):
    assert type(dep) == impl.CustomTarget
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
  python_path = 'PYTHONPATH='
  # Python scripts expect to be able to import other scripts from the same directory, but this
  # doesn't work in the soong execution environment, so we have to explicitly add the script dir.
  # We can't use $(location python_binary) because that is missing the relative path;
  # instead we can use $(location python_script), which happens to work, and we're careful to ensure
  # the script is in the list of sources even when it's used as the command directly.
  python_path += '`dirname $(location %s)`' % python_script
  # Also ensure that scripts generated by dependent custom targets can be imported.
  if len(deps) > 0:
    python_path += ':' + _get_python_path(deps)
  args.insert(0, python_path)
  return args


# Create a custom top level build target
# Issues:
# - python scripts that call python modules from other directories:
#   may pass an absolute path to the module directory which violates the sandbox.
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
    impl.fprint('python_binary_host {')
    impl.fprint('  name: "%s",' % python_script_target_name)
    impl.fprint('  main: "%s",' % python_script)
    impl.fprint('  srcs: [')
    for src in srcs:
      if src.endswith('.py'):
        impl.fprint('    "%s",' % src)
    impl.fprint('  ],')
    impl.fprint('  libs: ["mako"],')
    # For the PYTHONPATH to work in our genrules command, we need the python interpreter,
    # not a compiled binary, so disable embedded_launcher.
    impl.fprint('  version: {')
    impl.fprint('    py3: {')
    impl.fprint('      embedded_launcher: false,')
    impl.fprint('    },')
    impl.fprint('  },')
    impl.fprint('}')

  relative_inputs = impl.get_list_of_relative_inputs(input)
  # We use python_host_binary instead of calling python scripts directly;
  # however there's an issue with python locating modules in the same directory
  # as the script; to workaround that (see _process_wrapped_args_for_python) we
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

  # Soong requires genrule to generate only headers OR non-headers
  generates_h = False
  generates_c = False
  for out in relative_outputs:
    if _is_header(out):
      generates_h = True
    if _is_source(out):
      generates_c = True

  custom_target = impl.CustomTarget(
      target_name, relative_outputs, generates_h, generates_c
  )

  program_command = program.command
  if program_command == 'bison':
    program_command_arg = 'M4=$(location m4) $(location bison)'
  elif program_command == 'flex':
    program_command_arg = 'M4=$(location m4) $(location flex)'
  elif program_command.endswith('.py'):
    program_command_arg = _location_wrapper(program_command)
  else:
    program_command_arg = program_command

  program_args = [program_command_arg] + program_args

  if custom_target.generates_h() and custom_target.generates_c():
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

    impl.fprint('genrule {')
    impl.fprint('  name: "%s",' % custom_target.target_name_h())
    impl.fprint('  srcs: [')
    for src in relative_inputs:
      impl.fprint('    "%s",' % src)
    for dep in depends:
      assert type(dep) is CustomTarget
      impl.fprint('    ":%s",' % dep.target_name())
    impl.fprint('  ],')
    impl.fprint('  out: [')
    for out in relative_outputs:
      if _is_source(out):
        out += obfuscate_suffix
        impl.fprint('    "%s",' % out)
        # The scripts may still write to the assumed .c file, ensure the obfuscated file exists
        command_line += "; echo '//nothing to see here' > " + _location_wrapper(
            out
        )
      else:
        impl.fprint('    "%s",' % out)
    impl.fprint('  ],')
    impl.fprint('  tools: [')
    if python_script_target_name != '':
      impl.fprint('    "%s",' % python_script_target_name)
    if program_command == 'bison' or program_command == 'flex':
      impl.fprint('    "%s",' % 'm4')
      impl.fprint('    "%s",' % program_command)
    impl.fprint('  ],')
    impl.fprint('  export_include_dirs: [')
    for dir in _get_export_include_dirs():
      impl.fprint('    "%s",' % dir)
    impl.fprint('  ],')
    impl.fprint('  cmd: "%s"' % command_line)
    impl.fprint('}')

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
      command_line += ' > %s' % _location_wrapper(get_relative_gen_dir(output))

    # We keep the header as an output with an obfuscated name because some scripts insist on having
    # --out-h (like vk_entrypoints_gen.py).
    # When Soong depends on this genrule it'll insist on compiling all the outputs, so we replace the
    # content of all header outputs.
    impl.fprint('genrule {')
    impl.fprint('  name: "%s",' % custom_target.target_name_c())
    impl.fprint('  srcs: [')
    for src in relative_inputs:
      impl.fprint('    "%s",' % src)
    for dep in depends:
      assert type(dep) is CustomTarget
      impl.fprint('    ":%s",' % dep.target_name())
    impl.fprint('  ],')
    impl.fprint('  out: [')
    for out in relative_outputs:
      if _is_header(out):
        out += obfuscate_suffix
        impl.fprint('    "%s",' % out)
        # Remove the content because Soong will compile this dummy source file
        command_line += "; echo '//nothing to see here' > " + _location_wrapper(
            out
        )
      else:
        impl.fprint('    "%s",' % out)
    impl.fprint('  ],')
    impl.fprint('  tools: [')
    if python_script_target_name != '':
      impl.fprint('    "%s",' % python_script_target_name)
    if program_command == 'bison' or program_command == 'flex':
      impl.fprint('    "%s",' % 'm4')
      impl.fprint('    "%s",' % program_command)
    impl.fprint('  ],')
    impl.fprint('  cmd: "%s"' % command_line)
    impl.fprint('}')

    return custom_target
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

    impl.fprint('genrule {')
    impl.fprint('  name: "%s",' % custom_target.target_name())
    impl.fprint('  srcs: [')
    for src in relative_inputs:
      impl.fprint('    "%s",' % src)
    for dep in depends:
      assert type(dep) is impl.CustomTarget
      impl.fprint('    ":%s",' % dep.target_name())
    impl.fprint('  ],')
    impl.fprint('  out: [')
    for out in relative_outputs:
      impl.fprint('    "%s",' % out)
    impl.fprint('  ],')
    impl.fprint('  tools: [')
    if python_script_target_name != '':
      impl.fprint('    "%s",' % python_script_target_name)
    if program_command == 'bison' or program_command == 'flex':
      impl.fprint('    "%s",' % 'm4')
      impl.fprint('    "%s",' % program_command)
    impl.fprint('  ],')
    impl.fprint('  export_include_dirs: [')
    for dir in _get_export_include_dirs():
      impl.fprint('    "%s",' % dir)
    impl.fprint('  ],')
    impl.fprint('  cmd: "%s"' % command_line)
    impl.fprint('}')

  return custom_target
