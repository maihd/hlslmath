LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := hlslmath_android
LOCAL_MODULE_FILENAME := hlslmath

LOCAL_SRC_FILES := ../hlslmath_android.cc

LOCAL_C_INCLUDES :=
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

LOCAL_EXPORT_LDLIBS := -lm -llog -landroid

include $(BUILD_EXECUTABLE)