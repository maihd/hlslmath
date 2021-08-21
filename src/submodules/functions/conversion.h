/* Convert radians to degrees
 */
inline float degrees(float x)
{
    const float factor = 180.0f / 3.14159265358979f;
    return x * factor;
}

/* Convert degrees to radians
 */
inline float radians(float x)
{
    const float factor = 3.14159265358979f / 180.0f;
    return x * factor;
}

/* Convert radians to degrees
 */
inline double degrees(double x)
{
    const double factor = 180.0 / 3.14159265358979;
    return x * factor;
}

/* Convert degrees to radians
 */
inline double radians(double x)
{
    const double factor = 3.14159265358979f / 180.0;
    return x * factor;
}

inline int asint(float x)
{
    union
    {
        int   ival;
        float fval;
    } cvt;
    cvt.fval = x;
    return cvt.ival;
}

inline int2 asint(const float2& v)
{
    return int2(asint(v.x), asint(v.y));
}

inline int3 asint(const float3& v)
{
    return int3(asint(v.x), asint(v.y), asint(v.z));
}

inline int4 asint(const float4& v)
{
    return int4(asint(v.x), asint(v.y), asint(v.z), asint(v.w));
}

inline int2x2 asint(const float2x2& m)
{
    return int2x2(
        asint(m[0][0]), asint(m[0][1]),
        asint(m[1][0]), asint(m[1][1]));
}

inline int3x3 asint(const float3x3& m)
{
    return int3x3(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]));
}

inline int4x4 asint(const float4x4& m)
{
    return int4x4(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]), asint(m[0][3]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]), asint(m[1][3]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]), asint(m[2][3]),
        asint(m[3][0]), asint(m[3][1]), asint(m[3][2]), asint(m[3][3]));
}

inline int asint(uint x)
{
    union
    {
        int  ival;
        uint uval;
    } cvt;
    cvt.uval = x;
    return cvt.ival;
}

inline int2 asint(const uint2& v)
{
    return int2(asint(v.x), asint(v.y));
}

inline int3 asint(const uint3& v)
{
    return int3(asint(v.x), asint(v.y), asint(v.z));
}

inline int4 asint(const uint4& v)
{
    return int4(asint(v.x), asint(v.y), asint(v.z), asint(v.w));
}

inline int2x2 asint(const uint2x2& m)
{
    return int2x2(
        asint(m[0][0]), asint(m[0][1]),
        asint(m[1][0]), asint(m[1][1]));
}

inline int3x3 asint(const uint3x3& m)
{
    return int3x3(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]));
}

inline int4x4 asint(const uint4x4& m)
{
    return int4x4(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]), asint(m[0][3]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]), asint(m[1][3]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]), asint(m[2][3]),
        asint(m[3][0]), asint(m[3][1]), asint(m[3][2]), asint(m[3][3]));
}

inline uint asuint(int x)
{
    union
    {
        int  ival;
        uint uval;
    } cvt;
    cvt.ival = x;
    return cvt.uval;
}

inline uint2 asuint(const int2& v)
{
    return uint2(asuint(v.x), asuint(v.y));
}

inline uint3 asuint(const int3& v)
{
    return uint3(asuint(v.x), asuint(v.y), asuint(v.z));
}

inline uint4 asuint(const int4& v)
{
    return uint4(asuint(v.x), asuint(v.y), asuint(v.z), asuint(v.w));
}

inline uint2x2 asuint(const int2x2& v)
{
    return uint2x2(
        asuint(v[0][0]), asuint(v[0][1]),
        asuint(v[1][0]), asuint(v[1][1]));
}

inline uint3x3 asuint(const int3x3& v)
{
    return uint3x3(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]));
}

inline uint4x4 asuint(const int4x4& v)
{
    return uint4x4(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]), asuint(v[0][3]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]), asuint(v[1][3]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]), asuint(v[2][3]),
        asuint(v[3][0]), asuint(v[3][1]), asuint(v[3][2]), asuint(v[3][3]));
}

