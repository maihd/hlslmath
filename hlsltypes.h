#ifndef __HLSL_TYPES_H__
#define __HLSL_TYPES_H__

#ifndef __cplusplus
#error "HLSL math require C++"
#endif

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
        float2 data[2];
    };
    
    inline float2& operator[](int index)
    {
        return data[index];
    }

    inline const float2& operator[](int index) const
    {
        return data[index];
    }
};

union float3x3
{
    struct
    {
        float3 data[3];
    };
    
    inline float3& operator[](int index)
    {
        return data[index];
    }

    inline const float3& operator[](int index) const
    {
        return data[index];
    }
};

union float4x4
{
    struct
    {
        float4 data[4];
    };

    inline explicit float4x4(float s = 0.0f)
    {}
    
    inline float4& operator[](int index)
    {
        return data[index];
    }

    inline const float4& operator[](int index) const
    {
        return data[index];
    }
};

#endif /* __HLSL_TYPES_H__ */