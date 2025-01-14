#!/bin/bash 
CC=$(which aarch64-redhat-linux-gcc) 
export CC
find src/scanner.c ./grammar.js test/corpus queries -type f | \
    entr -s \
    "tree-sitter generate && \
     tree-sitter test --show-fields"
