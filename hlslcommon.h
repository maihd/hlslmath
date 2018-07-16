#ifndef __HLSL_COMMON_H__
#define __HLSL_COMMON_H__

#include "hlsltypes.h"

#include <math.h>
#undef min // When Windows.h is included, min is an macro
#undef max // When Windows.h is included, max is an macro

template <typename T>
inline T PI()
{
    return 3.14f;
}

template <>
inline double PI()
{
    return 3.14;
}

inline float degrees(float x)
{
    const float factor = 180.0f / PI<float>();
    return x * factor;
}

inline float radians(float x)
{
    const float factor = PI<float>() / 180.0f;
    return x * factor;
}

inline double degrees(double x)
{
    const double factor = 180.0f / PI<double>();
    return x * factor;
}

inline double radians(double x)
{
    const double factor = PI<double>() / 180.0f;
    return x * factor;
}

#endif /* __HLSL_COMMON_H__ */