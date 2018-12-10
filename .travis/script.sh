#!/bin/bash

if [ "$BUILD_TARGET" == "android" ]; then
    echo "Build Android: compiling without running unit tests."
    cd unit_tests/ndk-buid && ndk-build
else
    echo "Build target '$BUILD_TARGET': compile then run unit tests."
    cd unit_tests/gmake && make && make clean
fi