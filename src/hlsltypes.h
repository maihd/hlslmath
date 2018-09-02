typedef unsigned int uint;

// 
// @region: int types
//

union int2
{
public: // @region: Fields
    struct
    {
        int x, y;
    };

public: // @region: Constructors
    inline int2(int x, int y)
        : x(x)
        , y(y) {}

    inline explicit int2(int s = 0)
        : int2(s, s) {}

public: // @region: Operators
    inline int& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int*)this)[index];
    }
};

union int3
{
public: // @region: Fields
    struct
    {
        int x, y, z;
    };

public: // @region: Constructors
    inline int3(int x, int y, int z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline explicit int3(int s = 0)
        : int3(s, s, s) {}

public: // @region: Fields
    inline int& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int*)this)[index];
    }
};

union int4
{
public: // @region: Fields
    struct
    {
        int x, y, z, w;
    };

public: // @region: Constructors
    inline int4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline explicit int4(int s = 0)
        : int4(s, s, s, s) {}

public: // @region: Operators
    inline int& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }
};

//
// @region: uint types
//

union uint2
{
public: // @region: Fields
    struct
    {
        uint x, y;
    };

public: // @region: Constructors
    inline uint2(uint x, uint y)
        : x(x)
        , y(y) {}

    inline explicit uint2(uint s = 0)
        : uint2(s, s) {}

public: // @region: Operators
    inline uint& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint*)this)[index];
    }

    inline uint  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint*)this)[index];
    }
};

union uint3
{
public: // @region: Fields
    struct
    {
        uint x, y, z;
    };

public: // @region: Constructors
    inline uint3(uint x, uint y, uint z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline explicit uint3(uint s = 0)
        : uint3(s, s, s) {}

public: // @region: Operators
    inline uint& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint*)this)[index];
    }

    inline uint  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint*)this)[index];
    }
};

union uint4
{
public: // @region: Fields
    struct
    {
        int x, y, z, w;
    };

public: // @region: Constructors
    inline uint4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline explicit uint4(int s = 0)
        : uint4(s, s, s, s) {}

public: // @region: Operators
    inline uint& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }
};

//
// @region: bool types
//
 
union bool2
{
public: // @region: Fields
    struct
    {
        bool x, y;
    };

public: // @region: Constructors
    inline bool2(bool x, bool y)
        : x(x)
        , y(y) {}

    inline explicit bool2(bool s = false)
        : bool2(s, s) {}

public: // @region: Operators
    inline bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool*)this)[index];
    }
};

union bool3
{
public: // @region: Fields
    struct
    {
        bool x, y, z;
    };

public: // @region: Constructors
    inline bool3(bool x, bool y, bool z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline explicit bool3(int s = false)
        : bool3(s, s, s) {}

public: // @region: Operators
    inline bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool*)this)[index];
    }

    inline bool  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool*)this)[index];
    }
};

union bool4
{
public: // @region: Fields
    struct
    {
        bool x, y, z, w;
    };

public: // @region: Constructors
    inline bool4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline explicit bool4(int s = false)
        : bool4(s, s, s, s) {}

public: // @region: Operators
    inline bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }

    inline bool  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }
};

union bool2x2
{
public: // @region: Constructors
    inline bool2x2(const bool2& m0, const bool2& m1)
        : data{ m0, m1 }
    {
    }

    inline bool2x2(bool m00, bool m01, bool m10, bool m11)
        : bool2x2(bool2(m00, m01),
                  bool2(m10, m11))
    {
    }

    inline explicit bool2x2(bool s = false)
        : bool2x2(s, s,
                  s, s)
    {
    }

public: // @region: Operators
    inline bool2& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }

    inline const bool2& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }
    
public: // Eregion: Internal fields
    struct
    {
        bool2 data[2];
    };
};

union bool3x3
{
public: // @region: Constructors
    inline bool3x3(const bool3& m0, const bool3& m1, const bool3& m2)
        : data{ m0, m1, m2 }
    {
    }

    inline bool3x3(bool m00, bool m01, bool m02,
                   bool m10, bool m11, bool m12,
                   bool m20, bool m21, bool m22)
        : bool3x3(bool3(m00, m01, m02),
                  bool3(m10, m11, m12),
                  bool3(m20, m21, m22))
    {
    }

    inline explicit bool3x3(bool s = false)
        : bool3x3(s, s, s,
                  s, s, s,
                  s, s, s)
    {
    }

public: // @region: Operators
    inline bool3& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }

    inline const bool3& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        bool3 data[3];
    };
};

union bool4x4
{
public: // @region: Constructors
    inline bool4x4(const bool4& m0, const bool4& m1, const bool4& m2, const bool4& m3)
        : data{ m0, m1, m2, m3 }
    {
    }

    inline bool4x4(bool m00, bool m01, bool m02, bool m03,
                   bool m10, bool m11, bool m12, bool m13,
                   bool m20, bool m21, bool m22, bool m23,
                   bool m30, bool m31, bool m32, bool m33)
        : bool4x4(bool4(m00, m01, m02, m03),
                  bool4(m10, m11, m12, m13),
                  bool4(m20, m21, m22, m23),
                  bool4(m30, m31, m32, m33))
    {
    }

