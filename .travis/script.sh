#!/bin/sh

if [ "$BUILD_TARGET" == "android" ]; then  
    cd unit_tests/ndk-buid && ndk-build
else  
    cd unit_tests/gmake && make && make clean
fi