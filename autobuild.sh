#!/bin/bash

# Build for x86
build_x86() {
    echo "Building for x86 architecture..."
    mkdir -p build_x86
    cd build_x86
    cmake ..
    make
    cd ..
}

# Build for aarch64
build_aarch64() {
    echo "Building for aarch64 architecture..."
    mkdir -p build_aarch64
    cd build_aarch64
    cmake .. -DCMAKE_TOOLCHAIN_FILE=../aarch64-toolchain.cmake
    make
    cd ..
}

# Detect architecture
ARCH=$(uname -m)

# Select architecture
case "$ARCH" in
"x86_64")
    build_x86
    ;;
"aarch64")
    build_aarch64
    ;;
*)
    echo "Unsupported architecture: $ARCH"
    exit 1
    ;;
esac

echo "Build completed successfully for $ARCH target!"
