HLSLMATH_INLINE bool all(bool v)
{
    return v;
}

HLSLMATH_INLINE bool any(bool v)
{
    return v;
}

HLSLMATH_INLINE bool all(const bool2& v)
{
    return v.x && v.y;
}

HLSLMATH_INLINE bool any(const bool2& v)
{
    return v.x || v.y;
}

HLSLMATH_INLINE bool all(const bool3& v)
{
    return v.x && v.y && v.z;
}

HLSLMATH_INLINE bool any(const bool3& v)
{
    return v.x || v.y || v.z ;
}

HLSLMATH_INLINE bool all(const bool4& v)
{
    return v.x && v.y && v.z && v.w;
}

HLSLMATH_INLINE bool any(const bool4& v)
{
    return v.x || v.y || v.z || v.w;
}

HLSLMATH_INLINE bool all(const bool2x2& v)
{
    return v[0][0] && v[0][1] && v[1][0] && v[1][1];
}

HLSLMATH_INLINE bool any(const bool2x2& v)
{
    return v[0][0] || v[0][1] || v[1][0] || v[1][1];
}

HLSLMATH_INLINE bool all(const bool3x3& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] &&
        v[1][0] && v[1][1] && v[1][2] &&
        v[2][0] && v[2][1] && v[2][2];
}

HLSLMATH_INLINE bool any(const bool3x3& v)
{
    return
        v[0][0] || v[0][1] || v[0][2] ||
        v[1][0] || v[1][1] || v[1][2] ||
        v[2][0] || v[2][1] || v[2][2];
}

HLSLMATH_INLINE bool all(const bool4x4& v)
{
    return
        v[0][0] && v[0][1] && v[0][2] && v[0][3] &&
        v[1][0] && v[1][1] && v[1][2] && v[1][3] &&
        v[2][0] && v[2][1] && v[2][2] && v[2][3] &&
        v[3][0] && v[3][1] && v[3][2] && v[3][3];
}

HLSLMATH_INLINE bool any(const bool4x4& v)
{
    return 
        v[0][0] || v[0][1] || v[0][2] || v[0][3] ||
        v[1][0] || v[1][1] || v[1][2] || v[1][3] ||
        v[2][0] || v[2][1] || v[2][2] || v[2][3] ||
        v[3][0] || v[3][1] || v[3][2] || v[3][3];
}

HLSLMATH_INLINE bool all(int v)
{
    return v != 0;
}

HLSLMATH_INLINE bool any(int v)
{
    return v != 0;
}

HLSLMATH_INLINE bool all(const int2& v)
{
    return v.x != 0 && v.y != 0;
}

HLSLMATH_INLINE bool any(const int2& v)
{
    return v.x != 0 || v.y != 0;
}

HLSLMATH_INLINE bool all(const int3& v)
{
    return v.x != 0 && v.y != 0 && v.z != 0;
}

HLSLMATH_INLINE bool any(const int3& v)
{
    return v.x != 0 || v.y != 0 || v.z != 0;
}

HLSLMATH_INLINE bool all(const int4& v)
{
    return v.x != 0 && v.y != 0 && v.z != 0 && v.w != 0;
}

HLSLMATH_INLINE bool any(const int4& v)
{
    return v.x != 0 || v.y != 0 || v.z != 0 || v.w != 0;
}

HLSLMATH_INLINE bool all(const int2x2& v)
{
	return v[0][0] != 0 && v[0][1] != 0 && v[1][0] != 0 && v[1][1] != 0;
}

HLSLMATH_INLINE bool any(const int2x2& v)
{
	return v[0][0] != 0 || v[0][1] != 0 || v[1][0] != 0 || v[1][1] != 0;
}

HLSLMATH_INLINE bool all(const int3x3& v)
{
    return
        v[0][0] != 0 && v[0][1] != 0 && v[0][2] != 0 &&
        v[1][0] != 0 && v[1][1] != 0 && v[1][2] != 0 &&
        v[2][0] != 0 && v[2][1] != 0 && v[2][2] != 0;
}

