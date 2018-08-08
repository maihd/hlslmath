#pragma once

#include "hlsltypes.h"
#include "hlslfloat.h"

inline uint min(uint a, uint b)
{
    return a < b ? a : b;
}

inline uint max(uint a, uint b)
{
    return a > b ? a : b;
}

inline uint step(uint a, uint b)
{
    return a > b ? 1 : 0;
}

inline uint clamp(uint v, uint min, uint max)
{
    return v < min ? min : (v > max ? max : v);
}

inline uint smoothstep(uint a, uint b, float t)
{
    t = clamp((t - a) / (b - a), 0.0f, 1.0f);
    return (uint)(t * t * (3 - 2 * t));
}