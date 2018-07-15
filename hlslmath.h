#ifndef __HLSLMATH_H__
#define __HLSLMATH_H__

#ifndef __cplusplus
#error "HLSL math require C++"
#endif

#include <math.h>

#undef min // When Windows.h is included, min is an macro
#undef max // When Windows.h is included, max is an macro

union float2
{
    struct
    {
        float x, y;
    };

    inline float2(float x, float y)
        : x(x)
        , y(y) {}

    inline float2(float s = 0.0f)
        : float2(s, s) {}

    inline float& operator[](int index)
    {
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        return ((float*)this)[index];
    }
};

union float3
{
    struct
    {
        float x, y, z;  
    };    

    inline float3(float x, float y, float z = 0.0f)
        : x(x)
        , y(y)
        , z(z) {}

    inline float3(float s = 0.0f)
        : float3(s, s, s) {}

    inline float& operator[](int index)
    {
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        return ((float*)this)[index];
    }
};

union float4
{
    struct
    {
        float x, y, z, w;  
    };

    inline float4(float x, float y, float z, float w)
        : x(x)
        , y(y)
        , z(z)
        , w(w) {}

    inline float4(float s = 0.0f)
        : float4(s, s, s, s) {}

    inline float& operator[](int index)
    {
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        return ((float*)this)[index];
    }
};

union float2x2
{
    struct
    {
        float2 a, b;
    };
    
    inline float2& operator[](int index)
    {
        return ((float2*)this)[index];
    }

    inline const float2& operator[](int index) const
    {
        return ((float2*)this)[index];
    }
};

union float3x3
{
    struct
    {
        float3 a, b, c;
    };
    
    inline float3& operator[](int index)
    {
        return ((float3*)this)[index];
    }

    inline const float3& operator[](int index) const
    {
        return ((float3*)this)[index];
    }
};

union float4x4
{
    struct
    {
        float4 a, b, c, d;
    };
    
    inline float4& operator[](int index)
    {
        return ((float4*)this)[index];
    }

    inline const float4& operator[](int index) const
    {
        return ((float4*)this)[index];
    }
};

inline float min(int a, int b)
{
    return a < b ? a : b;
}

inline float max(int a, int b)
{
    return a > b ? a : b;
}

inline float min(float a, float b)
{
    return a < b ? a : b;
}

inline float max(float a, float b)
{
    return a > b ? a : b;
}

inline float2 add(const float2& a, const float2& b)
{
    return float2(a.x + b.x, a.y + b.y);
}

inline float2 sub(const float2& a, const float2& b)
{
    return float2(a.x - b.x, a.y - b.y);
}

inline float2 mul(const float2& a, const float2& b)
{
    return float2(a.x * b.x, a.y * b.y);
}

inline float2 div(const float2& a, const float2& b)
{
    return float2(a.x / b.x, a.x / b.y);
}

inline float2 min(const float2& a, const float2& b)
{
    return float2(min(a.x, b.x), min(a.y, b.y));
}

inline float2 max(const float2& a, const float2& b)
{
    return float2(max(a.x, b.x), max(a.y, b.y));
}

inline float dot(const float2& a, const float2& b)
{
    return a.x * b.x + a.y * b.y;
}

inline float lengthsquared(const float2& v)
{
    return dot(v, v);
}

inline float length(const float2& v)
{
    return sqrtf(lengthsquared(v));
}

inline float2 normalize(const float2& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = 1.0f / sqrtf(lsqr);
        return float2(v.x * f, v.y * f);
    }
    else
    {
        return v;
    }
}

#endif /* __HLSL_H__ */