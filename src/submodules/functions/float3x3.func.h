/* Computes sign of 'x'
 */
HLSLMATH_INLINE int3x3 sign(const float3x3& m)
{
    return int3x3(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float3x3 abs(const float3x3& m)
{
    return float3x3(abs(m[0]),
                    abs(m[1]),
                    abs(m[2]));
}

/* Computes cosine
 */
HLSLMATH_INLINE float3x3 cos(const float3x3& m)
{
    return float3x3(cos(m[0]),
                    cos(m[1]),
                    cos(m[2]));
}

/* Computes sine
 */
HLSLMATH_INLINE float3x3 sin(const float3x3& m)
{
    return float3x3(sin(m[0]),
                    sin(m[1]),
                    sin(m[2]));
}

/* Computes tangent
 */
HLSLMATH_INLINE float3x3 tan(const float3x3& m)
{
    return float3x3(tan(m[0]),
                    tan(m[1]),
                    tan(m[2]));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float3x3 cosh(const float3x3& m)
{
    return float3x3(cosh(m[0]),
                    cosh(m[1]),
                    cosh(m[2]));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float3x3 sinh(const float3x3& m)
{
    return float3x3(sinh(m[0]),
                    sinh(m[1]),
                    sinh(m[2]));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float3x3 tanh(const float3x3& m)
{
    return float3x3(tanh(m[0]),
                    tanh(m[1]),
                    tanh(m[2]));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float3x3 acos(const float3x3& m)
{
    return float3x3(acos(m[0]),
                    acos(m[1]),
                    acos(m[2]));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float3x3 asin(const float3x3& m)
{
    return float3x3(asin(m[0]),
                    asin(m[1]),
                    asin(m[2]));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float3x3 atan(const float3x3& m)
{
    return float3x3(atan(m[0]),
                    atan(m[1]),
                    asin(m[2]));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float3x3 atan2(const float3x3& a, const float3x3& b)
{
    return float3x3(atan2(a[0], b[0]),
                    atan2(a[1], b[1]),
                    atan2(a[2], b[2]));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float3x3 exp(const float3x3& m)
{
    return float3x3(exp(m[0]),
                    exp(m[1]),
                    exp(m[2]));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float3x3 exp2(const float3x3& m)
{
    return float3x3(exp2(m[0]),
                    exp2(m[1]),
                    exp2(m[2]));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float3x3 log(const float3x3& m)
{
    return float3x3(log(m[0]),
                    log(m[1]),
                    log(m[2]));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float3x3 log2(const float3x3& m)
{
    return float3x3(log2(m[0]),
                    log2(m[1]),
                    log2(m[2]));
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float3x3 log10(const float3x3& m)
{
    return float3x3(log10(m[0]),
                    log10(m[1]),
                    log10(m[2]));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float3x3 pow(const float3x3& a, const float3x3& b)
{
    return float3x3(pow(a[0], b[0]),
                    pow(a[1], b[1]),
                    pow(a[2], b[2]));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float3x3 frac(const float3x3& v)
{
    return float3x3(frac(v[0]),
                    frac(v[1]),
                    frac(v[2]));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float3x3 fmod(const float3x3& a, const float3x3& b)
{
    return float3x3(fmod(a[0], b[0]),
                    fmod(a[1], b[1]),
                    fmod(a[2], b[2]));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float3x3 ceil(const float3x3& m)
{
    return float3x3(ceil(m[0]),
                    ceil(m[1]),
                    ceil(m[2]));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float3x3 floor(const float3x3& m)
{
    return float3x3(floor(m[0]),
                    floor(m[1]),
                    floor(m[2]));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float3x3 round(const float3x3& m)
{
    return float3x3(round(m[0]),
                    round(m[1]),
                    round(m[2]));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float3x3 trunc(const float3x3& m)
{
    return float3x3(trunc(m[0]),
                    trunc(m[1]),
                    trunc(m[2]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float3x3 min(const float3x3& a, const float3x3& b)
{
    return float3x3(min(a[0], b[0]),
                    min(a[1], b[1]),
                    min(a[2], b[2]));
}

/* Get the larger value
 */
HLSLMATH_INLINE float3x3 max(const float3x3& a, const float3x3& b)
{
    return float3x3(max(a[0], b[0]), 
                    max(a[1], b[1]),
                    max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float3x3 clamp(const float3x3& v, const float3x3& min, const float3x3& max)
{
    return float3x3(clamp(v[0], min[0], max[0]), 
                    clamp(v[1], min[1], max[1]), 
                    clamp(v[2], min[2], max[2]));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float3x3 saturate(const float3x3& m)
{
    return float3x3(saturate(m[0]),
                    saturate(m[1]),
                    saturate(m[2]));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float3x3 step(const float3x3& a, const float3x3& b)
{
    return float3x3(step(a[0], b[0]),
                    step(a[1], b[1]),
                    step(a[2], b[2]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float3x3 lerp(const float3x3& a, const float3x3& b, const float3x3& t)
{
    return float3x3(lerp(a[0], b[0], t[0]),
                    lerp(a[1], b[1], t[1]), 
                    lerp(a[2], b[2], t[2]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float3x3 lerp(const float3x3& a, const float3x3& b, float t)
{
    return float3x3(lerp(a[0], b[0], t),
                    lerp(a[1], b[1], t), 
                    lerp(a[2], b[2], t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float3x3 smoothstep(const float3x3& a, const float3x3& b, const float3x3& t)
{
    return float3x3(smoothstep(a[0], b[0], t[0]),
                    smoothstep(a[1], b[1], t[1]),
                    smoothstep(a[2], b[2], t[2]));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float3x3 sqrt(const float3x3& m)
{
    return float3x3(sqrt(m[0]),
                    sqrt(m[1]),
                    sqrt(m[2]));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float3x3 rsqrt(const float3x3& m)
{
    return float3x3(rsqrt(m[0]),
                    rsqrt(m[1]),
                    rsqrt(m[2]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float3x3 fsqrt(const float3x3& m)
{
    return float3x3(fsqrt(m[0]),
                    fsqrt(m[1]),
                    fsqrt(m[2]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float3x3 frsqrt(const float3x3& m)
{
    return float3x3(frsqrt(m[0]),
                    frsqrt(m[1]),
                    frsqrt(m[2]));
}

//
// @region: Matrix operations
//

HLSLMATH_INLINE float3x3 transpose(const float3x3& m)
{
    return float3x3(
        m[0][0], m[1][0], m[2][0],
        m[0][1], m[1][1], m[2][1],
        m[0][2], m[1][2], m[2][2]
    );
}

HLSLMATH_INLINE float3 mul(const float3x3& a, const float3& b)
{
    const float3 a0 = float3(a[0][0], a[1][0], a[2][0]);
    const float3 a1 = float3(a[0][1], a[1][1], a[2][1]);
    const float3 a2 = float3(a[0][2], a[1][2], a[2][2]);

    return float3(
        dot(a0, b),
        dot(a1, b),
        dot(a2, b)
    );
}

HLSLMATH_INLINE float3 mul(const float3& a, const float3x3& b)
{
    return float3(
        dot(a, b[0]),
        dot(a, b[1]),
        dot(a, b[2])
    );
}

HLSLMATH_INLINE float3x3 mul(const float3x3& a, const float3x3& b)
{
    return float3x3(
        mul(a, b[0]),
        mul(a, b[1]),
        mul(a, b[2])
    );
}

HLSLMATH_INLINE float3x3 inverse(const float3x3& m)
{
    const float det = 
          m[0][0] * m[1][1] * m[2][2] - m[0][0] * m[1][2] * m[2][1]
        + m[0][1] * m[1][0] * m[2][2] - m[0][1] * m[1][2] * m[2][0]
        + m[0][2] * m[1][0] * m[2][1] - m[0][2] * m[1][1] * m[2][0];
    if (det == 0.0f)
    {
        return m;
    }
    else
    {
        const float idet = 1.0f / det;

        return float3x3(
            idet * (m[1][1] * m[2][2] - m[1][2] * m[2][1]),
            idet * (m[0][2] * m[2][1] - m[0][1] * m[2][2]),
            idet * (m[0][1] * m[1][2] - m[0][2] * m[1][1]),

            idet * (m[1][2] * m[2][0] - m[1][0] * m[2][2]),
            idet * (m[0][0] * m[2][2] - m[0][2] * m[2][0]),
            idet * (m[0][2] * m[1][0] - m[0][0] * m[1][2]),

            idet * (m[1][0] * m[2][1] - m[1][1] * m[2][0]),
            idet * (m[0][1] * m[2][0] - m[0][0] * m[2][1]),
            idet * (m[0][0] * m[1][1] - m[0][1] * m[1][0])
        );
    }
}

//
// @region: Graphics functions
//

HLSLMATH_INLINE float3x3 float3x3::translation(const float2& v)
{
    return float3x3::translation(v.x, v.y);
}

HLSLMATH_INLINE float3x3 float3x3::translation(float x, float y)
{
    return float3x3(
        1, 0, 0,
        0, 1, 0,
        x, y, 1
    );
}

HLSLMATH_INLINE float3x3 float3x3::rotation(float angle)
{
    const float c = cos(angle);
    const float s = sin(angle);
    return float3x3(
        c, -s, 0,
        s,  c, 0,
        0,  0, 1
    );
}

HLSLMATH_INLINE float3x3 float3x3::scalation(const float2& v)
{
    return float3x3::scalation(v.x, v.y);
}

HLSLMATH_INLINE float3x3 float3x3::scalation(float x, float y)
{
    return float3x3(
        x, 0, 0,
        0, y, 0,
        0, 0, 1
    );
}

HLSLMATH_INLINE float3x3 float3x3::ortho(float l, float r, float b, float t)
{
    const float w = (r - l);
    const float h = (t - b);
    const float x = 1.0f / w;
    const float y = 1.0f / h;

    return float3x3(
            2.0f * x,            0, 0,
                   0,     2.0f * y, 0,
        -x * (l + r), -y * (b + t), 1
    );
}