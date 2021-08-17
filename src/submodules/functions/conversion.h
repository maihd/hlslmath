/* Convert radians to degrees
 */
HLSLMATH_INLINE float degrees(float x)
{
    const float factor = 180.0f / 3.14159265358979f;
    return x * factor;
}

/* Convert degrees to radians
 */
HLSLMATH_INLINE float radians(float x)
{
    const float factor = 3.14159265358979f / 180.0f;
    return x * factor;
}

/* Convert radians to degrees
 */
HLSLMATH_INLINE double degrees(double x)
{
    const double factor = 180.0 / 3.14159265358979;
    return x * factor;
}

/* Convert degrees to radians
 */
HLSLMATH_INLINE double radians(double x)
{
    const double factor = 3.14159265358979f / 180.0;
    return x * factor;
}

HLSLMATH_INLINE int asint(float x)
{
    union
    {
        int   ival;
        float fval;
    } cvt;
    cvt.fval = x;
    return cvt.ival;
}

HLSLMATH_INLINE int2 asint(const float2& v)
{
    return int2(asint(v.x), asint(v.y));
}

HLSLMATH_INLINE int3 asint(const float3& v)
{
    return int3(asint(v.x), asint(v.y), asint(v.z));
}

HLSLMATH_INLINE int4 asint(const float4& v)
{
    return int4(asint(v.x), asint(v.y), asint(v.z), asint(v.w));
}

HLSLMATH_INLINE int2x2 asint(const float2x2& m)
{
    return int2x2(
        asint(m[0][0]), asint(m[0][1]),
        asint(m[1][0]), asint(m[1][1]));
}

HLSLMATH_INLINE int3x3 asint(const float3x3& m)
{
    return int3x3(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]));
}

HLSLMATH_INLINE int4x4 asint(const float4x4& m)
{
    return int4x4(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]), asint(m[0][3]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]), asint(m[1][3]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]), asint(m[2][3]),
        asint(m[3][0]), asint(m[3][1]), asint(m[3][2]), asint(m[3][3]));
}

HLSLMATH_INLINE int asint(uint x)
{
    union
    {
        int  ival;
        uint uval;
    } cvt;
    cvt.uval = x;
    return cvt.ival;
}

HLSLMATH_INLINE int2 asint(const uint2& v)
{
    return int2(asint(v.x), asint(v.y));
}

HLSLMATH_INLINE int3 asint(const uint3& v)
{
    return int3(asint(v.x), asint(v.y), asint(v.z));
}

HLSLMATH_INLINE int4 asint(const uint4& v)
{
    return int4(asint(v.x), asint(v.y), asint(v.z), asint(v.w));
}

HLSLMATH_INLINE int2x2 asint(const uint2x2& m)
{
    return int2x2(
        asint(m[0][0]), asint(m[0][1]),
        asint(m[1][0]), asint(m[1][1]));
}

HLSLMATH_INLINE int3x3 asint(const uint3x3& m)
{
    return int3x3(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]));
}

HLSLMATH_INLINE int4x4 asint(const uint4x4& m)
{
    return int4x4(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]), asint(m[0][3]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]), asint(m[1][3]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]), asint(m[2][3]),
        asint(m[3][0]), asint(m[3][1]), asint(m[3][2]), asint(m[3][3]));
}

HLSLMATH_INLINE uint asuint(int x)
{
    union
    {
        int  ival;
        uint uval;
    } cvt;
    cvt.ival = x;
    return cvt.uval;
}

HLSLMATH_INLINE uint2 asuint(const int2& v)
{
    return uint2(asuint(v.x), asuint(v.y));
}

HLSLMATH_INLINE uint3 asuint(const int3& v)
{
    return uint3(asuint(v.x), asuint(v.y), asuint(v.z));
}

HLSLMATH_INLINE uint4 asuint(const int4& v)
{
    return uint4(asuint(v.x), asuint(v.y), asuint(v.z), asuint(v.w));
}

HLSLMATH_INLINE uint2x2 asuint(const int2x2& v)
{
    return uint2x2(
        asuint(v[0][0]), asuint(v[0][1]),
        asuint(v[1][0]), asuint(v[1][1]));
}

HLSLMATH_INLINE uint3x3 asuint(const int3x3& v)
{
    return uint3x3(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]));
}

HLSLMATH_INLINE uint4x4 asuint(const int4x4& v)
{
    return uint4x4(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]), asuint(v[0][3]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]), asuint(v[1][3]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]), asuint(v[2][3]),
        asuint(v[3][0]), asuint(v[3][1]), asuint(v[3][2]), asuint(v[3][3]));
}

HLSLMATH_INLINE uint asuint(float x)
{
    union
    {
        uint  uval;
        float fval;
    } cvt;
    cvt.fval = x;
    return cvt.uval;
}

