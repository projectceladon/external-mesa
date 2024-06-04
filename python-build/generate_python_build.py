import getopt
import os
import re
import sys
from meson2python import *


# Converts the given |file_name| from meson to python, and writes the python code
# to the given |file|.  Code is indented by |output_indent|.  When a subdir command
# is found, the meson.build build in that subdir is converted by recursively invoking
# this function.
def process_meson(file, file_name: str, output_indent: str):
  print(
      output_indent
      + '########################################################################################################################',
      file=file,
  )
  print(output_indent + '### Begin conversion from: ' + file_name, file=file)
  print(
      output_indent
      + '########################################################################################################################',
      file=file,
  )

  print('Processing: ' + file_name)
  sys.stdout.flush()

  content = meson2python(file_name)

  inside_literal = False

  for line in content.splitlines():
    # Remove line terminator
    line = line.rstrip()

    # Check for multiline literals.
    # We ignore literals that start and end on one line, though that may cause
    # problems for the line processing below.
    matches = re.findall(r"'''", line)

    literal_delimiter_count = len(matches)

    line_prefix = ''
    line_suffix = ''
    if literal_delimiter_count == 1:
      inside_literal = not inside_literal
      literal_line_split = line.split(r"'''")
      if inside_literal:
        line = literal_line_split[0]
        line_suffix = r"'''" + literal_line_split[1]
      else:
        line_prefix = literal_line_split[0] + r"'''"
        line = literal_line_split[1]
    elif literal_delimiter_count == 0 or literal_delimiter_count == 2:
      if inside_literal:
        # Don't match anything while inside literal
        line_prefix = line
        line = ''
    else:
      exit('Unhandled literal in line: ' + line)

    # Recurse into subdirs
    match = re.match("( *)subdir\('([a-zA-Z0-9_/]+)'\)", line)
    if match != None:
      subdir_output_indent = match.group(1) + output_indent
      current_dir = os.path.dirname(file_name)
      next_dir = os.path.join(current_dir, match.group(2))
      next_file = os.path.join(next_dir, 'meson.build')
      # Ensure the build definitions are aware of the changing directory
      print(
          subdir_output_indent + "set_relative_dir('%s')" % next_dir, file=file
      )
      process_meson(file, next_file, subdir_output_indent)
      print(
          subdir_output_indent + "set_relative_dir('%s')" % current_dir,
          file=file,
      )
      continue

    print(output_indent + line_prefix + line + line_suffix, file=file)

  print(
      output_indent
      + '########################################################################################################################',
      file=file,
  )
  print(output_indent + '### End conversion from: ' + file_name, file=file)
  print(
      output_indent
      + '########################################################################################################################',
      file=file,
  )


def generate(target: str):
  if not (target == 'android' or target == 'fuchsia'):
    exit('Target must be android or fuchsia')

  output_file_name = 'generate_%s_build.py' % target
  print('Writing to: ' + output_file_name)

  with open(output_file_name, 'w') as file:
    print('import sys', file=file)
    print('###', file=file)
    print(
        '########################################################################################################################',
        file=file,
    )
    print('###', file=file)
    print('### Pull in the definitions meson is expecting', file=file)
    print('###', file=file)
    print('from meson_common import *', file=file)
    print('from meson_%s import *' % target, file=file)
    print('###', file=file)
    print(
        '########################################################################################################################',
        file=file,
    )
    print('', file=file)

    print('### Open the build definition file', file=file)
    print('open_output_file()', file=file)

    process_meson(file, 'meson_options.txt', output_indent='')

    print('###', file=file)
    print('### Process command line arguments for setting options', file=file)
    print('if __name__ == "__main__":', file=file)
    print('  for arg in sys.argv[1:]:', file=file)
    print(
        '    match = re.match(r"-D([a-zA-Z0-9-]+)=([a-zA-Z0-9-]*)", arg)',
        file=file,
    )
    print('    if not match:', file=file)
    print(
        '      exit("Invalid arg: %s should be -Doption=value" % arg)',
        file=file,
    )
    print('    set_option(match.group(1), match.group(2))', file=file)
    print('###', file=file)

    print('### These definitions must be inside the module', file=file)
    print('def get_variable(name: str):', file=file)
    print('  return globals()[name]', file=file)
    print('', file=file)

    print('### Load config', file=file)
    print('load_config_file()', file=file)
    print('', file=file)

    process_meson(file, 'meson.build', output_indent='')

    print('### Close the build definition file', file=file)
    print('close_output_file()', file=file)

    file.close()


def usage():
  print('Usage: -t [android|fuchsia]')
  sys.exit()


def main(argv):
  target = 'android'
  try:
    opts, args = getopt.getopt(
        argv,
        'ht:',
        [
            'help',
            'target=',
        ],
    )
    for opt, arg in opts:
      if opt in ('-h', '--help'):
        usage()
      elif opt in ('-t', '--target'):
        target = arg
  except getopt.GetoptError as err:
    usage()

  generate(target)


if __name__ == '__main__':
  main(sys.argv[1:])
