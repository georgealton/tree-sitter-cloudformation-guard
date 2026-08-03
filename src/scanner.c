#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <ctype.h>
#include <stdint.h>

enum TokenType {
  RULE_NAME,
  ERROR_SENTINEL,
};

void *tree_sitter_guard_external_scanner_create(void) {
  return NULL;
}

void tree_sitter_guard_external_scanner_destroy(void *payload) {
  (void)payload;
}

void tree_sitter_guard_external_scanner_reset(void *payload) {
  (void)payload;
}

unsigned tree_sitter_guard_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  (void)payload;
  (void)buffer;
  return 0;
}

void tree_sitter_guard_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  (void)payload;
  (void)buffer;
  (void)length;
}

static void take(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static bool is_identifier_start(int32_t c) {
  return isalpha((unsigned char)c) || c == '_';
}

static bool is_identifier_char(int32_t c) {
  return isalnum((unsigned char)c) || c == '_';
}

static bool is_or_keyword(const char *word, unsigned length) {
  return length == 2 &&
    (
      (word[0] == 'o' && word[1] == 'r') ||
      (word[0] == 'O' && word[1] == 'R')
    );
}

static bool scan_rule_name(TSLexer *lexer) {
  if (!is_identifier_start(lexer->lookahead)) {
    return false;
  }

  char word[256];
  unsigned length = 0;

  while (is_identifier_char(lexer->lookahead)) {
    if (length + 1 < sizeof(word)) {
      word[length] = (char)lexer->lookahead;
    }

    length++;
    take(lexer);
  }

  /*
   * Don't emit a token if the identifier doesn't fit in
   * our temporary buffer.
   */
  if (length == 0 || length >= sizeof(word)) {
    return false;
  }

  word[length] = '\0';

  /*
   * `or` / `OR` must remain available to the grammar's
   * `or_term` rule.
   */
  if (is_or_keyword(word, length)) {
    return false;
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = RULE_NAME;

  return true;
}

bool tree_sitter_guard_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  (void)payload;

  if (valid_symbols[RULE_NAME]) {
    return scan_rule_name(lexer);
  }

  return false;
}
