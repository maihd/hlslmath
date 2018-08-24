#pragma once

#include "./hlslcommon.h"

/* Computes sign of 'x'
 */
inline int sign(float x)
{
    return x >> 31;
}

/* Computes absolute value
 */
inline float abs(float x)
{
    return fabsf(x);
}

/* Computes cosine
 */
inline float cos(float x)
{
    return cosf(x);
}

/* Computes sine
 */
inline float sin(float x)
{
    return sinf(x);
}

/* Computes tangent
 */
inline float tan(float x)
{
    return tanf(x);
}

/* Computes hyperbolic cosine
 */
inline float cosh(float x)
{
    return coshf(x);
}

/* Computes hyperbolic sine
 */
inline float sinh(float x)
{
    return sinhf(x);
}

/* Computes hyperbolic tangent
 */
inline float tanh(float x)
{
    return tanhf(x);
}

/* Computes inverse cosine
 */
inline float acos(float x)
{
    return acosf(x);
}

/* Computes inverse sine
 */
inline float asin(float x)
{
    return asinf(x);
}

/* Computes inverse tangent
 */
inline float atan(float x)
{
    return atanf(x);
}

/* Computes inverse tangent with 2 args
 */
inline float atan2(float y, float x)
{
    return atan2f(y, x);
}

/* Computes Euler number raised to the power 'x'
 */
inline float exp(float x)
{
    return expf(x);
}

/* Computes 2 raised to the power 'x'
 */
inline float exp2(float x)
{
    return exp2f(x);
}

/* Computes the base Euler number logarithm
 */
inline float log(float x)
{
    return logf(x);
}

/* Computes the base 2 logarithm
 */
inline float log2(float x)
{
    return log2f(x);
}

/* Computes the base 10 logarithm
 */
inline float log10(float x)
{
    return log10f(x);
}

/* Computes the value of base raised to the power exponent
 */
inline float pow(float x, float y)
{
    return powf(x, y);
}

/* Get the fractal part of floating point
 */
inline float frac(float x)
{
    return modff(x, 0);
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float fmod(float x, float y)
{
    return fmodf(x, y);
}

/* Computes the smallest integer value not less than 'x'
 */
inline float ceil(float x)
{
    return ceilf(x);
}

/* Computes the largest integer value not greater than 'x'
 */
inline float floor(float x)
{
    return floorf(x);
}

/* Computes the nearest integer value
 */
inline float round(float x)
{
    return roundf(x);
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float trunc(float x)
{
    return truncf(x);
}

/* Get the smaller value
 */ 
inline float min(float x, float y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */ 
inline float max(float x, float y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' value to the [min, max].
 */
inline float clamp(float x, float min, float max)
{
    return x < min ? min : (x > max ? max : x);
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float saturate(float x)
{
    return clamp(x, 0.0f, 1.0f);
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float step(float y, float x)
{
    return x >= y;
}

/* Performs a linear interpolation.
 */
inline float lerp(float x, float y, float s)
{
    return x + (y - x) * s;
}

/* Compute a smooth Hermite interpolation
 * @return: 0 if x <= min
 *          1 if x >= max
 *          (0, 1) otherwise
 */
inline float smoothstep(float min, float max, float x)
{
    return (clamp(x, min, max) - min) / (max - min);
}

/* Computes square root of 'x'.
 */
inline float sqrt(float x)
{
    return sqrtf(x);
}

/* Computes inverse square root of 'x'.
 */
inline float rsqrt(float x)
{
    return 1.0f / sqrtf(x);
}

/* Computes fast inverse square root of 'x'.
 */
inline float frsqrt(float x)
{
    union
    {
        float f;
        int   i;
    } cvt;

    cvt.f = x;
    cvt.i = 0x5F3759DF - (cvt.i >> 1);
    cvt.f = cvt.f * (1.5f - (0.5f * x * cvt.f * cvt.f));
    return cvt.f;
}

/* Computes fast inverse square root of 'x'.
 */
inline float fsqrt(float x)
{
    return x == 0.0f ? 0.0f : 1.0f / frsqrt(x);
}
