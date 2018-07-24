#pragma once

#include "hlslcommon.h"

inline float cos(float x)
{
    return cosf(x);
}

inline float sin(float x)
{
    return sinf(x);
}

inline float tan(float x)
{
    return tanf(x);
}

inline float cosh(float x)
{
    return coshf(x);
}

inline float sinh(float x)
{
    return sinhf(x);
}

inline float tanh(float x)
{
    return tanhf(x);
}

inline float acos(float x)
{
    return acosf(x);
}

inline float asin(float x)
{
    return asinf(x);
}

inline float atan(float x)
{
    return atanf(x);
}

inline float atan2(float y, float x)
{
    return atan2f(y, x);
}

inline float exp(float x)
{
    return expf(x);
}

inline float exp2(float x)
{
    return exp2f(x);
}

inline float log(float x)
{
    return logf(x);
}

inline float log2(float x)
{
    return log2f(x);
}

inline float log10(float x)
{
    return log10f(x);
}

inline float pow(float x, float y)
{
    return powf(x, y);
}

inline float fmod(float x, float y)
{
    return fmodf(x, y);
}

inline float ceil(float x)
{
    return ceilf(x);
}

inline float floor(float x)
{
    return floorf(x);
}

inline float min(float a, float b)
{
    return a < b ? a : b;
}

inline float max(float a, float b)
{
    return a > b ? a : b;
}

inline float clamp(float v, float min, float max)
{
    return v < min ? min : (v > max ? max : v);
}

inline float saturate(float x)
{
    return clamp(x, -1.0f, 1.0f);
}

inline float step(float a, float b)
{
    return a > b ? 1.0f : 0.0f;
}

inline float lerp(float a, float b, float t)
{
    return a * (1.0f - t) + b * t;
}

inline float smoothstep(float a, float b, float t)
{
    t = clamp((t - a) / (b - a), 0.0f, 1.0f);
    return t * t * (3 - 2 * t);
}

inline float sqrt(float x)
{
    return sqrtf(x);
}

inline float rsqrt(float x)
{
    return 1.0f / sqrtf(x);
}

inline int min(int a, int b)
{
    return a < b ? a : b;
}

inline int max(int a, int b)
{
    return a > b ? a : b;
}

inline int step(int a, int b)
{
    return a > b ? 1 : 0;
}

inline int smoothstep(int a, int b, float t)
{
    t = clamp((t - a) / (b - a), 0.0f, 1.0f);
    return (int)(t * t * (3 - 2 * t));
}