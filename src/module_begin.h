#pragma once

#include <math.h>

#undef min // When Windows.h was included, min is an macro
#undef max // When Windows.h was included, max is an macro

// API deprecated declaration
#if __cplusplus >= 201103L
#   define HLSLMATH_DEPRECATED(version, reason) [[deprecated]]
#elif defined(_MSC_VER)
#   define HLSLMATH_DEPRECATED(version, reason) __declspec(deprecated)
#elif defined(__GNUC__)
#   define HLSLMATH_DEPRECATED(version, reason) __attribute__((deprecated))
#else
#   define HLSLMATH_DEPRECATED(version, reason)
#endif

// Supporting data alignment for cache-friendly
#if __cplusplus >= 201103L
#   define HLSLMATH_ALIGNAS(Type)   alignas(16) Type
#elif defined(_MSC_VER)
#   define HLSLMATH_ALIGNAS(Type)   __declspec(align(16)) Type
#elif defined(__GNUC__)
#   define HLSLMATH_ALIGNAS(Type)   Type __attribute__((aligned(16)))
#else
#   error "Define HLSLMATH_ALIGNAS for your compiler or platform!"
#endif

// Helping detect alignment of data structures
#if __cplusplus >= 201103L
#   define HLSLMATH_ALIGNOF(Type)   alignof(Type)
#elif defined(_MSC_VER)
#   define HLSLMATH_ALIGNOF(Type)   __alignof(Type)
#elif defined(__GNUC__)
#   define HLSLMATH_ALIGNOF(Type)   __alignof__(Type)
#else
#   error "Define HLSLMATH_ALIGNOF for your compiler or platform!"
#endif

// Android polyfill for log2 and log2f
#if defined(__ANDROID__) 
extern "C"
{
    inline float log2f(float x)
    {
        return (logf(x) / 0.693147180559945f);
    }

    inline double log2(double x)
    {
        return (log(x) / 0.693147180559945);
    }
}
#endif

// Types supported
typedef unsigned int uint;

union bool2;
union bool3;
union bool4;
union bool2x2;
union bool3x3;
union bool4x4;

union int2;
union int3;
union int4;
union int2x2;
union int3x3;
union int4x4;

union uint2;
union uint3;
union uint4;
union uint2x2;
union uint3x3;
union uint4x4;

union float2;
union float3;
union float4;
union float2x2;
union float3x3;
union float4x4;