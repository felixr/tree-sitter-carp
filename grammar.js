const PREC = {
  call: 14,
}

const op = [
  '+', '-', '/', '*', '%', '<', '>',
  '=', '<=', '>=', '/=', 'and', 'or', 'not', 'and*', 'or*'
]

const important_str = [
  'let-do', 'while-do', 'defn-do', 'break', 'for', 'when',
  'cond', 'unless', 'case', 'foreach', 'defdynamic', 'load'
]

const core_types = [
  'Bool',
  'Char',
  'Int',
  'Long',
  'Float',
  'Double',
  'Vector2',
  'Vector3',
  'VectorN',
  'String',
  'Pattern',
  'Array',
  'Map',
  'Maybe',
  'Result',
  'Id',
  'Ptr',
]

module.exports = grammar({
  name: 'carp',

  rules: {
    source_file: $ => repeat(choice($.line_comment, $.operators, $.other_str, $._s_expr)),

    line_comment: $ => seq(';', /.*/),

    _s_expr: $ => seq(
      '(',
      $._anything,
      ')',
    ),

    _expr: $ => choice(
      $._short_helper,
      $._literals,
      $.identifier,
      $.symbol,
      $._s_expr,
    ),

    _anything: $ => choice(
      // Core thing
      $._s_expr,
      $._short_helper,
      $.line_comment,
      $.identifier,
      $.symbol,
      $._s_forms,
      $._defs,
      $.call_expression,
      $.use,
      $.doc,
      // literals
      $._literals,
    ),

    _s_forms: $ => choice(
      $.fn,
      $.def,
      $.defn,
      $.let,
      $.do,
      $.if,
      $.while,
      $.ref,
      $.address,
      $.set,
      $.the,
      $.register,
    ),

    _defs: $ => choice(
      $.definterface,
      $.defmacro,
      $.defndynamic,
      $.defmodule,
      $.deftype,
    ),

    _literals: $ => choice(
      $.array_expression,
      $.map_expression,
      $.str_literal,
      $.char_literal,
      $.pattern_literal,
      $.bool_literal,
      $.integer_literal,
      $.float_literal,
    ),

    _short_helper: $ => choice(
      $.short_ref,
      $.short_copy,
      $.short_fn_ref,
      $.short_quote,
    ),

    use: $ => seq(
      'use',
      field('module', $.upper_identifier),
    ),

    doc: $ => seq(
      'doc',
      field('fn', $.identifier),
      field('doc_str', $.str_literal),
    ),

    def: $ => seq(
      'def',
      field('name', $.identifier),
      field('value', $._expr),
    ),

    fn: $ => seq(
      'fn',
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    defn: $ => seq(
      'defn',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    let: $ => seq(
      'let',
      field('pairs', $.let_pairs),
      optional(field('body', $._expr))
    ),

    let_pairs: $ => seq(
      '[',
      repeat(seq(
        field('var', $.identifier),
        field('expr', $._expr),
      )),
      ']'
    ),

    do: $ => seq(
      'do',
      repeat(field('expr', $._expr)),
    ),

    if: $ => seq(
      'if',
      field('condition', $._expr),
      field('then', $._expr),
      field('else', $._expr),
    ),

    while: $ => seq(
      'while',
      field('condition', $._expr),
      optional(field('body', $._expr)),
    ),

    ref: $ => seq(
      choice('ref'),
      field('expr', $._expr),
    ),

    address: $ => seq(
      'address',
      field('expr', $._expr),
    ),

    set: $ => seq(
      'set!',
      field('variable', $.identifier),
      field('expr', $._expr),
    ),

    the: $ => seq(
      'the',
      field('type', $.type),
      field('expr', $._expr),
    ),

    register: $ => seq(
      'register',
      field('name', $.identifier),
      choice(
        seq(
          field('type', choice($.type, $._short_helper)),
          optional(field('value_name', $._expr)),
        ),
        seq(
          '(',
          field('fn', $.interface_fn),
          ')'
        ),
      ),
    ),

    type: $ => choice(
      alias(choice(...core_types), $.identifier),
      $.complex_type,
      $.identifier,
    ),

    complex_type: $ => seq(
      '(',
      repeat(choice(
        alias(choice(...core_types), $.identifier),
        $.identifier,
      )),
      ')',
    ),

    call_expression: $ => prec(PREC.call, seq(
      field('call_name', $.call_name),
      optional(field('argument', repeat(seq($._expr)))),
    )),

    call_name: $ => prec(PREC.call, choice(
      seq(
        optional(seq(field('module', $.upper_identifier), '.')),
        field('name', $.identifier),
      ),
      $.short_fn_ref,
    )),

    definterface: $ => seq(
      'definterface',
      field('name', $.identifier),
      '(',
      field('fn', $.interface_fn),
      ')'
    ),

    defmacro: $ => seq(
      'defmacro',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    defndynamic: $ => seq(
      'defndynamic',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    defmodule: $ => seq(
      'defmodule',
      field('name', $.identifier),
      repeat(field('definition', $._expr)),
    ),


    deftype: $ => seq(
      'deftype',
      choice(
        $._deftype1,
        $._deftype2,
      ),
    ),

    _deftype1: $ => seq(
      $._name_deftypes,
      field('fields', $.fields),
    ),

    _deftype2: $ => seq(
      $._name_deftypes,
      repeat(seq(
        '(',
        field('variant', $.identifier),
        field('fields', $.fields),
        token.immediate(')'),
      )),
    ),

    _name_deftypes: $ => choice(
      field('name', $.identifier),
      seq(
        '(',
        field('name', $.identifier),
        optional(field('generic_type', repeat($.identifier))),
        token.immediate(')'),
      ),
    ),

    _tagged_union: $ => seq(
      '(',
      field('variant', $.identifier),
      field('fields', $.fields),
      token.immediate(')'),
    ),

    fields: $ => seq(
      '[',
      repeat(seq(choice(
        $.identifier,
        $.complex_type,
        alias(choice(...core_types), $.type)),
        // alias(/[A-ZΑ-Ω][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?\^]*/, $.type),
        optional(','))),
      token.immediate(']'),
    ),

    interface_fn: $ => seq(
      choice('Fn', 'λ'),
      field('typed_params', $.typed_parameters),
      field('return_type', choice($._short_helper, $.type)),
    ),

    short_ref: $ => seq('&', $._expr),

    short_copy: $ => seq('@', $._expr),

    short_fn_ref: $ => seq('~', $._expr),

    short_quote: $ => seq('\'', $._expr),

    parameters: $ => seq(
      '[',
      repeat(choice($.identifier, $.symbol)),
      token.immediate(']'),
    ),

    typed_parameters: $ => seq(
      '[',
      repeat(choice($.type, $._short_helper)),
      token.immediate(']'),
    ),

    integer_literal: $ => token(seq(
      optional('-'),
      /[0-9][0-9]*/,
      optional('l'),
    )),

    float_literal: $ => token(seq(
      optional('-'),
      choice(
        seq(/[0-9][0-9]*/, 'f'),
        seq(/[0-9][0-9]*\.[0-9][0-9]*/, optional('f')),
      ),
    )),

    bool_literal: $ => choice('true', 'false'),

    str_literal: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        /./,
      )),
      token.immediate('"')
    ),

    char_literal: $ => seq(
      '\\',
      choice(
        $.escape_sequence,
        /./,
      )
    ),

    pattern_literal: $ => seq(
      '#"',
      repeat(choice(
        $.escape_sequence,
        /./,
      )),
      token.immediate('"'),
    ),

    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
      )),

    array_expression: $ => seq(
      '[',
      repeat(
        choice($.identifier, $._literals)
      ),
      token.immediate(']'),
    ),

    map_expression: $ => seq(
      '{',
      repeat(
        seq(
          field('key', choice($.identifier, $._literals)),
          field('value', choice($.identifier, $._literals)),
        )
      ),
      token.immediate('}'),
    ),

    symbol: $ => seq(
      ':',
      $.identifier,
    ),

    hidden: $ => 'hidden',
    other_str: $ => choice(...important_str),
    operators: $ => choice(...op),
    upper_identifier: $ => /[A-ZΑ-Ω][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?\^]*/,
    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_<%=>\+\-\*\/\|\!\?\^][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?\^]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
