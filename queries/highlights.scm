(binary_operator) @operator
(unary_operator) @function.builtin

[
 "let"
]
@keyword

[
 "when"
 (some)
] @keyword.conditional

(comment) @comment 
(wildcard) @string.special

[
 "true"
 "false"
] @boolean


[
 "["
 "]"
 "("
 ")"
 "{"
 "}"
] @punctuation.bracket

[
  "."
  ","
] @punctuation.delimiter

(string) @string
(regex) @string.regexp

[
 (integer)
 (float)
] @number

(custom_message) @string.special
(parameters parameter: (_)) @variable.parameter

("rule") @constructor

(this) @variable.builtin
[(variable_name) (variable_reference)] @variable

