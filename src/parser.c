#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 395
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 38

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_SLASH = 10,
  anon_sym_SLASH2 = 11,
  sym_regex_pattern = 12,
  anon_sym_r_LPAREN = 13,
  anon_sym_r_LBRACK = 14,
  anon_sym_DOT = 15,
  anon_sym_LBRACK2 = 16,
  anon_sym_let = 17,
  anon_sym_EQ = 18,
  anon_sym_COLON_EQ = 19,
  anon_sym_PERCENT = 20,
  aux_sym_variable_reference_token1 = 21,
  anon_sym_when = 22,
  anon_sym_LT_LT = 23,
  aux_sym_custom_message_token1 = 24,
  anon_sym_GT_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_LT = 29,
  anon_sym_in = 30,
  anon_sym_IN = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_exists = 34,
  anon_sym_EXISTS = 35,
  anon_sym_empty = 36,
  anon_sym_EMPTY = 37,
  anon_sym_is_string = 38,
  anon_sym_IS_STRING = 39,
  anon_sym_is_list = 40,
  anon_sym_IS_LIST = 41,
  anon_sym_is_struct = 42,
  anon_sym_IS_STRUCT = 43,
  anon_sym_is_null = 44,
  anon_sym_IS_NULL = 45,
  sym_variable_name = 46,
  anon_sym_or = 47,
  anon_sym_OR = 48,
  anon_sym_PIPEOR_PIPE = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_string_token1 = 51,
  anon_sym_SQUOTE = 52,
  aux_sym_string_token2 = 53,
  anon_sym_True = 54,
  anon_sym_true = 55,
  anon_sym_False = 56,
  anon_sym_false = 57,
  sym_integer = 58,
  sym_float = 59,
  sym_wildcard = 60,
  anon_sym_this = 61,
  anon_sym_THIS = 62,
  anon_sym_some = 63,
  anon_sym_SOME = 64,
  anon_sym_NOT = 65,
  anon_sym_not = 66,
  anon_sym_BANG = 67,
  anon_sym_keys = 68,
  anon_sym_KEYS = 69,
  sym_comment = 70,
  sym__whitespace = 71,
  anon_sym_rule = 72,
  aux_sym_rule_clause_token1 = 73,
  aux_sym_rule_clause_token2 = 74,
  sym_rule_name = 75,
  sym_error = 76,
  sym_guard = 77,
  sym__primitive = 78,
  sym_map = 79,
  sym_parameters = 80,
  sym_function_call = 81,
  sym_list = 82,
  sym_regex = 83,
  sym_range = 84,
  sym_query = 85,
  sym_traversal = 86,
  sym_literal_value = 87,
  sym_access = 88,
  sym_filter = 89,
  sym_clause = 90,
  sym__real_rule_clause = 91,
  sym__clauses = 92,
  sym__filter_expression = 93,
  sym_unary_comparison = 94,
  sym_binary_comparison = 95,
  sym_assignment = 96,
  sym_variable_reference = 97,
  sym_when_expression = 98,
  sym_query_block = 99,
  sym_when_block = 100,
  sym_named_rule_block = 101,
  sym__block = 102,
  sym_property = 103,
  sym_custom_message = 104,
  sym_binary_operator = 105,
  sym_unary_operator = 106,
  sym_or_term = 107,
  sym_string = 108,
  sym_bool = 109,
  sym_this = 110,
  sym_some = 111,
  sym_not_keyword = 112,
  sym_keys_operator = 113,
  sym__rule = 114,
  sym__rule_declaration = 115,
  sym_rule_clause = 116,
  aux_sym_guard_repeat1 = 117,
  aux_sym_map_repeat1 = 118,
  aux_sym_parameters_repeat1 = 119,
  aux_sym_function_call_repeat1 = 120,
  aux_sym_list_repeat1 = 121,
  aux_sym_access_repeat1 = 122,
  aux_sym_filter_repeat1 = 123,
  aux_sym_when_expression_repeat1 = 124,
  aux_sym_query_block_repeat1 = 125,
  aux_sym_named_rule_block_repeat1 = 126,
  aux_sym_custom_message_repeat1 = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH2] = "/",
  [sym_regex_pattern] = "regex_pattern",
  [anon_sym_r_LPAREN] = "r(",
  [anon_sym_r_LBRACK] = "r[",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_PERCENT] = "%",
  [aux_sym_variable_reference_token1] = "variable_reference_token1",
  [anon_sym_when] = "when",
  [anon_sym_LT_LT] = "<<",
  [aux_sym_custom_message_token1] = "custom_message_token1",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_in] = "in",
  [anon_sym_IN] = "IN",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_exists] = "exists",
  [anon_sym_EXISTS] = "EXISTS",
  [anon_sym_empty] = "empty",
  [anon_sym_EMPTY] = "EMPTY",
  [anon_sym_is_string] = "is_string",
  [anon_sym_IS_STRING] = "IS_STRING",
  [anon_sym_is_list] = "is_list",
  [anon_sym_IS_LIST] = "IS_LIST",
  [anon_sym_is_struct] = "is_struct",
  [anon_sym_IS_STRUCT] = "IS_STRUCT",
  [anon_sym_is_null] = "is_null",
  [anon_sym_IS_NULL] = "IS_NULL",
  [sym_variable_name] = "variable_name",
  [anon_sym_or] = "or",
  [anon_sym_OR] = "OR",
  [anon_sym_PIPEOR_PIPE] = "|OR|",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_True] = "True",
  [anon_sym_true] = "true",
  [anon_sym_False] = "False",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_wildcard] = "wildcard",
  [anon_sym_this] = "this",
  [anon_sym_THIS] = "THIS",
  [anon_sym_some] = "some",
  [anon_sym_SOME] = "SOME",
  [anon_sym_NOT] = "NOT",
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_keys] = "keys",
  [anon_sym_KEYS] = "KEYS",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [anon_sym_rule] = "rule",
  [aux_sym_rule_clause_token1] = "rule_clause_token1",
  [aux_sym_rule_clause_token2] = "rule_clause_token2",
  [sym_rule_name] = "rule_name",
  [sym_error] = "error",
  [sym_guard] = "guard",
  [sym__primitive] = "_primitive",
  [sym_map] = "map",
  [sym_parameters] = "parameters",
  [sym_function_call] = "function_call",
  [sym_list] = "list",
  [sym_regex] = "regex",
  [sym_range] = "range",
  [sym_query] = "query",
  [sym_traversal] = "traversal",
  [sym_literal_value] = "literal_value",
  [sym_access] = "access",
  [sym_filter] = "filter",
  [sym_clause] = "clause",
  [sym__real_rule_clause] = "_real_rule_clause",
  [sym__clauses] = "_clauses",
  [sym__filter_expression] = "_filter_expression",
  [sym_unary_comparison] = "unary_comparison",
  [sym_binary_comparison] = "binary_comparison",
  [sym_assignment] = "assignment",
  [sym_variable_reference] = "variable_reference",
  [sym_when_expression] = "when_expression",
  [sym_query_block] = "query_block",
  [sym_when_block] = "when_block",
  [sym_named_rule_block] = "named_rule_block",
  [sym__block] = "_block",
  [sym_property] = "property",
  [sym_custom_message] = "custom_message",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_or_term] = "or_term",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym_this] = "this",
  [sym_some] = "some",
  [sym_not_keyword] = "not_keyword",
  [sym_keys_operator] = "keys_operator",
  [sym__rule] = "_rule",
  [sym__rule_declaration] = "_rule_declaration",
  [sym_rule_clause] = "rule_clause",
  [aux_sym_guard_repeat1] = "guard_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_access_repeat1] = "access_repeat1",
  [aux_sym_filter_repeat1] = "filter_repeat1",
  [aux_sym_when_expression_repeat1] = "when_expression_repeat1",
  [aux_sym_query_block_repeat1] = "query_block_repeat1",
  [aux_sym_named_rule_block_repeat1] = "named_rule_block_repeat1",
  [aux_sym_custom_message_repeat1] = "custom_message_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [sym_regex_pattern] = sym_regex_pattern,
  [anon_sym_r_LPAREN] = anon_sym_r_LPAREN,
  [anon_sym_r_LBRACK] = anon_sym_r_LBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_variable_reference_token1] = aux_sym_variable_reference_token1,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [aux_sym_custom_message_token1] = aux_sym_custom_message_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_EXISTS] = anon_sym_EXISTS,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_EMPTY] = anon_sym_EMPTY,
  [anon_sym_is_string] = anon_sym_is_string,
  [anon_sym_IS_STRING] = anon_sym_IS_STRING,
  [anon_sym_is_list] = anon_sym_is_list,
  [anon_sym_IS_LIST] = anon_sym_IS_LIST,
  [anon_sym_is_struct] = anon_sym_is_struct,
  [anon_sym_IS_STRUCT] = anon_sym_IS_STRUCT,
  [anon_sym_is_null] = anon_sym_is_null,
  [anon_sym_IS_NULL] = anon_sym_IS_NULL,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_PIPEOR_PIPE] = anon_sym_PIPEOR_PIPE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_wildcard] = sym_wildcard,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_THIS] = anon_sym_THIS,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_SOME] = anon_sym_SOME,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_keys] = anon_sym_keys,
  [anon_sym_KEYS] = anon_sym_KEYS,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [anon_sym_rule] = anon_sym_rule,
  [aux_sym_rule_clause_token1] = aux_sym_rule_clause_token1,
  [aux_sym_rule_clause_token2] = aux_sym_rule_clause_token2,
  [sym_rule_name] = sym_rule_name,
  [sym_error] = sym_error,
  [sym_guard] = sym_guard,
  [sym__primitive] = sym__primitive,
  [sym_map] = sym_map,
  [sym_parameters] = sym_parameters,
  [sym_function_call] = sym_function_call,
  [sym_list] = sym_list,
  [sym_regex] = sym_regex,
  [sym_range] = sym_range,
  [sym_query] = sym_query,
  [sym_traversal] = sym_traversal,
  [sym_literal_value] = sym_literal_value,
  [sym_access] = sym_access,
  [sym_filter] = sym_filter,
  [sym_clause] = sym_clause,
  [sym__real_rule_clause] = sym__real_rule_clause,
  [sym__clauses] = sym__clauses,
  [sym__filter_expression] = sym__filter_expression,
  [sym_unary_comparison] = sym_unary_comparison,
  [sym_binary_comparison] = sym_binary_comparison,
  [sym_assignment] = sym_assignment,
  [sym_variable_reference] = sym_variable_reference,
  [sym_when_expression] = sym_when_expression,
  [sym_query_block] = sym_query_block,
  [sym_when_block] = sym_when_block,
  [sym_named_rule_block] = sym_named_rule_block,
  [sym__block] = sym__block,
  [sym_property] = sym_property,
  [sym_custom_message] = sym_custom_message,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_or_term] = sym_or_term,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym_this] = sym_this,
  [sym_some] = sym_some,
  [sym_not_keyword] = sym_not_keyword,
  [sym_keys_operator] = sym_keys_operator,
  [sym__rule] = sym__rule,
  [sym__rule_declaration] = sym__rule_declaration,
  [sym_rule_clause] = sym_rule_clause,
  [aux_sym_guard_repeat1] = aux_sym_guard_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_access_repeat1] = aux_sym_access_repeat1,
  [aux_sym_filter_repeat1] = aux_sym_filter_repeat1,
  [aux_sym_when_expression_repeat1] = aux_sym_when_expression_repeat1,
  [aux_sym_query_block_repeat1] = aux_sym_query_block_repeat1,
  [aux_sym_named_rule_block_repeat1] = aux_sym_named_rule_block_repeat1,
  [aux_sym_custom_message_repeat1] = aux_sym_custom_message_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_r_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_custom_message_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_LIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_STRUCT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPEOR_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THIS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEYS] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rule_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_clause_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_guard] = {
    .visible = true,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_traversal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_access] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__real_rule_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__clauses] = {
    .visible = false,
    .named = true,
  },
  [sym__filter_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_when_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_query_block] = {
    .visible = true,
    .named = true,
  },
  [sym_when_block] = {
    .visible = true,
    .named = true,
  },
  [sym_named_rule_block] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_message] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_or_term] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_this] = {
    .visible = true,
    .named = true,
  },
  [sym_some] = {
    .visible = true,
    .named = true,
  },
  [sym_not_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_keys_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_rule_clause] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_guard_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_when_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_rule_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_message_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_arguments = 2,
  field_body = 3,
  field_comparison = 4,
  field_condition = 5,
  field_end = 6,
  field_exclusive_end = 7,
  field_exclusive_start = 8,
  field_inclusive_end = 9,
  field_inclusive_start = 10,
  field_item = 11,
  field_key = 12,
  field_left = 13,
  field_message = 14,
  field_name = 15,
  field_operator = 16,
  field_parameter = 17,
  field_parameters = 18,
  field_pattern = 19,
  field_right = 20,
  field_start = 21,
  field_value = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_comparison] = "comparison",
  [field_condition] = "condition",
  [field_end] = "end",
  [field_exclusive_end] = "exclusive_end",
  [field_exclusive_start] = "exclusive_start",
  [field_inclusive_end] = "inclusive_end",
  [field_inclusive_start] = "inclusive_start",
  [field_item] = "item",
  [field_key] = "key",
  [field_left] = "left",
  [field_message] = "message",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_right] = "right",
  [field_start] = "start",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 4},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 3},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 1},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 2},
  [25] = {.index = 42, .length = 4},
  [26] = {.index = 46, .length = 3},
  [27] = {.index = 49, .length = 4},
  [28] = {.index = 53, .length = 4},
  [29] = {.index = 57, .length = 4},
  [30] = {.index = 61, .length = 4},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 2},
  [33] = {.index = 69, .length = 3},
  [34] = {.index = 72, .length = 1},
  [35] = {.index = 73, .length = 2},
  [36] = {.index = 75, .length = 5},
  [37] = {.index = 80, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_parameter, 0},
  [3] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [5] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [9] =
    {field_item, 1, .inherited = true},
  [10] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [12] =
    {field_pattern, 1},
  [13] =
    {field_comparison, 2},
    {field_left, 0},
  [15] =
    {field_operator, 0},
  [16] =
    {field_comparison, 0, .inherited = true},
    {field_left, 0, .inherited = true},
  [18] =
    {field_name, 1},
    {field_parameters, 2},
  [20] =
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [22] =
    {field_parameter, 0},
    {field_parameter, 1},
  [24] =
    {field_parameter, 1, .inherited = true},
  [25] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [27] =
    {field_body, 1},
  [28] =
    {field_key, 0},
    {field_value, 2},
  [30] =
    {field_name, 1},
    {field_value, 3},
  [32] =
    {field_comparison, 2},
    {field_left, 0},
    {field_message, 3},
  [35] =
    {field_operator, 0},
    {field_right, 1},
  [37] =
    {field_operator, 1},
  [38] =
    {field_comparison, 1},
    {field_left, 0},
  [40] =
    {field_comparison, 1, .inherited = true},
    {field_left, 1, .inherited = true},
  [42] =
    {field_comparison, 0, .inherited = true},
    {field_comparison, 1, .inherited = true},
    {field_left, 0, .inherited = true},
    {field_left, 1, .inherited = true},
  [46] =
    {field_condition, 1},
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [49] =
    {field_end, 3},
    {field_exclusive_end, 4},
    {field_exclusive_start, 0},
    {field_start, 1},
  [53] =
    {field_end, 3},
    {field_exclusive_start, 0},
    {field_inclusive_end, 4},
    {field_start, 1},
  [57] =
    {field_end, 3},
    {field_exclusive_end, 4},
    {field_inclusive_start, 0},
    {field_start, 1},
  [61] =
    {field_end, 3},
    {field_inclusive_end, 4},
    {field_inclusive_start, 0},
    {field_start, 1},
  [65] =
    {field_operator, 1},
    {field_right, 2},
  [67] =
    {field_comparison, 2},
    {field_left, 1},
  [69] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_name, 0},
  [72] =
    {field_argument, 0},
  [73] =
    {field_argument, 0},
    {field_argument, 1},
  [75] =
    {field_argument, 2, .inherited = true},
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [80] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 9,
  [15] = 10,
  [16] = 11,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 20,
  [33] = 19,
  [34] = 19,
  [35] = 20,
  [36] = 21,
  [37] = 21,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 39,
  [42] = 26,
  [43] = 31,
  [44] = 25,
  [45] = 45,
  [46] = 30,
  [47] = 27,
  [48] = 28,
  [49] = 26,
  [50] = 31,
  [51] = 24,
  [52] = 45,
  [53] = 29,
  [54] = 29,
  [55] = 30,
  [56] = 27,
  [57] = 28,
  [58] = 25,
  [59] = 59,
  [60] = 59,
  [61] = 24,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 64,
  [69] = 63,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 62,
  [74] = 70,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 79,
  [91] = 82,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 92,
  [96] = 96,
  [97] = 76,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 77,
  [102] = 80,
  [103] = 93,
  [104] = 78,
  [105] = 94,
  [106] = 83,
  [107] = 84,
  [108] = 85,
  [109] = 87,
  [110] = 88,
  [111] = 89,
  [112] = 96,
  [113] = 98,
  [114] = 99,
  [115] = 81,
  [116] = 86,
  [117] = 100,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 118,
  [125] = 119,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 120,
  [130] = 130,
  [131] = 130,
  [132] = 126,
  [133] = 123,
  [134] = 127,
  [135] = 128,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 139,
  [144] = 138,
  [145] = 142,
  [146] = 136,
  [147] = 147,
  [148] = 137,
  [149] = 141,
  [150] = 150,
  [151] = 150,
  [152] = 147,
  [153] = 153,
  [154] = 140,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 160,
  [164] = 164,
  [165] = 164,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 164,
  [170] = 164,
  [171] = 164,
  [172] = 166,
  [173] = 166,
  [174] = 166,
  [175] = 175,
  [176] = 175,
  [177] = 175,
  [178] = 178,
  [179] = 179,
  [180] = 30,
  [181] = 83,
  [182] = 182,
  [183] = 85,
  [184] = 87,
  [185] = 89,
  [186] = 88,
  [187] = 182,
  [188] = 182,
  [189] = 182,
  [190] = 190,
  [191] = 190,
  [192] = 99,
  [193] = 84,
  [194] = 190,
  [195] = 195,
  [196] = 190,
  [197] = 197,
  [198] = 96,
  [199] = 76,
  [200] = 98,
  [201] = 201,
  [202] = 25,
  [203] = 203,
  [204] = 204,
  [205] = 45,
  [206] = 206,
  [207] = 207,
  [208] = 99,
  [209] = 85,
  [210] = 83,
  [211] = 87,
  [212] = 88,
  [213] = 89,
  [214] = 80,
  [215] = 84,
  [216] = 100,
  [217] = 79,
  [218] = 218,
  [219] = 96,
  [220] = 76,
  [221] = 98,
  [222] = 222,
  [223] = 82,
  [224] = 93,
  [225] = 77,
  [226] = 94,
  [227] = 227,
  [228] = 228,
  [229] = 227,
  [230] = 227,
  [231] = 227,
  [232] = 139,
  [233] = 233,
  [234] = 233,
  [235] = 235,
  [236] = 233,
  [237] = 237,
  [238] = 237,
  [239] = 239,
  [240] = 237,
  [241] = 237,
  [242] = 242,
  [243] = 20,
  [244] = 244,
  [245] = 245,
  [246] = 244,
  [247] = 21,
  [248] = 244,
  [249] = 244,
  [250] = 244,
  [251] = 19,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 254,
  [256] = 254,
  [257] = 254,
  [258] = 254,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 264,
  [266] = 266,
  [267] = 267,
  [268] = 266,
  [269] = 264,
  [270] = 260,
  [271] = 259,
  [272] = 259,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 27,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 25,
  [281] = 28,
  [282] = 31,
  [283] = 275,
  [284] = 284,
  [285] = 275,
  [286] = 29,
  [287] = 287,
  [288] = 284,
  [289] = 275,
  [290] = 45,
  [291] = 24,
  [292] = 284,
  [293] = 275,
  [294] = 284,
  [295] = 277,
  [296] = 278,
  [297] = 279,
  [298] = 26,
  [299] = 299,
  [300] = 278,
  [301] = 279,
  [302] = 284,
  [303] = 86,
  [304] = 278,
  [305] = 279,
  [306] = 306,
  [307] = 278,
  [308] = 279,
  [309] = 274,
  [310] = 306,
  [311] = 274,
  [312] = 306,
  [313] = 92,
  [314] = 306,
  [315] = 274,
  [316] = 306,
  [317] = 274,
  [318] = 30,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 323,
  [330] = 322,
  [331] = 327,
  [332] = 328,
  [333] = 323,
  [334] = 178,
  [335] = 324,
  [336] = 327,
  [337] = 328,
  [338] = 323,
  [339] = 339,
  [340] = 326,
  [341] = 339,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 322,
  [347] = 326,
  [348] = 339,
  [349] = 342,
  [350] = 342,
  [351] = 326,
  [352] = 339,
  [353] = 342,
  [354] = 327,
  [355] = 322,
  [356] = 356,
  [357] = 326,
  [358] = 339,
  [359] = 342,
  [360] = 319,
  [361] = 361,
  [362] = 356,
  [363] = 319,
  [364] = 356,
  [365] = 319,
  [366] = 356,
  [367] = 324,
  [368] = 356,
  [369] = 319,
  [370] = 343,
  [371] = 324,
  [372] = 361,
  [373] = 327,
  [374] = 328,
  [375] = 323,
  [376] = 324,
  [377] = 320,
  [378] = 328,
  [379] = 98,
  [380] = 380,
  [381] = 99,
  [382] = 96,
  [383] = 88,
  [384] = 76,
  [385] = 85,
  [386] = 89,
  [387] = 84,
  [388] = 77,
  [389] = 87,
  [390] = 380,
  [391] = 391,
  [392] = 80,
  [393] = 391,
  [394] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(642);
      ADVANCE_MAP(
        '\n', 713,
        '!', 709,
        '#', 653,
        '%', 661,
        '(', 647,
        ')', 648,
        '*', 708,
        ',', 645,
        '.', 657,
        '/', 652,
        ':', 644,
        '<', 674,
        '=', 659,
        '>', 673,
        '[', 658,
        '\\', 638,
        ']', 650,
        'r', 730,
        '{', 643,
        '}', 646,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(712);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(739);
      if (lookahead != 0) ADVANCE(654);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(713);
      if (lookahead == '#') ADVANCE(653);
      if (lookahead == '[') ADVANCE(613);
      if (lookahead == '\\') ADVANCE(638);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(654);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(713);
      if (lookahead == '#') ADVANCE(666);
      if (lookahead == '>') ADVANCE(667);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(711);
      if (lookahead == '\r') ADVANCE(653);
      if (lookahead != 0) ADVANCE(653);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(711);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(711);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(653);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(711);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(763);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '<', 603,
        '_', 636,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '<', 603,
        '_', 14,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '<', 603,
        '_', 13,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(635);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '<', 603,
        '_', 636,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '<', 603,
        '_', 24,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '<', 603,
        '_', 26,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '<', 603,
        '_', 14,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '<', 603,
        '_', 13,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '<', 603,
        '_', 25,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(584);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(584);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(635);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(584);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(584);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(584);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(584);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 554,
        '\t', 48,
        ' ', 48,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 554,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 47,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 44,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 41,
        '\t', 48,
        ' ', 48,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 41,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 46,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 40,
        '\t', 48,
        ' ', 48,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '_', 40,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 48,
        ' ', 48,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 48,
        ' ', 48,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 48,
        ' ', 48,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 48,
        ' ', 48,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 50,
        ' ', 50,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 50,
        ' ', 50,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        ')', 49,
        ',', 556,
        '<', 547,
        'o', 550,
        '\t', 48,
        ' ', 48,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 48,
        ' ', 48,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 307,
        '#', 97,
        ')', 49,
        ',', 556,
        '<', 547,
        '\t', 50,
        ' ', 50,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 96,
        '\t', 80,
        ' ', 80,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 52:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 96,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 88,
        '\t', 81,
        ' ', 81,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 54:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 87,
        '\t', 81,
        ' ', 81,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 55:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 72,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 69,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 65,
        '\t', 80,
        ' ', 80,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 58:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 65,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 71,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 60:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 64,
        '\t', 80,
        ' ', 80,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 61:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 64,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 62:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 80,
        ' ', 80,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 63:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 80,
        ' ', 80,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 64:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 80,
        ' ', 80,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 65:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 80,
        ' ', 80,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 66:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 81,
        ' ', 81,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 68:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 69:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 70:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 71:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 86,
        ' ', 86,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        '(', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 86,
        ' ', 86,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 73:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 96,
        '\t', 85,
        ' ', 85,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 88,
        '\t', 85,
        ' ', 85,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 75:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 87,
        '\t', 85,
        ' ', 85,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 76:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 72,
        '\t', 85,
        ' ', 85,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 95,
        '\t', 85,
        ' ', 85,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 69,
        '\t', 83,
        ' ', 83,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 79:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '_', 69,
        '\t', 85,
        ' ', 85,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        'o', 91,
        '\t', 80,
        ' ', 80,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        'o', 92,
        '\t', 81,
        ' ', 81,
      );
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 80,
        ' ', 80,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 83:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 83,
        ' ', 83,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 84:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 85,
        ' ', 85,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 85:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 85,
        ' ', 85,
      );
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 97,
        '#', 97,
        ')', 82,
        ',', 97,
        '<', 89,
        '\t', 86,
        ' ', 86,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '>') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 104:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 151,
        '\t', 133,
        ' ', 133,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 105:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 151,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 106:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 143,
        '\t', 134,
        ' ', 134,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 107:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 142,
        '\t', 134,
        ' ', 134,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 108:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 125,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 109:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 122,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 110:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 118,
        '\t', 133,
        ' ', 133,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 111:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 118,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 112:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 124,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 113:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 117,
        '\t', 133,
        ' ', 133,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 114:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 117,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 115:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 133,
        ' ', 133,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 116:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 133,
        ' ', 133,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 117:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 133,
        ' ', 133,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 118:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 133,
        ' ', 133,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 119:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 134,
        ' ', 134,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 120:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 122:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 123:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 124:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 139,
        ' ', 139,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 125:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 139,
        ' ', 139,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 126:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 151,
        '\t', 138,
        ' ', 138,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 127:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 143,
        '\t', 138,
        ' ', 138,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 128:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 142,
        '\t', 138,
        ' ', 138,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 129:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 125,
        '\t', 138,
        ' ', 138,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 130:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 150,
        '\t', 138,
        ' ', 138,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 131:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 122,
        '\t', 136,
        ' ', 136,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 132:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '_', 122,
        '\t', 138,
        ' ', 138,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 133:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        'o', 146,
        '\t', 133,
        ' ', 133,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 134:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        'o', 147,
        '\t', 134,
        ' ', 134,
      );
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 135:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 133,
        ' ', 133,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 136:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 136,
        ' ', 136,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 137:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 138,
        ' ', 138,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 138:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 138,
        ' ', 138,
      );
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 139:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '<', 144,
        '>', 153,
        '\t', 139,
        ' ', 139,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 140:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '>', 153,
        '\t', 140,
        ' ', 140,
      );
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 141:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '#', 152,
        ')', 135,
        ',', 152,
        '>', 141,
        '\t', 140,
        ' ', 140,
      );
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 142:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '>', 153,
        '\t', 145,
        ' ', 145,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 143:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        '(', 152,
        ')', 135,
        ',', 152,
        '>', 153,
        '\t', 145,
        ' ', 145,
      );
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 145:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 152,
        ')', 135,
        ',', 152,
        '>', 153,
        'o', 147,
        '\t', 145,
        ' ', 145,
      );
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '>') ADVANCE(141);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 564,
        '\t', 173,
        ' ', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 564,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 156:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 172,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 157:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 169,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 158:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 166,
        '\t', 173,
        ' ', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 159:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 166,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 160:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 171,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 161:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 165,
        '\t', 173,
        ' ', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 162:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 165,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 163:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 173,
        ' ', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 164:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 173,
        ' ', 173,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 165:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 173,
        ' ', 173,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 166:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 173,
        ' ', 173,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 167:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 168:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 169:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 170:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 171:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 175,
        ' ', 175,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 172:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 175,
        ' ', 175,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 173:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        'o', 560,
        '\t', 173,
        ' ', 173,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 173,
        ' ', 173,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 175:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 175,
        ' ', 175,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 176:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        ')', 174,
        ',', 566,
        '>', 176,
        '\t', 177,
        ' ', 177,
      );
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 177:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 308,
        '#', 152,
        ')', 174,
        ',', 566,
        '>', 558,
        '\t', 177,
        ' ', 177,
      );
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 179:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 309,
        '#', 202,
        '(', 584,
        ')', 183,
        ',', 584,
        '<', 580,
        '\t', 183,
        ' ', 183,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(582);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 180:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 309,
        '#', 202,
        '(', 584,
        ')', 183,
        ',', 584,
        '<', 580,
        '\t', 183,
        ' ', 183,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 181:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 309,
        '#', 202,
        '(', 584,
        ')', 183,
        ',', 584,
        '<', 580,
        '\t', 183,
        ' ', 183,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 182:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 309,
        '#', 202,
        '(', 584,
        ')', 183,
        ',', 584,
        '<', 580,
        '\t', 183,
        ' ', 183,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 183:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 309,
        '#', 202,
        ')', 183,
        ',', 584,
        '<', 580,
        '\t', 183,
        ' ', 183,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 185:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 310,
        '#', 214,
        '(', 589,
        ')', 189,
        ',', 589,
        '<', 585,
        '>', 590,
        '\t', 189,
        ' ', 189,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 186:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 310,
        '#', 214,
        '(', 589,
        ')', 189,
        ',', 589,
        '<', 585,
        '>', 590,
        '\t', 189,
        ' ', 189,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 187:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 310,
        '#', 214,
        '(', 589,
        ')', 189,
        ',', 589,
        '<', 585,
        '>', 590,
        '\t', 189,
        ' ', 189,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 188:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 310,
        '#', 214,
        '(', 589,
        ')', 189,
        ',', 589,
        '<', 585,
        '>', 590,
        '\t', 189,
        ' ', 189,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 189:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 310,
        '#', 214,
        ')', 189,
        ',', 589,
        '<', 585,
        '>', 590,
        '\t', 189,
        ' ', 189,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 190:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 310,
        '#', 214,
        ')', 189,
        ',', 589,
        '>', 590,
        '\t', 190,
        ' ', 190,
      );
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 191:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 310,
        '#', 214,
        ')', 189,
        ',', 589,
        '>', 191,
        '\t', 190,
        ' ', 190,
      );
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(192);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 193:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 202,
        '#', 202,
        '(', 202,
        ')', 197,
        ',', 202,
        '<', 198,
        '\t', 197,
        ' ', 197,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 194:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 202,
        '#', 202,
        '(', 202,
        ')', 197,
        ',', 202,
        '<', 198,
        '\t', 197,
        ' ', 197,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 195:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 202,
        '#', 202,
        '(', 202,
        ')', 197,
        ',', 202,
        '<', 198,
        '\t', 197,
        ' ', 197,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 196:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 202,
        '#', 202,
        '(', 202,
        ')', 197,
        ',', 202,
        '<', 198,
        '\t', 197,
        ' ', 197,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 202,
        '#', 202,
        ')', 197,
        ',', 202,
        '<', 198,
        '\t', 197,
        ' ', 197,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == ',') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == ',') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == ',') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 203:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 214,
        '#', 214,
        '(', 214,
        ')', 207,
        ',', 214,
        '<', 210,
        '>', 215,
        '\t', 207,
        ' ', 207,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 204:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 214,
        '#', 214,
        '(', 214,
        ')', 207,
        ',', 214,
        '<', 210,
        '>', 215,
        '\t', 207,
        ' ', 207,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 205:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 214,
        '#', 214,
        '(', 214,
        ')', 207,
        ',', 214,
        '<', 210,
        '>', 215,
        '\t', 207,
        ' ', 207,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 206:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 214,
        '#', 214,
        '(', 214,
        ')', 207,
        ',', 214,
        '<', 210,
        '>', 215,
        '\t', 207,
        ' ', 207,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 207:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 214,
        '#', 214,
        ')', 207,
        ',', 214,
        '<', 210,
        '>', 215,
        '\t', 207,
        ' ', 207,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 208:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 214,
        '#', 214,
        ')', 207,
        ',', 214,
        '>', 215,
        '\t', 208,
        ' ', 208,
      );
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 209:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 214,
        '#', 214,
        ')', 207,
        ',', 214,
        '>', 209,
        '\t', 208,
        ' ', 208,
      );
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '>') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '>') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '>') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '>') ADVANCE(209);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 216:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 234,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 217:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 234,
        '\t', 235,
        ' ', 235,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 218:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 226,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 219:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 232,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 220:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 232,
        '\t', 235,
        ' ', 235,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 221:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 598,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 222:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 598,
        '\t', 235,
        ' ', 235,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 223:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 230,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 224:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '_', 228,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 225:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 226:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 227:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 228:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 229:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 236,
        ' ', 236,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 230:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 236,
        ' ', 236,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 231:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 235,
        ' ', 235,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 232:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 235,
        ' ', 235,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 233:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 235,
        ' ', 235,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 234:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 235,
        ' ', 235,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 235:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        'o', 594,
        '\t', 235,
        ' ', 235,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 236:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 236,
        ' ', 236,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 237:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 311,
        '#', 152,
        ')', 237,
        ',', 600,
        '<', 591,
        '>', 601,
        '\t', 235,
        ' ', 235,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 238:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 366,
        '\t', 257,
        ' ', 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 239:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 366,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 240:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 256,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 241:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 250,
        '\t', 257,
        ' ', 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 242:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 250,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 243:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 253,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 244:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 254,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 245:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 249,
        '\t', 257,
        ' ', 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 246:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '_', 249,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 247:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 257,
        ' ', 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 248:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 257,
        ' ', 257,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 249:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 257,
        ' ', 257,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 250:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 257,
        ' ', 257,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 251:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 252:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 253:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 254:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 255:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 259,
        ' ', 259,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 256:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 259,
        ' ', 259,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 257:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        ')', 258,
        ',', 367,
        '<', 358,
        'o', 362,
        '\t', 257,
        ' ', 257,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 258:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 257,
        ' ', 257,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 259:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 178,
        '#', 97,
        ')', 258,
        ',', 367,
        '<', 358,
        '\t', 259,
        ' ', 259,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 260:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 429,
        '\t', 279,
        ' ', 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 261:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 429,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 262:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 278,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 263:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 272,
        '\t', 279,
        ' ', 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 264:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 272,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 265:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 275,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 266:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 276,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 267:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 271,
        '\t', 279,
        ' ', 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 268:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 271,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 269:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 279,
        ' ', 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 270:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 279,
        ' ', 279,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 271:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 279,
        ' ', 279,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 279,
        ' ', 279,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 273:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 274:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 275:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 276:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 277:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 278:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 281,
        ' ', 281,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 279:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        'o', 425,
        '\t', 279,
        ' ', 279,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 280:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 279,
        ' ', 279,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 281:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 281,
        ' ', 281,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 282:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        ')', 280,
        ',', 430,
        '>', 431,
        '\t', 282,
        ' ', 282,
      );
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 283:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 184,
        '#', 152,
        ')', 280,
        ',', 430,
        '>', 283,
        '\t', 282,
        ' ', 282,
      );
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 284:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 298,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 285:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 302,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 286:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 302,
        '\t', 303,
        ' ', 303,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 287:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 294,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 288:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 295,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 289:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 300,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 290:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 300,
        '\t', 303,
        ' ', 303,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 291:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 518,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 292:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '_', 518,
        '\t', 303,
        ' ', 303,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 293:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 294:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 295:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 296:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 297:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 304,
        ' ', 304,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 298:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 304,
        ' ', 304,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 299:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 303,
        ' ', 303,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 300:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 303,
        ' ', 303,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 301:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 303,
        ' ', 303,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 302:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 303,
        ' ', 303,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 303:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        'o', 514,
        '\t', 303,
        ' ', 303,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 304:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 304,
        ' ', 304,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 305:
      ADVANCE_MAP(
        '\n', 763,
        '\r', 306,
        '#', 152,
        ')', 305,
        ',', 520,
        '<', 510,
        '>', 512,
        '\t', 303,
        ' ', 303,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(584);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '>') ADVANCE(590);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '>') ADVANCE(607);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(764);
      END_STATE();
    case 314:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 313,
        '#', 458,
        '(', 572,
        '<', 604,
        '_', 541,
        '\t', 324,
        ' ', 324,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 313,
        '#', 458,
        '(', 572,
        '<', 604,
        '_', 542,
        '\t', 324,
        ' ', 324,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '_') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '_') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '<') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 536,
        '\t', 338,
        ' ', 338,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 329:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 535,
        '\t', 338,
        ' ', 338,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 330:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        '(', 556,
        ')', 49,
        ',', 556,
        '<', 548,
        '\t', 338,
        ' ', 338,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 331:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 554,
        '\t', 341,
        ' ', 341,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 332:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 47,
        '\t', 341,
        ' ', 341,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 333:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 44,
        '\t', 339,
        ' ', 339,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 334:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 44,
        '\t', 341,
        ' ', 341,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 335:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 536,
        '\t', 341,
        ' ', 341,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 336:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 535,
        '\t', 341,
        ' ', 341,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 337:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '_', 555,
        '\t', 341,
        ' ', 341,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 338:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        'o', 551,
        '\t', 338,
        ' ', 338,
      );
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 339:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '\t', 339,
        ' ', 339,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 340:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '\t', 341,
        ' ', 341,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 341:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 521,
        '#', 367,
        ')', 49,
        ',', 556,
        '<', 548,
        '\t', 341,
        ' ', 341,
      );
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 342:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 357,
        '\t', 352,
        ' ', 352,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 343:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 356,
        '\t', 352,
        ' ', 352,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 344:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        '(', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '\t', 352,
        ' ', 352,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 345:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 366,
        '\t', 355,
        ' ', 355,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 346:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 357,
        '\t', 355,
        ' ', 355,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 347:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 356,
        '\t', 355,
        ' ', 355,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 348:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 365,
        '\t', 355,
        ' ', 355,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 349:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 256,
        '\t', 355,
        ' ', 355,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 350:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 253,
        '\t', 353,
        ' ', 353,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 351:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '_', 253,
        '\t', 355,
        ' ', 355,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 352:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        'o', 361,
        '\t', 352,
        ' ', 352,
      );
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 353:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '\t', 353,
        ' ', 353,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 354:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '\t', 355,
        ' ', 355,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 355:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 367,
        '#', 367,
        ')', 258,
        ',', 367,
        '<', 359,
        '\t', 355,
        ' ', 355,
      );
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '<') ADVANCE(430);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '<') ADVANCE(520);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '>') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '>') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 370:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 538,
        '\t', 380,
        ' ', 380,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 371:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 537,
        '\t', 380,
        ' ', 380,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 372:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        '(', 566,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 380,
        ' ', 380,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 373:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 564,
        '\t', 383,
        ' ', 383,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 374:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 172,
        '\t', 383,
        ' ', 383,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 375:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 169,
        '\t', 381,
        ' ', 381,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 376:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 169,
        '\t', 383,
        ' ', 383,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 377:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 538,
        '\t', 383,
        ' ', 383,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 378:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 537,
        '\t', 383,
        ' ', 383,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 379:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '_', 565,
        '\t', 383,
        ' ', 383,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 380:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        'o', 561,
        '\t', 380,
        ' ', 380,
      );
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 381:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 381,
        ' ', 381,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 382:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 383,
        ' ', 383,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 383:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 522,
        '#', 430,
        ')', 174,
        ',', 566,
        '<', 557,
        '>', 558,
        '\t', 383,
        ' ', 383,
      );
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 384:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        '(', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '_', 395,
        '\t', 390,
        ' ', 390,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 385:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        '(', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '_', 394,
        '\t', 390,
        ' ', 390,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 386:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        '(', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '\t', 390,
        ' ', 390,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 387:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '_', 395,
        '\t', 393,
        ' ', 393,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 388:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '_', 394,
        '\t', 393,
        ' ', 393,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 389:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '_', 400,
        '\t', 393,
        ' ', 393,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 390:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        'o', 398,
        '\t', 390,
        ' ', 390,
      );
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 391:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '\t', 391,
        ' ', 391,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 392:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '\t', 393,
        ' ', 393,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 393:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 401,
        '#', 401,
        ')', 399,
        ',', 401,
        '<', 396,
        '\t', 393,
        ' ', 393,
      );
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(397);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '<') ADVANCE(490);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(397);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(397);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == ')') ADVANCE(399);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(404);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(404);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(404);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(404);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 406:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 421,
        '\t', 416,
        ' ', 416,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 407:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 420,
        '\t', 416,
        ' ', 416,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 408:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        '(', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 416,
        ' ', 416,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 409:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 429,
        '\t', 419,
        ' ', 419,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 410:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 421,
        '\t', 419,
        ' ', 419,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 411:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 420,
        '\t', 419,
        ' ', 419,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 412:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 428,
        '\t', 419,
        ' ', 419,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 413:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 278,
        '\t', 419,
        ' ', 419,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 414:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 275,
        '\t', 417,
        ' ', 417,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 415:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '_', 275,
        '\t', 419,
        ' ', 419,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 416:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        'o', 424,
        '\t', 416,
        ' ', 416,
      );
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 417:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 417,
        ' ', 417,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 418:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 419,
        ' ', 419,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 419:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '#', 430,
        ')', 280,
        ',', 430,
        '<', 422,
        '>', 431,
        '\t', 419,
        ' ', 419,
      );
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 420:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '(', 430,
        ')', 280,
        ',', 430,
        '>', 431,
        '\t', 423,
        ' ', 423,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 421:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        '(', 430,
        ')', 280,
        ',', 430,
        '>', 431,
        '\t', 423,
        ' ', 423,
      );
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '<') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 423:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 430,
        ')', 280,
        ',', 430,
        '>', 431,
        'o', 424,
        '\t', 423,
        ' ', 423,
      );
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '>') ADVANCE(283);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 432:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        '(', 572,
        ')', 570,
        ',', 572,
        '<', 567,
        '_', 540,
        '\t', 438,
        ' ', 438,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 433:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        '(', 572,
        ')', 570,
        ',', 572,
        '<', 567,
        '_', 539,
        '\t', 438,
        ' ', 438,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 434:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        '(', 572,
        ')', 570,
        ',', 572,
        '<', 567,
        '\t', 438,
        ' ', 438,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 435:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        ')', 570,
        ',', 572,
        '<', 567,
        '_', 540,
        '\t', 441,
        ' ', 441,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 436:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        ')', 570,
        ',', 572,
        '<', 567,
        '_', 539,
        '\t', 441,
        ' ', 441,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 437:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        ')', 570,
        ',', 572,
        '<', 567,
        '_', 571,
        '\t', 441,
        ' ', 441,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 438:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        ')', 570,
        ',', 572,
        '<', 567,
        'o', 569,
        '\t', 438,
        ' ', 438,
      );
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 439:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        ')', 570,
        ',', 572,
        '<', 567,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 440:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        ')', 570,
        ',', 572,
        '<', 567,
        '\t', 441,
        ' ', 441,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 441:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 523,
        '#', 401,
        ')', 570,
        ',', 572,
        '<', 567,
        '\t', 441,
        ' ', 441,
      );
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 442:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 546,
        '\t', 452,
        ' ', 452,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 443:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 545,
        '\t', 452,
        ' ', 452,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 444:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        '(', 600,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '\t', 452,
        ' ', 452,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 445:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 599,
        '\t', 455,
        ' ', 455,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 446:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 598,
        '\t', 455,
        ' ', 455,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 447:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 230,
        '\t', 455,
        ' ', 455,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 448:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 228,
        '\t', 453,
        ' ', 453,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 449:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 228,
        '\t', 455,
        ' ', 455,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 450:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 546,
        '\t', 455,
        ' ', 455,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 451:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '_', 545,
        '\t', 455,
        ' ', 455,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 452:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        'o', 595,
        '\t', 452,
        ' ', 452,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 453:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '\t', 453,
        ' ', 453,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 454:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '\t', 455,
        ' ', 455,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 455:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '<', 592,
        '>', 601,
        '\t', 455,
        ' ', 455,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 456:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '>', 601,
        '\t', 456,
        ' ', 456,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 457:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 525,
        '#', 520,
        ')', 237,
        ',', 600,
        '>', 457,
        '\t', 456,
        ' ', 456,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(458);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        '(', 578,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '_', 544,
        '\t', 465,
        ' ', 465,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 460:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        '(', 578,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '_', 543,
        '\t', 465,
        ' ', 465,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 461:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        '(', 578,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '\t', 465,
        ' ', 465,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 462:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '_', 544,
        '\t', 468,
        ' ', 468,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 463:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '_', 543,
        '\t', 468,
        ' ', 468,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 464:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '_', 577,
        '\t', 468,
        ' ', 468,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 465:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        'o', 575,
        '\t', 465,
        ' ', 465,
      );
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 466:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '\t', 466,
        ' ', 466,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 467:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '\t', 468,
        ' ', 468,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 468:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '<', 573,
        '>', 579,
        '\t', 468,
        ' ', 468,
      );
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 469:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '>', 579,
        '\t', 469,
        ' ', 469,
      );
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 470:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 524,
        '#', 490,
        ')', 576,
        ',', 578,
        '>', 470,
        '\t', 469,
        ' ', 469,
      );
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 471:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        '(', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '_', 484,
        '\t', 477,
        ' ', 477,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 472:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        '(', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '_', 483,
        '\t', 477,
        ' ', 477,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 473:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        '(', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '\t', 477,
        ' ', 477,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 474:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '_', 484,
        '\t', 480,
        ' ', 480,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 475:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '_', 483,
        '\t', 480,
        ' ', 480,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 476:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '_', 489,
        '\t', 480,
        ' ', 480,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 477:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        'o', 487,
        '\t', 477,
        ' ', 477,
      );
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 478:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '\t', 478,
        ' ', 478,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 479:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '\t', 480,
        ' ', 480,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 480:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '<', 485,
        '>', 491,
        '\t', 480,
        ' ', 480,
      );
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 481:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '>', 491,
        '\t', 481,
        ' ', 481,
      );
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 482:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '#', 490,
        ')', 488,
        ',', 490,
        '>', 482,
        '\t', 481,
        ' ', 481,
      );
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 483:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '(', 490,
        ')', 488,
        ',', 490,
        '>', 491,
        '\t', 486,
        ' ', 486,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 484:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        '(', 490,
        ')', 488,
        ',', 490,
        '>', 491,
        '\t', 486,
        ' ', 486,
      );
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '<') ADVANCE(490);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 486:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 490,
        ')', 488,
        ',', 490,
        '>', 491,
        'o', 487,
        '\t', 486,
        ' ', 486,
      );
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '>') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '>') ADVANCE(482);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 492:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 509,
        '\t', 502,
        ' ', 502,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 493:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 508,
        '\t', 502,
        ' ', 502,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(493);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 494:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        '(', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '\t', 502,
        ' ', 502,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 495:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 519,
        '\t', 505,
        ' ', 505,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 496:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 298,
        '\t', 505,
        ' ', 505,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 497:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 294,
        '\t', 503,
        ' ', 503,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 498:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 294,
        '\t', 505,
        ' ', 505,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 499:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 518,
        '\t', 505,
        ' ', 505,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 500:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 509,
        '\t', 505,
        ' ', 505,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 501:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '_', 508,
        '\t', 505,
        ' ', 505,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(493);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 502:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        'o', 515,
        '\t', 502,
        ' ', 502,
      );
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 503:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '\t', 503,
        ' ', 503,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 504:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '\t', 505,
        ' ', 505,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 505:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '<', 511,
        '>', 512,
        '\t', 505,
        ' ', 505,
      );
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 506:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '>', 506,
        '\t', 507,
        ' ', 507,
      );
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 507:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '#', 520,
        ')', 305,
        ',', 520,
        '>', 512,
        '\t', 507,
        ' ', 507,
      );
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 508:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '(', 520,
        ')', 305,
        ',', 520,
        '>', 512,
        '\t', 513,
        ' ', 513,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 509:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        '(', 520,
        ')', 305,
        ',', 520,
        '>', 512,
        '\t', 513,
        ' ', 513,
      );
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '<') ADVANCE(430);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '<') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(506);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 513:
      ADVANCE_MAP(
        '\n', 764,
        '\r', 520,
        ')', 305,
        ',', 520,
        '>', 512,
        'o', 515,
        '\t', 513,
        ' ', 513,
      );
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead == 'r') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '>') ADVANCE(610);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 527:
      ADVANCE_MAP(
        '!', 709,
        '"', 681,
        '#', 4,
        '%', 661,
        '\'', 686,
        '(', 647,
        '-', 761,
        '.', 657,
        '/', 651,
        '<', 602,
        'F', 731,
        'T', 735,
        '[', 658,
        '_', 762,
        'f', 732,
        'r', 728,
        't', 736,
        '{', 643,
        '|', 611,
        '}', 646,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 528:
      ADVANCE_MAP(
        '!', 709,
        '"', 681,
        '#', 4,
        '%', 661,
        '\'', 686,
        '(', 647,
        '-', 761,
        '/', 651,
        ':', 644,
        '<', 602,
        'F', 731,
        'T', 735,
        '[', 649,
        '_', 762,
        'f', 732,
        'r', 728,
        't', 736,
        '{', 643,
        '|', 611,
        '}', 646,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 529:
      ADVANCE_MAP(
        '!', 710,
        '"', 681,
        '#', 4,
        '%', 661,
        '\'', 686,
        '(', 647,
        ')', 648,
        '*', 708,
        ',', 645,
        '.', 657,
        '/', 652,
        '<', 675,
        '=', 606,
        '>', 672,
        '[', 658,
        ']', 650,
        '{', 643,
        '|', 611,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 530:
      ADVANCE_MAP(
        '"', 681,
        '#', 4,
        '%', 661,
        '\'', 686,
        ')', 648,
        ',', 645,
        '-', 633,
        '/', 651,
        ':', 644,
        'F', 614,
        'T', 625,
        '[', 649,
        ']', 650,
        'f', 615,
        'r', 534,
        't', 626,
        '{', 643,
        '}', 646,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 531:
      if (lookahead == '"') ADVANCE(681);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '%') ADVANCE(661);
      if (lookahead == '\'') ADVANCE(686);
      if (lookahead == '*') ADVANCE(708);
      if (lookahead == '-') ADVANCE(761);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 532:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(662);
      END_STATE();
    case 533:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      END_STATE();
    case 534:
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == '[') ADVANCE(656);
      END_STATE();
    case 535:
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 536:
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 537:
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 538:
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 539:
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 540:
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 541:
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(622);
      END_STATE();
    case 542:
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 543:
      if (lookahead == '(') ADVANCE(578);
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 544:
      if (lookahead == '(') ADVANCE(578);
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 545:
      if (lookahead == '(') ADVANCE(600);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 546:
      if (lookahead == '(') ADVANCE(600);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 547:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '<') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 548:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '<') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 549:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 550:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 551:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 552:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 553:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 554:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 555:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 557:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '<') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 558:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 559:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 560:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 561:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 562:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 563:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 564:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 565:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 566:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '>') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 567:
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == '<') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 568:
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 569:
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 570:
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 571:
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 572:
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 573:
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '<') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 574:
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 575:
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 576:
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 577:
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 578:
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 579:
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '>') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(584);
      if (lookahead == '<') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 581:
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 582:
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 583:
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 584:
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 585:
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '<') ADVANCE(589);
      if (lookahead == '>') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 586:
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '>') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 587:
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '>') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 588:
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '>') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 589:
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '>') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 590:
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '>') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '<') ADVANCE(566);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 592:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '<') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 593:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 594:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 595:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 596:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 597:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 598:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 599:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 600:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 601:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == '<') ADVANCE(664);
      END_STATE();
    case 603:
      if (lookahead == '<') ADVANCE(608);
      END_STATE();
    case 604:
      if (lookahead == '<') ADVANCE(609);
      END_STATE();
    case 605:
      if (lookahead == '=') ADVANCE(660);
      END_STATE();
    case 606:
      if (lookahead == '=') ADVANCE(676);
      END_STATE();
    case 607:
      if (lookahead == '>') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(608);
      END_STATE();
    case 608:
      if (lookahead == '>') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(608);
      END_STATE();
    case 609:
      if (lookahead == '>') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 610:
      if (lookahead == '>') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 611:
      if (lookahead == 'O') ADVANCE(612);
      END_STATE();
    case 612:
      if (lookahead == 'R') ADVANCE(631);
      END_STATE();
    case 613:
      if (lookahead == '\\') ADVANCE(639);
      if (lookahead == ']') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(613);
      END_STATE();
    case 614:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 615:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 616:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 617:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 618:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 619:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 620:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 621:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(622);
      END_STATE();
    case 623:
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(635);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 629:
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 630:
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 631:
      if (lookahead == '|') ADVANCE(680);
      END_STATE();
    case 632:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      END_STATE();
    case 633:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 634:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(635);
      END_STATE();
    case 635:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 636:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 637:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 638:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(654);
      END_STATE();
    case 639:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(613);
      END_STATE();
    case 640:
      if (eof) ADVANCE(642);
      ADVANCE_MAP(
        '!', 709,
        '"', 681,
        '#', 4,
        '%', 661,
        '\'', 686,
        '(', 647,
        ')', 648,
        ',', 645,
        '-', 761,
        '/', 651,
        ':', 605,
        '<', 602,
        '=', 659,
        'F', 747,
        'T', 755,
        '[', 649,
        ']', 650,
        'f', 748,
        'r', 729,
        't', 756,
        '{', 643,
        '|', 611,
        '}', 646,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 641:
      if (eof) ADVANCE(642);
      ADVANCE_MAP(
        '!', 709,
        '"', 681,
        '#', 4,
        '%', 661,
        '\'', 686,
        '(', 647,
        '-', 761,
        '.', 657,
        '/', 651,
        '<', 602,
        'F', 747,
        'T', 755,
        '[', 658,
        'f', 748,
        'r', 729,
        't', 756,
        '{', 643,
        '|', 611,
        '}', 646,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\n') ADVANCE(711);
      if (lookahead == '\r') ADVANCE(653);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(613);
      if (lookahead == '\\') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_r_LPAREN);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_r_LBRACK);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_variable_reference_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_variable_reference_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_custom_message_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_custom_message_token1);
      if (lookahead == '\n') ADVANCE(711);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_custom_message_token1);
      if (lookahead == '>') ADVANCE(669);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_custom_message_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(670);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(669);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(671);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(679);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_PIPEOR_PIPE);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(685);
      if (lookahead == '\r') ADVANCE(682);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(687);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead != 0) ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(687);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(690);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(690);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_True);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_true);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_False);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_false);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(677);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        'e', 692,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        'e', 695,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        'e', 698,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        'e', 701,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        's', 716,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        's', 717,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 556,
        '-', 762,
        '<', 603,
        '\t', 27,
        ' ', 27,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '-', 762,
        '<', 603,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(727);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '-', 762,
        '<', 603,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 763,
        '\r', 7,
        '#', 192,
        '(', 584,
        '-', 762,
        '<', 603,
        '\t', 28,
        ' ', 28,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(584);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == '[') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(655);
      if (lookahead == '[') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == '[') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(739);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'a') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'a') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'l') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'l') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'u') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == 'u') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(726);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(723);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_rule_clause_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_rule_clause_token2);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'E', 1,
        'I', 2,
        'K', 3,
        'N', 4,
        'O', 5,
        'S', 6,
        'T', 7,
        'e', 8,
        'i', 9,
        'k', 10,
        'l', 11,
        'n', 12,
        'o', 13,
        'r', 14,
        's', 15,
        't', 16,
        'w', 17,
      );
      END_STATE();
    case 1:
      if (lookahead == 'M') ADVANCE(18);
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'Y') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'Y') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_KEYS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SOME);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_THIS);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_keys);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 75:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EXISTS);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_IS_LIST);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_IS_NULL);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_is_list);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_is_null);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'G') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_IS_STRING);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_IS_STRUCT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_is_string);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_is_struct);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 640, .external_lex_state = 2},
  [2] = {.lex_state = 640, .external_lex_state = 2},
  [3] = {.lex_state = 640, .external_lex_state = 2},
  [4] = {.lex_state = 528, .external_lex_state = 2},
  [5] = {.lex_state = 528, .external_lex_state = 2},
  [6] = {.lex_state = 528, .external_lex_state = 2},
  [7] = {.lex_state = 528, .external_lex_state = 2},
  [8] = {.lex_state = 528, .external_lex_state = 2},
  [9] = {.lex_state = 640, .external_lex_state = 2},
  [10] = {.lex_state = 640, .external_lex_state = 2},
  [11] = {.lex_state = 640, .external_lex_state = 2},
  [12] = {.lex_state = 640, .external_lex_state = 2},
  [13] = {.lex_state = 640, .external_lex_state = 2},
  [14] = {.lex_state = 640, .external_lex_state = 2},
  [15] = {.lex_state = 640, .external_lex_state = 2},
  [16] = {.lex_state = 640, .external_lex_state = 2},
  [17] = {.lex_state = 640, .external_lex_state = 2},
  [18] = {.lex_state = 640, .external_lex_state = 2},
  [19] = {.lex_state = 529},
  [20] = {.lex_state = 529},
  [21] = {.lex_state = 529},
  [22] = {.lex_state = 640, .external_lex_state = 2},
  [23] = {.lex_state = 640, .external_lex_state = 2},
  [24] = {.lex_state = 529},
  [25] = {.lex_state = 529},
  [26] = {.lex_state = 529},
  [27] = {.lex_state = 529},
  [28] = {.lex_state = 529},
  [29] = {.lex_state = 529},
  [30] = {.lex_state = 529},
  [31] = {.lex_state = 529},
  [32] = {.lex_state = 641, .external_lex_state = 2},
  [33] = {.lex_state = 641, .external_lex_state = 2},
  [34] = {.lex_state = 527, .external_lex_state = 2},
  [35] = {.lex_state = 527, .external_lex_state = 2},
  [36] = {.lex_state = 527, .external_lex_state = 2},
  [37] = {.lex_state = 641, .external_lex_state = 2},
  [38] = {.lex_state = 528, .external_lex_state = 2},
  [39] = {.lex_state = 640, .external_lex_state = 2},
  [40] = {.lex_state = 640, .external_lex_state = 2},
  [41] = {.lex_state = 528, .external_lex_state = 2},
  [42] = {.lex_state = 527, .external_lex_state = 2},
  [43] = {.lex_state = 641, .external_lex_state = 2},
  [44] = {.lex_state = 641, .external_lex_state = 2},
  [45] = {.lex_state = 641, .external_lex_state = 2},
  [46] = {.lex_state = 641, .external_lex_state = 2},
  [47] = {.lex_state = 641, .external_lex_state = 2},
  [48] = {.lex_state = 641, .external_lex_state = 2},
  [49] = {.lex_state = 641, .external_lex_state = 2},
  [50] = {.lex_state = 527, .external_lex_state = 2},
  [51] = {.lex_state = 527, .external_lex_state = 2},
  [52] = {.lex_state = 527, .external_lex_state = 2},
  [53] = {.lex_state = 641, .external_lex_state = 2},
  [54] = {.lex_state = 527, .external_lex_state = 2},
  [55] = {.lex_state = 527, .external_lex_state = 2},
  [56] = {.lex_state = 527, .external_lex_state = 2},
  [57] = {.lex_state = 527, .external_lex_state = 2},
  [58] = {.lex_state = 527, .external_lex_state = 2},
  [59] = {.lex_state = 640},
  [60] = {.lex_state = 640},
  [61] = {.lex_state = 641, .external_lex_state = 2},
  [62] = {.lex_state = 640},
  [63] = {.lex_state = 528, .external_lex_state = 2},
  [64] = {.lex_state = 528, .external_lex_state = 2},
  [65] = {.lex_state = 640, .external_lex_state = 2},
  [66] = {.lex_state = 529},
  [67] = {.lex_state = 528, .external_lex_state = 2},
  [68] = {.lex_state = 640, .external_lex_state = 2},
  [69] = {.lex_state = 640, .external_lex_state = 2},
  [70] = {.lex_state = 640},
  [71] = {.lex_state = 640},
  [72] = {.lex_state = 529},
  [73] = {.lex_state = 640},
  [74] = {.lex_state = 640},
  [75] = {.lex_state = 640},
  [76] = {.lex_state = 528, .external_lex_state = 2},
  [77] = {.lex_state = 640, .external_lex_state = 2},
  [78] = {.lex_state = 528, .external_lex_state = 2},
  [79] = {.lex_state = 640, .external_lex_state = 2},
  [80] = {.lex_state = 640, .external_lex_state = 2},
  [81] = {.lex_state = 529},
  [82] = {.lex_state = 640, .external_lex_state = 2},
  [83] = {.lex_state = 640, .external_lex_state = 2},
  [84] = {.lex_state = 640, .external_lex_state = 2},
  [85] = {.lex_state = 640, .external_lex_state = 2},
  [86] = {.lex_state = 528, .external_lex_state = 2},
  [87] = {.lex_state = 640, .external_lex_state = 2},
  [88] = {.lex_state = 640, .external_lex_state = 2},
  [89] = {.lex_state = 640, .external_lex_state = 2},
  [90] = {.lex_state = 528, .external_lex_state = 2},
  [91] = {.lex_state = 528, .external_lex_state = 2},
  [92] = {.lex_state = 528, .external_lex_state = 2},
  [93] = {.lex_state = 528, .external_lex_state = 2},
  [94] = {.lex_state = 528, .external_lex_state = 2},
  [95] = {.lex_state = 640, .external_lex_state = 2},
  [96] = {.lex_state = 640, .external_lex_state = 2},
  [97] = {.lex_state = 640, .external_lex_state = 2},
  [98] = {.lex_state = 640, .external_lex_state = 2},
  [99] = {.lex_state = 640, .external_lex_state = 2},
  [100] = {.lex_state = 528, .external_lex_state = 2},
  [101] = {.lex_state = 528, .external_lex_state = 2},
  [102] = {.lex_state = 528, .external_lex_state = 2},
  [103] = {.lex_state = 640, .external_lex_state = 2},
  [104] = {.lex_state = 640, .external_lex_state = 2},
  [105] = {.lex_state = 640, .external_lex_state = 2},
  [106] = {.lex_state = 528, .external_lex_state = 2},
  [107] = {.lex_state = 528, .external_lex_state = 2},
  [108] = {.lex_state = 528, .external_lex_state = 2},
  [109] = {.lex_state = 528, .external_lex_state = 2},
  [110] = {.lex_state = 528, .external_lex_state = 2},
  [111] = {.lex_state = 528, .external_lex_state = 2},
  [112] = {.lex_state = 528, .external_lex_state = 2},
  [113] = {.lex_state = 528, .external_lex_state = 2},
  [114] = {.lex_state = 528, .external_lex_state = 2},
  [115] = {.lex_state = 529},
  [116] = {.lex_state = 640, .external_lex_state = 2},
  [117] = {.lex_state = 640, .external_lex_state = 2},
  [118] = {.lex_state = 528, .external_lex_state = 2},
  [119] = {.lex_state = 527, .external_lex_state = 2},
  [120] = {.lex_state = 528, .external_lex_state = 2},
  [121] = {.lex_state = 529},
  [122] = {.lex_state = 529},
  [123] = {.lex_state = 528, .external_lex_state = 2},
  [124] = {.lex_state = 640, .external_lex_state = 2},
  [125] = {.lex_state = 641, .external_lex_state = 2},
  [126] = {.lex_state = 640, .external_lex_state = 2},
  [127] = {.lex_state = 528, .external_lex_state = 2},
  [128] = {.lex_state = 528, .external_lex_state = 2},
  [129] = {.lex_state = 640, .external_lex_state = 2},
  [130] = {.lex_state = 529},
  [131] = {.lex_state = 529},
  [132] = {.lex_state = 528, .external_lex_state = 2},
  [133] = {.lex_state = 640, .external_lex_state = 2},
  [134] = {.lex_state = 640, .external_lex_state = 2},
  [135] = {.lex_state = 640, .external_lex_state = 2},
  [136] = {.lex_state = 640, .external_lex_state = 2},
  [137] = {.lex_state = 528, .external_lex_state = 2},
  [138] = {.lex_state = 528, .external_lex_state = 2},
  [139] = {.lex_state = 640, .external_lex_state = 2},
  [140] = {.lex_state = 640, .external_lex_state = 2},
  [141] = {.lex_state = 528, .external_lex_state = 2},
  [142] = {.lex_state = 640, .external_lex_state = 2},
  [143] = {.lex_state = 528, .external_lex_state = 2},
  [144] = {.lex_state = 640, .external_lex_state = 2},
  [145] = {.lex_state = 528, .external_lex_state = 2},
  [146] = {.lex_state = 528, .external_lex_state = 2},
  [147] = {.lex_state = 640, .external_lex_state = 2},
  [148] = {.lex_state = 640, .external_lex_state = 2},
  [149] = {.lex_state = 640, .external_lex_state = 2},
  [150] = {.lex_state = 640, .external_lex_state = 2},
  [151] = {.lex_state = 528, .external_lex_state = 2},
  [152] = {.lex_state = 528, .external_lex_state = 2},
  [153] = {.lex_state = 528, .external_lex_state = 2},
  [154] = {.lex_state = 528, .external_lex_state = 2},
  [155] = {.lex_state = 640, .external_lex_state = 2},
  [156] = {.lex_state = 640, .external_lex_state = 2},
  [157] = {.lex_state = 640, .external_lex_state = 2},
  [158] = {.lex_state = 640, .external_lex_state = 2},
  [159] = {.lex_state = 530},
  [160] = {.lex_state = 530},
  [161] = {.lex_state = 530},
  [162] = {.lex_state = 530},
  [163] = {.lex_state = 530},
  [164] = {.lex_state = 530},
  [165] = {.lex_state = 530},
  [166] = {.lex_state = 530},
  [167] = {.lex_state = 530},
  [168] = {.lex_state = 530},
  [169] = {.lex_state = 530},
  [170] = {.lex_state = 530},
  [171] = {.lex_state = 530},
  [172] = {.lex_state = 530},
  [173] = {.lex_state = 530},
  [174] = {.lex_state = 530},
  [175] = {.lex_state = 529},
  [176] = {.lex_state = 529},
  [177] = {.lex_state = 529},
  [178] = {.lex_state = 529},
  [179] = {.lex_state = 640},
  [180] = {.lex_state = 530},
  [181] = {.lex_state = 530},
  [182] = {.lex_state = 531},
  [183] = {.lex_state = 530},
  [184] = {.lex_state = 530},
  [185] = {.lex_state = 530},
  [186] = {.lex_state = 530},
  [187] = {.lex_state = 531},
  [188] = {.lex_state = 531},
  [189] = {.lex_state = 531},
  [190] = {.lex_state = 529},
  [191] = {.lex_state = 529},
  [192] = {.lex_state = 530},
  [193] = {.lex_state = 530},
  [194] = {.lex_state = 529},
  [195] = {.lex_state = 530},
  [196] = {.lex_state = 529},
  [197] = {.lex_state = 529},
  [198] = {.lex_state = 530},
  [199] = {.lex_state = 530},
  [200] = {.lex_state = 530},
  [201] = {.lex_state = 530},
  [202] = {.lex_state = 530},
  [203] = {.lex_state = 530},
  [204] = {.lex_state = 530},
  [205] = {.lex_state = 529},
  [206] = {.lex_state = 530},
  [207] = {.lex_state = 529},
  [208] = {.lex_state = 529},
  [209] = {.lex_state = 529},
  [210] = {.lex_state = 529},
  [211] = {.lex_state = 529},
  [212] = {.lex_state = 529},
  [213] = {.lex_state = 529},
  [214] = {.lex_state = 529},
  [215] = {.lex_state = 529},
  [216] = {.lex_state = 529},
  [217] = {.lex_state = 529},
  [218] = {.lex_state = 529},
  [219] = {.lex_state = 529},
  [220] = {.lex_state = 529},
  [221] = {.lex_state = 529},
  [222] = {.lex_state = 529},
  [223] = {.lex_state = 529},
  [224] = {.lex_state = 529},
  [225] = {.lex_state = 529},
  [226] = {.lex_state = 529},
  [227] = {.lex_state = 529},
  [228] = {.lex_state = 529},
  [229] = {.lex_state = 529},
  [230] = {.lex_state = 529},
  [231] = {.lex_state = 529},
  [232] = {.lex_state = 529},
  [233] = {.lex_state = 529},
  [234] = {.lex_state = 529},
  [235] = {.lex_state = 529},
  [236] = {.lex_state = 529},
  [237] = {.lex_state = 529},
  [238] = {.lex_state = 529},
  [239] = {.lex_state = 529},
  [240] = {.lex_state = 529},
  [241] = {.lex_state = 529},
  [242] = {.lex_state = 529},
  [243] = {.lex_state = 529},
  [244] = {.lex_state = 640},
  [245] = {.lex_state = 640},
  [246] = {.lex_state = 640},
  [247] = {.lex_state = 529},
  [248] = {.lex_state = 640},
  [249] = {.lex_state = 640},
  [250] = {.lex_state = 640},
  [251] = {.lex_state = 529},
  [252] = {.lex_state = 529},
  [253] = {.lex_state = 640},
  [254] = {.lex_state = 640},
  [255] = {.lex_state = 640},
  [256] = {.lex_state = 640},
  [257] = {.lex_state = 640},
  [258] = {.lex_state = 640},
  [259] = {.lex_state = 529},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 529},
  [262] = {.lex_state = 529},
  [263] = {.lex_state = 640},
  [264] = {.lex_state = 529},
  [265] = {.lex_state = 529},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 529},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 529},
  [272] = {.lex_state = 529},
  [273] = {.lex_state = 529},
  [274] = {.lex_state = 530},
  [275] = {.lex_state = 640},
  [276] = {.lex_state = 529},
  [277] = {.lex_state = 640},
  [278] = {.lex_state = 530},
  [279] = {.lex_state = 530},
  [280] = {.lex_state = 529},
  [281] = {.lex_state = 529},
  [282] = {.lex_state = 529},
  [283] = {.lex_state = 640},
  [284] = {.lex_state = 640},
  [285] = {.lex_state = 640},
  [286] = {.lex_state = 529},
  [287] = {.lex_state = 529},
  [288] = {.lex_state = 640},
  [289] = {.lex_state = 640},
  [290] = {.lex_state = 529},
  [291] = {.lex_state = 529},
  [292] = {.lex_state = 640},
  [293] = {.lex_state = 640},
  [294] = {.lex_state = 640},
  [295] = {.lex_state = 640},
  [296] = {.lex_state = 530},
  [297] = {.lex_state = 530},
  [298] = {.lex_state = 529},
  [299] = {.lex_state = 529},
  [300] = {.lex_state = 530},
  [301] = {.lex_state = 530},
  [302] = {.lex_state = 640},
  [303] = {.lex_state = 529},
  [304] = {.lex_state = 530},
  [305] = {.lex_state = 530},
  [306] = {.lex_state = 530},
  [307] = {.lex_state = 530},
  [308] = {.lex_state = 530},
  [309] = {.lex_state = 530},
  [310] = {.lex_state = 530},
  [311] = {.lex_state = 530},
  [312] = {.lex_state = 530},
  [313] = {.lex_state = 529},
  [314] = {.lex_state = 530},
  [315] = {.lex_state = 530},
  [316] = {.lex_state = 530},
  [317] = {.lex_state = 530},
  [318] = {.lex_state = 529},
  [319] = {.lex_state = 640},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 640},
  [322] = {.lex_state = 640},
  [323] = {.lex_state = 640},
  [324] = {.lex_state = 532},
  [325] = {.lex_state = 533},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 529},
  [328] = {.lex_state = 640},
  [329] = {.lex_state = 640},
  [330] = {.lex_state = 640},
  [331] = {.lex_state = 529},
  [332] = {.lex_state = 640},
  [333] = {.lex_state = 640},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 532},
  [336] = {.lex_state = 529},
  [337] = {.lex_state = 640},
  [338] = {.lex_state = 640},
  [339] = {.lex_state = 683},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 683},
  [342] = {.lex_state = 688},
  [343] = {.lex_state = 640},
  [344] = {.lex_state = 528},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 640},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 683},
  [349] = {.lex_state = 688},
  [350] = {.lex_state = 688},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 683},
  [353] = {.lex_state = 688},
  [354] = {.lex_state = 529},
  [355] = {.lex_state = 640},
  [356] = {.lex_state = 640},
  [357] = {.lex_state = 1},
  [358] = {.lex_state = 683},
  [359] = {.lex_state = 688},
  [360] = {.lex_state = 640},
  [361] = {.lex_state = 533},
  [362] = {.lex_state = 640},
  [363] = {.lex_state = 640},
  [364] = {.lex_state = 640},
  [365] = {.lex_state = 640},
  [366] = {.lex_state = 640},
  [367] = {.lex_state = 532},
  [368] = {.lex_state = 640},
  [369] = {.lex_state = 640},
  [370] = {.lex_state = 640},
  [371] = {.lex_state = 532},
  [372] = {.lex_state = 533},
  [373] = {.lex_state = 529},
  [374] = {.lex_state = 640},
  [375] = {.lex_state = 640},
  [376] = {.lex_state = 532},
  [377] = {.lex_state = 0, .external_lex_state = 2},
  [378] = {.lex_state = 640},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [sym_regex_pattern] = ACTIONS(1),
    [anon_sym_r_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_EXISTS] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_EMPTY] = ACTIONS(1),
    [anon_sym_is_string] = ACTIONS(1),
    [anon_sym_IS_STRING] = ACTIONS(1),
    [anon_sym_is_list] = ACTIONS(1),
    [anon_sym_IS_LIST] = ACTIONS(1),
    [anon_sym_is_struct] = ACTIONS(1),
    [anon_sym_IS_STRUCT] = ACTIONS(1),
    [anon_sym_is_null] = ACTIONS(1),
    [anon_sym_IS_NULL] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_THIS] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_SOME] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_keys] = ACTIONS(1),
    [anon_sym_KEYS] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_rule] = ACTIONS(1),
    [sym_rule_name] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_guard] = STATE(345),
    [sym__primitive] = STATE(387),
    [sym_map] = STATE(387),
    [sym_list] = STATE(387),
    [sym_regex] = STATE(387),
    [sym_range] = STATE(387),
    [sym_query] = STATE(380),
    [sym_literal_value] = STATE(393),
    [sym_access] = STATE(388),
    [sym_clause] = STATE(104),
    [sym__real_rule_clause] = STATE(104),
    [sym__clauses] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_variable_reference] = STATE(243),
    [sym_when_expression] = STATE(370),
    [sym_query_block] = STATE(2),
    [sym_when_block] = STATE(2),
    [sym_named_rule_block] = STATE(2),
    [sym__block] = STATE(2),
    [sym_property] = STATE(243),
    [sym_string] = STATE(290),
    [sym_bool] = STATE(387),
    [sym_this] = STATE(243),
    [sym_some] = STATE(229),
    [sym_not_keyword] = STATE(320),
    [sym__rule] = STATE(325),
    [sym__rule_declaration] = STATE(262),
    [aux_sym_guard_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_r_LPAREN] = ACTIONS(15),
    [anon_sym_r_LBRACK] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_when] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(33),
    [anon_sym_this] = ACTIONS(35),
    [anon_sym_THIS] = ACTIONS(35),
    [anon_sym_some] = ACTIONS(37),
    [anon_sym_SOME] = ACTIONS(37),
    [anon_sym_NOT] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_rule] = ACTIONS(43),
    [sym_rule_name] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_rule,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      sym_some,
    STATE(262), 1,
      sym__rule_declaration,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(325), 1,
      sym__rule,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
    STATE(3), 7,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym_named_rule_block,
      sym__block,
      aux_sym_guard_repeat1,
  [127] = 35,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_r_LPAREN,
    ACTIONS(66), 1,
      anon_sym_r_LBRACK,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(72), 1,
      anon_sym_PERCENT,
    ACTIONS(75), 1,
      anon_sym_when,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(90), 1,
      sym_float,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(105), 1,
      anon_sym_rule,
    ACTIONS(108), 1,
      sym_rule_name,
    STATE(229), 1,
      sym_some,
    STATE(262), 1,
      sym__rule_declaration,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(325), 1,
      sym__rule,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(93), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(96), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(99), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(84), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
    STATE(3), 7,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym_named_rule_block,
      sym__block,
      aux_sym_guard_repeat1,
  [254] = 34,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_let,
    ACTIONS(115), 1,
      aux_sym_rule_clause_token1,
    ACTIONS(117), 1,
      aux_sym_rule_clause_token2,
    ACTIONS(119), 1,
      sym_rule_name,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(343), 1,
      sym_when_expression,
    STATE(377), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    STATE(390), 1,
      sym_query,
    STATE(391), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(78), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
    STATE(5), 7,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      sym_rule_clause,
      aux_sym_named_rule_block_repeat1,
  [378] = 34,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_let,
    ACTIONS(115), 1,
      aux_sym_rule_clause_token1,
    ACTIONS(117), 1,
      aux_sym_rule_clause_token2,
    ACTIONS(119), 1,
      sym_rule_name,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(343), 1,
      sym_when_expression,
    STATE(377), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    STATE(390), 1,
      sym_query,
    STATE(391), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(78), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
    STATE(7), 7,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      sym_rule_clause,
      aux_sym_named_rule_block_repeat1,
  [502] = 34,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_let,
    ACTIONS(115), 1,
      aux_sym_rule_clause_token1,
    ACTIONS(117), 1,
      aux_sym_rule_clause_token2,
    ACTIONS(119), 1,
      sym_rule_name,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(343), 1,
      sym_when_expression,
    STATE(377), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    STATE(390), 1,
      sym_query,
    STATE(391), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(78), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
    STATE(8), 7,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      sym_rule_clause,
      aux_sym_named_rule_block_repeat1,
  [626] = 34,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_SLASH,
    ACTIONS(139), 1,
      anon_sym_r_LPAREN,
    ACTIONS(142), 1,
      anon_sym_r_LBRACK,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(148), 1,
      anon_sym_PERCENT,
    ACTIONS(151), 1,
      anon_sym_when,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_integer,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(181), 1,
      aux_sym_rule_clause_token1,
    ACTIONS(184), 1,
      aux_sym_rule_clause_token2,
    ACTIONS(187), 1,
      sym_rule_name,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(343), 1,
      sym_when_expression,
    STATE(377), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    STATE(390), 1,
      sym_query,
    STATE(391), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(169), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(172), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(175), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(78), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(160), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
    STATE(7), 7,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      sym_rule_clause,
      aux_sym_named_rule_block_repeat1,
  [750] = 34,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_let,
    ACTIONS(115), 1,
      aux_sym_rule_clause_token1,
    ACTIONS(117), 1,
      aux_sym_rule_clause_token2,
    ACTIONS(119), 1,
      sym_rule_name,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(343), 1,
      sym_when_expression,
    STATE(377), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    STATE(390), 1,
      sym_query,
    STATE(391), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(78), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
    STATE(7), 7,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      sym_rule_clause,
      aux_sym_named_rule_block_repeat1,
  [874] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(11), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [991] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(12), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1108] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(13), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1225] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(13), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1342] = 32,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_SLASH,
    ACTIONS(214), 1,
      anon_sym_r_LPAREN,
    ACTIONS(217), 1,
      anon_sym_r_LBRACK,
    ACTIONS(220), 1,
      anon_sym_let,
    ACTIONS(223), 1,
      anon_sym_PERCENT,
    ACTIONS(226), 1,
      anon_sym_when,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      sym_integer,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(256), 1,
      sym_rule_name,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(247), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(250), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(235), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(13), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1459] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(16), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1576] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(17), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1693] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(13), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1810] = 32,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_when,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(370), 1,
      sym_when_expression,
    STATE(380), 1,
      sym_query,
    STATE(388), 1,
      sym_access,
    STATE(393), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(13), 6,
      sym__clauses,
      sym_assignment,
      sym_query_block,
      sym_when_block,
      sym__block,
      aux_sym_query_block_repeat1,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [1927] = 27,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(22), 2,
      sym__clauses,
      aux_sym_when_expression_repeat1,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(393), 2,
      sym_query,
      sym_literal_value,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [2026] = 6,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(21), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(269), 9,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(267), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2083] = 6,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(19), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(277), 9,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(275), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2140] = 6,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(21), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(281), 9,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(279), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2197] = 27,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_r_LPAREN,
    ACTIONS(17), 1,
      anon_sym_r_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(33), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_rule_name,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(39), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(23), 2,
      sym__clauses,
      aux_sym_when_expression_repeat1,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(393), 2,
      sym_query,
      sym_literal_value,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(29), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [2296] = 27,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(303), 1,
      anon_sym_r_LPAREN,
    ACTIONS(306), 1,
      anon_sym_r_LBRACK,
    ACTIONS(309), 1,
      anon_sym_PERCENT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      sym_integer,
    ACTIONS(324), 1,
      sym_float,
    ACTIONS(336), 1,
      anon_sym_BANG,
    ACTIONS(339), 1,
      sym_rule_name,
    STATE(229), 1,
      sym_some,
    STATE(290), 1,
      sym_string,
    STATE(320), 1,
      sym_not_keyword,
    STATE(388), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(330), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(333), 2,
      anon_sym_NOT,
      anon_sym_not,
    STATE(23), 2,
      sym__clauses,
      aux_sym_when_expression_repeat1,
    STATE(104), 2,
      sym_clause,
      sym__real_rule_clause,
    STATE(393), 2,
      sym_query,
      sym_literal_value,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(318), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(387), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [2395] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(342), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2443] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(346), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2491] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(350), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2539] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(354), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(358), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2635] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(342), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2683] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(362), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2731] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 11,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(366), 28,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_keys,
      anon_sym_KEYS,
      sym_identifier,
  [2779] = 6,
    ACTIONS(370), 1,
      anon_sym_DOT,
    ACTIONS(372), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(33), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(277), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(275), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [2831] = 6,
    ACTIONS(370), 1,
      anon_sym_DOT,
    ACTIONS(372), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(37), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(269), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(267), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [2883] = 6,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(36), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(269), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(267), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [2935] = 6,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(34), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(277), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(275), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [2987] = 6,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(36), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(281), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(279), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3039] = 6,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(387), 1,
      anon_sym_LBRACK2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(37), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
    ACTIONS(281), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(279), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3091] = 7,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_LT_LT,
    STATE(67), 1,
      sym_parameters,
    STATE(128), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(390), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3143] = 7,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_LT_LT,
    STATE(68), 1,
      sym_parameters,
    STATE(126), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(400), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3195] = 7,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_LT_LT,
    STATE(65), 1,
      sym_parameters,
    STATE(135), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(390), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3247] = 7,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_LT_LT,
    STATE(64), 1,
      sym_parameters,
    STATE(132), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(400), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3299] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(350), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3342] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(366), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3385] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(346), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3428] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 2,
      anon_sym_DOT,
      anon_sym_LBRACK2,
    ACTIONS(406), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(408), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3473] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(362), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3516] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(354), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3559] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(358), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3602] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(350), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3645] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(366), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(342), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3731] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 2,
      anon_sym_DOT,
      anon_sym_LBRACK2,
    ACTIONS(406), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(408), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3776] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(342), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [3819] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(342), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3862] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(362), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3905] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(354), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3948] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(358), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [3991] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 16,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(346), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [4034] = 21,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_r_LPAREN,
    ACTIONS(420), 1,
      anon_sym_r_LBRACK,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      sym_integer,
    ACTIONS(432), 1,
      sym_float,
    STATE(45), 1,
      sym_string,
    STATE(77), 1,
      sym_access,
    STATE(227), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(434), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(32), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    STATE(148), 3,
      sym_function_call,
      sym_query,
      sym_literal_value,
    ACTIONS(428), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(84), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [4113] = 21,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(444), 1,
      anon_sym_r_LPAREN,
    ACTIONS(446), 1,
      anon_sym_r_LBRACK,
    ACTIONS(448), 1,
      anon_sym_PERCENT,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(456), 1,
      sym_integer,
    ACTIONS(458), 1,
      sym_float,
    STATE(52), 1,
      sym_string,
    STATE(101), 1,
      sym_access,
    STATE(231), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(460), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(35), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    STATE(137), 3,
      sym_function_call,
      sym_query,
      sym_literal_value,
    ACTIONS(454), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(107), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [4192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 16,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(342), 18,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [4235] = 21,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_r_LPAREN,
    ACTIONS(420), 1,
      anon_sym_r_LBRACK,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      sym_integer,
    ACTIONS(432), 1,
      sym_float,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(45), 1,
      sym_string,
    STATE(77), 1,
      sym_access,
    STATE(227), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(434), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(117), 2,
      sym_query,
      sym_literal_value,
    STATE(32), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(428), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(84), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [4313] = 5,
    ACTIONS(396), 1,
      anon_sym_LT_LT,
    STATE(120), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(466), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(464), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [4359] = 5,
    ACTIONS(396), 1,
      anon_sym_LT_LT,
    STATE(128), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(390), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [4405] = 5,
    ACTIONS(404), 1,
      anon_sym_LT_LT,
    STATE(133), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(470), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [4451] = 13,
    ACTIONS(480), 1,
      anon_sym_BANG,
    STATE(70), 1,
      sym_binary_operator,
    STATE(177), 1,
      sym_not_keyword,
    STATE(223), 1,
      sym_unary_operator,
    STATE(233), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 2,
      anon_sym_DOT,
      anon_sym_LBRACK2,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(222), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(476), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [4513] = 5,
    ACTIONS(396), 1,
      anon_sym_LT_LT,
    STATE(123), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(470), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [4559] = 5,
    ACTIONS(404), 1,
      anon_sym_LT_LT,
    STATE(135), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(390), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [4605] = 5,
    ACTIONS(404), 1,
      anon_sym_LT_LT,
    STATE(129), 1,
      sym_custom_message,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(466), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(464), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [4651] = 21,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_r_LPAREN,
    ACTIONS(494), 1,
      anon_sym_r_LBRACK,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(504), 1,
      sym_integer,
    ACTIONS(506), 1,
      sym_float,
    STATE(205), 1,
      sym_string,
    STATE(225), 1,
      sym_access,
    STATE(230), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(224), 2,
      sym_query,
      sym_literal_value,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(502), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(215), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [4729] = 21,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_r_LPAREN,
    ACTIONS(420), 1,
      anon_sym_r_LBRACK,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      sym_integer,
    ACTIONS(432), 1,
      sym_float,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(45), 1,
      sym_string,
    STATE(77), 1,
      sym_access,
    STATE(227), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(434), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(103), 2,
      sym_query,
      sym_literal_value,
    STATE(32), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(428), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(84), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [4807] = 13,
    ACTIONS(480), 1,
      anon_sym_BANG,
    STATE(70), 1,
      sym_binary_operator,
    STATE(177), 1,
      sym_not_keyword,
    STATE(223), 1,
      sym_unary_operator,
    STATE(233), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 2,
      anon_sym_DOT,
      anon_sym_LBRACK2,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(218), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(476), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [4869] = 21,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_r_LPAREN,
    ACTIONS(494), 1,
      anon_sym_r_LBRACK,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(504), 1,
      sym_integer,
    ACTIONS(506), 1,
      sym_float,
    STATE(205), 1,
      sym_string,
    STATE(225), 1,
      sym_access,
    STATE(230), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(216), 2,
      sym_query,
      sym_literal_value,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(502), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(215), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [4947] = 21,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(444), 1,
      anon_sym_r_LPAREN,
    ACTIONS(446), 1,
      anon_sym_r_LBRACK,
    ACTIONS(448), 1,
      anon_sym_PERCENT,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(456), 1,
      sym_integer,
    ACTIONS(458), 1,
      sym_float,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(52), 1,
      sym_string,
    STATE(101), 1,
      sym_access,
    STATE(231), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(460), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(93), 2,
      sym_query,
      sym_literal_value,
    STATE(35), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(454), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(107), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [5025] = 21,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(444), 1,
      anon_sym_r_LPAREN,
    ACTIONS(446), 1,
      anon_sym_r_LBRACK,
    ACTIONS(448), 1,
      anon_sym_PERCENT,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(456), 1,
      sym_integer,
    ACTIONS(458), 1,
      sym_float,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(52), 1,
      sym_string,
    STATE(101), 1,
      sym_access,
    STATE(231), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(460), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(100), 2,
      sym_query,
      sym_literal_value,
    STATE(35), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
    ACTIONS(454), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(107), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_bool,
  [5103] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(514), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(512), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5144] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(516), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(518), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5185] = 6,
    ACTIONS(526), 1,
      anon_sym_PIPEOR_PIPE,
    STATE(138), 1,
      sym_or_term,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(524), 2,
      anon_sym_or,
      anon_sym_OR,
    ACTIONS(522), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(520), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5232] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(528), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(530), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5273] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(532), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(534), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5314] = 13,
    ACTIONS(480), 1,
      anon_sym_BANG,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_binary_operator,
    STATE(82), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_not_keyword,
    STATE(234), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(69), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(538), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [5375] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(540), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(542), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5416] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(546), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5457] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(550), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5498] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(554), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5539] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(558), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(556), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(562), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5621] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(566), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5662] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(568), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(570), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(528), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(530), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5744] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(540), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(542), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5785] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(574), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(572), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5826] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(576), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5867] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(580), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [5908] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(574), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(572), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5949] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(586), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [5990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(514), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(512), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6031] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(590), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6072] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(594), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(598), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(596), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6154] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(516), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(518), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6195] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(532), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(534), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6236] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(576), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6277] = 6,
    ACTIONS(602), 1,
      anon_sym_PIPEOR_PIPE,
    STATE(144), 1,
      sym_or_term,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(600), 2,
      anon_sym_or,
      anon_sym_OR,
    ACTIONS(522), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(520), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6324] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(580), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6365] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(546), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6406] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(550), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6447] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(554), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6488] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(562), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6529] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(566), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6570] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(568), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(570), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6611] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(586), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6652] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(590), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6693] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 15,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(594), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6734] = 13,
    ACTIONS(480), 1,
      anon_sym_BANG,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_binary_operator,
    STATE(91), 1,
      sym_unary_operator,
    STATE(176), 1,
      sym_not_keyword,
    STATE(236), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(63), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(606), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [6795] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(558), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(556), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6836] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(598), 15,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(596), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [6877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(610), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(608), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6917] = 4,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(342), 16,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6959] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(616), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(614), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [6999] = 12,
    ACTIONS(480), 1,
      anon_sym_BANG,
    STATE(70), 1,
      sym_binary_operator,
    STATE(177), 1,
      sym_not_keyword,
    STATE(223), 1,
      sym_unary_operator,
    STATE(233), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(218), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(476), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [7057] = 12,
    ACTIONS(480), 1,
      anon_sym_BANG,
    STATE(70), 1,
      sym_binary_operator,
    STATE(177), 1,
      sym_not_keyword,
    STATE(223), 1,
      sym_unary_operator,
    STATE(233), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(222), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(476), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [7115] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(620), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(618), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7155] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(610), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(608), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7195] = 4,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(342), 16,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7237] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(390), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(624), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7317] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(470), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7357] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(616), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(614), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7397] = 12,
    ACTIONS(480), 1,
      anon_sym_BANG,
    STATE(71), 1,
      sym_binary_operator,
    STATE(82), 1,
      sym_unary_operator,
    STATE(175), 1,
      sym_not_keyword,
    STATE(234), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(69), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(538), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [7455] = 12,
    ACTIONS(480), 1,
      anon_sym_BANG,
    STATE(74), 1,
      sym_binary_operator,
    STATE(91), 1,
      sym_unary_operator,
    STATE(176), 1,
      sym_not_keyword,
    STATE(236), 1,
      sym_keys_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(482), 2,
      anon_sym_keys,
      anon_sym_KEYS,
    STATE(63), 2,
      sym_unary_comparison,
      sym_binary_comparison,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(606), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [7513] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 14,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(390), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7553] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(620), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(618), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7593] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(624), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7633] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 14,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(470), 17,
      anon_sym_let,
      anon_sym_when,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7673] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(628), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(630), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7710] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(634), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(632), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7747] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(638), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(636), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7784] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(640), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(642), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7821] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(646), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7858] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(650), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(648), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7895] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(652), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(654), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [7932] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(640), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(642), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [7969] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(638), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(636), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8006] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(652), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(654), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [8043] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(628), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(630), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [8080] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(656), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(658), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(634), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(632), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8154] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(650), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(648), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8191] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(660), 13,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(662), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8228] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(660), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(662), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [8265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(656), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(658), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [8302] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(666), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(664), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [8339] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 13,
      sym_rule_name,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
      aux_sym_rule_clause_token1,
    ACTIONS(646), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      aux_sym_rule_clause_token2,
  [8376] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(668), 12,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(670), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8412] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(672), 12,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(674), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8448] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(676), 12,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(678), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8484] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(680), 12,
      sym_rule_name,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_BANG,
    ACTIONS(682), 15,
      anon_sym_let,
      anon_sym_when,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      anon_sym_rule,
  [8520] = 16,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(696), 1,
      anon_sym_PERCENT,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    STATE(163), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(201), 2,
      sym_literal_value,
      sym_variable_reference,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8580] = 16,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(696), 1,
      anon_sym_PERCENT,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(201), 2,
      sym_literal_value,
      sym_variable_reference,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8640] = 16,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(718), 1,
      anon_sym_SLASH,
    ACTIONS(721), 1,
      anon_sym_r_LPAREN,
    ACTIONS(724), 1,
      anon_sym_r_LBRACK,
    ACTIONS(727), 1,
      anon_sym_PERCENT,
    ACTIONS(730), 1,
      anon_sym_DQUOTE,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(739), 1,
      sym_integer,
    ACTIONS(742), 1,
      sym_float,
    STATE(161), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(201), 2,
      sym_literal_value,
      sym_variable_reference,
    ACTIONS(736), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8700] = 16,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(696), 1,
      anon_sym_PERCENT,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(201), 2,
      sym_literal_value,
      sym_variable_reference,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8760] = 16,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(696), 1,
      anon_sym_PERCENT,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(201), 2,
      sym_literal_value,
      sym_variable_reference,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8820] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8876] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8932] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [8988] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9044] = 15,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(760), 1,
      anon_sym_LBRACK,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    ACTIONS(765), 1,
      anon_sym_SLASH,
    ACTIONS(768), 1,
      anon_sym_r_LPAREN,
    ACTIONS(771), 1,
      anon_sym_r_LBRACK,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      anon_sym_SQUOTE,
    ACTIONS(783), 1,
      sym_integer,
    ACTIONS(786), 1,
      sym_float,
    STATE(168), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9100] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9156] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9212] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9268] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9324] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(797), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9380] = 15,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_r_LPAREN,
    ACTIONS(694), 1,
      anon_sym_r_LBRACK,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      sym_integer,
    ACTIONS(706), 1,
      sym_float,
    ACTIONS(799), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_list_repeat1,
    STATE(204), 1,
      sym_literal_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(193), 7,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_range,
      sym_string,
      sym_bool,
  [9436] = 6,
    STATE(62), 1,
      sym_binary_operator,
    STATE(105), 1,
      sym_unary_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(538), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [9473] = 6,
    STATE(75), 1,
      sym_binary_operator,
    STATE(94), 1,
      sym_unary_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(606), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [9510] = 6,
    STATE(73), 1,
      sym_binary_operator,
    STATE(226), 1,
      sym_unary_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(476), 12,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [9547] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(803), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(801), 18,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_exists,
      anon_sym_EXISTS,
      anon_sym_empty,
      anon_sym_EMPTY,
      anon_sym_is_string,
      anon_sym_IS_STRING,
      anon_sym_is_list,
      anon_sym_IS_LIST,
      anon_sym_is_struct,
      anon_sym_IS_STRUCT,
      anon_sym_is_null,
      anon_sym_IS_NULL,
  [9576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(807), 9,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_float,
    ACTIONS(805), 10,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_integer,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [9604] = 3,
    ACTIONS(362), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 18,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [9632] = 3,
    ACTIONS(546), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [9659] = 15,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 1,
      sym_integer,
    ACTIONS(811), 1,
      sym_wildcard,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(196), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [9710] = 3,
    ACTIONS(554), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [9737] = 3,
    ACTIONS(562), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [9764] = 3,
    ACTIONS(570), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(568), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [9791] = 3,
    ACTIONS(566), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [9818] = 15,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(813), 1,
      sym_integer,
    ACTIONS(815), 1,
      sym_wildcard,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(191), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [9869] = 15,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      sym_integer,
    ACTIONS(819), 1,
      sym_wildcard,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(194), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [9920] = 15,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(821), 1,
      sym_integer,
    ACTIONS(823), 1,
      sym_wildcard,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(190), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [9971] = 14,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(197), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [10019] = 14,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(197), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [10067] = 3,
    ACTIONS(594), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10093] = 3,
    ACTIONS(550), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10119] = 14,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(829), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(197), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [10167] = 10,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(831), 1,
      sym_integer,
    ACTIONS(833), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
    STATE(253), 6,
      sym__primitive,
      sym_map,
      sym_list,
      sym_regex,
      sym_string,
      sym_bool,
  [10207] = 14,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(197), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 2,
      anon_sym_some,
      anon_sym_SOME,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [10255] = 14,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    ACTIONS(842), 1,
      anon_sym_PERCENT,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_string,
    STATE(121), 1,
      sym_access,
    STATE(197), 1,
      aux_sym_filter_repeat1,
    STATE(207), 1,
      sym__filter_expression,
    STATE(228), 1,
      sym_some,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(851), 2,
      anon_sym_this,
      anon_sym_THIS,
    ACTIONS(854), 2,
      anon_sym_some,
      anon_sym_SOME,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [10303] = 3,
    ACTIONS(586), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10329] = 3,
    ACTIONS(512), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(514), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10355] = 3,
    ACTIONS(590), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10381] = 4,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(857), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10408] = 3,
    ACTIONS(346), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10433] = 3,
    ACTIONS(865), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(863), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10457] = 4,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(867), 13,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10483] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 2,
      anon_sym_DOT,
      anon_sym_LBRACK2,
    ACTIONS(406), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(408), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10508] = 3,
    ACTIONS(875), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(873), 13,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SLASH,
      anon_sym_r_LPAREN,
      anon_sym_r_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_true,
      anon_sym_False,
      anon_sym_false,
      sym_float,
  [10531] = 6,
    ACTIONS(883), 1,
      anon_sym_PIPEOR_PIPE,
    STATE(235), 1,
      sym_or_term,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(881), 2,
      anon_sym_or,
      anon_sym_OR,
    ACTIONS(879), 4,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(877), 5,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10559] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(594), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(554), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10601] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(546), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10622] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(562), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10643] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(566), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10664] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(568), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(570), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10685] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(532), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(534), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10706] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(550), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(598), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(596), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10748] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(528), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(530), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10769] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(887), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(885), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10790] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(586), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10811] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(514), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(512), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10832] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(590), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10853] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(891), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(889), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10874] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(540), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(542), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10895] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(576), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10916] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(516), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(518), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_PIPEOR_PIPE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(580), 7,
      anon_sym_or,
      anon_sym_OR,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [10958] = 9,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(53), 1,
      sym_string,
    STATE(80), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(32), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [10990] = 9,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_string,
    STATE(122), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [11022] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(286), 1,
      sym_string,
    STATE(392), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(243), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [11054] = 9,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym_string,
    STATE(214), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(508), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(20), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [11086] = 9,
    ACTIONS(448), 1,
      anon_sym_PERCENT,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(54), 1,
      sym_string,
    STATE(102), 1,
      sym_access,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 2,
      anon_sym_this,
      anon_sym_THIS,
    STATE(35), 3,
      sym_variable_reference,
      sym_property,
      sym_this,
  [11118] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(640), 4,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(642), 5,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [11136] = 4,
    STATE(73), 1,
      sym_binary_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11156] = 4,
    STATE(62), 1,
      sym_binary_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11176] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(895), 4,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(893), 5,
      anon_sym_this,
      anon_sym_THIS,
      anon_sym_some,
      anon_sym_SOME,
      sym_identifier,
  [11194] = 4,
    STATE(75), 1,
      sym_binary_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(472), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11214] = 8,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(897), 1,
      sym_identifier,
    ACTIONS(899), 1,
      sym_wildcard,
    STATE(53), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(47), 2,
      sym_variable_reference,
      sym_property,
  [11241] = 8,
    ACTIONS(496), 1,
      anon_sym_PERCENT,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(901), 1,
      sym_identifier,
    ACTIONS(903), 1,
      sym_wildcard,
    STATE(29), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(27), 2,
      sym_variable_reference,
      sym_property,
  [11268] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(907), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(905), 6,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
      anon_sym_IN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11285] = 8,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(909), 1,
      sym_identifier,
    ACTIONS(911), 1,
      sym_wildcard,
    STATE(286), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(276), 2,
      sym_variable_reference,
      sym_property,
  [11312] = 8,
    ACTIONS(448), 1,
      anon_sym_PERCENT,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(913), 1,
      sym_identifier,
    ACTIONS(915), 1,
      sym_wildcard,
    STATE(54), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(56), 2,
      sym_variable_reference,
      sym_property,
  [11339] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(917), 3,
      anon_sym_this,
      anon_sym_THIS,
      sym_identifier,
    ACTIONS(919), 3,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [11354] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym__whitespace,
    ACTIONS(921), 1,
      anon_sym_DOT,
    ACTIONS(923), 1,
      anon_sym_LBRACK2,
    STATE(251), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
  [11372] = 6,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11392] = 6,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
    ACTIONS(932), 1,
      anon_sym_SQUOTE,
    STATE(245), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11412] = 6,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__whitespace,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(940), 1,
      anon_sym_LBRACK2,
    STATE(247), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
  [11450] = 6,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11470] = 6,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11490] = 6,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11510] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__whitespace,
    ACTIONS(921), 1,
      anon_sym_DOT,
    ACTIONS(923), 1,
      anon_sym_LBRACK2,
    STATE(247), 3,
      sym_traversal,
      sym_filter,
      aux_sym_access_repeat1,
  [11528] = 4,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(949), 2,
      anon_sym_LBRACE,
      anon_sym_when,
  [11543] = 3,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(955), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [11556] = 5,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11573] = 5,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    STATE(249), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11590] = 5,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    STATE(246), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11607] = 5,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    STATE(250), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11624] = 5,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      aux_sym_map_repeat1,
    STATE(344), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11641] = 4,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym_custom_message_token1,
    ACTIONS(963), 1,
      anon_sym_GT_GT,
    ACTIONS(965), 1,
      sym__whitespace,
    STATE(267), 1,
      aux_sym_custom_message_repeat1,
  [11671] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(967), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [11683] = 4,
    ACTIONS(971), 1,
      anon_sym_LBRACE,
    ACTIONS(973), 1,
      anon_sym_when,
    STATE(321), 1,
      sym_when_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(975), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [11707] = 4,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11721] = 4,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__whitespace,
    ACTIONS(981), 1,
      aux_sym_custom_message_token1,
    ACTIONS(983), 1,
      anon_sym_GT_GT,
    STATE(270), 1,
      aux_sym_custom_message_repeat1,
  [11751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__whitespace,
    ACTIONS(985), 1,
      aux_sym_custom_message_token1,
    ACTIONS(988), 1,
      anon_sym_GT_GT,
    STATE(267), 1,
      aux_sym_custom_message_repeat1,
  [11767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__whitespace,
    ACTIONS(990), 1,
      aux_sym_custom_message_token1,
    ACTIONS(992), 1,
      anon_sym_GT_GT,
    STATE(260), 1,
      aux_sym_custom_message_repeat1,
  [11783] = 4,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym_custom_message_token1,
    ACTIONS(965), 1,
      sym__whitespace,
    ACTIONS(996), 1,
      anon_sym_GT_GT,
    STATE(267), 1,
      aux_sym_custom_message_repeat1,
  [11813] = 4,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11827] = 4,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11841] = 4,
    ACTIONS(1002), 1,
      sym_identifier,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11855] = 3,
    ACTIONS(1007), 1,
      sym_integer,
    ACTIONS(1009), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11866] = 3,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [11886] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1015), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11895] = 3,
    ACTIONS(1017), 1,
      sym_integer,
    ACTIONS(1019), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11906] = 3,
    ACTIONS(1021), 1,
      sym_integer,
    ACTIONS(1023), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [11926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [11935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [11944] = 3,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11955] = 3,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11966] = 3,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [11977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [11986] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1037), 2,
      anon_sym_LBRACE,
      anon_sym_when,
  [11995] = 3,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12006] = 3,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(1045), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym__whitespace,
    ACTIONS(344), 2,
      anon_sym_DOT,
      anon_sym_LBRACK2,
  [12028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [12037] = 3,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(1049), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12048] = 3,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    ACTIONS(1053), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12059] = 3,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(1057), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12070] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1059), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12079] = 3,
    ACTIONS(1061), 1,
      sym_integer,
    ACTIONS(1063), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12090] = 3,
    ACTIONS(1065), 1,
      sym_integer,
    ACTIONS(1067), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [12110] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1069), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [12119] = 3,
    ACTIONS(1071), 1,
      sym_integer,
    ACTIONS(1073), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12130] = 3,
    ACTIONS(1075), 1,
      sym_integer,
    ACTIONS(1077), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12141] = 3,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    ACTIONS(1081), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12152] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(558), 2,
      anon_sym_LBRACE,
      anon_sym_when,
  [12161] = 3,
    ACTIONS(1083), 1,
      sym_integer,
    ACTIONS(1085), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12172] = 3,
    ACTIONS(1087), 1,
      sym_integer,
    ACTIONS(1089), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12183] = 3,
    ACTIONS(1091), 1,
      sym_integer,
    ACTIONS(1093), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12194] = 3,
    ACTIONS(1095), 1,
      sym_integer,
    ACTIONS(1097), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12205] = 3,
    ACTIONS(1099), 1,
      sym_integer,
    ACTIONS(1101), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12216] = 3,
    ACTIONS(1103), 1,
      sym_integer,
    ACTIONS(1105), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12227] = 3,
    ACTIONS(1107), 1,
      sym_integer,
    ACTIONS(1109), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12238] = 3,
    ACTIONS(1111), 1,
      sym_integer,
    ACTIONS(1113), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12249] = 3,
    ACTIONS(1115), 1,
      sym_integer,
    ACTIONS(1117), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12260] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(574), 2,
      anon_sym_LBRACE,
      anon_sym_when,
  [12269] = 3,
    ACTIONS(1119), 1,
      sym_integer,
    ACTIONS(1121), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12280] = 3,
    ACTIONS(1123), 1,
      sym_integer,
    ACTIONS(1125), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12291] = 3,
    ACTIONS(1127), 1,
      sym_integer,
    ACTIONS(1129), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12302] = 3,
    ACTIONS(1131), 1,
      sym_integer,
    ACTIONS(1133), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_DOT,
      anon_sym_LBRACK2,
      sym__whitespace,
  [12322] = 2,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12330] = 2,
    ACTIONS(1137), 1,
      sym_rule_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12338] = 2,
    ACTIONS(1139), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12346] = 2,
    ACTIONS(1141), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12354] = 2,
    ACTIONS(1143), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12362] = 2,
    ACTIONS(1145), 1,
      aux_sym_variable_reference_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12370] = 2,
    ACTIONS(1147), 1,
      sym_variable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12378] = 2,
    ACTIONS(1149), 1,
      sym_regex_pattern,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12386] = 2,
    ACTIONS(1151), 1,
      anon_sym_SLASH2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12394] = 2,
    ACTIONS(1153), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12402] = 2,
    ACTIONS(1153), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12410] = 2,
    ACTIONS(1155), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12418] = 2,
    ACTIONS(1157), 1,
      anon_sym_SLASH2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12426] = 2,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12434] = 2,
    ACTIONS(1159), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12442] = 2,
    ACTIONS(801), 1,
      sym_rule_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12450] = 2,
    ACTIONS(1161), 1,
      aux_sym_variable_reference_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12458] = 2,
    ACTIONS(1163), 1,
      anon_sym_SLASH2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12466] = 2,
    ACTIONS(1165), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12474] = 2,
    ACTIONS(1165), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12482] = 2,
    ACTIONS(1167), 1,
      aux_sym_string_token1,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12490] = 2,
    ACTIONS(1169), 1,
      sym_regex_pattern,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12498] = 2,
    ACTIONS(1171), 1,
      aux_sym_string_token1,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12506] = 2,
    ACTIONS(1173), 1,
      aux_sym_string_token2,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12514] = 2,
    ACTIONS(1175), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12522] = 2,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12530] = 2,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12538] = 2,
    ACTIONS(1181), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12546] = 2,
    ACTIONS(1183), 1,
      sym_regex_pattern,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12554] = 2,
    ACTIONS(1185), 1,
      aux_sym_string_token1,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12562] = 2,
    ACTIONS(1187), 1,
      aux_sym_string_token2,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12570] = 2,
    ACTIONS(1189), 1,
      aux_sym_string_token2,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12578] = 2,
    ACTIONS(1191), 1,
      sym_regex_pattern,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12586] = 2,
    ACTIONS(1193), 1,
      aux_sym_string_token1,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12594] = 2,
    ACTIONS(1195), 1,
      aux_sym_string_token2,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12602] = 2,
    ACTIONS(1197), 1,
      anon_sym_SLASH2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12610] = 2,
    ACTIONS(1199), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12618] = 2,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12626] = 2,
    ACTIONS(1203), 1,
      sym_regex_pattern,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12634] = 2,
    ACTIONS(1205), 1,
      aux_sym_string_token1,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12642] = 2,
    ACTIONS(1207), 1,
      aux_sym_string_token2,
    ACTIONS(965), 2,
      sym_comment,
      sym__whitespace,
  [12650] = 2,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12658] = 2,
    ACTIONS(1211), 1,
      sym_variable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12666] = 2,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12674] = 2,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12682] = 2,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12690] = 2,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12698] = 2,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12706] = 2,
    ACTIONS(1223), 1,
      aux_sym_variable_reference_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12714] = 2,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12722] = 2,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12730] = 2,
    ACTIONS(1229), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12738] = 2,
    ACTIONS(1231), 1,
      aux_sym_variable_reference_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12746] = 2,
    ACTIONS(1233), 1,
      sym_variable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12754] = 2,
    ACTIONS(1235), 1,
      anon_sym_SLASH2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12762] = 2,
    ACTIONS(1237), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12770] = 2,
    ACTIONS(1237), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12778] = 2,
    ACTIONS(1239), 1,
      aux_sym_variable_reference_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12786] = 2,
    ACTIONS(1241), 1,
      sym_rule_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12794] = 2,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [12802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__whitespace,
  [12809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym__whitespace,
  [12816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__whitespace,
  [12823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__whitespace,
  [12830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__whitespace,
  [12837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym__whitespace,
  [12844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__whitespace,
  [12851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__whitespace,
  [12858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__whitespace,
  [12865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__whitespace,
  [12872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__whitespace,
  [12879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym__whitespace,
  [12886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym__whitespace,
  [12893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym__whitespace,
  [12900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      sym__whitespace,
  [12907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 127,
  [SMALL_STATE(4)] = 254,
  [SMALL_STATE(5)] = 378,
  [SMALL_STATE(6)] = 502,
  [SMALL_STATE(7)] = 626,
  [SMALL_STATE(8)] = 750,
  [SMALL_STATE(9)] = 874,
  [SMALL_STATE(10)] = 991,
  [SMALL_STATE(11)] = 1108,
  [SMALL_STATE(12)] = 1225,
  [SMALL_STATE(13)] = 1342,
  [SMALL_STATE(14)] = 1459,
  [SMALL_STATE(15)] = 1576,
  [SMALL_STATE(16)] = 1693,
  [SMALL_STATE(17)] = 1810,
  [SMALL_STATE(18)] = 1927,
  [SMALL_STATE(19)] = 2026,
  [SMALL_STATE(20)] = 2083,
  [SMALL_STATE(21)] = 2140,
  [SMALL_STATE(22)] = 2197,
  [SMALL_STATE(23)] = 2296,
  [SMALL_STATE(24)] = 2395,
  [SMALL_STATE(25)] = 2443,
  [SMALL_STATE(26)] = 2491,
  [SMALL_STATE(27)] = 2539,
  [SMALL_STATE(28)] = 2587,
  [SMALL_STATE(29)] = 2635,
  [SMALL_STATE(30)] = 2683,
  [SMALL_STATE(31)] = 2731,
  [SMALL_STATE(32)] = 2779,
  [SMALL_STATE(33)] = 2831,
  [SMALL_STATE(34)] = 2883,
  [SMALL_STATE(35)] = 2935,
  [SMALL_STATE(36)] = 2987,
  [SMALL_STATE(37)] = 3039,
  [SMALL_STATE(38)] = 3091,
  [SMALL_STATE(39)] = 3143,
  [SMALL_STATE(40)] = 3195,
  [SMALL_STATE(41)] = 3247,
  [SMALL_STATE(42)] = 3299,
  [SMALL_STATE(43)] = 3342,
  [SMALL_STATE(44)] = 3385,
  [SMALL_STATE(45)] = 3428,
  [SMALL_STATE(46)] = 3473,
  [SMALL_STATE(47)] = 3516,
  [SMALL_STATE(48)] = 3559,
  [SMALL_STATE(49)] = 3602,
  [SMALL_STATE(50)] = 3645,
  [SMALL_STATE(51)] = 3688,
  [SMALL_STATE(52)] = 3731,
  [SMALL_STATE(53)] = 3776,
  [SMALL_STATE(54)] = 3819,
  [SMALL_STATE(55)] = 3862,
  [SMALL_STATE(56)] = 3905,
  [SMALL_STATE(57)] = 3948,
  [SMALL_STATE(58)] = 3991,
  [SMALL_STATE(59)] = 4034,
  [SMALL_STATE(60)] = 4113,
  [SMALL_STATE(61)] = 4192,
  [SMALL_STATE(62)] = 4235,
  [SMALL_STATE(63)] = 4313,
  [SMALL_STATE(64)] = 4359,
  [SMALL_STATE(65)] = 4405,
  [SMALL_STATE(66)] = 4451,
  [SMALL_STATE(67)] = 4513,
  [SMALL_STATE(68)] = 4559,
  [SMALL_STATE(69)] = 4605,
  [SMALL_STATE(70)] = 4651,
  [SMALL_STATE(71)] = 4729,
  [SMALL_STATE(72)] = 4807,
  [SMALL_STATE(73)] = 4869,
  [SMALL_STATE(74)] = 4947,
  [SMALL_STATE(75)] = 5025,
  [SMALL_STATE(76)] = 5103,
  [SMALL_STATE(77)] = 5144,
  [SMALL_STATE(78)] = 5185,
  [SMALL_STATE(79)] = 5232,
  [SMALL_STATE(80)] = 5273,
  [SMALL_STATE(81)] = 5314,
  [SMALL_STATE(82)] = 5375,
  [SMALL_STATE(83)] = 5416,
  [SMALL_STATE(84)] = 5457,
  [SMALL_STATE(85)] = 5498,
  [SMALL_STATE(86)] = 5539,
  [SMALL_STATE(87)] = 5580,
  [SMALL_STATE(88)] = 5621,
  [SMALL_STATE(89)] = 5662,
  [SMALL_STATE(90)] = 5703,
  [SMALL_STATE(91)] = 5744,
  [SMALL_STATE(92)] = 5785,
  [SMALL_STATE(93)] = 5826,
  [SMALL_STATE(94)] = 5867,
  [SMALL_STATE(95)] = 5908,
  [SMALL_STATE(96)] = 5949,
  [SMALL_STATE(97)] = 5990,
  [SMALL_STATE(98)] = 6031,
  [SMALL_STATE(99)] = 6072,
  [SMALL_STATE(100)] = 6113,
  [SMALL_STATE(101)] = 6154,
  [SMALL_STATE(102)] = 6195,
  [SMALL_STATE(103)] = 6236,
  [SMALL_STATE(104)] = 6277,
  [SMALL_STATE(105)] = 6324,
  [SMALL_STATE(106)] = 6365,
  [SMALL_STATE(107)] = 6406,
  [SMALL_STATE(108)] = 6447,
  [SMALL_STATE(109)] = 6488,
  [SMALL_STATE(110)] = 6529,
  [SMALL_STATE(111)] = 6570,
  [SMALL_STATE(112)] = 6611,
  [SMALL_STATE(113)] = 6652,
  [SMALL_STATE(114)] = 6693,
  [SMALL_STATE(115)] = 6734,
  [SMALL_STATE(116)] = 6795,
  [SMALL_STATE(117)] = 6836,
  [SMALL_STATE(118)] = 6877,
  [SMALL_STATE(119)] = 6917,
  [SMALL_STATE(120)] = 6959,
  [SMALL_STATE(121)] = 6999,
  [SMALL_STATE(122)] = 7057,
  [SMALL_STATE(123)] = 7115,
  [SMALL_STATE(124)] = 7155,
  [SMALL_STATE(125)] = 7195,
  [SMALL_STATE(126)] = 7237,
  [SMALL_STATE(127)] = 7277,
  [SMALL_STATE(128)] = 7317,
  [SMALL_STATE(129)] = 7357,
  [SMALL_STATE(130)] = 7397,
  [SMALL_STATE(131)] = 7455,
  [SMALL_STATE(132)] = 7513,
  [SMALL_STATE(133)] = 7553,
  [SMALL_STATE(134)] = 7593,
  [SMALL_STATE(135)] = 7633,
  [SMALL_STATE(136)] = 7673,
  [SMALL_STATE(137)] = 7710,
  [SMALL_STATE(138)] = 7747,
  [SMALL_STATE(139)] = 7784,
  [SMALL_STATE(140)] = 7821,
  [SMALL_STATE(141)] = 7858,
  [SMALL_STATE(142)] = 7895,
  [SMALL_STATE(143)] = 7932,
  [SMALL_STATE(144)] = 7969,
  [SMALL_STATE(145)] = 8006,
  [SMALL_STATE(146)] = 8043,
  [SMALL_STATE(147)] = 8080,
  [SMALL_STATE(148)] = 8117,
  [SMALL_STATE(149)] = 8154,
  [SMALL_STATE(150)] = 8191,
  [SMALL_STATE(151)] = 8228,
  [SMALL_STATE(152)] = 8265,
  [SMALL_STATE(153)] = 8302,
  [SMALL_STATE(154)] = 8339,
  [SMALL_STATE(155)] = 8376,
  [SMALL_STATE(156)] = 8412,
  [SMALL_STATE(157)] = 8448,
  [SMALL_STATE(158)] = 8484,
  [SMALL_STATE(159)] = 8520,
  [SMALL_STATE(160)] = 8580,
  [SMALL_STATE(161)] = 8640,
  [SMALL_STATE(162)] = 8700,
  [SMALL_STATE(163)] = 8760,
  [SMALL_STATE(164)] = 8820,
  [SMALL_STATE(165)] = 8876,
  [SMALL_STATE(166)] = 8932,
  [SMALL_STATE(167)] = 8988,
  [SMALL_STATE(168)] = 9044,
  [SMALL_STATE(169)] = 9100,
  [SMALL_STATE(170)] = 9156,
  [SMALL_STATE(171)] = 9212,
  [SMALL_STATE(172)] = 9268,
  [SMALL_STATE(173)] = 9324,
  [SMALL_STATE(174)] = 9380,
  [SMALL_STATE(175)] = 9436,
  [SMALL_STATE(176)] = 9473,
  [SMALL_STATE(177)] = 9510,
  [SMALL_STATE(178)] = 9547,
  [SMALL_STATE(179)] = 9576,
  [SMALL_STATE(180)] = 9604,
  [SMALL_STATE(181)] = 9632,
  [SMALL_STATE(182)] = 9659,
  [SMALL_STATE(183)] = 9710,
  [SMALL_STATE(184)] = 9737,
  [SMALL_STATE(185)] = 9764,
  [SMALL_STATE(186)] = 9791,
  [SMALL_STATE(187)] = 9818,
  [SMALL_STATE(188)] = 9869,
  [SMALL_STATE(189)] = 9920,
  [SMALL_STATE(190)] = 9971,
  [SMALL_STATE(191)] = 10019,
  [SMALL_STATE(192)] = 10067,
  [SMALL_STATE(193)] = 10093,
  [SMALL_STATE(194)] = 10119,
  [SMALL_STATE(195)] = 10167,
  [SMALL_STATE(196)] = 10207,
  [SMALL_STATE(197)] = 10255,
  [SMALL_STATE(198)] = 10303,
  [SMALL_STATE(199)] = 10329,
  [SMALL_STATE(200)] = 10355,
  [SMALL_STATE(201)] = 10381,
  [SMALL_STATE(202)] = 10408,
  [SMALL_STATE(203)] = 10433,
  [SMALL_STATE(204)] = 10457,
  [SMALL_STATE(205)] = 10483,
  [SMALL_STATE(206)] = 10508,
  [SMALL_STATE(207)] = 10531,
  [SMALL_STATE(208)] = 10559,
  [SMALL_STATE(209)] = 10580,
  [SMALL_STATE(210)] = 10601,
  [SMALL_STATE(211)] = 10622,
  [SMALL_STATE(212)] = 10643,
  [SMALL_STATE(213)] = 10664,
  [SMALL_STATE(214)] = 10685,
  [SMALL_STATE(215)] = 10706,
  [SMALL_STATE(216)] = 10727,
  [SMALL_STATE(217)] = 10748,
  [SMALL_STATE(218)] = 10769,
  [SMALL_STATE(219)] = 10790,
  [SMALL_STATE(220)] = 10811,
  [SMALL_STATE(221)] = 10832,
  [SMALL_STATE(222)] = 10853,
  [SMALL_STATE(223)] = 10874,
  [SMALL_STATE(224)] = 10895,
  [SMALL_STATE(225)] = 10916,
  [SMALL_STATE(226)] = 10937,
  [SMALL_STATE(227)] = 10958,
  [SMALL_STATE(228)] = 10990,
  [SMALL_STATE(229)] = 11022,
  [SMALL_STATE(230)] = 11054,
  [SMALL_STATE(231)] = 11086,
  [SMALL_STATE(232)] = 11118,
  [SMALL_STATE(233)] = 11136,
  [SMALL_STATE(234)] = 11156,
  [SMALL_STATE(235)] = 11176,
  [SMALL_STATE(236)] = 11194,
  [SMALL_STATE(237)] = 11214,
  [SMALL_STATE(238)] = 11241,
  [SMALL_STATE(239)] = 11268,
  [SMALL_STATE(240)] = 11285,
  [SMALL_STATE(241)] = 11312,
  [SMALL_STATE(242)] = 11339,
  [SMALL_STATE(243)] = 11354,
  [SMALL_STATE(244)] = 11372,
  [SMALL_STATE(245)] = 11392,
  [SMALL_STATE(246)] = 11412,
  [SMALL_STATE(247)] = 11432,
  [SMALL_STATE(248)] = 11450,
  [SMALL_STATE(249)] = 11470,
  [SMALL_STATE(250)] = 11490,
  [SMALL_STATE(251)] = 11510,
  [SMALL_STATE(252)] = 11528,
  [SMALL_STATE(253)] = 11543,
  [SMALL_STATE(254)] = 11556,
  [SMALL_STATE(255)] = 11573,
  [SMALL_STATE(256)] = 11590,
  [SMALL_STATE(257)] = 11607,
  [SMALL_STATE(258)] = 11624,
  [SMALL_STATE(259)] = 11641,
  [SMALL_STATE(260)] = 11655,
  [SMALL_STATE(261)] = 11671,
  [SMALL_STATE(262)] = 11683,
  [SMALL_STATE(263)] = 11697,
  [SMALL_STATE(264)] = 11707,
  [SMALL_STATE(265)] = 11721,
  [SMALL_STATE(266)] = 11735,
  [SMALL_STATE(267)] = 11751,
  [SMALL_STATE(268)] = 11767,
  [SMALL_STATE(269)] = 11783,
  [SMALL_STATE(270)] = 11797,
  [SMALL_STATE(271)] = 11813,
  [SMALL_STATE(272)] = 11827,
  [SMALL_STATE(273)] = 11841,
  [SMALL_STATE(274)] = 11855,
  [SMALL_STATE(275)] = 11866,
  [SMALL_STATE(276)] = 11877,
  [SMALL_STATE(277)] = 11886,
  [SMALL_STATE(278)] = 11895,
  [SMALL_STATE(279)] = 11906,
  [SMALL_STATE(280)] = 11917,
  [SMALL_STATE(281)] = 11926,
  [SMALL_STATE(282)] = 11935,
  [SMALL_STATE(283)] = 11944,
  [SMALL_STATE(284)] = 11955,
  [SMALL_STATE(285)] = 11966,
  [SMALL_STATE(286)] = 11977,
  [SMALL_STATE(287)] = 11986,
  [SMALL_STATE(288)] = 11995,
  [SMALL_STATE(289)] = 12006,
  [SMALL_STATE(290)] = 12017,
  [SMALL_STATE(291)] = 12028,
  [SMALL_STATE(292)] = 12037,
  [SMALL_STATE(293)] = 12048,
  [SMALL_STATE(294)] = 12059,
  [SMALL_STATE(295)] = 12070,
  [SMALL_STATE(296)] = 12079,
  [SMALL_STATE(297)] = 12090,
  [SMALL_STATE(298)] = 12101,
  [SMALL_STATE(299)] = 12110,
  [SMALL_STATE(300)] = 12119,
  [SMALL_STATE(301)] = 12130,
  [SMALL_STATE(302)] = 12141,
  [SMALL_STATE(303)] = 12152,
  [SMALL_STATE(304)] = 12161,
  [SMALL_STATE(305)] = 12172,
  [SMALL_STATE(306)] = 12183,
  [SMALL_STATE(307)] = 12194,
  [SMALL_STATE(308)] = 12205,
  [SMALL_STATE(309)] = 12216,
  [SMALL_STATE(310)] = 12227,
  [SMALL_STATE(311)] = 12238,
  [SMALL_STATE(312)] = 12249,
  [SMALL_STATE(313)] = 12260,
  [SMALL_STATE(314)] = 12269,
  [SMALL_STATE(315)] = 12280,
  [SMALL_STATE(316)] = 12291,
  [SMALL_STATE(317)] = 12302,
  [SMALL_STATE(318)] = 12313,
  [SMALL_STATE(319)] = 12322,
  [SMALL_STATE(320)] = 12330,
  [SMALL_STATE(321)] = 12338,
  [SMALL_STATE(322)] = 12346,
  [SMALL_STATE(323)] = 12354,
  [SMALL_STATE(324)] = 12362,
  [SMALL_STATE(325)] = 12370,
  [SMALL_STATE(326)] = 12378,
  [SMALL_STATE(327)] = 12386,
  [SMALL_STATE(328)] = 12394,
  [SMALL_STATE(329)] = 12402,
  [SMALL_STATE(330)] = 12410,
  [SMALL_STATE(331)] = 12418,
  [SMALL_STATE(332)] = 12426,
  [SMALL_STATE(333)] = 12434,
  [SMALL_STATE(334)] = 12442,
  [SMALL_STATE(335)] = 12450,
  [SMALL_STATE(336)] = 12458,
  [SMALL_STATE(337)] = 12466,
  [SMALL_STATE(338)] = 12474,
  [SMALL_STATE(339)] = 12482,
  [SMALL_STATE(340)] = 12490,
  [SMALL_STATE(341)] = 12498,
  [SMALL_STATE(342)] = 12506,
  [SMALL_STATE(343)] = 12514,
  [SMALL_STATE(344)] = 12522,
  [SMALL_STATE(345)] = 12530,
  [SMALL_STATE(346)] = 12538,
  [SMALL_STATE(347)] = 12546,
  [SMALL_STATE(348)] = 12554,
  [SMALL_STATE(349)] = 12562,
  [SMALL_STATE(350)] = 12570,
  [SMALL_STATE(351)] = 12578,
  [SMALL_STATE(352)] = 12586,
  [SMALL_STATE(353)] = 12594,
  [SMALL_STATE(354)] = 12602,
  [SMALL_STATE(355)] = 12610,
  [SMALL_STATE(356)] = 12618,
  [SMALL_STATE(357)] = 12626,
  [SMALL_STATE(358)] = 12634,
  [SMALL_STATE(359)] = 12642,
  [SMALL_STATE(360)] = 12650,
  [SMALL_STATE(361)] = 12658,
  [SMALL_STATE(362)] = 12666,
  [SMALL_STATE(363)] = 12674,
  [SMALL_STATE(364)] = 12682,
  [SMALL_STATE(365)] = 12690,
  [SMALL_STATE(366)] = 12698,
  [SMALL_STATE(367)] = 12706,
  [SMALL_STATE(368)] = 12714,
  [SMALL_STATE(369)] = 12722,
  [SMALL_STATE(370)] = 12730,
  [SMALL_STATE(371)] = 12738,
  [SMALL_STATE(372)] = 12746,
  [SMALL_STATE(373)] = 12754,
  [SMALL_STATE(374)] = 12762,
  [SMALL_STATE(375)] = 12770,
  [SMALL_STATE(376)] = 12778,
  [SMALL_STATE(377)] = 12786,
  [SMALL_STATE(378)] = 12794,
  [SMALL_STATE(379)] = 12802,
  [SMALL_STATE(380)] = 12809,
  [SMALL_STATE(381)] = 12816,
  [SMALL_STATE(382)] = 12823,
  [SMALL_STATE(383)] = 12830,
  [SMALL_STATE(384)] = 12837,
  [SMALL_STATE(385)] = 12844,
  [SMALL_STATE(386)] = 12851,
  [SMALL_STATE(387)] = 12858,
  [SMALL_STATE(388)] = 12865,
  [SMALL_STATE(389)] = 12872,
  [SMALL_STATE(390)] = 12879,
  [SMALL_STATE(391)] = 12886,
  [SMALL_STATE(392)] = 12893,
  [SMALL_STATE(393)] = 12900,
  [SMALL_STATE(394)] = 12907,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_guard_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 2, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_reference, 2, 0, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2, 0, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, 0, 24),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, 0, 24),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_traversal, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_traversal, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_this, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_rule_clause, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_rule_clause, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_rule_clause, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_rule_clause, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause, 3, 0, 9),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 3, 0, 9),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_rule_clause, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_rule_clause, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5, 0, 28),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 28),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__clauses, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clauses, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_comparison, 1, 0, 10),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_comparison, 1, 0, 10),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 6),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 6),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 8),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 8),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3, 0, 15),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 15),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 2, 0, 21),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 2, 0, 21),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_comparison, 2, 0, 22),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_comparison, 2, 0, 22),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 27),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5, 0, 27),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 29),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5, 0, 29),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 30),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5, 0, 30),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, 0, 31),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, 0, 31),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_message, 3, 0, 17),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_message, 3, 0, 17),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause, 4, 0, 20),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 4, 0, 20),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_rule_clause, 4, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_rule_clause, 4, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_message, 2, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_message, 2, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_block, 4, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_block, 4, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 19),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 19),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__clauses, 2, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clauses, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_term, 1, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_term, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 36),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 36),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_block, 4, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_block, 4, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_block, 3, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_block, 3, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 33),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 33),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_block, 5, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_block, 5, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_clause, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_clause, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_rule_block, 5, 0, 26),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_rule_block, 5, 0, 26),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_rule_block, 4, 0, 13),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_rule_block, 4, 0, 13),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_rule_block, 3, 0, 13),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_rule_block, 3, 0, 13),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_rule_block, 4, 0, 26),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_rule_block, 4, 0, 26),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(258),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(165),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(340),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(310),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(311),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(324),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(341),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(342),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(181),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(193),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 37), SHIFT_REPEAT(193),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(258),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(165),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(340),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(310),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(311),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(341),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(342),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(181),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(193),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 7), SHIFT_REPEAT(193),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_keyword, 1, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_keyword, 1, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 25), SHIFT_REPEAT(24),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 25),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 25), SHIFT_REPEAT(376),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 25), SHIFT_REPEAT(348),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 25), SHIFT_REPEAT(349),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 25), SHIFT_REPEAT(31),
  [854] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 25), SHIFT_REPEAT(242),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, 0, 34),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, 0, 34),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 35),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 35),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1, 0, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, 0, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 1),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 1),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filter_repeat1, 1, 0, 11),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 1, 0, 11),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filter_expression, 2, 0, 23),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression, 2, 0, 23),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filter_expression, 3, 0, 32),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression, 3, 0, 32),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 11),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 11),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keys_operator, 1, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keys_operator, 1, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 5),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 5), SHIFT_REPEAT(341),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 5), SHIFT_REPEAT(342),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_declaration, 2, 0, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 3, 0, 18),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1, 0, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4, 0, 18),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [985] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_message_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_message_repeat1, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 16), SHIFT_REPEAT(261),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 16),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_declaration, 3, 0, 12),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 14),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_rule_name = 0,
  ts_external_token_error = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_rule_name] = sym_rule_name,
  [ts_external_token_error] = sym_error,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_rule_name] = true,
    [ts_external_token_error] = true,
  },
  [2] = {
    [ts_external_token_rule_name] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_guard_external_scanner_create(void);
void tree_sitter_guard_external_scanner_destroy(void *);
bool tree_sitter_guard_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_guard_external_scanner_serialize(void *, char *);
void tree_sitter_guard_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_guard(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_guard_external_scanner_create,
      tree_sitter_guard_external_scanner_destroy,
      tree_sitter_guard_external_scanner_scan,
      tree_sitter_guard_external_scanner_serialize,
      tree_sitter_guard_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
