#pragma once

#include "hlsltypes.h"

/* Get the smaller value
 */
inline uint min(uint x, uint y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
inline uint max(uint x, uint y)
{
    return a > b ? a : b;
}

/* Clamps the 'x' to the [min, max]
 */
inline uint clamp(uint x, uint min, uint max)
{
    return x < min ? min : (x > max ? max : x);
}
