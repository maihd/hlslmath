#ifndef __HLSL_TYPES_H__
#define __HLSL_TYPES_H__

#ifndef __cplusplus
#error "HLSL math require C++"
#endif

typedef unsigned int uint;

union int2
{
    struct
    {
        int x, y;
    };

    inline int2(int x, int y)
        : x(x)
        , y(y) {}

    inline int2(int s = 0)
        : int2(s, s) {}

    inline int& operator[](int index)
    {
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        return ((int*)this)[index];
    }
};

union int3
{
    struct
    {
        int x, y, z;
    };

    inline int3(int x, int y, int z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline int3(int s = 0)
        : int3(s, s, s) {}

    inline int& operator[](int index)
    {
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        return ((int*)this)[index];
    }
};

union int4
{
    struct
    {
        int x, y, z, w;
    };

    inline int4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline int4(int s = 0)
        : int4(s, s, s, s) {}

    inline int& operator[](int index)
    {
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        return ((int*)this)[index];
    }
};

union uint2
{
    struct
    {
        uint x, y;
    };

    inline uint2(uint x, uint y)
        : x(x)
        , y(y) {}

    inline uint2(uint s = 0)
        : uint2(s, s) {}

    inline uint& operator[](uint index)
    {
        return ((uint*)this)[index];
    }

    inline uint  operator[](uint index) const
    {
        return ((uint*)this)[index];
    }
};

union uint3
{
    struct
    {
        uint x, y, z;
    };

    inline uint3(uint x, uint y, uint z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline uint3(uint s = 0)
        : uint3(s, s, s) {}

    inline uint& operator[](int index)
    {
        return ((uint*)this)[index];
    }

    inline uint  operator[](int index) const
    {
        return ((uint*)this)[index];
    }
};

union uint4
{
    struct
    {
        int x, y, z, w;
    };

    inline uint4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline uint4(int s = 0)
        : uint4(s, s, s, s) {}

    inline uint& operator[](int index)
    {
        return ((uint*)this)[index];
    }

    inline int  operator[](int index) const
    {
        return ((uint*)this)[index];
    }
};

union bool2
{
    struct
    {
        bool x, y;
    };

    inline bool2(bool x, bool y)
        : x(x)
        , y(y) {}

    inline bool2(bool s = 0)
        : bool2(s, s) {}

    inline bool& operator[](int index)
    {
        return ((bool*)this)[index];
    }

    inline int  operator[](int index) const
    {
        return ((bool*)this)[index];
    }
};

union bool3
{
    struct
    {
        bool x, y, z;
    };

    inline bool3(bool x, bool y, bool z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline bool3(int s = 0)
        : bool3(s, s, s) {}

    inline bool& operator[](int index)
    {
        return ((bool*)this)[index];
    }

    inline bool  operator[](int index) const
    {
        return ((bool*)this)[index];
    }
};

union bool4
{
    struct
    {
        bool x, y, z, w;
    };

    inline bool4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline bool4(int s = 0)
        : bool4(s, s, s, s) {}

    inline bool& operator[](int index)
    {
        return ((bool*)this)[index];
    }

    inline bool  operator[](int index) const
    {
        return ((bool*)this)[index];
    }
};

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

union bool2x2
{
    struct
    {
        bool2 data[2];
    };

    inline bool2& operator[](int index)
    {
        return data[index];
    }

    inline const bool2& operator[](int index) const
    {
        return data[index];
    }
};

union bool3x3
{
    struct
    {
        bool3 data[3];
    };

    inline bool3& operator[](int index)
    {
        return data[index];
    }

    inline const bool3& operator[](int index) const
    {
        return data[index];
    }
};

union bool4x4
{
    struct
    {
        bool4 data[4];
    };
    
    inline explicit bool4x4(bool s = false)
    {
    }

    inline bool4& operator[](int index)
    {
        return data[index];
    }

    inline const bool4& operator[](int index) const
    {
        return data[index];
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