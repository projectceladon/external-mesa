import re
import sys

from lark import *
from lark.visitors import *

# This grammar derived from:
# https://mesonbuild.com/Syntax.html#grammar
meson_grammar = r"""
    ?start: (statement | COMMENT | NEWLINE)*

    ?additive_expression: multiplicative_expression | (additive_expression additive_operator multiplicative_expression)
    additive_operator: PLUS | MINUS
    argument_list: positional_arguments [COMMA keyword_arguments] [COMMA] | keyword_arguments
    array_literal: LBRACKET [expression_list] RBRACKET
    ?assignment_statement: assignment_expression
    assignment_expression: expression assignment_operator expression
    assignment_operator: EQUALS | PLUS_EQUALS
    binary_literal: "0b" BINARY_NUMBER
    BINARY_NUMBER: /[01]+/
    boolean_literal: TRUE | FALSE
    build_definition: (NEWLINE | statement)*
    condition: expression
    ?conditional_expression: logical_or_expression | (logical_or_expression "?" expression ":" expression)
    decimal_literal: DECIMAL_NUMBER
    DECIMAL_NUMBER: /[0-9][0-9]*/
    dictionary_literal: LBRACE [key_value_list] RBRACE
    ?equality_expression: relational_expression | (equality_expression equality_operator relational_expression)
    equality_operator: DOUBLE_EQUAL | NOT_EQUAL
    ?expression: conditional_expression | logical_or_expression
    expression_list: expression (COMMA expression)* COMMA?
    ?expression_statement: expression
    ?function_expression: id_expression LPAREN [argument_list] RPAREN
    hex_literal: "0x" HEX_NUMBER
    HEX_NUMBER: /[a-fA-F0-9]+/
    id_expression: IDENTIFIER
    IDENTIFIER: /[a-zA-Z_][a-zA-Z_0-9]*/
    identifier_list: id_expression (COMMA id_expression)*
    integer_literal: decimal_literal | octal_literal | hex_literal
    iteration_statement: FOREACH identifier_list COLON expression NEWLINE (statement | jump_statement)* ENDFOREACH
    jump_statement: (BREAK | CONTINUE) NEWLINE
    key_value_item: expression COLON expression
    key_value_list: key_value_item (COMMA key_value_item)* COMMA?
    keyword_item: id_expression ":" expression
    keyword_arguments: keyword_item (COMMA keyword_item)* COMMA?
    ?literal: integer_literal | string_literal | boolean_literal | array_literal | dictionary_literal
    ?logical_and_expression: equality_expression | (logical_and_expression AND ["\\"] equality_expression)
    ?logical_or_expression: logical_and_expression | (logical_or_expression OR ["\\"] logical_and_expression)
    ?method_expression: postfix_expression ["\\"] DOT function_expression
    ?multiplicative_expression: unary_expression | (multiplicative_expression multiplicative_operator unary_expression)
    multiplicative_operator: ASTERISK | SLASH | PERCENT
    octal_literal: "0o" OCTAL_NUMBER
    OCTAL_NUMBER: /[0-7]+/
    positional_arguments: expression (COMMA expression)*
    postfix_expression: primary_expression | subscript_expression | function_expression | method_expression
    ?primary_expression: literal | (LPAREN expression RPAREN) | id_expression
    ?relational_expression: additive_expression | (relational_expression relational_operator additive_expression)
    relational_operator: GREATER | LESSTHAN | GREATER_OR_EQUAL | LESSTHAN_OR_EQUAL | IN | (NOT IN)
    selection_statement: IF condition NEWLINE (statement)* (ELIF condition NEWLINE (statement)*)* [ELSE NEWLINE (statement)*] ENDIF
    statement: (expression_statement | selection_statement | iteration_statement | assignment_statement) NEWLINE
    string_literal: STRING_SIMPLE_VALUE | STRING_MULTILINE_VALUE
    ?subscript_expression: postfix_expression LBRACKET expression RBRACKET
    ?unary_expression: postfix_expression | (unary_operator unary_expression)
    unary_operator: NOT | DASH

    AND: /and/
    ASTERISK: /\*/
    BREAK: /break/
    CONTINUE: /continue/
    COLON: /:/
    COMMA: /,/
    DASH: /-/
    DOT: /\./
    DOUBLE_EQUAL: /==/
    EQUALS: /=/
    FOREACH: /foreach/
    GREATER: />/
    GREATER_OR_EQUAL: />=/
    # Raise priorities to avoid elif parsed as a statement
    ELIF.1: /elif/
    ELSE.1: /else/
    ENDIF.1: /endif/
    ENDFOREACH: /endforeach/
    FALSE: /false/
    IF: /if /
    IN: / in /
    LBRACKET: /\[/
    NOT: /not /
    NOT_EQUAL: /!=/
    RBRACKET: /\]/
    LESSTHAN: /</
    LESSTHAN_OR_EQUAL: /<=/
    LBRACE: /{/
    LPAREN: /\(/
    RBRACE: /}/
    RPAREN: /\)/
    OR: /or/
    PERCENT: /%/
    PLUS: /\+/
    MINUS: /-/
    PLUS_EQUALS: /\+=/
    NEWLINE: ( / *\r?\n/ | COMMENT )+
    COMMENT: / *\#.*\n/
    SLASH: /\//
    STRING_SIMPLE_VALUE: /'(.*\\')*.*?'/
    STRING_MULTILINE_VALUE: /'''.*?'''/s
    TRUE: /true/

    %import common.WS

    %ignore WS
    # Comments would be nice to keep, but parsing fails end-of-line comments
    %ignore COMMENT
"""

