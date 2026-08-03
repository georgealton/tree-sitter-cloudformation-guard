module.exports = grammar({
  name: 'guard',

  word: $ => $.identifier,

  extras: $ => [
    $._whitespace,
    $.comment,
  ],

  // No external scanner needed. Rule names are ordinary identifiers.
  externals: $ => [],

  rules: {
    guard: $ => repeat(
      choice(
        $.assignment,
        $._clauses,
        $._block,
        $.named_rule_block,
      )
    ),

    // -----------------------------------------------------------------------
    // Values
    // -----------------------------------------------------------------------

    _primitive: $ => choice(
      $.string,
      $.integer,
      $.float,
      $.regex,
      $.bool,
    ),

    literal_value: $ => choice(
      $._primitive,
      $.map,
      $.list,
      $.range,
    ),

    list: $ => seq(
      '[',
      repeat(seq(
        field('item', $.literal_value),
        choice(',', blank()),
      )),
      ']',
    ),

    map: $ => seq(
      '{',
      repeat1(
        seq(
          field('key', choice(
            $.identifier,
            $.string,
          )),
          ':',
          field('value', choice(
            $._primitive,
            $.map,
            $.list,
          )),
          choice(',', blank()),
        )
      ),
      '}',
    ),

    range: $ => seq(
      choice(
        field('exclusive_start', 'r('),
        field('inclusive_start', 'r['),
      ),
      field('start', choice(
        $.integer,
        $.float,
      )),
      ',',
      field('end', choice(
        $.integer,
        $.float,
      )),
      choice(
        field('exclusive_end', ')'),
        field('inclusive_end', ']'),
      ),
    ),

    regex: $ => seq(
      '/',
      field('pattern', $.regex_pattern),
      token.immediate(prec(1, '/')),
    ),

    regex_pattern: $ => token.immediate(
      prec(-1, repeat1(choice(
        seq(
          '[',
          repeat(choice(
            seq('\\', /./),
            /[^\\\]\n\\]/,
          )),
          ']',
        ),
        seq('\\', /./),
        /[^\/\\\[\n]/,
      ))),
    ),

    // -----------------------------------------------------------------------
    // Parameters / arguments / function calls
    // -----------------------------------------------------------------------

    parameters: $ => seq(
      token.immediate('('),
      repeat(
        field('parameter', seq(
          $.identifier,
          choice(',', blank()),
        ))
      ),
      ')',
    ),

    arguments: $ => seq(
      token.immediate('('),
      choice(
        field('argument', choice(
          $.literal_value,
          $.variable_reference,
          $.query,
        )),
        field('argument', seq(
          repeat1(seq(
            choice(
              $.literal_value,
              $.variable_reference,
              $.query,
            ),
            ',',
          )),
          choice(
            $.literal_value,
            $.variable_reference,
            $.query,
          ),
        )),
      ),
      ')',
    ),

    function_call: $ => seq(
      field('name', $.identifier),
      field('arguments', $.arguments),
    ),

    // -----------------------------------------------------------------------
    // Queries
    // -----------------------------------------------------------------------

    query: $ => seq(
      choice(
        $.some,
        blank(),
      ),
      $.access,
    ),

    access: $ => prec.right(0, seq(
      choice(
        $.this,
        $.variable_reference,
        $.property,
        $.identifier,
      ),
      repeat(choice(
        $.traversal,
        $.filter,
      )),
    )),

    traversal: $ => seq(
      token.immediate('.'),
      choice(
        $.wildcard,
        $.property,
        $.variable_reference,
      ),
    ),

    filter: $ => seq(
      '[',
      choice(
        $.wildcard,
        $.integer,
        repeat1(seq(
          $._filter_expression,
          choice(
            $.or_term,
            blank(),
          ),
        )),
      ),
      ']',
    ),

    _filter_expression: $ => seq(
      choice(
        $.some,
        blank(),
      ),
      choice(
        seq(
          field('left', choice(
            $.access,
            $.string,
          )),
          field('comparison', choice(
            $.unary_comparison,
            $.binary_comparison,
          )),
        ),
        seq(
          $.access,
          '{',
          repeat(choice(
            $.query_block,
            seq(
              $.clause,
              choice(
                $.or_term,
                blank(),
              ),
            ),
          )),
          '}',
        ),
      ),
    ),

    // -----------------------------------------------------------------------
    // Comparisons / clauses
    // -----------------------------------------------------------------------

    clause: $ => seq(
      field('left', choice(
        $.query,
        $.literal_value,
      )),
      $._whitespace,
      field('comparison', choice(
        $.unary_comparison,
        $.binary_comparison,
      )),
      field('message', choice(
        $.custom_message,
        blank(),
      )),
    ),

    _clauses: $ => choice(
      prec(2, $.clause),
      prec(1, $.rule_clause),
    ),

    rule_clause: $ => seq(
      choice(
        $.not_keyword,
        blank(),
      ),
      field('name', $.variable_name),
      choice(
        $.arguments,
        blank(),
      ),
      field('message', choice(
        $.custom_message,
        blank(),
      )),
    ),

    unary_comparison: $ => seq(
      choice(
        $.not_keyword,
        blank(),
      ),
      field('operator', $.unary_operator),
    ),

    binary_comparison: $ => seq(
      choice(
        choice(
          $.not_keyword,
          $.keys_operator,
        ),
        blank(),
      ),
      field('operator', $.binary_operator),
      field('right', choice(
        $.query,
        $.literal_value,
      )),
    ),

    // -----------------------------------------------------------------------
    // Assignments
    // -----------------------------------------------------------------------

    assignment: $ => seq(
      'let',
      field('name', $.variable_name),
      choice(
        '=',
        ':=',
      ),
      field('value', choice(
        $.function_call,
        $.query,
        $.literal_value,
      )),
    ),

    variable_reference: $ => seq(
      '%',
      field(
        'name',
        token.immediate(/[a-zA-Z]+[a-zA-Z0-9_]*/),
      ),
    ),

    // -----------------------------------------------------------------------
    // When blocks
    // -----------------------------------------------------------------------

    when_expression: $ => seq(
      'when',
      prec.left(
        1,
        repeat1(
          choice(
            $._clauses,
            $.or_term,
          ),
        ),
      ),
    ),

    when_block: $ => seq(
      $.when_expression,
      '{',
      repeat(choice(
        $.assignment,
        $._block,
        $.or_term,
        $.clause,
      )),
      '}',
    ),

    // -----------------------------------------------------------------------
    // Query blocks
    // -----------------------------------------------------------------------

    query_block: $ => seq(
      $.query,
      choice(
        $._whitespace,
        blank(),
      ),
      '{',
      repeat(choice(
        $.assignment,
        $._block,
        $.or_term,
        $.clause,
      )),
      '}',
    ),

    // -----------------------------------------------------------------------
    // Rules
    // -----------------------------------------------------------------------

    _rule_declaration: $ => seq(
      'rule',
      field('name', $.variable_name),
      field('parameters', choice(
        $.parameters,
        blank(),
      )),
    ),

    named_rule_block: $ => seq(
      $._rule_declaration,
      field('condition', choice(
        $.when_expression,
        blank(),
      )),
      '{',
      repeat(choice(
        $.assignment,
        $._block,
        $._clauses,
        $.or_term,
      )),
      '}',
    ),

    _block: $ => choice(
      $.when_block,
      $.or_term,
      $.query_block,
    ),

    // -----------------------------------------------------------------------
    // Names / properties
    // -----------------------------------------------------------------------

    property: $ => choice(
      prec(1, $.identifier),
      prec(-1, $.string),
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    variable_name: $ => token(
      prec(-1, /[a-zA-Z_][a-zA-Z0-9_]*/),
    ),

    // -----------------------------------------------------------------------
    // Operators / keywords
    // -----------------------------------------------------------------------

    binary_operator: $ => choice(
      '>=',
      '<=',
      '>',
      '<',
      'in',
      'IN',
      '==',
      '!=',
    ),

    unary_operator: $ => choice(
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

    or_term: $ => choice(
      'or',
      'OR',
      '|OR|',
    ),

    not_keyword: $ => choice(
      'NOT',
      'not',
      '!',
    ),

    keys_operator: $ => choice(
      'keys',
      'KEYS',
    ),

    some: $ => choice(
      'some',
      'SOME',
    ),

    this: $ => choice(
      'this',
      'THIS',
    ),

    wildcard: $ => '*',

    // -----------------------------------------------------------------------
    // Literals
    // -----------------------------------------------------------------------

    string: $ => choice(
      seq(
        '"',
        /[^"]*/,
        '"',
      ),
      seq(
        "'",
        /[^']*/,
        "'",
      ),
    ),

    bool: $ => choice(
      'True',
      'true',
      'False',
      'false',
    ),

    integer: $ => /-?\d+/,

    float: $ => /\d\.\d+/,

    // -----------------------------------------------------------------------
    // Messages / comments / whitespace
    // -----------------------------------------------------------------------

    custom_message: $ => seq(
      '<<',
      field('body', repeat(/./)),
      '>>',
    ),

    comment: $ => token(seq(
      '#',
      repeat(/./),
      /\r?\n/,
    )),

    _whitespace: $ => /\s+/,
  },
});
