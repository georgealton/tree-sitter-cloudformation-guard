#!/bin/bash 
ts=~/tree-sitter/target/release/tree-sitter 
CC=$(which aarch64-redhat-linux-gcc) 
export CC
find src/scanner.c ./grammar.js test/corpus queries -type f | entr -s "$ts generate && $ts test --show-fields"
