inline bool all(bool v)
{
    return v;
}

inline bool any(bool v)
{
    return v;
}

inline bool all(const bool2& v)
{
    return v.x && v.y;
}

inline bool any(const bool2& v)
{
    return v.x || v.y;
}

inline bool all(const bool3& v)
{
    return v.x && v.y && v.z;
}

inline bool any(const bool3& v)
{
    return v.x || v.y || v.z ;
}

inline bool all(const bool4& v)
{
    return v.x && v.y && v.z && v.w;
}

inline bool any(const bool4& v)
{
    return v.x || v.y || v.z || v.w;
}

inline bool all(const bool2x2& v)
{
    return v[0][0] && v[0][1] && v[1][0] && v[1][1];
}

inline bool any(const bool2x2& v)
{
    return v[0][0] || v[0][1] || v[1][0] || v[1][1];
}

inline bool all(const bool3x3& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] &&
        v[1][0] && v[1][1] && v[1][2] &&
        v[2][0] && v[2][1] && v[2][2];
}

inline bool any(const bool3x3& v)
{
    return
        v[0][0] || v[0][1] || v[0][2] ||
        v[1][0] || v[1][1] || v[1][2] ||
        v[2][0] || v[2][1] || v[2][2];
}

inline bool all(const bool4x4& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] && v[0][3] &&
        v[1][0] && v[1][1] && v[1][2] && v[1][3] &&
        v[2][0] && v[2][1] && v[2][2] && v[2][3] &&
        v[3][0] && v[3][1] && v[3][2] && v[3][3];
}

inline bool any(const bool4x4& v)
{
    return 
        v[0][0] || v[0][1] || v[0][2] || v[0][3] ||
        v[1][0] || v[1][1] || v[1][2] || v[1][3] ||
        v[2][0] || v[2][1] || v[2][2] || v[2][3] ||
        v[3][0] || v[3][1] || v[3][2] || v[3][3];
}

inline bool all(int v)
{
    return v;
}

inline bool any(int v)
{
    return v;
}

inline bool all(const int2& v)
{
    return v.x && v.y;
}

inline bool any(const int2& v)
{
    return v.x || v.y;
}

inline bool all(const int3& v)
{
    return v.x && v.y && v.z;
}

inline bool any(const int3& v)
{
    return v.x || v.y || v.z ;
}

inline bool all(const int4& v)
{
    return v.x && v.y && v.z && v.w;
}

inline bool any(const int4& v)
{
    return v.x || v.y || v.z || v.w;
}

inline bool all(const int2x2& v)
{
    return v[0][0] && v[0][1] && v[1][0] && v[1][1];
}

inline bool any(const int2x2& v)
{
    return v[0][0] || v[0][1] || v[1][0] || v[1][1];
}

inline bool all(const int3x3& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] &&
        v[1][0] && v[1][1] && v[1][2] &&
        v[2][0] && v[2][1] && v[2][2];
}

inline bool any(const int3x3& v)
{
    return
        v[0][0] || v[0][1] || v[0][2] ||
        v[1][0] || v[1][1] || v[1][2] ||
        v[2][0] || v[2][1] || v[2][2];
}

inline bool all(const int4x4& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] && v[0][3] &&
        v[1][0] && v[1][1] && v[1][2] && v[1][3] &&
        v[2][0] && v[2][1] && v[2][2] && v[2][3] &&
        v[3][0] && v[3][1] && v[3][2] && v[3][3];
}

inline bool any(const int4x4& v)
{
    return 
        v[0][0] || v[0][1] || v[0][2] || v[0][3] ||
        v[1][0] || v[1][1] || v[1][2] || v[1][3] ||
        v[2][0] || v[2][1] || v[2][2] || v[2][3] ||
        v[3][0] || v[3][1] || v[3][2] || v[3][3];
}

inline bool all(uint v)
{
    return v;
}

inline bool any(uint v)
{
    return v;
}

inline bool all(const uint2& v)
{
    return v.x && v.y;
}

inline bool any(const uint2& v)
{
    return v.x || v.y;
}

inline bool all(const uint3& v)
{
    return v.x && v.y && v.z;
}

inline bool any(const uint3& v)
{
    return v.x || v.y || v.z ;
}

inline bool all(const uint4& v)
{
    return v.x && v.y && v.z && v.w;
}

inline bool any(const uint4& v)
{
    return v.x || v.y || v.z || v.w;
}

inline bool all(const uint2x2& v)
{
    return v[0][0] && v[0][1] && v[1][0] && v[1][1];
}

inline bool any(const uint2x2& v)
{
    return v[0][0] || v[0][1] || v[1][0] || v[1][1];
}

inline bool all(const uint3x3& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] &&
        v[1][0] && v[1][1] && v[1][2] &&
        v[2][0] && v[2][1] && v[2][2];
}

inline bool any(const uint3x3& v)
{
    return
        v[0][0] || v[0][1] || v[0][2] ||
        v[1][0] || v[1][1] || v[1][2] ||
        v[2][0] || v[2][1] || v[2][2];
}

inline bool all(const uint4x4& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] && v[0][3] &&
        v[1][0] && v[1][1] && v[1][2] && v[1][3] &&
        v[2][0] && v[2][1] && v[2][2] && v[2][3] &&
        v[3][0] && v[3][1] && v[3][2] && v[3][3];
}

inline bool any(const uint4x4& v)
{
    return 
        v[0][0] || v[0][1] || v[0][2] || v[0][3] ||
        v[1][0] || v[1][1] || v[1][2] || v[1][3] ||
        v[2][0] || v[2][1] || v[2][2] || v[2][3] ||
        v[3][0] || v[3][1] || v[3][2] || v[3][3];
}

inline bool all(float v)
{
    return v;
}

inline bool any(float v)
{
    return v;
}

inline bool all(const float2& v)
{
    return v.x && v.y;
}

inline bool any(const float2& v)
{
    return v.x || v.y;
}

inline bool all(const float3& v)
{
    return v.x && v.y && v.z;
}

inline bool any(const float3& v)
{
    return v.x || v.y || v.z;
}

inline bool all(const float4& v)
{
    return v.x && v.y && v.z && v.w;
}

inline bool any(const float4& v)
{
    return v.x || v.y || v.z || v.w;
}

inline bool all(const float2x2& v)
{
    return v[0][0] && v[0][1] && v[1][0] && v[1][1];
}

inline bool any(const float2x2& v)
{
    return v[0][0] || v[0][1] || v[1][0] || v[1][1];
}

inline bool all(const float3x3& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] &&
        v[1][0] && v[1][1] && v[1][2] &&
        v[2][0] && v[2][1] && v[2][2];
}

inline bool any(const float3x3& v)
{
    return
        v[0][0] || v[0][1] || v[0][2] ||
        v[1][0] || v[1][1] || v[1][2] ||
        v[2][0] || v[2][1] || v[2][2];
}

inline bool all(const float4x4& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] && v[0][3] &&
        v[1][0] && v[1][1] && v[1][2] && v[1][3] &&
        v[2][0] && v[2][1] && v[2][2] && v[2][3] &&
        v[3][0] && v[3][1] && v[3][2] && v[3][3];
}

inline bool any(const float4x4& v)
{
    return 
        v[0][0] || v[0][1] || v[0][2] || v[0][3] ||
        v[1][0] || v[1][1] || v[1][2] || v[1][3] ||
        v[2][0] || v[2][1] || v[2][2] || v[2][3] ||
        v[3][0] || v[3][1] || v[3][2] || v[3][3];
}
