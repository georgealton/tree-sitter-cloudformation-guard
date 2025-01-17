// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGuard",
    products: [
        .library(name: "TreeSitterGuard", targets: ["TreeSitterGuard"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGuard",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGuardTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGuard",
            ],
            path: "bindings/swift/TreeSitterGuardTests"
        )
    ],
    cLanguageStandard: .c11
)
