@echo off

adb push libs/armeabi-v7a/hlslmath /hlsl

adb shell "cd /hlsl && chmod +x hlslmath && ./hlslmath"