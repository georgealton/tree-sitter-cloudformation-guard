module.exports = grammar({
  name: 'guard',

  extras: $ => [
    /[ \t\f]+/,
    $.comment,
  ],

  word: $ => $.identifier,

  externals: $ => [
    $.custom_message,
  ],

  supertypes: $ => [
    $._expression,
    $._value,
    $._statement,
  ],

  conflicts: $ => [
    [$.query, $.resource_type_block],
    [$.query, $.function_call],
    [$.access, $.variable_reference],
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $._statement,
        $._newline,
      )
    ),

    _statement: $ => choice(
      $.assignment,
      $.rule_declaration,
      $.query_block,
      $.resource_type_block,
      $.clause,
      $.when_block,
    ),

    _newline: _ => /\r?\n/,

    comment: _ => token(
      seq(
        '#',
        /[^\r\n]*/,
        optional(/\r?\n/),
      )
    ),

    assignment: $ => seq(
      'let',
      field('name', $.variable_name),
      choice('=', ':='),
      field('value', $._value),
    ),

    rule_declaration: $ => seq(
      'rule',
      field('name', $.rule_name),
      optional(field('condition', $.when_expression)),
      '{',
      field('body', $.rule_body),
      '}',
    ),

    rule_name: $ => $.identifier,

    rule_body: $ => repeat(
      choice(
        $.assignment,
        $.resource_type_block,
        $.query_block,
        $.when_block,
        $.clause,
        $._newline,
      )
    ),

    when_expression: $ => seq(
      'when',
      field('condition', $._expression),
    ),

    when_block: $ => seq(
      $.when_expression,
      '{',
      field('body', $.rule_body),
      '}',
    ),

    resource_type_block: $ => seq(
      field('type', $.resource_type),
      '{',
      field('body', $.block),
      '}',
    ),

    resource_type: _ => token(
      /[A-Za-z][A-Za-z0-9_-]*(?:::[A-Za-z][A-Za-z0-9_-]*)+/
    ),

    block: $ => repeat(
      choice(
        $.assignment,
        $.query_block,
        $.resource_type_block,
        $.when_block,
        $.clause,
        $._newline,
      )
    ),

    query_block: $ => seq(
      field('query', $.query),
      '{',
      field('body', $.block),
      '}',
    ),

    clause: $ => seq(
      field('left', choice(
        $.query,
        $.variable_reference,
        $.literal_value,
      )),
      field('comparison', $.comparison),
      optional(field('message', $.custom_message)),
    ),

    comparison: $ => choice(
      $.unary_comparison,
      $.binary_comparison,
    ),

    unary_comparison: $ => seq(
      optional(field('negation', $.not_operator)),
      field('operator', $.unary_operator),
    ),

    binary_comparison: $ => seq(
      optional(field('modifier', choice(
        $.not_operator,
        $.keys_operator,
      ))),
      field('operator', $.binary_operator),
      field('right', choice(
        $.query,
        $.variable_reference,
        $.literal_value,
      )),
    ),

    binary_operator: _ => choice(
      '>=',
      '<=',
      '>',
      '<',
      '==',
      '!=',
      'in',
      'IN',
    ),

    unary_operator: _ => choice(
      'exists',
      'EXISTS',
      'empty',
      'EMPTY',
      'is_string',
      'IS_STRING',
      'is_list',
      'IS_LIST',
      'is_struct',
      'IS_STRUCT',
      'is_null',
      'IS_NULL',
    ),

    not_operator: _ => choice(
      'not',
      'NOT',
      '!',
    ),

    keys_operator: _ => choice(
      'keys',
      'KEYS',
    ),

    _expression: $ => choice(
      $.or_expression,
      $.clause_expression,
      $.variable_reference,
      $.query,
      $.literal_value,
    ),

    clause_expression: $ => $.clause,

    or_expression: $ => prec.left(
      seq(
        $.clause_expression,
        repeat1(
          seq(
            $.or_operator,
            $.clause_expression,
          )
        ),
      )
    ),

    or_operator: _ => choice(
      'or',
      'OR',
      '|OR|',
    ),

    query: $ => seq(
      optional(field('quantifier', $.some_operator)),
      field('access', $.access),
    ),

    some_operator: _ => choice(
      'some',
      'SOME',
    ),

    access: $ => prec.left(
      seq(
        choice(
          $.this,
          $.variable_reference,
          $.property,
          $.identifier,
        ),
        repeat(
          choice(
            $.traversal,
            $.filter,
          )
        ),
      )
    ),

    this: _ => choice(
      'this',
      'THIS',
    ),

    traversal: $ => seq(
      token.immediate('.'),
      field('property', choice(
        $.wildcard,
        $.property,
        $.variable_reference,
      )),
    ),

    wildcard: _ => '*',

    property: $ => choice(
      $.identifier,
      $.string,
    ),

    filter: $ => seq(
      '[',
      field('expression', $.filter_expression),
      ']',
    ),

    filter_expression: $ => prec.left(
      seq(
        $.filter_clause,
        repeat(
          seq(
            optional($.or_operator),
            $.filter_clause,
          )
        ),
      )
    ),

    filter_clause: $ => seq(
      field('left', choice(
        $.query,
        $.variable_reference,
        $.literal_value,
        $.filter_access,
      )),
      field('comparison', $.comparison),
      optional(field('message', $.custom_message)),
    ),

    filter_access: $ => $.access,

    variable_reference: $ => seq(
      '%',
      field('name', $.variable_name),
    ),

    variable_name: _ => token(
      /[A-Za-z][A-Za-z0-9_]*/
    ),

    _value: $ => choice(
      $.literal_value,
      $.variable_reference,
      $.query,
      $.function_call,
    ),

    literal_value: $ => choice(
      $._primitive,
      $.map,
      $.list,
      $.range,
    ),

    _primitive: $ => choice(
      $.string,
      $.integer,
      $.float,
      $.boolean,
      $.regex,
    ),

    function_call: $ => seq(
      field('name', $.identifier),
      field('arguments', $.arguments),
    ),

    arguments: $ => seq(
      token.immediate('('),
      optional(commaSep($._argument)),
      ')',
    ),

    _argument: $ => choice(
      $.literal_value,
      $.variable_reference,
      $.query,
    ),

    map: $ => seq(
      '{',
      optional(commaSep($.map_entry)),
      optional(','),
      '}',
    ),

    map_entry: $ => seq(
      field('key', choice(
        $.identifier,
        $.string,
      )),
      ':',
      field('value', $._value),
    ),

    list: $ => seq(
      '[',
      optional(commaSep($.list_item)),
      optional(','),
      ']',
    ),

    list_item: $ => field(
      'value',
      $._value,
    ),

    range: $ => seq(
      field('start', choice(
        alias('r[', $.inclusive_start),
        alias('r(', $.exclusive_start),
      )),
      field('lower', choice(
        $.integer,
        $.float,
      )),
      ',',
      field('upper', choice(
        $.integer,
        $.float,
      )),
      field('end', choice(
        alias(']', $.inclusive_end),
        alias(')', $.exclusive_end),
      )),
    ),

    string: $ => choice(
      $.double_string,
      $.single_string,
    ),

    double_string: $ => seq(
      '"',
      repeat(
        choice(
          $.escape_sequence,
          /[^"\\\r\n]/,
        )
      ),
      '"',
    ),

    single_string: $ => seq(
      "'",
      repeat(
        choice(
          $.escape_sequence,
          /[^'\\\r\n]/,
        )
      ),
      "'",
    ),

    escape_sequence: _ => /\\./,

    regex: $ => seq(
      '/',
      field('pattern', $.regex_pattern),
      token.immediate('/'),
    ),

    regex_pattern: _ => token(
      /(?:\\.|[^\n/\\]|\[(?:\\.|[^\]\\\n])*\])+/,
    ),

    boolean: _ => choice(
      'true',
      'True',
      'TRUE',
      'false',
      'False',
      'FALSE',
    ),

    integer: _ => token(
      /-?(?:0|[1-9][0-9]*)/
    ),

    float: _ => token(
      /-?(?:[0-9]+\.[0-9]+)/
    ),

    identifier: _ => token(
      /[A-Za-z][A-Za-z0-9_-]*/
    ),
  },
});

function commaSep(rule) {
  return seq(
    rule,
    repeat(seq(',', rule)),
  );
}
