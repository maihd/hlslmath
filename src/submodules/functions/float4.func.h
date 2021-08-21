/* Computes sign of 'x'
 */
inline int4 sign(const float4& v)
{
    return int4(sign(v.x),
                sign(v.y),
                sign(v.z),
                sign(v.w));
}

/* Computes absolute value
 */
inline float4 abs(const float4& v)
{
    return float4(abs(v.x),
                  abs(v.y),
                  abs(v.z),
                  abs(v.w));
}

/* Computes cosine
 */
inline float4 cos(const float4& v)
{
    return float4(cos(v.x),
                  cos(v.y),
                  cos(v.z),
                  cos(v.w));
}

/* Computes sine
 */
inline float4 sin(const float4& v)
{
    return float4(sin(v.x),
                  sin(v.y),
                  sin(v.z),
                  sin(v.w));
}

/* Computes tangent
 */
inline float4 tan(const float4& v)
{
    return float4(tan(v.x),
                  tan(v.y),
                  tan(v.z),
                  tan(v.w));
}

/* Computes hyperbolic cosine
 */
inline float4 cosh(const float4& v)
{
    return float4(cosh(v.x),
                  cosh(v.y),
                  cosh(v.z),
                  cosh(v.w));
}

/* Computes hyperbolic sine
 */
inline float4 sinh(const float4& v)
{
    return float4(sinh(v.x),
                  sinh(v.y),
                  sinh(v.z),
                  sinh(v.w));
}

/* Computes hyperbolic tangent
 */
inline float4 tanh(const float4& v)
{
    return float4(tanh(v.x),
                  tanh(v.y),
                  tanh(v.z),
                  tanh(v.w));
}

/* Computes inverse cosine
 */
inline float4 acos(const float4& v)
{
    return float4(acos(v.x),
                  acos(v.y),
                  acos(v.z),
                  acos(v.w));
}

/* Computes inverse sine
 */
inline float4 asin(const float4& v)
{
    return float4(asin(v.x),
                  asin(v.y),
                  asin(v.z),
                  asin(v.w));
}

/* Computes inverse tangent
 */
inline float4 atan(const float4& v)
{
    return float4(atan(v.x),
                  atan(v.y),
                  atan(v.z),
                  atan(v.w));
}

/* Computes inverse tangent with 2 args
 */
inline float4 atan2(const float4& a, const float4& b)
{
    return float4(atan2(a.x, b.x),
                  atan2(a.y, b.y),
                  atan2(a.z, b.z),
                  atan2(a.w, b.w));
}

/* Computes Euler number raised to the power 'x'
 */
inline float4 exp(const float4& v)
{
    return float4(exp(v.x),
                  exp(v.y),
                  exp(v.z),
                  exp(v.w));
}

/* Computes 2 raised to the power 'x'
 */
inline float4 exp2(const float4& v)
{
    return float4(exp2(v.x),
                  exp2(v.y),
                  exp2(v.z),
                  exp2(v.w));
}

/* Computes the base Euler number logarithm
 */
inline float4 log(const float4& v)
{
    return float4(log(v.x),
                  log(v.y),
                  log(v.z),
                  log(v.w));
}

/* Computes the base 2 logarithm
 */
inline float4 log2(const float4& v)
{
    return float4(log2(v.x),
                  log2(v.y),
                  log2(v.z),
                  log2(v.w)  );
}

/* Computes the base 10 logarithm
 */
inline float4 log10(const float4& v)
{
    return float4(log10(v.x),
                  log10(v.y),
                  log10(v.z),
                  log10(v.w));
}

/* Computes the value of base raised to the power exponent
 */
inline float4 pow(const float4& a, const float4& b)
{
    return float4(pow(a.x, b.x),
                  pow(a.y, b.y),
                  pow(a.z, b.z),
                  pow(a.w, b.w));
}

/* Get the fractal part of floating point
 */