HLSLMATH_INLINE bool any(const int3x3& v)
{
    return
		v[0][0] != 0 || v[0][1] != 0 || v[0][2] != 0 ||
		v[1][0] != 0 || v[1][1] != 0 || v[1][2] != 0 ||
		v[2][0] != 0 || v[2][1] != 0 || v[2][2] != 0;
}

HLSLMATH_INLINE bool all(const int4x4& v)
{
    return
		v[0][0] != 0 && v[0][1] != 0 && v[0][2] != 0 && v[0][3] != 0 &&
		v[1][0] != 0 && v[1][1] != 0 && v[1][2] != 0 && v[1][3] != 0 &&
		v[2][0] != 0 && v[2][1] != 0 && v[2][2] != 0 && v[2][3] != 0 &&
        v[3][0] != 0 && v[3][1] != 0 && v[3][2] != 0 && v[3][3] != 0;
}

HLSLMATH_INLINE bool any(const int4x4& v)
{
    return 
        v[0][0] != 0 || v[0][1] != 0 || v[0][2] != 0 || v[0][3] != 0 ||
        v[1][0] != 0 || v[1][1] != 0 || v[1][2] != 0 || v[1][3] != 0 ||
        v[2][0] != 0 || v[2][1] != 0 || v[2][2] != 0 || v[2][3] != 0 ||
        v[3][0] != 0 || v[3][1] != 0 || v[3][2] != 0 || v[3][3] != 0;
}

HLSLMATH_INLINE bool all(uint v)
{
	return v != 0;
}

HLSLMATH_INLINE bool any(uint v)
{
	return v != 0;
}

HLSLMATH_INLINE bool all(const uint2& v)
{
	return v.x != 0 && v.y != 0;
}

HLSLMATH_INLINE bool any(const uint2& v)
{
	return v.x != 0 || v.y != 0;
}

HLSLMATH_INLINE bool all(const uint3& v)
{
	return v.x != 0 && v.y != 0 && v.z != 0;
}

HLSLMATH_INLINE bool any(const uint3& v)
{
	return v.x != 0 || v.y != 0 || v.z != 0;
}

HLSLMATH_INLINE bool all(const uint4& v)
{
	return v.x != 0 && v.y != 0 && v.z != 0 && v.w != 0;
}

HLSLMATH_INLINE bool any(const uint4& v)
{
	return v.x != 0 || v.y != 0 || v.z != 0 || v.w != 0;
}

HLSLMATH_INLINE bool all(const uint2x2& v)
{
	return v[0][0] != 0 && v[0][1] != 0 && v[1][0] != 0 && v[1][1] != 0;
}

HLSLMATH_INLINE bool any(const uint2x2& v)
{
	return v[0][0] != 0 || v[0][1] != 0 || v[1][0] != 0 || v[1][1] != 0;
}

HLSLMATH_INLINE bool all(const uint3x3& v)
{
    return
        v[0][0] != 0 && v[0][1] != 0 && v[0][2] != 0 &&
        v[1][0] != 0 && v[1][1] != 0 && v[1][2] != 0 &&
        v[2][0] != 0 && v[2][1] != 0 && v[2][2] != 0;
}

HLSLMATH_INLINE bool any(const uint3x3& v)
{
    return
        v[0][0] != 0 || v[0][1] != 0 || v[0][2] != 0 ||
        v[1][0] != 0 || v[1][1] != 0 || v[1][2] != 0 ||
        v[2][0] != 0 || v[2][1] != 0 || v[2][2] != 0;
}

HLSLMATH_INLINE bool all(const uint4x4& v)
{
    return
        v[0][0] != 0 && v[0][1] != 0 && v[0][2] != 0 && v[0][3] != 0 &&
        v[1][0] != 0 && v[1][1] != 0 && v[1][2] != 0 && v[1][3] != 0 &&
        v[2][0] != 0 && v[2][1] != 0 && v[2][2] != 0 && v[2][3] != 0 &&
        v[3][0] != 0 && v[3][1] != 0 && v[3][2] != 0 && v[3][3] != 0;
}

