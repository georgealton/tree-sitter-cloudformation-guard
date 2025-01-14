/**
 * @file CloudFormation Guard
 * @author George Alton <georgealton@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//

module.exports = grammar({
  name: "guard",
  extras: $ => [$._whitespace, $.comment],
  word: $ => $.identifier,
  externals: $ => [$.rule_name, $.error],
  rules: {
    guard: $ => repeat(
      choice(
        $.assignment,
        $._clauses,
        $._block,
        $.named_rule_block,
      ),
    ),

    _primitive: $ => choice(
      $.string,
      $.integer,
      $.float,
      $.regex,
      $.bool,
    ),

    map: $ => seq(
      "{",
      repeat1(
        seq(
          field("key", $.string),
          ":",
          field("value", choice($._primitive, $.map, $.list)),
          optional(","),
        )
      ),
      "}"
    ),

    parameters: $ => seq(
      token.immediate("("),
      repeat(field("parameter", seq($.identifier, optional(",")))),
      ")"
    ),

    function_call: $ => seq(
      field("name", $.identifier),
      field("arguments", seq(
        token.immediate("("),
        repeat(field("argument",
          seq(
            choice(
              $.literal_value,
              $.variable_reference,
              // $.query,
            ),
            optional(",")))
        ),
        ")",
      ),
      ),
    ),

    list: $ => seq(
      "[",
      repeat(seq(field("item", $.literal_value), optional(","))),
      "]",
    ),

    regex: $ => seq('/', field('pattern', $.regex_pattern), token.immediate(prec(1, '/'))),
    regex_pattern: _ => token.immediate(prec(-1,
      repeat1(choice(
        seq(
          '[',
          repeat(choice(
            seq('\\', /./), // escaped character
            /[^\]\n\\]/, // any character besides ']' or '\n'
          )),
          ']',
        ), // square-bracket-delimited character class
        seq('\\', /./), // escaped character
        /[^/\\\[\n]/, // any character besides '[', '\', '/', '\n'
      )),
    )),

    range: $ => seq(
      choice(
        field("exclusive_start", "r(",),
        field("inclusive_start", "r[",),
      ),
      field("start", choice($.integer, $.float)),
      ",",
      field("end", choice($.integer, $.float)),
      choice(
        field("exclusive_end", ")",),
        field("inclusive_end", "]",),
      ),
    ),

    query: $ => seq(optional($.some), $.access),

    traversal: $ => seq(
      token.immediate("."),
      choice(
        $.wildcard,
        $.property,
        $.variable_reference,
      ),
    ),

    literal_value: $ => choice($._primitive, $.map, $.list, $.range),

    access: $ => seq(
      choice($.this, $.variable_reference, $.property),
      repeat(choice($.traversal, $.filter)),
    ),

    filter: $ => seq(
      token.immediate("["),
      choice(
        $.wildcard,
        $.integer,
        repeat1(
          seq(
            $._filter_expression,
            optional($.or_term)
          )
        )
      ),
      "]",
    ),

    clause: $ => seq(
      field("left", choice($.query, $.literal_value)),
      $._whitespace,
      field("comparison", choice($.unary_comparison, $.binary_comparison)),
      field("message", optional($.custom_message)),
    ),

    rule_clause: $ => seq(
      optional($.not_keyword), 
      field("name", alias($.rule_name, $.variable_name)),
      optional($.parameters),
      field("message", optional($.custom_message)),
    ), 

    _clauses: $ => seq(
      choice($.clause, $.rule_clause), 
      optional($.or_term)
    ),

    _filter_expression: $ => seq(
      optional($.some),
      field("left", choice($.access, $.string)),
      field("comparison", choice($.unary_comparison, $.binary_comparison)),
    ),

    unary_comparison: $ => seq(
      optional($.not_keyword),
      field("operator", $.unary_operator,)
    ),

    binary_comparison: $ => seq(
      optional(
        choice(
          $.not_keyword,
          $.keys_operator,
        )
      ),
      field("operator", $.binary_operator),
      field("right", choice($.query, $.literal_value)),
    ),

    assignment: $ => seq(
      "let",
      field("name", $.variable_name),
      choice("=", ":="),
      field("value", choice($.query, $.literal_value, $.function_call)),
    ),

    variable_reference: _ => seq("%", field("name", token.immediate(/[a-zA-Z]+[a-zA-Z0-9_]*/))),
    when_expression: $ => seq("when", prec.left(1, repeat1($._clauses))),

    query_block: $ => seq(
      $.query,
      $._whitespace,
      "{", repeat(choice($.assignment, $._block, $._clauses)), "}",
    ),

    when_block: $ => seq(
      $.when_expression,
      "{", repeat(choice($.assignment, $._block, $._clauses)), "}",
    ),

    _rule_declaration: $ => seq(
      "rule",
      field("name", $.variable_name),
      field("parameters", optional($.parameters)),
    ),

    named_rule_block: $ => seq(
      $._rule_declaration,
      field("condition", optional($.when_expression)),
      "{", repeat(choice($.assignment, $._block, $._clauses)), "}"
    ),

    _block: $ => choice($.when_block, $.query_block),

    property: $ => choice(
      $.identifier,
      prec(-1, $.string)
    ),

    custom_message: _ => seq("<<", field("body", repeat(/./)), ">>"),
    binary_operator: _ => choice(">=", "<=", ">", "<", "in", "IN", "==", "!=",),
    unary_operator: _ => choice(
      "exists",    "EXISTS",
      "empty",     "EMPTY",
      "is_string", "IS_STRING",
      "is_list",   "IS_LIST",
      "is_struct", "IS_STRUCT",
      "is_null",   "IS_NULL",
    ),
    variable_name: _ => token(prec(-1, /[a-zA-Z]+[a-zA-Z0-9_]*/)),
    or_term: _ => choice("or", "OR", "|OR|"),
    string: _ => choice(seq('"', /[^"]*/, '"'), seq("'", /[^']*/, "'")),
    bool: _ => choice("True", "true", "False", "false"),
    integer: _ => /-?\d+/,
    float: _ => /\d\.\d+/,
    wildcard: _ => "*",
    this: _ => choice("this", "THIS"),
    some: _ => choice("some", "SOME"),
    not_keyword: _ => choice("NOT", "not", "!"),
    keys_operator: _ => choice("keys", "KEYS"),
    comment: _ => token(seq('#', repeat(/./), /\r?\n/)),
    _whitespace: _ => /\s+/,
    identifier: _ => /[a-zA-Z\d_-]+/,
  },
});
