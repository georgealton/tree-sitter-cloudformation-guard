#include "tree_sitter/parser.h"
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  RULE_NAME,
  ERROR_SENTINEL
};

void * tree_sitter_guard_external_scanner_create() { printf("hi"); return NULL; }
void tree_sitter_guard_external_scanner_destroy(void *p) {}
void tree_sitter_guard_external_scanner_reset(void *p) {}

unsigned tree_sitter_guard_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_guard_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static inline void take(TSLexer *lexer) { lexer->advance(lexer, false); }


bool tree_sitter_guard_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) { 
       if (valid_symbols[ERROR_SENTINEL]){
           return false;
       }

       while (iswspace(lexer->lookahead)) {
           skip(lexer);
       } 

       while(iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
           take(lexer);
       }

       while (iswspace(lexer->lookahead)) {
           skip(lexer);
       } 


       switch (lexer->lookahead) {
            case 'o':
                lexer->mark_end(lexer);
                take(lexer);
                if (lexer->lookahead == 'r') {
                    take(lexer);

                    if (iswspace(lexer->lookahead)){
                       lexer->result_symbol = RULE_NAME;
                        return true;
                    }
                }

            case '{':
                lexer->mark_end(lexer);
                lexer->result_symbol = RULE_NAME;
                return true;
            case '<':
                lexer->mark_end(lexer);
                lexer->result_symbol = RULE_NAME;
                return true;
            case '\n':
                lexer->mark_end(lexer);
                lexer->result_symbol = RULE_NAME;
                return true;
    }

    return false; 
}
