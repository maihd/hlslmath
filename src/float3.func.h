//
// @region: Operators overloading
//

inline float3 operator-(const float3& v)
{
    return float3(-v.x, -v.y, -v.z);
}

inline const float3& operator+(const float3& v)
{
    return v;
}

inline float3& operator--(float3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

inline float3& operator++(float3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

inline float3 operator--(float3& v, int)
{
    const float3 result = v;

    v.x--;
    v.y--;
    v.z--;

    return result;
}

inline const float3& operator++(float3& v, int)
{
    const float3 result = v;

    v.x++;
    v.y++;
    v.z++;

    return result;
}

inline float3 operator+(const float3& a, const float3& b)
{
    return float3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline float3 operator-(const float3& a, const float3& b)
{
    return float3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline float3 operator*(const float3& a, const float3& b)
{
    return float3(a.x * b.x, a.y * b.y, a.z * b.z);
}

inline float3 operator/(const float3& a, const float3& b)
{
    return float3(a.x / b.x, a.y / b.y, a.z / b.z);
}

inline float3 operator+(const float3& a, float b)
{
    return float3(a.x + b, a.y + b, a.z + b);
}

inline float3 operator-(const float3& a, float b)
{
    return float3(a.x - b, a.y - b, a.z - b);
}

inline float3 operator*(const float3& a, float b)
{
    return float3(a.x * b, a.y * b, a.z * b);
}

inline float3 operator/(const float3& a, float b)
{
    return float3(a.x / b, a.y / b, a.z / b);
}

inline float3 operator+(float a, const float3& b)
{
    return float3(a + b.x, a + b.y, a + b.z);
}

inline float3 operator-(float a, const float3& b)
{
    return float3(a - b.x, a - b.y, a - b.z);
}

inline float3 operator*(float a, const float3& b)
{
    return float3(a * b.x, a * b.y, a * b.z);
}

inline float3 operator/(float a, const float3& b)
{
    return float3(a / b.x, a / b.y, a / b.z);
}

inline float3& operator+=(float3& a, const float3& b)
{
    return (a = a + b);
}

inline float3& operator+=(float3& a, float b)
{
    return (a = a + b);
}

inline float3& operator-=(float3& a, const float3& b)
{
    return (a = a - b);
}

inline float3& operator-=(float3& a, float b)
{
    return (a = a - b);
}

inline float3& operator*=(float3& a, const float3& b)
{
    return (a = a * b);
}

inline float3& operator*=(float3& a, float b)
{
    return (a = a * b);
}

inline float3& operator/=(float3& a, const float3& b)
{
    return (a = a / b);
}

inline float3& operator/=(float3& a, float b)
{
    return (a = a + b);
}

inline bool3 operator==(const float3& a, const float3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

inline bool3 operator!=(const float3& a, const float3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

inline bool3 operator<(const float3& a, const float3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

inline bool3 operator>(const float3& a, const float3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

inline bool3 operator<=(const float3& a, const float3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

inline bool3 operator>=(const float3& a, const float3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int3 sign(const float3& v)
{
    return int3(sign(v.x),
                sign(v.y),
                sign(v.z));
}

/* Computes absolute value
 */
inline float3 abs(const float3& v)
{
    return float3(abs(v.x),
                  abs(v.y),
                  abs(v.z));
}

/* Computes cosine
 */
inline float3 cos(const float3& v)
{
    return float3(cos(v.x),
                  cos(v.y),
                  cos(v.z));
}

/* Computes sine
 */
inline float3 sin(const float3& v)
{
    return float3(sin(v.x),
                  sin(v.y),
                  sin(v.z));
}

/* Computes tangent
 */
inline float3 tan(const float3& v)
{
    return float3(tan(v.x),
                  tan(v.y),
                  tan(v.z));
}

/* Computes hyperbolic cosine
 */
inline float3 cosh(const float3& v)
{
    return float3(cosh(v.x),
                  cosh(v.y),
                  cosh(v.z));
}

/* Computes hyperbolic sine
 */
inline float3 sinh(const float3& v)
{
    return float3(sinh(v.x),
                  sinh(v.y),
                  sinh(v.z));
}

/* Computes hyperbolic tangent
 */
inline float3 tanh(const float3& v)
{
    return float3(tanh(v.x),
                  tanh(v.y),
                  tanh(v.z));
}

/* Computes inverse cosine
 */
inline float3 acos(const float3& v)
{
    return float3(acos(v.x),
                  acos(v.y),
                  acos(v.z));
}

/* Computes inverse sine
 */
inline float3 asin(const float3& v)
{
    return float3(asin(v.x),
                  asin(v.y),
                  asin(v.z));
}

/* Computes inverse tangent
 */
inline float3 atan(const float3& v)
{
    return float3(atan(v.x),
                  atan(v.y),
                  asin(v.z));
}

/* Computes inverse tangent with 2 args
 */
inline float3 atan2(const float3& a, const float3& b)
{
    return float3(atan2(a.x, b.x),
                  atan2(a.y, b.y),
                  atan2(a.z, b.z));
}

/* Computes Euler number raised to the power 'x'
 */
inline float3 exp(const float3& v)
{
    return float3(exp(v.x),
                  exp(v.y),
                  exp(v.z));
}

/* Computes 2 raised to the power 'x'
 */
inline float3 exp2(const float3& v)
{
    return float3(exp2(v.x),
                  exp2(v.y),
                  exp2(v.z));
}

/* Computes the base Euler number logarithm
 */
inline float3 log(const float3& v)
{
    return float3(log(v.x),
                  log(v.y),
                  log(v.z));
}

/* Computes the base 2 logarithm
 */
inline float3 log2(const float3& v)
{
    return float3(log2(v.x),
                  log2(v.y),
                  log2(v.z));
}

/* Computes the base 10 logarithm
 */
inline float3 log10(const float3& v)
{
    return float3(log10(v.x),
                  log10(v.y),
                  log10(v.z));
}

/* Computes the value of base raised to the power exponent
 */
inline float3 pow(const float3& a, const float3& b)
{
    return float3(pow(a.x, b.x),
                  pow(a.y, b.y),
                  pow(a.z, b.z));
}

/* Get the fractal part of floating point
 */
inline float3 frac(const float3& v)
{
    return float3(frac(v.x),
                  frac(v.y),
                  frac(v.z));
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float3 fmod(const float3& a, const float3& b)
{
    return float3(fmod(a.x, b.x),
                  fmod(a.y, b.y),
                  fmod(a.z, b.z));
}

/* Computes the smallest integer value not less than 'x'
 */
inline float3 ceil(const float3& v)
{
    return float3(ceil(v.x),
                  ceil(v.y),
                  ceil(v.z));
}

/* Computes the largest integer value not greater than 'x'
 */
inline float3 floor(const float3& v)
{
    return float3(floor(v.x),
                  floor(v.y),
                  floor(v.z));
}

/* Computes the nearest integer value
 */
inline float3 round(const float3& v)
{
    return float3(round(v.x),
                  round(v.y),
                  round(v.z));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float3 trunc(const float3& v)
{
    return float3(trunc(v.x),
                  trunc(v.y),
                  trunc(v.z));
}

/* Get the smaller value
 */
inline float3 min(const float3& a, const float3& b)
{
    return float3(min(a.x, b.x),
                  min(a.y, b.y),
                  min(a.z, b.z));
}

/* Get the larger value
 */
inline float3 max(const float3& a, const float3& b)
{
    return float3(max(a.x, b.x), 
                  max(a.y, b.y),
                  max(a.z, b.z));
}

/* Clamps the 'x' value to the [min, max].
 */
inline float3 clamp(const float3& v, const float3& min, const float3& max)
{
    return float3(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y), 
                  clamp(v.z, min.z, max.z));
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float3 saturate(const float3& v)
{
    return float3(saturate(v.x),
                  saturate(v.y),
                  saturate(v.z));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float3 step(const float3& a, const float3& b)
{
    return float3(
        step(a.x, b.x),
        step(a.y, b.y),
        step(a.z, b.z)
    );
}

/* Performs a linear interpolation.
 */
inline float3 lerp(const float3& a, const float3& b, const float3& t)
{
    return float3(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y), 
                  lerp(a.z, b.z, t.z));
}

/* Performs a linear interpolation.
 */
inline float3 lerp(const float3& a, const float3& b, float t)
{
    return float3(lerp(a.x, b.x, t),
                  lerp(a.y, b.y, t), 
                  lerp(a.z, b.z, t));
}

/* Compute a smooth Hermite interpolation
 */
inline float3 smoothstep(const float3& a, const float3& b, const float3& t)
{
    return float3(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y),
                  smoothstep(a.z, b.z, t.z));
}

/* Computes square root of 'x'.
 */
inline float3 sqrt(const float3& v)
{
    return float3(sqrt(v.x),
                  sqrt(v.y),
                  sqrt(v.z));
}

/* Computes inverse square root of 'x'.
 */
inline float3 rsqrt(const float3& v)
{
    return float3(rsqrt(v.x),
                  rsqrt(v.y),
                  rsqrt(v.z));
}

/* Computes fast inverse square root of 'x'.
 */
inline float3 fsqrt(const float3& v)
{
    return float3(fsqrt(v.x),
                  fsqrt(v.y),
                  fsqrt(v.z));
}

/* Computes fast inverse square root of 'x'.
 */
inline float3 frsqrt(const float3& v)
{
    return float3(frsqrt(v.x),
                  frsqrt(v.y),
                  frsqrt(v.z));
}

//
// @region: Graphics functions
//

/* Compute cross product of two vectors
 */
inline float3 cross(const float3& a, const float3& b)
{
    return float3(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    );
}

/* Compute dot product of two vectors
 */
inline float dot(const float3& a, const float3& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

/* Compute squared length of vector
 */
inline float lengthsquared(const float3& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
inline float length(const float3& v)
{
    return sqrt(lengthsquared(v));
}

/* Compute distance from 'a' to b
 */
inline float distance(const float3& a, const float3& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
inline float distancesquared(const float3& a, const float3& b)
{
    return lengthsquared(a - b);
}

/* Compute normalized vector
 */
inline float3 normalize(const float3& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float3(v.x * f, v.y * f, v.z * f);
    }
    else
    {
        return v;
    }
}

/* Compute reflection vector
 */
inline float3 reflect(const float3& v, const float3& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
inline float3 refract(const float3& v, const float3& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float3(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

/* Compute faceforward vector
 */
inline float3 faceforward(const float3& n, const float3& i, const float3& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}