HLSLMATH_INLINE bool any(const uint4x4& v)
{
    return 
        v[0][0] != 0 || v[0][1] != 0 || v[0][2] != 0 || v[0][3] != 0 ||
        v[1][0] != 0 || v[1][1] != 0 || v[1][2] != 0 || v[1][3] != 0 ||
        v[2][0] != 0 || v[2][1] != 0 || v[2][2] != 0 || v[2][3] != 0 ||
        v[3][0] != 0 || v[3][1] != 0 || v[3][2] != 0 || v[3][3] != 0;
}

HLSLMATH_INLINE bool all(float v)
{
	return v != 0.0f;
}

HLSLMATH_INLINE bool any(float v)
{
	return v != 0.0f;
}

HLSLMATH_INLINE bool all(const float2& v)
{
	return v.x != 0.0f && v.y != 0.0f;
}

HLSLMATH_INLINE bool any(const float2& v)
{
	return v.x != 0.0f || v.y != 0.0f;
}

HLSLMATH_INLINE bool all(const float3& v)
{
	return v.x != 0.0f && v.y != 0.0f && v.z != 0.0f;
}

HLSLMATH_INLINE bool any(const float3& v)
{
	return v.x != 0.0f || v.y != 0.0f || v.z != 0.0f;
}

HLSLMATH_INLINE bool all(const float4& v)
{
	return v.x != 0.0f && v.y != 0.0f && v.z != 0.0f && v.w != 0.0f;
}

HLSLMATH_INLINE bool any(const float4& v)
{
	return v.x != 0.0f || v.y != 0.0f || v.z != 0.0f || v.w != 0.0f;
}

HLSLMATH_INLINE bool all(const float2x2& v)
{
	return v[0][0] != 0.0f && v[0][1] != 0.0f && v[1][0] != 0.0f && v[1][1] != 0.0f;
}

HLSLMATH_INLINE bool any(const float2x2& v)
{
	return v[0][0] != 0.0f || v[0][1] != 0.0f || v[1][0] != 0.0f || v[1][1] != 0.0f;
}

HLSLMATH_INLINE bool all(const float3x3& v)
{
    return
        v[0][0] != 0.0f && v[0][1] != 0.0f && v[0][2] != 0.0f &&
        v[1][0] != 0.0f && v[1][1] != 0.0f && v[1][2] != 0.0f &&
        v[2][0] != 0.0f && v[2][1] != 0.0f && v[2][2] != 0.0f;
}

HLSLMATH_INLINE bool any(const float3x3& v)
{
    return
        v[0][0] != 0.0f || v[0][1] != 0.0f || v[0][2] != 0.0f ||
        v[1][0] != 0.0f || v[1][1] != 0.0f || v[1][2] != 0.0f ||
        v[2][0] != 0.0f || v[2][1] != 0.0f || v[2][2] != 0.0f;
}

HLSLMATH_INLINE bool all(const float4x4& v)
{
    return
        v[0][0] != 0.0f && v[0][1] != 0.0f && v[0][2] != 0.0f && v[0][3] != 0.0f &&
        v[1][0] != 0.0f && v[1][1] != 0.0f && v[1][2] != 0.0f && v[1][3] != 0.0f &&
        v[2][0] != 0.0f && v[2][1] != 0.0f && v[2][2] != 0.0f && v[2][3] != 0.0f &&
        v[3][0] != 0.0f && v[3][1] != 0.0f && v[3][2] != 0.0f && v[3][3] != 0.0f;
}

HLSLMATH_INLINE bool any(const float4x4& v)
{
    return 
        v[0][0] != 0.0f || v[0][1] != 0.0f || v[0][2] != 0.0f || v[0][3] != 0.0f ||
        v[1][0] != 0.0f || v[1][1] != 0.0f || v[1][2] != 0.0f || v[1][3] != 0.0f ||
        v[2][0] != 0.0f || v[2][1] != 0.0f || v[2][2] != 0.0f || v[2][3] != 0.0f ||
        v[3][0] != 0.0f || v[3][1] != 0.0f || v[3][2] != 0.0f || v[3][3] != 0.0f;
}