HLSLMATH_INLINE uint2 asuint(const float2& v)
{
    return uint2(asuint(v.x), asuint(v.y));
}

HLSLMATH_INLINE uint3 asuint(const float3& v)
{
    return uint3(asuint(v.x), asuint(v.y), asuint(v.z));
}

HLSLMATH_INLINE uint4 asuint(const float4& v)
{
    return uint4(asuint(v.x), asuint(v.y), asuint(v.z), asuint(v.w));
}

HLSLMATH_INLINE uint2x2 asuint(const float2x2& v)
{
    return uint2x2(
        asuint(v[0][0]), asuint(v[0][1]),
        asuint(v[1][0]), asuint(v[1][1]));
}

HLSLMATH_INLINE uint3x3 asuint(const float3x3& v)
{
    return uint3x3(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]));
}

HLSLMATH_INLINE uint4x4 asuint(const float4x4& v)
{
    return uint4x4(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]), asuint(v[0][3]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]), asuint(v[1][3]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]), asuint(v[2][3]),
        asuint(v[3][0]), asuint(v[3][1]), asuint(v[3][2]), asuint(v[3][3]));
}

HLSLMATH_INLINE void asuint(double x, uint* lowbits, uint* highbits)
{
    union
    {
        double dval;
        struct
        {
            uint lowbits;
            uint highbits;
        };
    } cvt;

    cvt.dval = x;
    *lowbits = cvt.lowbits;
    *highbits = cvt.highbits;
}

HLSLMATH_INLINE float asfloat(int x)
{
    union
    {
        int   ival;
        float fval;
    } cvt;
    cvt.ival = x;
    return cvt.fval;
}

HLSLMATH_INLINE float2 asfloat(const int2& v)
{
    return float2(asfloat(v.x), asfloat(v.y));
}

HLSLMATH_INLINE float3 asfloat(const int3& v)
{
    return float3(asfloat(v.x), asfloat(v.y), asfloat(v.z));
}

HLSLMATH_INLINE float4 asfloat(const int4& v)
{
    return float4(asfloat(v.x), asfloat(v.y), asfloat(v.z), asfloat(v.w));
}

HLSLMATH_INLINE float2x2 asfloat(const int2x2& m)
{
    return float2x2(
        asfloat(m[0][0]), asfloat(m[0][1]),
        asfloat(m[1][0]), asfloat(m[1][1]));
}

HLSLMATH_INLINE float3x3 asfloat(const int3x3& m)
{
    return float3x3(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]));
}

HLSLMATH_INLINE float4x4 asfloat(const int4x4& m)
{
    return float4x4(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]), asfloat(m[0][3]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]), asfloat(m[1][3]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]), asfloat(m[2][3]),
        asfloat(m[3][0]), asfloat(m[3][1]), asfloat(m[3][2]), asfloat(m[3][3]));
}

HLSLMATH_INLINE float asfloat(uint x)
{
    union
    {
        uint  uval;
        float fval;
    } cvt;
    cvt.uval = x;
    return cvt.fval;
}

HLSLMATH_INLINE float2 asfloat(const uint2& v)
{
    return float2(asfloat(v.x), asfloat(v.y));
}

HLSLMATH_INLINE float3 asfloat(const uint3& v)
{
    return float3(asfloat(v.x), asfloat(v.y), asfloat(v.z));
}

HLSLMATH_INLINE float4 asfloat(const uint4& v)
{
    return float4(asfloat(v.x), asfloat(v.y), asfloat(v.z), asfloat(v.w));
}

HLSLMATH_INLINE float2x2 asfloat(const uint2x2& m)
{
    return float2x2(
        asfloat(m[0][0]), asfloat(m[0][1]),
        asfloat(m[1][0]), asfloat(m[1][1]));
}

HLSLMATH_INLINE float3x3 asfloat(const uint3x3& m)
{
    return float3x3(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]));
}

HLSLMATH_INLINE float4x4 asfloat(const uint4x4& m)
{
    return float4x4(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]), asfloat(m[0][3]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]), asfloat(m[1][3]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]), asfloat(m[2][3]),
        asfloat(m[3][0]), asfloat(m[3][1]), asfloat(m[3][2]), asfloat(m[3][3]));
}

HLSLMATH_INLINE float asfloat(float x)
{
    return x;
}

HLSLMATH_INLINE float2 asfloat(const float2& v)
{
    return v;
}

HLSLMATH_INLINE float3 asfloat(const float3& v)
{
    return v;
}

HLSLMATH_INLINE float4 asfloat(const float4& v)
{
    return v;
}

HLSLMATH_INLINE float2x2 asfloat(const float2x2& m)
{
    return m;
}

HLSLMATH_INLINE float3x3 asfloat(const float3x3& m)
{
    return m;
}

HLSLMATH_INLINE float4x4 asfloat(const float4x4& m)
{
    return m;
}