inline uint asuint(float x)
{
    union
    {
        uint  uval;
        float fval;
    } cvt;
    cvt.fval = x;
    return cvt.uval;
}

inline uint2 asuint(const float2& v)
{
    return uint2(asuint(v.x), asuint(v.y));
}

inline uint3 asuint(const float3& v)
{
    return uint3(asuint(v.x), asuint(v.y), asuint(v.z));
}

inline uint4 asuint(const float4& v)
{
    return uint4(asuint(v.x), asuint(v.y), asuint(v.z), asuint(v.w));
}

inline uint2x2 asuint(const float2x2& v)
{
    return uint2x2(
        asuint(v[0][0]), asuint(v[0][1]),
        asuint(v[1][0]), asuint(v[1][1]));
}

inline uint3x3 asuint(const float3x3& v)
{
    return uint3x3(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]));
}

inline uint4x4 asuint(const float4x4& v)
{
    return uint4x4(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]), asuint(v[0][3]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]), asuint(v[1][3]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]), asuint(v[2][3]),
        asuint(v[3][0]), asuint(v[3][1]), asuint(v[3][2]), asuint(v[3][3]));
}

inline void asuint(double x, uint* lowbits, uint* highbits)
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

inline float asfloat(int x)
{
    union
    {
        int   ival;
        float fval;
    } cvt;
    cvt.ival = x;
    return cvt.fval;
}

inline float2 asfloat(const int2& v)
{
    return float2(asfloat(v.x), asfloat(v.y));
}

inline float3 asfloat(const int3& v)
{
    return float3(asfloat(v.x), asfloat(v.y), asfloat(v.z));
}

inline float4 asfloat(const int4& v)
{
    return float4(asfloat(v.x), asfloat(v.y), asfloat(v.z), asfloat(v.w));
}

inline float2x2 asfloat(const int2x2& m)
{
    return float2x2(
        asfloat(m[0][0]), asfloat(m[0][1]),
        asfloat(m[1][0]), asfloat(m[1][1]));
}

inline float3x3 asfloat(const int3x3& m)
{
    return float3x3(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]));
}

inline float4x4 asfloat(const int4x4& m)
{
    return float4x4(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]), asfloat(m[0][3]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]), asfloat(m[1][3]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]), asfloat(m[2][3]),
        asfloat(m[3][0]), asfloat(m[3][1]), asfloat(m[3][2]), asfloat(m[3][3]));
}

inline float asfloat(uint x)
{
    union
    {
        uint  uval;
        float fval;
    } cvt;
    cvt.uval = x;
    return cvt.fval;
}

inline float2 asfloat(const uint2& v)
{
    return float2(asfloat(v.x), asfloat(v.y));
}

inline float3 asfloat(const uint3& v)
{
    return float3(asfloat(v.x), asfloat(v.y), asfloat(v.z));
}

inline float4 asfloat(const uint4& v)
{
    return float4(asfloat(v.x), asfloat(v.y), asfloat(v.z), asfloat(v.w));
}

inline float2x2 asfloat(const uint2x2& m)
{
    return float2x2(
        asfloat(m[0][0]), asfloat(m[0][1]),
        asfloat(m[1][0]), asfloat(m[1][1]));
}

inline float3x3 asfloat(const uint3x3& m)
{
    return float3x3(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]));
}

inline float4x4 asfloat(const uint4x4& m)
{
    return float4x4(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]), asfloat(m[0][3]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]), asfloat(m[1][3]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]), asfloat(m[2][3]),
        asfloat(m[3][0]), asfloat(m[3][1]), asfloat(m[3][2]), asfloat(m[3][3]));
}

inline float asfloat(float x)
{
    return x;
}

inline float2 asfloat(const float2& v)
{
    return v;
}

inline float3 asfloat(const float3& v)
{
    return v;
}

inline float4 asfloat(const float4& v)
{
    return v;
}

inline float2x2 asfloat(const float2x2& m)
{
    return m;
}

inline float3x3 asfloat(const float3x3& m)
{
    return m;
}

inline float4x4 asfloat(const float4x4& m)
{
    return m;
}
