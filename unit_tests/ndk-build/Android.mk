LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := hlsl_android.cc

LOCAL_C_INCLUDES :=

LOCAL_EXPORT_LDLIBS := -lm -llog -landroid

include $(BUILD_STATIC_LIBRARY)