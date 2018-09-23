//
// @region: Operator overloading
//

inline float2 operator-(const float2& v)
{
    return float2(-v.x, -v.y);
}

inline const float2& operator+(const float2& v)
{
    return v;
}

inline float2& operator--(float2& v)
{
    --v.x;
    --v.y;
    return v;
}

inline float2& operator++(float2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

inline float2 operator--(float2& v, int)
{
    const float2 result = v;

    v.x--;
    v.y--;
    
    return result;
}

inline float2 operator++(float2& v, int)
{
    const float2 result = v;

    v.x++;
    v.y++;
    
    return result;
}

inline float2 operator+(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vadd_f32(a, b));
#else
    return float2(a.x + b.x, a.y + b.y);
#endif
}

inline float2 operator-(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vsub_f32(a, b));
#else
    return float2(a.x - b.x, a.y - b.y);
#endif
}

inline float2 operator*(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vmul_f32(a, b));
#else
    return float2(a.x * b.x, a.y * b.y);
#endif
}

inline float2 operator/(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON && 0 // experimental
    float2 res;
    __asm volatile(
    "vcvt.f32.u32  q0, q0     \n\t"
    "vrecpe.f32    q0, q0     \n\t"
    "vmul.f32      q0, q0, q1 \n\t"
    "vcvt.u32.f32  q0, q0     \n\t"
        : 
        : "r"(dst), "r"()
        :
        );
#else
    return float2(a.x / b.x, a.y / b.y);
#endif
}

inline float2 operator+(const float2& a, float b)
{
    return a + float2(b);
}

inline float2 operator-(const float2& a, float b)
{
    return a - float2(b);
}

inline float2 operator*(const float2& a, float b)
{
    return a * float2(b);
}

inline float2 operator/(const float2& a, float b)
{
    return a / float2(b);
}

inline float2 operator+(float a, const float2& b)
{
    return float2(a) + b;
}

inline float2 operator-(float a, const float2& b)
{
    return float2(a) - b;
}

inline float2 operator*(float a, const float2& b)
{
    return float2(a) * b;
}

inline float2 operator/(float a, const float2& b)
{
    return float2(a) / b;
}

inline float2& operator+=(float2& a, const float2& b)
{
    return (a = a + b);
}

inline float2& operator+=(float2& a, float b)
{
    return (a = a + b);
}

inline float2& operator-=(float2& a, const float2& b)
{
    return (a = a - b);
}

inline float2& operator-=(float2& a, float b)
{
    return (a = a - b);
}

inline float2& operator*=(float2& a, const float2& b)
{
    return (a = a * b);
}

inline float2& operator*=(float2& a, float b)
{
    return (a = a * b);
}

inline float2& operator/=(float2& a, const float2& b)
{
    return (a = a / b);
}

inline float2& operator/=(float2& a, float b)
{
    return (a = a + b);
}