inline float4 frac(const float4& v)
{
    return float4(frac(v.x),
                  frac(v.y),
                  frac(v.z),
                  frac(v.w));
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float4 fmod(const float4& a, const float4& b)
{
    return float4(fmod(a.x, b.x),
                  fmod(a.y, b.y),
                  fmod(a.z, b.z),
                  fmod(a.w, b.w));
}

/* Computes the smallest integer value not less than 'x'
 */
inline float4 ceil(const float4& v)
{
    return float4(ceil(v.x),
                  ceil(v.y),
                  ceil(v.z),
                  ceil(v.w));
}

/* Computes the largest integer value not greater than 'x'
 */
inline float4 floor(const float4& v)
{
    return float4(floor(v.x),
                  floor(v.y),
                  floor(v.z),
                  floor(v.w));
}

/* Computes the nearest integer value
 */
inline float4 round(const float4& v)
{
    return float4(round(v.x),
                  round(v.y),
                  round(v.z),
                  round(v.w));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float4 trunc(const float4& v)
{
    return float4(trunc(v.x),
                  trunc(v.y),
                  trunc(v.z),
                  trunc(v.w));
}

/* Get the smaller value
 */
inline float4 min(const float4& a, const float4& b)
{
    return float4(min(a.x, b.x),
                  min(a.y, b.y),
                  min(a.z, b.z),
                  min(a.w, b.w));
}

/* Get the larger value
 */
inline float4 max(const float4& a, const float4& b)
{
    return float4(max(a.x, b.x), 
                  max(a.y, b.y),
                  max(a.z, b.z),
                  max(a.w, b.w));
}

/* Clamps the 'x' value to the [min, max].
 */
inline float4 clamp(const float4& v, const float4& min, const float4& max)
{
    return float4(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y), 
                  clamp(v.z, min.z, max.z), 
                  clamp(v.w, min.w, max.w));
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float4 saturate(const float4& v)
{
    return float4(saturate(v.x),
                  saturate(v.y),
                  saturate(v.z),
                  saturate(v.w));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float4 step(const float4& a, const float4& b)
{
    return float4(step(a.x, b.x),
                  step(a.y, b.y),
                  step(a.z, b.z),
                  step(a.w, b.w));
}

/* Performs a linear interpolation.
 */
inline float4 lerp(const float4& a, const float4& b, const float4& t)
{
    return float4(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y), 
                  lerp(a.z, b.z, t.z), 
                  lerp(a.w, b.w, t.w));
}

/* Performs a linear interpolation.
 */
inline float4 lerp(const float4& a, const float4& b, float t)
{
    return float4(lerp(a.x, b.x, t),
                  lerp(a.y, b.y, t), 
                  lerp(a.z, b.z, t), 
                  lerp(a.w, b.w, t));
}

/* Compute a smooth Hermite interpolation
 */
inline float4 smoothstep(const float4& a, const float4& b, const float4& t)
{
    return float4(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y),
                  smoothstep(a.z, b.z, t.z),
                  smoothstep(a.w, b.w, t.w));
}

/* Computes square root of 'x'.
 */
inline float4 sqrt(const float4& v)
{
    return float4(sqrt(v.x),
                  sqrt(v.y),
                  sqrt(v.z),
                  sqrt(v.w));
}

/* Computes inverse square root of 'x'.
 */
inline float4 rsqrt(const float4& v)
{
    return float4(rsqrt(v.x),
                  rsqrt(v.y),
                  rsqrt(v.z),
                  rsqrt(v.w));
}

/* Computes fast inverse square root of 'x'.
 */
inline float4 fsqrt(const float4& v)
{
    return float4(fsqrt(v.x),
                  fsqrt(v.y),
                  fsqrt(v.z),
                  fsqrt(v.w));
}

/* Computes fast inverse square root of 'x'.
 */
inline float4 frsqrt(const float4& v)
{
    return float4(frsqrt(v.x),
                  frsqrt(v.y),
                  frsqrt(v.z),
                  frsqrt(v.w));
}

//
// @region: Graphics functions
//

/* Compute dot product of two vectors
 */
inline float dot(const float4& a, const float4& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

/* Compute squared length of vector
 */
inline float lensqr(const float4& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
inline float length(const float4& v)
{
    return sqrt(lensqr(v));
}

/* Compute distance from 'a' to b
 */
inline float distance(const float4& a, const float4& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
inline float distsqr(const float4& a, const float4& b)
{
    return lensqr(a - b);
}

/* Compute normalized vector
 */
inline float4 normalize(const float4& v)
{
    const float lsqr = lensqr(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float4(v.x * f, v.y * f, v.z * f, v.w * f);
    }
    else
    {
        return v;
    }
}

/* Compute reflection vector
 */
inline float4 reflect(const float4& v, const float4& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
inline float4 refract(const float4& v, const float4& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float4(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

/* Compute faceforward vector
 */
inline float4 faceforward(const float4& n, const float4& i, const float4& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

/* Quaternion multiplication
 */
inline float4 qmul(const float4& a, const float4& b)
{
    const float3 a3 = float3(a.x, a.y, a.z);
    const float3 b3 = float3(b.x, b.y, b.z);

    float3 xyz = a3 * b.w + b3 * a.w + cross(a3, b3);
    float  w   = a.w * b.w - dot(a3, b3);
    return float4(xyz, w);
}

inline float4 qinverse(const float4& q)
{
    return float4(q.x, q.y, q.z, -q.w);
}

inline float4 qconj(const float4& q)
{
    return float4(-q.x, -q.y, -q.z, q.w);
}

inline float4 quatFromAxisAngle(const float3& axis, float angle)
{
    if (lensqr(axis) == 0.0f)
    {
        return float4(0, 0, 0, 1);
    }

    return float4(normalize(axis) * sin(angle * 0.5f), cosf(angle * 0.5f));
}

inline float4 float4::quat(const float3& axis, float angle)
{
    return quatFromAxisAngle(axis, angle);
}

inline float4 quatToAxisAngle(const float4& quat)
{
    float4 c = quat;
    if (c.w != 0.0f)
    {
        c = normalize(quat);
    }

    const float den = sqrtf(1.0f - c.w * c.w);
    const float3 axis = (den > 0.0001f) 
        ? float3(c.x, c.y, c.z) / den
        : float3(1, 0, 0);

    const float angle = 2.0f * cosf(c.w);
    return float4(axis, angle);
}

inline void quatToAxisAngle(const float4& quat, float3* axis, float* angle)
{
    float4 axisAngle = quatToAxisAngle(quat);
    if (axis) *axis = (float3)axisAngle;
    if (angle) *angle = axisAngle.w;
}

inline float4 float4::toaxis(const float4& quat)
{
    return quatToAxisAngle(quat);
}

/* Convert quaternion to axisangle
    * @note: xyz is axis, w is angle
    */
inline void float4::toaxis(const float4& quat, float3* axis, float* angle)
{
    quatToAxisAngle(quat, axis, angle);
}

inline float4 quatFromEuler(float x, float y, float z)
{
    float r;
    float p;

    r = z * 0.5f;
    p = x * 0.5f;
    y = y * 0.5f; // Now y mean yaw

    const float c1 = cos(y);
    const float c2 = cos(p);
    const float c3 = cos(r);
    const float s1 = sin(y);
    const float s2 = sin(p);
    const float s3 = sin(r);

    return float4(
        s1 * s2 * c3 + c1 * c2 * s3,
        s1 * c2 * c3 + c1 * s2 * s3,
        c1 * s2 * c3 - s1 * c2 * s3,
        c1 * c2 * c3 - s1 * s2 * s3
    );
}

inline float4 float4::euler(float x, float y, float z)
{
    return quatFromEuler(x, y, z);
}

/* Quaternion from euler
    */
inline float4 float4::euler(const float3& v)
{
    return quatFromEuler(v.x, v.y, v.z);
}