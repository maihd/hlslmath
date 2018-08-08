#pragma once

#include "hlsltypes.h"
#include "hlslfloat.h"

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

inline int clamp(int v, int min, int max)
{
    return v < min ? min : (v > max ? max : v);
}

inline int smoothstep(int a, int b, float t)
{
    t = clamp((t - a) / (b - a), 0.0f, 1.0f);
    return (int)(t * t * (3 - 2 * t));
}