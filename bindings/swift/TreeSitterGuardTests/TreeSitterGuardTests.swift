import XCTest
import SwiftTreeSitter
import TreeSitterGuard

final class TreeSitterGuardTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_guard())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Guard grammar")
    }
}