    inline explicit bool4x4(bool s = false)
        : bool4x4(s, s, s, s,
                  s, s, s, s,
                  s, s, s, s,
                  s, s, s, s)
    {
    }

public: // Constructors
    inline bool4& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return data[index];
    }

    inline const bool4& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        bool4 data[4];
    };
};

//
// @region: float types
//

union float2
{
public: // @region: Fields
    struct
    {
        float x, y;
    };

public: // @region: Constructors
    inline float2(float x, float y)
        : x(x)
        , y(y) {}

    inline explicit float2(float s = 0.0f)
        : float2(s, s) {}

public: // @region: Operators
    inline float& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float*)this)[index];
    }
};

union float3
{
public: // @region: Fielda
    struct
    {
        float x, y, z;  
    };    

public: // @region: Constructors
    inline float3(float x, float y, float z = 0.0f)
        : x(x)
        , y(y)
        , z(z) {}

    inline explicit float3(float s = 0.0f)
        : float3(s, s, s) {}

public: // @region: Operators
    inline float& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float*)this)[index];
    }
};

union float4
{
public: // @region: Fields
    struct
    {
        float x, y, z, w; 
    };
    
    struct
    {
        float3 axis;
        float  angle;
    };

public: // @region: Constructors
    inline float4(float x, float y, float z, float w)
        : x(x)
        , y(y)
        , z(z)
        , w(w) {}

    inline explicit float4(float s = 0.0f)
        : float4(s, s, s, s) {}

public: // @region: Operators
    inline float& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }
};

union float2x2
{
public: // @region: Constructors
    inline float2x2(const float2& m0, const float2& m1)
        : data{ m0, m1 } {}

    inline float2x2(float m00, float m01, 
                    float m10, float m11)
        : float2x2(float2(m00, m01), 
                   float2(m10, m11)) {}

    inline explicit float2x2(float s = 0.0f)
        : float2x2(s, 0,
                   0, s) {}

public: // @region: Operators
    inline float2& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }

    inline const float2& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }
    
    inline explicit operator float*(void)
    {
        return (float*)this;
    }

    inline explicit operator const float*(void) const
    {
        return (float*)this;
    }
   
public: // @region: Graphics functions
    inline static float2x2 rotate(float angle);
    
public: // @region: Internal fields
    struct
    {
        float2 data[2];
    };
};

union float3x3
{
public: // @region: Constructors
    inline float3x3(const float3& m0, const float3& m1, const float3& m2)
        : data{ m0, m1, m2 } {}

    inline float3x3(float m00, float m01, float m02,
                    float m10, float m11, float m12,
                    float m20, float m21, float m22)
        : float3x3(float3(m00, m01, m02), 
                   float3(m10, m11, m12),
                   float3(m20, m21, m22)) {}

    inline explicit float3x3(float s = 0.0f)
        : float3x3(s, 0, 0,
                   0, s, 0,
                   0, 0, s) {}
    
public: // @region: Operators
    inline float3& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }

    inline const float3& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }

    inline explicit operator float*(void)
    {
        return (float*)this;
    }

    inline explicit operator const float*(void) const
    {
        return (float*)this;
    }
    
public: // @region: Internal fields
    struct
    {
        float3 data[3];
    };
};

union float4x4
{
public: // @region: Constructors
    inline float4x4(const float4& m0, const float4& m1, const float4& m2, const float4& m3)
        : data{ m0, m1, m2, m3 } {}
    
    inline float4x4(float m00, float m01, float m02, float m03,
                    float m10, float m11, float m12, float m13,
                    float m20, float m21, float m22, float m23,
                    float m30, float m31, float m32, float m33)
        : float4x4(float4(m00, m01, m02, m03),
                   float4(m10, m11, m12, m13),
                   float4(m20, m21, m22, m23),
                   float4(m30, m31, m32, m33)) {}

    inline explicit float4x4(float s = 0.0f)
        : float4x4(s, 0, 0, 0,
                   0, s, 0, 0,
                   0, 0, s, 0,
                   0, 0, 0, s) {}
    
public: // @region: Operators
    inline float4& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return data[index];
    }

    inline const float4& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return data[index];
    }

    inline explicit operator float*(void)
    {
        return (float*)this;
    }

    inline explicit operator const float*(void) const
    {
        return (float*)this;
    }

public: // @region: Graphics functions
    static float4x4 scale(float s);
    static float4x4 scale(const float2& v);
    static float4x4 scale(const float3& v);
    static float4x4 scale(float x, float y, float z = 1.0f);

    static float4x4 translate(const float2& v);
    static float4x4 translate(const float3& v);
    static float4x4 translate(float x, float y, float z = 0.0f);

    static float4x4 rotate(const float3& axis, float angle);
    static float4x4 rotate(float x, float y, float z, float angle);

    static float4x4 rotatex(float angle);
    static float4x4 rotatey(float angle);
    static float4x4 rotatez(float angle);

    static float4x4 lookat(const float3& eye, const float3& target, const float3& up);

    static float4x4 ortho(float l, float r, float b, float t, float n, float f);
    static float4x4 frustum(float l, float r, float b, float t, float n, float f);
    static float4x4 perspective(float fov, float aspect, float znear, float zfar);
    
public: // @region: Internal fields
    struct
    {
        float4 data[4];
    };
};


