// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDune",
    products: [
        .library(name: "TreeSitterDune", targets: ["TreeSitterDune"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDune",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDuneTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDune",
            ],
            path: "bindings/swift/TreeSitterDuneTests"
        )
    ],
    cLanguageStandard: .c11
)
