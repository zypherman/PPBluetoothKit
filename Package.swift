// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PPBluetoothKit",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "PPBluetoothKit",
            targets: ["PPBluetoothKit"])
    ],
    targets: [
        .binaryTarget(
            name: "PPBluetoothKit",
            path: "PPBluetoothKit.xcframework"
        )
    ]
)
