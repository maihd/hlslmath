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

#if __ANDROID__ // Android support for log2 and log2f
inline float log2f(float x)
{
    return (logf(x) / 0.693147180559945f);
}

inline double log2(double x)
{
    return (log(x) / 0.693147180559945);
}
#endif
