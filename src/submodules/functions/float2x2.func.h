/* Computes sign of 'x'
 */
HLSLMATH_INLINE int2x2 sign(const float2x2& m)
{
    return int2x2(sign(m[0]),
                  sign(m[1]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float2x2 abs(const float2x2& m)
{
    return float2x2(abs(m[0]),
                    abs(m[1]));
}

/* Computes cosine
 */
HLSLMATH_INLINE float2x2 cos(const float2x2& m)
{
    return float2x2(cos(m[0]),
                    cos(m[1]));
}

/* Computes sine
 */
HLSLMATH_INLINE float2x2 sin(const float2x2& m)
{
    return float2x2(sin(m[0]),
                    sin(m[1]));
}

/* Computes tangent
 */
HLSLMATH_INLINE float2x2 tan(const float2x2& m)
{
    return float2x2(tan(m[0]),
                    tan(m[1]));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float2x2 cosh(const float2x2& m)
{
    return float2x2(cosh(m[0]),
                    cosh(m[1]));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float2x2 sinh(const float2x2& m)
{
    return float2x2(sinh(m[0]),
                    sinh(m[1]));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float2x2 tanh(const float2x2& m)
{
    return float2x2(tanh(m[0]),
                    tanh(m[1]));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float2x2 acos(const float2x2& m)
{
    return float2x2(acos(m[0]),
                    acos(m[1]));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float2x2 asin(const float2x2& m)
{
    return float2x2(asin(m[0]),
                    asin(m[1]));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float2x2 atan(const float2x2& m)
{
    return float2x2(atan(m[0]),
                    atan(m[1]));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float2x2 atan2(const float2x2& y, const float2x2& x)
{
    return float2x2(atan2(y[0], x[0]),
                    atan2(y[1], x[1]));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float2x2 exp(const float2x2& m)
{
    return float2x2(exp(m[0]),
                    exp(m[1]));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float2x2 exp2(const float2x2& m)
{
    return float2x2(exp2(m[0]),
                    exp2(m[1]));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float2x2 log(const float2x2& m)
{
    return float2x2(log(m[0]),
                    log(m[1]));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float2x2 log2(const float2x2& m)
{
    return float2x2(log2(m[0]),
                    log2(m[1]));
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float2x2 log10(const float2x2& m)
{
    return float2x2(log10(m[0]),
                    log10(m[1]));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float2x2 pow(const float2x2& x, const float2x2& y)
{
    return float2x2(pow(x[0], y[0]),
                    pow(x[1], y[1]));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float2x2 frac(const float2x2& m)
{
    return float2x2(frac(m[0]),
                    frac(m[1]));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float2x2 fmod(const float2x2& a, const float2x2& b)
{
    return float2x2(fmod(a[0], b[0]),
                    fmod(a[1], b[1]));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float2x2 ceil(const float2x2& m)
{
    return float2x2(ceil(m[0]),
                    ceil(m[0]));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float2x2 floor(const float2x2& m)
{
    return float2x2(floor(m[0]),
                    floor(m[1]));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float2x2 round(const float2x2& m)
{
    return float2x2(round(m[0]),
                    round(m[1]));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float2x2 trunc(const float2x2& m)
{
    return float2x2(trunc(m[0]),
                    trunc(m[1]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float2x2 min(const float2x2& a, const float2x2& b)
{
    return float2x2(min(a[0], b[0]),
                    min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE float2x2 max(const float2x2& a, const float2x2& b)
{
    return float2x2(max(a[0], b[0]), 
                    max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float2x2 clamp(const float2x2& m, const float2x2& min, const float2x2& max)
{
    return float2x2(clamp(m[0], min[0], max[0]), 
                    clamp(m[1], min[1], max[1]));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float2x2 saturate(const float2x2& m)
{
    return float2x2(saturate(m[0]),
                    saturate(m[1]));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float2x2 step(const float2x2& a, const float2x2& b)
{
    return float2x2(step(a[0], b[0]),
                    step(a[1], b[1]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float2x2 lerp(const float2x2& a, const float2x2& b, const float2x2& t)
{
    return float2x2(lerp(a[0], b[0], t[0]),
                    lerp(a[1], b[1], t[1]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float2x2 lerp(const float2x2& a, const float2x2& b, float t)
{
    return float2x2(lerp(a[0], b[0], t),
                    lerp(a[1], b[1], t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float2x2 smoothstep(const float2x2& a, const float2x2& b, const float2x2& t)
{
    return float2x2(smoothstep(a[0], b[0], t[0]),
                    smoothstep(a[1], b[1], t[1]));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float2x2 sqrt(const float2x2& m)
{
    return float2x2(sqrt(m[0]),
                    sqrt(m[1]));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float2x2 rsqrt(const float2x2& m)
{
    return float2x2(rsqrt(m[0]),
                    rsqrt(m[1]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float2x2 fsqrt(const float2x2& m)
{
    return float2x2(fsqrt(m[0]),
                    fsqrt(m[1]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float2x2 frsqrt(const float2x2& m)
{
    return float2x2(frsqrt(m[0]),
                    frsqrt(m[1]));
}

//
// @region: matrix operations
//

HLSLMATH_INLINE float2x2 inverse(const float2x2& m)
{
    const float det = m[0][0] * m[1][1] - m[0][1] * m[1][0];
    if (det == 0.0f)
    {
        return m;
    }
    else
    {
        const float idet = 1.0f / det;

        return float2x2(
            idet *   m[1][1] , idet * (-m[0][1]),
            idet * (-m[1][0]), idet *   m[0][0]
        );
    }
}

HLSLMATH_INLINE float2x2 transpose(const float2x2& m)
{
    return float2x2(
        m[0][0], m[1][0],
        m[0][1], m[1][1]
    );
}

HLSLMATH_INLINE float2 mul(const float2x2& a, const float2& b)
{
    return float2(
        a[0][0] * b[0] + a[1][0] * b[1],
        a[0][1] * b[0] + a[1][1] * b[1]
    );
}

HLSLMATH_INLINE float2 mul(const float2& a, const float2x2& b)
{
    return float2(
        a[0] * b[0][0] + a[1] * b[0][1],
        a[0] * b[1][0] + a[1] * b[1][1]
    );
}

HLSLMATH_INLINE float2x2 mul(const float2x2& a, const float2x2& b)
{
    return float2x2(
        mul(a, b[0]),
        mul(a, b[1])
    );
}

//
// @region: Graphics functions
//

HLSLMATH_INLINE float2x2 float2x2::rotation(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float2x2(
        c, -s,
        s, c
    );
}

HLSLMATH_INLINE float2x2 float2x2::scalation(float x)
{
    return float2x2::scalation(x, x);
}

HLSLMATH_INLINE float2x2 float2x2::scalation(const float2& v)
{
    return float2x2::scalation(v.x, v.y);
}

HLSLMATH_INLINE float2x2 float2x2::scalation(float x, float y)
{
    return float2x2(x, 0, 0, y);
}