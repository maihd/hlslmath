/* Computes sign of 'x'
 */
HLSLMATH_INLINE int sign(float x)
{
    union
    {
        float f;
        int   i;
    } cvt;
    cvt.f = x;
    return sign(cvt.i);
}

#if HLSLMATH_DEFINE_INTRINSICS != 0
/* Computes absolute value
 */
HLSLMATH_INLINE float abs(float x)
{
    return fabsf(x);
}

/* Computes cosine
 */
HLSLMATH_INLINE float cos(float x)
{
    return cosf(x);
}

/* Computes sine
 */
HLSLMATH_INLINE float sin(float x)
{
    return sinf(x);
}

/* Computes tangent
 */
HLSLMATH_INLINE float tan(float x)
{
    return tanf(x);
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float cosh(float x)
{
    return coshf(x);
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float sinh(float x)
{
    return sinhf(x);
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float tanh(float x)
{
    return tanhf(x);
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float acos(float x)
{
    return acosf(x);
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float asin(float x)
{
    return asinf(x);
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float atan(float x)
{
    return atanf(x);
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float atan2(float y, float x)
{
    return atan2f(y, x);
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float exp(float x)
{
    return expf(x);
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float exp2(float x)
{
    return exp2f(x);
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float log(float x)
{
    return logf(x);
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float log2(float x)
{
    return log2f(x);
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float log10(float x)
{
    return log10f(x);
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float pow(float x, float y)
{
    return powf(x, y);
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float fmod(float x, float y)
{
    return fmodf(x, y);
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float ceil(float x)
{
    return ceilf(x);
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float floor(float x)
{
    return floorf(x);
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float round(float x)
{
    return roundf(x);
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float trunc(float x)
{
    return truncf(x);
}
#endif

/* Get the fractal part of floating point
*/
HLSLMATH_INLINE float frac(float x)
{
	return modff(x, 0);
}

/* Get the smaller value
 */ 
HLSLMATH_INLINE float min(float x, float y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */ 
HLSLMATH_INLINE float max(float x, float y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float clamp(float x, float min, float max)
{
    return x < min ? min : (x > max ? max : x);
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float saturate(float x)
{
    return clamp(x, 0.0f, 1.0f);
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float step(float y, float x)
{
    return x >= y;
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float lerp(float x, float y, float s)
{
    return x + (y - x) * s;
}

/* Compute a smooth Hermite interpolation
 * @return: 0 if x <= min
 *          1 if x >= max
 *          (0, 1) otherwise
 */
HLSLMATH_INLINE float smoothstep(float min, float max, float x)
{
    return (clamp(x, min, max) - min) / (max - min);
}

#if HLSLMATH_DEFINE_INTRINSICS != 0
/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float sqrt(float x)
{
    return sqrtf(x);
}
#endif

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float rsqrt(float x)
{
    return 1.0f / sqrtf(x);
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float frsqrt(float x)
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
HLSLMATH_INLINE float fsqrt(float x)
{
    return x == 0.0f ? 0.0f : 1.0f / frsqrt(x);
}