inline bool2 operator==(const float2& a, const float2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

inline bool2 operator!=(const float2& a, const float2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}

inline bool2 operator<(const float2& a, const float2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

inline bool2 operator>(const float2& a, const float2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

inline bool2 operator<=(const float2& a, const float2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

inline bool2 operator>=(const float2& a, const float2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int2 sign(const float2& v)
{
    return int2(sign(v.x),
                sign(v.y));
}

/* Computes absolute value
 */
inline float2 abs(const float2& v)
{
    return float2(abs(v.x),
                  abs(v.y));
}

/* Computes cosine
 */
inline float2 cos(const float2& v)
{
    return float2(cos(v.x),
                  cos(v.y));
}

/* Computes sine
 */
inline float2 sin(const float2& v)
{
    return float2(sin(v.x),
                  sin(v.y));
}

/* Computes tangent
 */
inline float2 tan(const float2& v)
{
    return float2(tan(v.x),
                  tan(v.y));
}

/* Computes hyperbolic cosine
 */
inline float2 cosh(const float2& v)
{
    return float2(cosh(v.x),
                  cosh(v.y));
}

/* Computes hyperbolic sine
 */
inline float2 sinh(const float2& v)
{
    return float2(sinh(v.x),
                  sinh(v.y));
}

/* Computes hyperbolic tangent
 */
inline float2 tanh(const float2& v)
{
    return float2(tanh(v.x),
                  tanh(v.y));
}

/* Computes inverse cosine
 */
inline float2 acos(const float2& v)
{
    return float2(acos(v.x),
                  acos(v.y));
}

/* Computes inverse sine
 */
inline float2 asin(const float2& v)
{
    return float2(asin(v.x),
                  asin(v.y));
}

/* Computes inverse tangent
 */
inline float2 atan(const float2& v)
{
    return float2(atan(v.x),
                  atan(v.y));
}

/* Computes inverse tangent with 2 args
 */
inline float2 atan2(const float2& a, const float2& b)
{
    return float2(atan2(a.x, b.x),
                  atan2(a.y, b.y));
}

/* Computes Euler number raised to the power 'x'
 */
inline float2 exp(const float2& v)
{
    return float2(exp(v.x),
                  exp(v.y));
}

/* Computes 2 raised to the power 'x'
 */
inline float2 exp2(const float2& v)
{
    return float2(exp2(v.x),
                  exp2(v.y));
}

/* Computes the base Euler number logarithm
 */
inline float2 log(const float2& v)
{
    return float2(log(v.x),
                  log(v.y));
}

/* Computes the base 2 logarithm
 */
inline float2 log2(const float2& v)
{
    return float2(log2(v.x),
                  log2(v.y));
}

/* Computes the base 10 logarithm
 */
inline float2 log10(const float2& v)
{
    return float2(log10(v.x),
                  log10(v.y));
}

/* Computes the value of base raised to the power exponent
 */
inline float2 pow(const float2& a, const float2& b)
{
    return float2(pow(a.x, b.x),
                  pow(a.y, b.y));
}

/* Get the fractal part of floating point
 */
inline float2 frac(const float2& v)
{
    return float2(frac(v.x),
                  frac(v.y));
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float2 fmod(const float2& a, const float2& b)
{
    return float2(fmod(a.x, b.x),
                  fmod(a.y, b.y));
}

/* Computes the smallest integer value not less than 'x'
 */
inline float2 ceil(const float2& v)
{
    return float2(ceil(v.x),
                  ceil(v.y));
}

/* Computes the largest integer value not greater than 'x'
 */
inline float2 floor(const float2& v)
{
    return float2(floor(v.x),
                  floor(v.y));
}

/* Computes the nearest integer value
 */
inline float2 round(const float2& v)
{
    return float2(round(v.x),
                  round(v.y));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float2 trunc(const float2& v)
{
    return float2(trunc(v.x),
                  trunc(v.y));
}

/* Get the smaller value
 */
inline float2 min(const float2& a, const float2& b)
{
    return float2(min(a.x, b.x),
                  min(a.y, b.y));
}

/* Get the larger value
 */
inline float2 max(const float2& a, const float2& b)
{
    return float2(max(a.x, b.x), 
                  max(a.y, b.y));
}

/* Clamps the 'x' value to the [min, max].
 */
inline float2 clamp(const float2& v, const float2& min, const float2& max)
{
    return float2(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y));
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float2 saturate(const float2& v)
{
    return float2(saturate(v.x),
                  saturate(v.y));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float2 step(const float2& a, const float2& b)
{
    return float2(step(a.x, b.x),
                  step(a.y, b.y));
}

/* Performs a linear interpolation.
 */
inline float2 lerp(const float2& a, const float2& b, const float2& t)
{
    return float2(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y));
}

/* Performs a linear interpolation.
 */
inline float2 lerp(const float2& a, const float2& b, float t)
{
    return float2(lerp(a.x, b.x, t),
                  lerp(a.y, b.y, t));
}

/* Compute a smooth Hermite interpolation
 */
inline float2 smoothstep(const float2& a, const float2& b, const float2& t)
{
    return float2(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y));
}

/* Computes square root of 'x'.
 */
inline float2 sqrt(const float2& v)
{
    return float2(sqrt(v.x),
                  sqrt(v.y));
}

/* Computes inverse square root of 'x'.
 */
inline float2 rsqrt(const float2& v)
{
    return float2(rsqrt(v.x),
                  rsqrt(v.y));
}

/* Computes fast inverse square root of 'x'.
 */
inline float2 fsqrt(const float2& v)
{
    return float2(fsqrt(v.x),
                  fsqrt(v.y));
}

/* Computes fast inverse square root of 'x'.
 */
inline float2 frsqrt(const float2& v)
{
    return float2(frsqrt(v.x),
                  frsqrt(v.y));
}

//
// @region: Graphics funtions
//

/* Compute dot product of two vectors
 */ 
inline float dot(const float2& a, const float2& b)
{
    return a.x * b.x + a.y * b.y;
}

/* Compute squared length of vector
 */
inline float lengthsquared(const float2& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
inline float length(const float2& v)
{
    return sqrt(lengthsquared(v));
}

/* Compute distance from 'a' to b
 */
inline float distance(const float2& a, const float2& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
inline float distancesquared(const float2& a, const float2& b)
{
    return lengthsquared(a - b);
}

/* Compute normalized vector
 */
inline float2 normalize(const float2& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float2(v.x * f, v.y * f);
    }
    else
    {
        return v;
    }
}

/* Compute reflection vector
 */
inline float2 reflect(const float2& v, const float2& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
inline float2 refract(const float2& v, const float2& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float2(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * v;
}

/* Compute faceforward vector
 */
inline float2 faceforward(const float2& n, const float2& i, const float2& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}
