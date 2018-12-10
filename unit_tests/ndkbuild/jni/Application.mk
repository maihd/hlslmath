APP_ABI := armeabi-v7a arm64-v8a
APP_STL :=

APP_OPTIM := debug

APP_CFLAGS := -fsigned-char
APP_CPPFLAGS := -fsigned-char -lm -O0
APP_LDFLAGS := -latomic -llog -landroid