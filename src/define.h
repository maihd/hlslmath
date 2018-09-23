#pragma once

#include <math.h>

#undef min // When Windows.h is included, min is an macro
#undef max // When Windows.h is included, max is an macro

#if defined(__ARM_NEON)
#if defined(__aarch64__) && defined(__ANDROID__)        
#define HLSLMATH_ENABLE_NEON 0
#else
#include <arm_neon.h>     
#define HLSLMATH_ENABLE_NEON 1
#endif         
#else
#define HLSLMATH_ENABLE_NEON 0
#endif