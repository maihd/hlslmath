// Detect neon support & enable
#if defined(__ARM_NEON) && defined(HLSLMATH_ENABLE_NEON) && HLSLMATH_ENABLE_NEON
#   if defined(__aarch64__) && defined(__ANDROID__)
#       define HLSLMATH_ENABLE_NEON 0
#   else
#       include <arm_neon.h>     
#       define HLSLMATH_ENABLE_NEON 1
#   endif         
#else
#   define HLSLMATH_ENABLE_NEON 0
#endif

// Detect SSE support & enable
#if !defined(HLSLMATH_ENABLE_SSE)
#   define HLSLMATH_ENABLE_SSE 1
#endif

#if defined(__SSSE3__)
#   define HLSLMATH_SSE_SUPPORT 1
#endif

#if defined(__SSE__) || defined(__SSE2__) || defined(__SSE3__)
#   undef  HLSLMATH_SSE_SUPPORT
#   define HLSLMATH_SSE_SUPPORT 1
#endif

#if defined(__SSE4_1__) || defined(__SSE4_2__) || defined(__SSE_MATH__)
#   undef  HLSLMATH_SSE_SUPPORT
#   define HLSLMATH_SSE_SUPPORT 1
#endif

#if defined(_MSC_VER) && (defined(_M_IX86) || defined(_M_IX64))
#   if defined(_M_HYBRID_X86_ARM64)
#       undef  HLSLMATH_SSE_SUPPORT
#   define HLSLMATH_SSE_SUPPORT 0
#   else
#       undef  HLSLMATH_SSE_SUPPORT
#       define HLSLMATH_SSE_SUPPORT 1
#   endif
#endif

#if !HLSLMATH_SSE_SUPPORT
#   undef HLSLMATH_SSE_ENABLE
#   define HLSLMATH_SSE_ENABLE 0
#endif