class TreeToCode(Interpreter):
    indent = ''

    def statement(self, tree):
        str = ''
        for child in tree.children:
            if isinstance(child, Tree):
                str += self.visit(child)
            elif child != None:
                str += child
        return self.indent + str

    def more_indent(self):
        self.indent += '  '

    def less_indent(self):
        self.indent = self.indent[0:len(self.indent) - 2]

    # Ensure spaces around 'and'
    def logical_and_expression(self, tree):
        assert(len(tree.children) == 3)
        lhs = self.visit(tree.children[0])
        rhs = self.visit(tree.children[2])
        return lhs + ' and ' + rhs

    # Ensure spaces around 'or'
    def logical_or_expression(self, tree):
        assert(len(tree.children) == 3)
        lhs = self.visit(tree.children[0])
        rhs = self.visit(tree.children[2])
        return lhs + ' or ' + rhs

    # A ? B : C becomes B if A else C
    def conditional_expression(self, tree):
        assert(len(tree.children) == 3)
        expr = self.visit(tree.children[0])
        first = self.visit(tree.children[1])
        second = self.visit(tree.children[2])
        return first + ' if ' + expr + ' else ' + second

    def assignment_expression(self, tree):
        assert(len(tree.children) == 3)
        lhs = self.visit(tree.children[0])
        operator = self.visit(tree.children[1])
        rhs = self.visit(tree.children[2])
        if operator == '+=' and rhs.startswith('{'):
            # Convert += to |= for dictionaries
            return lhs + ' |= ' + rhs
        elif operator == '+=' and rhs.startswith('\''):
            # Handle literal string append to list or string
            return lhs + ' += ' + '[' + rhs + '] if isinstance(' + lhs + ', list) else ' + rhs
        return lhs + operator + rhs

    def iteration_statement(self, tree):
        foreach = tree.children[0]
        identifier_list = self.visit(tree.children[1])
        colon = tree.children[2]
        id_expression = self.visit(tree.children[3])
        newline = tree.children[4]
        str = 'for ' + identifier_list + ' in ' + id_expression
        str += '.items():\n' if re.search(r',', identifier_list) != None else ':\n'
        self.more_indent()
        lastindex = len(tree.children) - 1
        for child in tree.children[5:lastindex]:
            if isinstance(child, Tree):
                str += self.visit(child)
            elif child != None:
                str += child
        self.less_indent()
        return str

    def selection_statement(self, tree):
        str = ''
        index = 0
        while index < len(tree.children):
            prefix = tree.children[index]
            index = index + 1
            if prefix == None:
                continue
            if isinstance(prefix, Tree):
                exit("unexpected prefix: " + prefix.pretty())
            if re.match(r" *endif", prefix) != None:
                break

            if re.match(r"if", prefix) != None:
                condition = self.visit(tree.children[index])
                index = index + 1
                # Skip indent here because all statements are prepended with the indentation
                str += 'if ' + condition + ':\n'
            elif re.match(r"elif", prefix) != None:
                condition = self.visit(tree.children[index])
                index = index + 1
                str += self.indent + 'elif ' + condition + ':\n'
            elif re.match(r"else", prefix) != None:
                str += self.indent + 'else:\n'
            else:
                exit("Not a prefix: " + prefix)

            newline = tree.children[index]
            index = index + 1

            statement_count = 0
            self.more_indent()
            while index < len(tree.children):
                statement = tree.children[index]
                if not isinstance(statement, Tree):
                    break
                str += self.visit(statement)
                index = index + 1
                statement_count = statement_count + 1
            if statement_count == 0:
                str += self.indent + 'noop()\n'
            self.less_indent()

        return str

    def postfix_expression(self, tree):
        str = ''
        for child in tree.children:
            if isinstance(child, Tree):
                subtree = self.visit(child)
                subtree = re.sub(r"(.+)\.to_int\(\)", r"int(\g<1>)", subtree)
                subtree = re.sub(r"(.+)\.to_string\(\)", r"str(\g<1>)", subtree)
                subtree = re.sub(r"(.+)\.length\(\)", r"len(\g<1>)", subtree)
                subtree = re.sub(r"(.+)\.to_upper\(\)", r"\g<1>.upper()", subtree)
                subtree = re.sub(r"(.+)\.underscorify\(\)", r"\g<1>.replace('.', '_').replace('/', '_')", subtree)
                str += subtree
            elif child != None:
                str += child
        return str

    def function_expression(self, tree):
        assert(len(tree.children) == 4)
        identifier = self.visit(tree.children[0])
        if identifier == 'import':
            identifier = 'module_import'
        lparen = tree.children[1]
        args = self.visit(tree.children[2]) if isinstance(tree.children[2], Tree) else ''
        rparen = tree.children[3]
        if identifier == 'contains':
            return 'count' + lparen + args + rparen + ' > 0'
        return identifier + lparen + args + rparen

    def multiplicative_expression(self, tree):
        assert(len(tree.children) == 3)
        lhs = self.visit(tree.children[0])
        operator = self.visit(tree.children[1])
        rhs = self.visit(tree.children[2])
        # Slash used mostly to concatenate strings
        if operator == '/':
            return '(' + lhs + ' + ' + rhs + ') if isinstance(' + lhs + ', str) else (' + lhs + ' / ' + rhs + ')'
        return lhs + operator + rhs

    # Switch from colon to equals
    def keyword_item(self, tree):
        str = ''
        id = self.visit(tree.children[0])
        args = self.visit(tree.children[1])
        return id + '=' + args

    def boolean_literal(self, tree):
        assert(len(tree.children) == 1)
        value = tree.children[0]
        if value == 'true':
            return 'True'
        elif value == 'false':
            return 'False'
        exit('Unhandled value: ' + value)

    def string_literal(self, tree):
        assert(len(tree.children) == 1)
        string = tree.children[0]
        string = re.sub(r"(@[0-9]@)", r"{}", string)
        return string

    def __default__(self, tree):
        str = ''
        for child in tree.children:
            if isinstance(child, Tree):
                str += self.visit(child)
            elif child != None:
                str += child
        return str

# Converts the given file from meson to python and returns the content as a string
def meson2python(file_name):
    meson_parser = Lark(meson_grammar, parser='earley',
                   # Using the basic lexer isn't required, and isn't usually recommended.
                   # But, it's good enough for JSON, and it's slightly faster.
                   #lexer='basic',
                   # Disabling propagate_positions and placeholders slightly improves speed
                   #propagate_positions=False,
                   #maybe_placeholders=False,
                   # Using an internal transformer is faster and more memory efficient
                   #transformer=TreeToPython(),
                   #debug=True
                   )
    with open(file_name) as f:
        tree = meson_parser.parse(f.read())
        #transformer = TreeToPython()
        #python_tree = transformer.transform(tree)
        #print(tree.pretty())
        code = TreeToCode().visit(tree)
        #print(code)
        return code

if __name__ == '__main__':
    meson2python(sys.argv[1])
