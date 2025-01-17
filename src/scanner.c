#include "tree_sitter/parser.h"
#include <ctype.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  RULE_NAME,
  ERROR_SENTINEL
};

void * tree_sitter_guard_external_scanner_create() { return NULL; }
void tree_sitter_guard_external_scanner_destroy(void *p) {}
void tree_sitter_guard_external_scanner_reset(void *p) {}

unsigned tree_sitter_guard_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_guard_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static inline void take(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline bool is_or_keyword(
    TSLexer *lexer
){
   if (lexer->lookahead == 'o') {
        take(lexer);
        if (lexer->lookahead == 'r') {
           take(lexer);
           if (iswspace(lexer->lookahead)) {
               return true;
           }
        }
   }
   return false;
}

static inline bool scan_rule_name(
    TSLexer *lexer
) {
    
       while (iswspace(lexer->lookahead)) { skip(lexer); } 

       // extract rule_name
       // must start with alpha
       // can be alphanumeric after
       if (!iswalpha(lexer->lookahead)) { return false; }
       while(iswalnum(lexer->lookahead) || lexer->lookahead == '_') { 
           if(is_or_keyword(lexer)) { return false; }
           take(lexer); 
       }

       if (lexer->lookahead == '\n'){
         lexer->mark_end(lexer);
         lexer->result_symbol = RULE_NAME;
         return true;
       }

       while (isblank(lexer->lookahead)) { skip(lexer); } 

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
            break;

        case '#':
        case '(':
        case '<':
        case '\r':
        case '\n':
            lexer->mark_end(lexer);
            lexer->result_symbol = RULE_NAME;
            return true;
    }
    
    // hitting any other char means we're not a rule_name
    return false;
}


bool tree_sitter_guard_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) { 
       if (valid_symbols[ERROR_SENTINEL]){
           return false;
       }

       if (valid_symbols[RULE_NAME]){
           return scan_rule_name(lexer);
       }

    return false; 
}
