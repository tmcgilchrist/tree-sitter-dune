import XCTest
import SwiftTreeSitter
import TreeSitterDune

final class TreeSitterDuneTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dune())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dune grammar")
    }
}
