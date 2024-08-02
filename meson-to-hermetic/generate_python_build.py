import getopt
import os
import re
import sys
from meson2python import meson2python
from jinja2 import Environment, FileSystemLoader
from pathlib import Path

environment = Environment(
    loader=FileSystemLoader(Path(__file__).parent.resolve() / 'templates/')
)
generator_template = environment.get_template('generate_python_build.txt')


# Converts the given |file_name| from meson to python, and writes the python code
# to the given |file|.  Code is indented by |output_indent|.  When a subdir command
# is found, the meson.build build in that subdir is converted by recursively invoking
# this function.
def process_meson(file_name: str, output_indent: str = ''):
    python_code = ''
    python_code += (
        output_indent
        + '########################################################################################################################'
    )
    python_code += '\n' + output_indent + f'### Begin conversion from: {file_name}'
    python_code += (
        '\n'
        + output_indent
        + '########################################################################################################################'
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
        if match is not None:
            subdir_output_indent = match.group(1) + output_indent
            current_dir = os.path.dirname(file_name)
            next_dir = os.path.join(current_dir, match.group(2))
            next_file = os.path.join(next_dir, 'meson.build')
            # Ensure the build definitions are aware of the changing directory
            python_code += f"\n{subdir_output_indent}set_relative_dir('{next_dir}')"
            python_code += '\n' + process_meson(next_file, subdir_output_indent)
            python_code += f"\n{subdir_output_indent}set_relative_dir('{current_dir}')"
            continue

        python_code += f'\n{output_indent + line_prefix + line + line_suffix}'
    python_code += (
        '\n'
        + output_indent
        + '########################################################################################################################'
    )
    python_code += '\n' + output_indent + f'### End conversion from: {file_name}'
    python_code += (
        '\n'
        + output_indent
        + '########################################################################################################################'
    )
    return python_code


def generate(target: str):
    if not (target == 'android' or target == 'fuchsia'):
        exit('Target must be android or fuchsia')

    output_file_name = 'generate_%s_build.py' % target
    print('Writing to: ' + output_file_name)

    meson_options = process_meson('meson_options.txt')
    meson_build = process_meson('meson.build')
    content = generator_template.render(
        target=target,
        meson_options=meson_options,
        meson_build=meson_build,
    )
    with open(output_file_name, 'w') as file:
        file.write(content)


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
    except getopt.GetoptError as _:
        usage()

    generate(target)


if __name__ == '__main__':
    main(sys.argv[1:])
