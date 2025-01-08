package tree_sitter_guard_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_guard "github.com/tree-sitter/tree-sitter-guard/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_guard.Language())
	if language == nil {
		t.Errorf("Error loading Guard grammar")
	}
}
