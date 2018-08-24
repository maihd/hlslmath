#pragma once

#include "hlsltypes.h"
#include "hlslfloat.h"

/* Compute the sign of 'x'
 */
inline int sign(int x)
{
    return x >> 31;
}

/* Get the smaller value
 */
inline int min(int x, int y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
inline int max(int x, int y)
{
    return a > b ? a : b;
}

/* Clamps the 'x' to the [min, max]
 */
inline int clamp(int x, int min, int max)
{
    return x < min ? min : (x > max ? max : x);
}
