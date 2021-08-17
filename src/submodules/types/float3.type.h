union float3
{
    struct
    {
        float x, y, z;  
    };

    HLSLMATH_CONSTEXPR  float3();
                        float3(float s);
                        float3(float x, float y, float z = 0.0f);

                        float3(const float2& v);
    //                    float3(const float4& v);

                        operator float2(void) const;
    //                    operator float4(void) const;

    float&              operator[](int index);
    float               operator[](int index) const;
};

HLSLMATH_CONSTEXPR float3::float3()
    : x(0)
    , y(0)
    , z(0)
{
}

HLSLMATH_INLINE float3::float3(float s)
    : x(s)
    , y(s)
    , z(s)
{
}

HLSLMATH_INLINE float3::float3(float x, float y, float z)
    : x(x)
    , y(y)
    , z(z)
{
}

HLSLMATH_INLINE float3::float3(const float2& v)
    : float3(v.x, v.y)
{
}

HLSLMATH_INLINE float3::operator float2(void) const
{
    return float2(x, y);
}

HLSLMATH_INLINE float& float3::operator[](int index)
{
    return (&x)[index];
}

HLSLMATH_INLINE float float3::operator[](int index) const
{
    return (&x)[index];
}
