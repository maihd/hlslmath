//
// @region: Operators overloading
//

inline float4x4 operator-(const float4x4& m)
{
    float4x4 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    result[3] = -m[3];
    return result;
}

inline const float4x4& operator+(const float4x4& m)
{
    return m;
}

inline float4x4& operator--(float4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

inline float4x4& operator++(float4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

inline const float4x4& operator--(float4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

inline const float4x4& operator++(float4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
}

inline float4x4 operator+(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

inline float4x4 operator+(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

inline float4x4 operator+(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
    return result;
}

inline float4x4 operator-(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

inline float4x4 operator-(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

inline float4x4 operator-(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

inline float4x4 operator*(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

inline float4x4 operator/(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

inline float4x4& operator+=(float4x4& a, const float4x4& b)
{
    return (a = a + b);
}

inline float4x4& operator+=(float4x4& a, float b)
{
    return (a = a + b);
}

inline float4x4& operator-=(float4x4& a, const float4x4& b)
{
    return (a = a - b);
}

inline float4x4& operator-=(float4x4& a, float b)
{
    return (a = a - b);
}

inline float4x4& operator*=(float4x4& a, const float4x4& b)
{
    return (a = a * b);
}

inline float4x4& operator*=(float4x4& a, float b)
{
    return (a = a * b);
}

inline float4x4& operator/=(float4x4& a, const float4x4& b)
{
    return (a = a / b);
}

inline float4x4& operator/=(float4x4& a, float b)
{
    return (a = a + b);
}

inline bool4x4 operator==(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

inline bool4x4 operator!=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

inline bool4x4 operator<(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

inline bool4x4 operator>(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

inline bool4x4 operator<=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

inline bool4x4 operator>=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
    return result;
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int4x4 sign(const float4x4& m)
{
    return int4x4(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]),
                  sign(m[3]));
}

/* Computes absolute value
 */
inline float4x4 abs(const float4x4& m)
{
    return float4x4(abs(m[0]),
                    abs(m[1]),
                    abs(m[2]),
                    abs(m[3]));
}

/* Computes cosine
 */
inline float4x4 cos(const float4x4& m)
{
    return float4x4(cos(m[0]),
                    cos(m[1]),
                    cos(m[2]),
                    cos(m[3]));
}

/* Computes sine
 */
inline float4x4 sin(const float4x4& m)
{
    return float4x4(sin(m[0]),
                    sin(m[1]),
                    sin(m[2]),
                    sin(m[3]));
}

/* Computes tangent
 */
inline float4x4 tan(const float4x4& m)
{
    return float4x4(tan(m[0]),
                    tan(m[1]),
                    tan(m[2]),
                    tan(m[3]));
}

/* Computes hyperbolic cosine
 */
inline float4x4 cosh(const float4x4& m)
{
    return float4x4(cosh(m[0]),
                    cosh(m[1]),
                    cosh(m[2]),
                    cosh(m[3]));
}

/* Computes hyperbolic sine
 */
inline float4x4 sinh(const float4x4& m)
{
    return float4x4(sinh(m[0]),
                    sinh(m[1]),
                    sinh(m[2]),
                    sinh(m[3]));
}

/* Computes hyperbolic tangent
 */
inline float4x4 tanh(const float4x4& m)
{
    return float4x4(tanh(m[0]),
                    tanh(m[1]),
                    tanh(m[2]),
                    tanh(m[3]));
}

/* Computes inverse cosine
 */
inline float4x4 acos(const float4x4& m)
{
    return float4x4(acos(m[0]),
                    acos(m[1]),
                    acos(m[2]),
                    acos(m[3]));
}

/* Computes inverse sine
 */
inline float4x4 asin(const float4x4& m)
{
    return float4x4(asin(m[0]),
                    asin(m[1]),
                    asin(m[2]),
                    asin(m[3]));
}

/* Computes inverse tangent
 */
inline float4x4 atan(const float4x4& m)
{
    return float4x4(atan(m[0]),
                    atan(m[1]),
                    atan(m[2]),
                    atan(m[3]));
}

/* Computes inverse tangent with 2 args
 */
inline float4x4 atan2(const float4x4& a, const float4x4& b)
{
    return float4x4(atan2(a[0], b[0]),
                    atan2(a[1], b[1]),
                    atan2(a[2], b[2]),
                    atan2(a[3], b[3]));
}

/* Computes Euler number raised to the power 'x'
 */
inline float4x4 exp(const float4x4& m)
{
    return float4x4(exp(m[0]),
                    exp(m[1]),
                    exp(m[2]),
                    exp(m[3]));
}

/* Computes 2 raised to the power 'x'
 */
inline float4x4 exp2(const float4x4& m)
{
    return float4x4(exp2(m[0]),
                    exp2(m[1]),
                    exp2(m[2]),
                    exp2(m[3]));
}

/* Computes the base Euler number logarithm
 */
inline float4x4 log(const float4x4& m)
{
    return float4x4(log(m[0]),
                    log(m[1]),
                    log(m[2]),
                    log(m[3]));
}

/* Computes the base 2 logarithm
 */
inline float4x4 log2(const float4x4& m)
{
    return float4x4(log2(m[0]),
                    log2(m[1]),
                    log2(m[2]),
                    log2(m[3]));
}

/* Computes the base 10 logarithm
 */
inline float4x4 log10(const float4x4& m)
{
    return float4x4(log10(m[0]),
                    log10(m[1]),
                    log10(m[2]),
                    log10(m[3]));
}

/* Computes the value of base raised to the power exponent
 */
inline float4x4 pow(const float4x4& a, const float4x4& b)
{
    return float4x4(pow(a[0], b[0]),
                    pow(a[1], b[1]),
                    pow(a[2], b[2]),
                    pow(a[3], b[3]));
}

/* Get the fractal part of floating point
 */
inline float4x4 frac(const float4x4& m)
{
    return float4x4(frac(m[0]),
                    frac(m[1]),
                    frac(m[2]),
                    frac(m[3]));
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float4x4 fmod(const float4x4& a, const float4x4& b)
{
    return float4x4(fmod(a[0], b[0]),
                    fmod(a[1], b[1]),
                    fmod(a[2], b[2]),
                    fmod(a[3], b[3]));
}

/* Computes the smallest integer value not less than 'x'
 */
inline float4x4 ceil(const float4x4& m)
{
    return float4x4(ceil(m[0]),
                    ceil(m[1]),
                    ceil(m[2]),
                    ceil(m[3]));
}

/* Computes the largest integer value not greater than 'x'
 */
inline float4x4 floor(const float4x4& m)
{
    return float4x4(floor(m[0]),
                    floor(m[1]),
                    floor(m[2]),
                    floor(m[3]));
}

/* Computes the nearest integer value
 */
inline float4x4 round(const float4x4& m)
{
    return float4x4(round(m[0]),
                    round(m[1]),
                    round(m[2]),
                    round(m[3]));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float4x4 trunc(const float4x4& m)
{
    return float4x4(trunc(m[0]),
                    trunc(m[1]),
                    trunc(m[2]),
                    trunc(m[3]));
}

/* Get the smaller value
 */
inline float4x4 min(const float4x4& a, const float4x4& b)
{
    return float4x4(min(a[0], b[0]),
                    min(a[1], b[1]),
                    min(a[2], b[2]),
                    min(a[3], b[3]));
}

/* Get the larger value
 */
inline float4x4 max(const float4x4& a, const float4x4& b)
{
    return float4x4(max(a[0], b[0]), 
                    max(a[1], b[1]),
                    max(a[2], b[2]),
                    max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline float4x4 clamp(const float4x4& v, const float4x4& min, const float4x4& max)
{
    return float4x4(clamp(v[0], min[0], max[0]), 
                    clamp(v[1], min[1], max[1]), 
                    clamp(v[2], min[2], max[2]), 
                    clamp(v[3], min[3], max[3]));
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float4x4 saturate(const float4x4& m)
{
    return float4x4(saturate(m[0]),
                    saturate(m[1]),
                    saturate(m[2]),
                    saturate(m[3]));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float4x4 step(const float4x4& a, const float4x4& b)
{
    return float4x4(step(a[0], b[0]),
                    step(a[1], b[1]),
                    step(a[2], b[2]),
                    step(a[3], b[3]));
}

/* Performs a linear interpolation.
 */
inline float4x4 lerp(const float4x4& a, const float4x4& b, const float4x4& t)
{
    return float4x4(lerp(a[0], b[0], t[0]),
                    lerp(a[1], b[1], t[1]), 
                    lerp(a[2], b[2], t[2]), 
                    lerp(a[3], b[3], t[3]));
}

/* Performs a linear interpolation.
 */
inline float4x4 lerp(const float4x4& a, const float4x4& b, float t)
{
    return float4x4(lerp(a[0], b[0], t),
                    lerp(a[1], b[1], t), 
                    lerp(a[2], b[2], t), 
                    lerp(a[3], b[3], t));
}

/* Compute a smooth Hermite interpolation
 */
inline float4x4 smoothstep(const float4x4& a, const float4x4& b, const float4x4& t)
{
    return float4x4(smoothstep(a[0], b[0], t[0]),
                    smoothstep(a[1], b[1], t[1]),
                    smoothstep(a[2], b[2], t[2]),
                    smoothstep(a[3], b[3], t[3]));
}

/* Computes square root of 'x'.
 */
inline float4x4 sqrt(const float4x4& m)
{
    return float4x4(sqrt(m[0]),
                    sqrt(m[1]),
                    sqrt(m[2]),
                    sqrt(m[3]));
}

/* Computes inverse square root of 'x'.
 */
inline float4x4 rsqrt(const float4x4& m)
{
    return float4x4(rsqrt(m[0]),
                    rsqrt(m[1]),
                    rsqrt(m[2]),
                    rsqrt(m[3]));
}

/* Computes fast inverse square root of 'x'.
 */
inline float4x4 fsqrt(const float4x4& m)
{
    return float4x4(fsqrt(m[0]),
                    fsqrt(m[1]),
                    fsqrt(m[2]),
                    fsqrt(m[3]));
}

/* Computes fast inverse square root of 'x'.
 */
inline float4x4 frsqrt(const float4x4& m)
{
    return float4x4(frsqrt(m[0]),
                    frsqrt(m[1]),
                    frsqrt(m[2]),
                    frsqrt(m[3]));
}

//
// @region: Matrix operations
//

inline float4 mul(const float4x4& a, const float4& b)
{
    const float4 c0 = float4(a[0][0], a[1][0], a[2][0], a[3][0]);
    const float4 c1 = float4(a[0][1], a[1][1], a[2][1], a[3][1]);
    const float4 c2 = float4(a[0][2], a[1][2], a[2][2], a[3][2]);
    const float4 c3 = float4(a[0][3], a[1][3], a[2][3], a[3][3]);

    return float4(
        dot(c0, b),
        dot(c1, b),
        dot(c2, b),
        dot(c3, b)
    );
}

inline float4 mul(const float4& a, const float4x4& b)
{
    return float4(
        dot(a, b[0]),
        dot(a, b[1]),
        dot(a, b[2]),
        dot(a, b[3])
    );
}

inline float3 mul(const float4x4& a, const float3& b)
{
    const float4 b0 = float4(b.x, b.y, b.z, 1.0f);
    const float4 b1 = mul(a, b0);

    const float iw = 1.0f / b1.w;
    return float3(b1.x * iw, b1.y * iw, b1.z * iw);
}

inline float3 mul(const float3& a, const float4x4& b)
{
    const float4 a0 = float4(a.x, a.y, a.z, 1.0f);
    const float4 a1 = mul(a0, b);

    const float iw = 1.0f / a1.w;
    return float3(a1.x * iw, a1.y * iw, a1.z * iw);
}

inline float4x4 mul(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = mul(a, b[0]);
    result[1] = mul(a, b[1]);
    result[2] = mul(a, b[2]);
    result[3] = mul(a, b[3]);
    return result;
}

inline float4x4 transpose(const float4x4& m)
{
    float4x4 result;
    result[0][0] = m[0][0]; result[0][1] = m[1][0]; result[0][2] = m[2][0]; result[0][3] = m[3][0];
    result[1][0] = m[0][1]; result[1][1] = m[1][1]; result[1][2] = m[2][1]; result[1][3] = m[3][1];
    result[2][0] = m[0][2]; result[2][1] = m[1][2]; result[2][2] = m[2][2]; result[2][3] = m[3][2];
    result[3][0] = m[0][3]; result[3][1] = m[1][3]; result[3][2] = m[2][3]; result[3][3] = m[3][3];
    return result;
}

inline float4x4 inverse(const float4x4& m)
{
    const float n11 = m[0][0], n12 = m[1][0], n13 = m[2][0], n14 = m[3][0];
    const float n21 = m[0][1], n22 = m[1][1], n23 = m[2][1], n24 = m[3][1];
    const float n31 = m[0][2], n32 = m[1][2], n33 = m[2][2], n34 = m[3][2];
    const float n41 = m[0][3], n42 = m[1][3], n43 = m[2][3], n44 = m[3][3];

    const float t11 = n23 * n34 * n42 - n24 * n33 * n42 + n24 * n32 * n43 - n22 * n34 * n43 - n23 * n32 * n44 + n22 * n33 * n44;
    const float t12 = n14 * n33 * n42 - n13 * n34 * n42 - n14 * n32 * n43 + n12 * n34 * n43 + n13 * n32 * n44 - n12 * n33 * n44;
    const float t13 = n13 * n24 * n42 - n14 * n23 * n42 + n14 * n22 * n43 - n12 * n24 * n43 - n13 * n22 * n44 + n12 * n23 * n44;
    const float t14 = n14 * n23 * n32 - n13 * n24 * n32 - n14 * n22 * n33 + n12 * n24 * n33 + n13 * n22 * n34 - n12 * n23 * n34;

    const float det = n11 * t11 + n21 * t12 + n31 * t13 + n41 * t14;
    if (det < 0.0f)
    {
        return float4x4(0.0f);
    }

    const float idet = 1.0f / det;
    float4x4 result;

    result[0][0] = t11 * idet;
    result[0][1] = (n24 * n33 * n41 - n23 * n34 * n41 - n24 * n31 * n43 + n21 * n34 * n43 + n23 * n31 * n44 - n21 * n33 * n44) * idet;
    result[0][2] = (n22 * n34 * n41 - n24 * n32 * n41 + n24 * n31 * n42 - n21 * n34 * n42 - n22 * n31 * n44 + n21 * n32 * n44) * idet;
    result[0][3] = (n23 * n32 * n41 - n22 * n33 * n41 - n23 * n31 * n42 + n21 * n33 * n42 + n22 * n31 * n43 - n21 * n32 * n43) * idet;

    result[1][0] = t12 * idet;
    result[1][1] = (n13 * n34 * n41 - n14 * n33 * n41 + n14 * n31 * n43 - n11 * n34 * n43 - n13 * n31 * n44 + n11 * n33 * n44) * idet;
    result[1][2] = (n14 * n32 * n41 - n12 * n34 * n41 - n14 * n31 * n42 + n11 * n34 * n42 + n12 * n31 * n44 - n11 * n32 * n44) * idet;
    result[1][3] = (n12 * n33 * n41 - n13 * n32 * n41 + n13 * n31 * n42 - n11 * n33 * n42 - n12 * n31 * n43 + n11 * n32 * n43) * idet;

    result[2][0] = t13 * idet;
    result[2][1] = (n14 * n23 * n41 - n13 * n24 * n41 - n14 * n21 * n43 + n11 * n24 * n43 + n13 * n21 * n44 - n11 * n23 * n44) * idet;
    result[2][2] = (n12 * n24 * n41 - n14 * n22 * n41 + n14 * n21 * n42 - n11 * n24 * n42 - n12 * n21 * n44 + n11 * n22 * n44) * idet;
    result[2][3] = (n13 * n22 * n41 - n12 * n23 * n41 - n13 * n21 * n42 + n11 * n23 * n42 + n12 * n21 * n43 - n11 * n22 * n43) * idet;

    result[3][0] = t14 * idet;
    result[3][1] = (n13 * n24 * n31 - n14 * n23 * n31 + n14 * n21 * n33 - n11 * n24 * n33 - n13 * n21 * n34 + n11 * n23 * n34) * idet;
    result[3][2] = (n14 * n22 * n31 - n12 * n24 * n31 - n14 * n21 * n32 + n11 * n24 * n32 + n12 * n21 * n34 - n11 * n22 * n34) * idet;
    result[3][3] = (n12 * n23 * n31 - n13 * n22 * n31 + n13 * n21 * n32 - n11 * n23 * n32 - n12 * n21 * n33 + n11 * n22 * n33) * idet;

    return result;
}

//
// @region: Graphics functions
//

inline float4x4 float4x4::ortho(float l, float r, float b, float t, float n, float f)
{
    const float x = 1.0f / (r - l);
    const float y = 1.0f / (t - b);
    const float z = 1.0f / (f - n);

    float4x4 result;
    result[0] = float4(2.0f * x, 0, 0, 0);
    result[1] = float4(0, 2.0f * y, 0, 0);
    result[2] = float4(0, 0, 2.0f * z, 0);
    result[3] = float4(-x * (l + r), -y * (b + t), -z * (n + f), 1.0f);
    return result;
}

inline float4x4 float4x4::frustum(float l, float r, float b, float t, float n, float f)
{
    const float x = 1.0f / (r - l);
    const float y = 1.0f / (t - b);
    const float z = 1.0f / (f - n);

    float4x4 result;
    result[0] = float4(2.0f * x, 0, 0, 0);
    result[1] = float4(0, 2.0f * y, 0, 0);
    result[2] = float4(x * (l + r), y * (b + t), z * (n + f), 1.0f);
    result[3] = float4(0, 0, 2.0f * z, 0);
    return result;
}

inline float4x4 float4x4::perspective(float fov, float aspect, float znear, float zfar)
{
    const float a = 1.0f / tan(fov * 0.5f);
    const float b = zfar / (znear - zfar);

    float4x4 result;
    result[0] = float4(a / aspect,   0,         0,   0);
    result[1] = float4(         0,   a,         0,   0);
    result[2] = float4(         0,   0,         b,  -1);
    result[3] = float4(         0,   0, znear * b,   0);
    return result;
}

inline float4x4 float4x4::lookat(const float3& eye, const float3& target, const float3& up)
{
    const float3 z = normalize(eye - target);
    const float3 x = normalize(cross(up, z));
    const float3 y = normalize(cross( z, x));

    float4x4 result;
    result[0] = float4(x.x, y.x, z.x, 0);
    result[1] = float4(x.y, y.y, z.y, 0);
    result[2] = float4(x.z, y.z, z.z, 0);
    result[3] = float4(-dot(x, eye), -dot(y, eye), -dot(z, eye), 1.0f);
    return result;
}

inline float4x4 float4x4::scalation(float s)
{
    return float4x4::scalation(s, s, s);
}

inline float4x4 float4x4::scalation(const float2& v)
{
    return float4x4::scalation(v.x, v.y);
}

inline float4x4 float4x4::scalation(const float3& v)
{
    return float4x4::scalation(v.x, v.y, v.z);
}

inline float4x4 float4x4::scalation(float x, float y, float z)
{
    return float4x4(
        x, 0, 0, 0,
        0, y, 0, 0, 
        0, 0, z, 0,
        0, 0, 0, 1
    );
}

inline float4x4 float4x4::translation(const float2& v)
{
    return float4x4::translation(v.x, v.y);
}

inline float4x4 float4x4::translation(const float3& v)
{
    return float4x4::translation(v.x, v.y, v.z);
}

inline float4x4 float4x4::translation(float x, float y, float z)
{
    return float4x4(
        1, 0, 0, 0,
        0, 1, 0, 0,
        0, 0, 1, 0,
        x, y, z, 1
    );
}

inline float4x4 float4x4::rotation(const float3& axis, float angle)
{
    return float4x4::rotation(axis.x, axis.y, axis.z, angle);
}

inline float4x4 float4x4::rotation(float x, float y, float z, float angle)
{
    const float c = cos(-angle);
    const float s = sin(-angle);
    const float t = 1.0f - c;

    float4x4 result;
    /* Row 1 */
    result[0] = float4(t * x * x + c,
                       t * x * y - s * z,
                       t * x * z + s * y,
                       0.0f);

    /* Row 2 */
    result[1] = float4(t * x * y + s * z,
                       t * y * y + c,
                       t * y * z - s * x,
                       0.0f);

    /* Row 3 */
    result[2] = float4(t * x * z - s * y,
                       t * y * z + s * x,
                       t * z * z + c,
                       0.0f);

    /* Row 4 */
    result[3] = float4(0, 0, 0, 1.0f);
    return result;
}

inline float4x4 float4x4::rotation_x(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float4x4(
        1,  0, 0, 0,
        0,  c, s, 0,
        0, -s, c, 0,
        0,  0, 0, 1
    );
}

inline float4x4 float4x4::rotation_y(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float4x4(
         c, 0, s, 0,
         0, 1, 0, 0,
        -s, 0, c, 0,
         0, 0, 0, 1
    );
}

inline float4x4 float4x4::rotation_z(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float4x4(
         c, s, 0, 0,
        -s, c, 0, 0,
         0, 0, 1, 0,
         0, 0, 0, 1
    );
}

inline float4x4 float4x4::rotation(const float4& quaternion)
{
    float4 axisangle = float4::toaxis(quaternion);
    return float4x4::rotation(axisangle.x, axisangle.y, axisangle.z, axisangle.w);
}

inline void float4x4::decompose(const float4x4& m, float3* scalation, float4* quaternion, float3* translation)
{
    if (translation)
    {
        *translation = float3(m[3][0], m[3][1], m[3][2]);
    }

    if (!scalation && !quaternion)
    {
        return;
    }

    float3 xaxis(m[0][0], m[0][1], m[0][2]);
    float3 yaxis(m[1][0], m[1][1], m[1][2]);
    float3 zaxis(m[2][0], m[2][1], m[2][2]);

    float scale_x = length(xaxis);
    float scale_y = length(yaxis);
    float scale_z = length(zaxis);

    const float n11 = m[0][0], n12 = m[1][0], n13 = m[2][0], n14 = m[3][0];
    const float n21 = m[0][1], n22 = m[1][1], n23 = m[2][1], n24 = m[3][1];
    const float n31 = m[0][2], n32 = m[1][2], n33 = m[2][2], n34 = m[3][2];
    const float n41 = m[0][3], n42 = m[1][3], n43 = m[2][3], n44 = m[3][3];

    const float t11 = n23 * n34 * n42 - n24 * n33 * n42 + n24 * n32 * n43 - n22 * n34 * n43 - n23 * n32 * n44 + n22 * n33 * n44;
    const float t12 = n14 * n33 * n42 - n13 * n34 * n42 - n14 * n32 * n43 + n12 * n34 * n43 + n13 * n32 * n44 - n12 * n33 * n44;
    const float t13 = n13 * n24 * n42 - n14 * n23 * n42 + n14 * n22 * n43 - n12 * n24 * n43 - n13 * n22 * n44 + n12 * n23 * n44;
    const float t14 = n14 * n23 * n32 - n13 * n24 * n32 - n14 * n22 * n33 + n12 * n24 * n33 + n13 * n22 * n34 - n12 * n23 * n34;

    const float det = n11 * t11 + n21 * t12 + n31 * t13 + n41 * t14;
    if (det < 0) scale_z = -scale_z;

    if (scalation)
    {
        *scalation = float3(scale_x, scale_y, scale_z);
    }

    if (!quaternion)
    {
        return;
    }

    float rn;

    // Factor the scale out of the matrix axes.
    rn = 1.0f / scale_x;
    xaxis.x *= rn;
    xaxis.y *= rn;
    xaxis.z *= rn;

    rn = 1.0f / scale_y;
    yaxis.x *= rn;
    yaxis.y *= rn;
    yaxis.z *= rn;

    rn = 1.0f / scale_z;
    zaxis.x *= rn;
    zaxis.y *= rn;
    zaxis.z *= rn;

    // Now calculate the rotation from the resulting matrix (axes).
    float trace = xaxis.x + yaxis.y + zaxis.z + 1.0f;

    if (trace > 0.0001f)
    {
        float s = 0.5f / sqrt(trace);
        quaternion->w = 0.25f / s;
        quaternion->x = (yaxis.z - zaxis.y) * s;
        quaternion->y = (zaxis.x - xaxis.z) * s;
        quaternion->z = (xaxis.y - yaxis.x) * s;
    }
    else
    {
        // Note: since xaxis, yaxis, and zaxis are normalized, 
        // we will never divide by zero in the code below.
        if (xaxis.x > yaxis.y && xaxis.x > zaxis.z)
        {
            float s = 0.5f / sqrt(1.0f + xaxis.x - yaxis.y - zaxis.z);
            quaternion->w = (yaxis.z - zaxis.y) * s;
            quaternion->x = 0.25f / s;
            quaternion->y = (yaxis.x + xaxis.y) * s;
            quaternion->z = (zaxis.x + xaxis.z) * s;
        }
        else if (yaxis.y > zaxis.z)
        {
            float s = 0.5f / sqrt(1.0f + yaxis.y - xaxis.x - zaxis.z);
            quaternion->w = (zaxis.x - xaxis.z) * s;
            quaternion->x = (yaxis.x + xaxis.y) * s;
            quaternion->y = 0.25f / s;
            quaternion->z = (zaxis.y + yaxis.z) * s;
        }
        else
        {
            float s = 0.5f / sqrt(1.0f + zaxis.z - xaxis.x - yaxis.y);
            quaternion->w = (xaxis.y - yaxis.x) * s;
            quaternion->x = (zaxis.x + xaxis.z) * s;
            quaternion->y = (zaxis.y + yaxis.z) * s;
            quaternion->z = 0.25f / s;
        }
    }
}

inline void float4x4::decompose(const float4x4& m, float3* scalation, float3* axis, float* angle, float3* translation)
{
    if (axis || angle)
    {
        float4 quat;
        decompose(m, scalation, &quat, translation);

        float4::toaxis(quat, axis, angle);
    }
    else
    {
        decompose(m, scalation, (float4*)0, translation);
    }
}