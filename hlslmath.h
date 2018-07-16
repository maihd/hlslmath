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

template <typename T>
inline T PI()
{
    return 3.14f;
}

template <>
inline double PI()
{
    return 3.14;
}

inline float degrees(float x)
{
    const float factor = 180.0f / PI<float>();
    return x * factor;
}

inline float radians(float x)
{
    const float factor = PI<float>() / 180.0f;
    return x * factor;
}

inline double degrees(double x)
{
    const double factor = 180.0f / PI<double>();
    return x * factor;
}

inline double radians(double x)
{
    const double factor = PI<double>() / 180.0f;
    return x * factor;
}

inline float neg(float x)
{
    return -x;
}

inline float add(float a, float b)
{
    return a + b;
}

inline float sub(float a, float b)
{
    return a - b;
}

inline float mul(float a, float b)
{
    return a * b;
}

inline float div(float a, float b)
{
    return a / b;
}

inline float cos(float x)
{
    return cosf(x);
}

inline float sin(float x)
{
    return sinf(x);
}

inline float tan(float x)
{
    return tanf(x);
}

inline float cosh(float x)
{
    return coshf(x);
}

inline float sinh(float x)
{
    return sinhf(x);
}

inline float tanh(float x)
{
    return tanhf(x);
}

inline float acos(float x)
{
    return acosf(x);
}

inline float asin(float x)
{
    return asinf(x);
}

inline float atan(float x)
{
    return atanf(x);
}

inline float atan2(float y, float x)
{
    return atan2f(y, x);
}

inline float exp(float x)
{
    return expf(x);
}

inline float exp2(float x)
{
    return exp2f(x);
}

inline float log(float x)
{
    return logf(x);
}

inline float log2(float x)
{
    return log2f(x);
}

inline float log10(float x)
{
    return log10f(x);
}

inline float pow(float x, float y)
{
    return powf(x, y);
}

inline float fmod(float x, float y)
{
    return fmodf(x, y);
}

inline float ceil(float x)
{
    return ceilf(x);
}

inline float floor(float x)
{
    return floorf(x);
}

inline float min(float a, float b)
{
    return a < b ? a : b;
}

inline float max(float a, float b)
{
    return a > b ? a : b;
}

inline float clamp(float v, float min, float max)
{
    return v < min ? min : (v > max ? max : v);
}

inline float saturate(float x)
{
    return clamp(x, -1.0f, 1.0f);
}

inline float step(float a, float b)
{
    return a > b ? 1.0f : 0.0f;
}

inline float lerp(float a, float b, float t)
{
    return a * (1.0f - t) + b * t;
}

inline float smoothstep(float a, float b, float t)
{
    t = clamp((t - a) / (b - a), 0.0f, 1.0f);
    return t * t * (3 - 2 * t);
}

inline float sqrt(float x)
{
    return sqrtf(x);
}

inline float rsqrt(float x)
{
    return 1.0f / sqrtf(x);
}

inline int min(int a, int b)
{
    return a < b ? a : b;
}

inline int max(int a, int b)
{
    return a > b ? a : b;
}

inline int step(int a, int b)
{
    return a > b ? 1 : 0;
}

inline int smoothstep(int a, int b, float t)
{
    t = clamp((t - a) / (b - a), 0.0f, 1.0f);
    return (int)(t * t * (3 - 2 * t));
}

inline float2 neg(const float2& v)
{
    return float2(-v.x, -v.y);
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

inline float2 cos(const float2& v)
{
    return float2(cos(v.x), cos(v.y));
}

inline float2 sin(const float2& v)
{
    return float2(sin(v.x), sin(v.y));
}

inline float2 tan(const float2& v)
{
    return float2(tan(v.x), tan(v.y));
}

inline float2 acos(const float2& v)
{
    return float2(acos(v.x), acos(v.y));
}

inline float2 asin(const float2& v)
{
    return float2(asin(v.x), asin(v.y));
}

inline float2 atan(const float2& v)
{
    return float2(atan(v.x), atan(v.y));
}

inline float2 cosh(const float2& v)
{
    return float2(cosh(v.x), cosh(v.y));
}

inline float2 sinh(const float2& v)
{
    return float2(sinh(v.x), sinh(v.y));
}

inline float2 tanh(const float2& v)
{
    return float2(tanh(v.x), tanh(v.y));
}

inline float2 exp(const float2& v)
{
    return float2(
        exp(v.x),
        exp(v.y)  
    );
}

inline float2 exp2(const float2& v)
{
    return float2(
        exp2(v.x),
        exp2(v.y)  
    );
}

inline float2 log(const float2& v)
{
    return float2(
        log(v.x),
        log(v.y)  
    );
}

inline float2 log2(const float2& v)
{
    return float2(
        log2(v.x),
        log2(v.y)  
    );
}

inline float2 log10(const float2& v)
{
    return float2(
        log10(v.x),
        log10(v.y)  
    );
}

inline float2 pow(const float2& a, const float2& b)
{
    return float2(
        pow(a.x, b.x),
        pow(a.y, b.y)  
    );
}

inline float2 sqrt(const float2& v)
{
    return float2(
        sqrt(v.x),
        sqrt(v.y)  
    );
}

inline float2 rsqrt(const float2& v)
{
    return float2(
        rsqrt(v.x),
        rsqrt(v.y)  
    );
}

inline float2 min(const float2& a, const float2& b)
{
    return float2(
        min(a.x, b.x),
        min(a.y, b.y));
}

inline float2 max(const float2& a, const float2& b)
{
    return float2(
        max(a.x, b.x), 
        max(a.y, b.y));
}

inline float2 clamp(const float2& v, const float2& min, const float2& max)
{
    return float2(
        clamp(v.x, min.x, max.x), 
        clamp(v.y, min.y, max.y));
}

inline float2 step(const float2& a, const float2& b)
{
    return float2(
        step(a.x, b.x),
        step(a.y, b.y)
    );
}

inline float2 lerp(const float2& a, const float2& b, const float2& t)
{
    return float2(
        lerp(a.x, b.x, t.x),
        lerp(a.y, b.y, t.y)  
    );
}

inline float2 smoothstep(const float2& a, const float2& b, const float2& t)
{
    return float2(
        smoothstep(a.x, b.x, t.x),
        smoothstep(a.y, b.y, t.y)  
    );
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

inline float distance(const float2& a, const float2& b)
{
    return length(sub(a, b));
}

inline float distancesquared(const float2& a, const float2& b)
{
    return lengthsquared(sub(a, b));
}

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

inline float2 reflect(const float2& v, const float2& n)
{
    return sub(v, mul(n, 2.0f * dot(v, n)));
}

inline float2 refract(const float2& v, const float2& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? 0.0f
        : sub(mul(v, eta), mul(v, eta * dot(v, n) + sqrt(k)));
}

inline float2 faceforward(const float2& n, const float2& i, const float2& nref)
{
    return dot(i, nref) < 0.0f ? n : neg(n);
}

#endif /* __HLSL_H__ */