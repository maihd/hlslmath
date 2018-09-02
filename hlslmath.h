#pragma once

#include <math.h>

#ifndef HLSL_ASSERT
#define HLSL_ASSERT(exp, msg)
#endif

#undef min // When Windows.h is included, min is an macro
#undef max // When Windows.h is included, max is an macro

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

/* Compute the sign of 'x'
 */
inline int sign(int x)
{
    return x >> 31;
}

/* Get the smaller value
 */
inline int min(int x, int y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
inline int max(int x, int y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' to the [min, max]
 */
inline int clamp(int x, int min, int max)
{
    return x < min ? min : (x > max ? max : x);
}

//
// @region: Operator overloadng
//

inline int2 operator-(const int2& v)
{
    return int2(-v.x, -v.y);
}

inline int2& operator++(int2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

inline int2& operator--(int2& v)
{
    --v.x;
    --v.y;
    return v;
}

inline int2 operator++(int2& v, int)
{
    const int2 result = v;
    v.x++;
    v.y++;
    return result;
}

inline int2 operator--(int2& v, int)
{
    const int2 result = v;
    v.x--;
    v.y--;
    return result;
}

inline int2 operator+(const int2& a, const int2& b)
{
    return int2(a.x + b.x, a.y + b.y);
}

inline int2 operator-(const int2& a, const int2& b)
{
    return int2(a.x - b.x, a.y - b.y);
}

inline int2 operator*(const int2& a, const int2& b)
{
    return int2(a.x * b.x, a.y * b.y);
}

inline int2 operator/(const int2& a, const int2& b)
{
    return int2(a.x / b.x, a.y / b.y);
}

inline int2 operator+(const int2& a, int b)
{
    return int2(a.x + b, a.y + b);
}

inline int2 operator-(const int2& a, int b)
{
    return int2(a.x - b, a.y - b);
}

inline int2 operator*(const int2& a, int b)
{
    return int2(a.x * b, a.y * b);
}

inline int2 operator/(const int2& a, int b)
{
    return int2(a.x / b, a.y / b);
}

inline int2 operator+(int a, const int2& b)
{
    return int2(a + b.x, a + b.y);
}

inline int2 operator-(int a, const int2& b)
{
    return int2(a - b.x, a - b.y);
}

inline int2 operator*(int a, const int2& b)
{
    return int2(a * b.x, a * b.y);
}

inline int2 operator/(int a, const int2& b)
{
    return int2(a / b.x, a / b.y);
}

inline int2& operator+=(int2& a, int b)
{
    return (a = a + b);
}

inline int2& operator-=(int2& a, int b)
{
    return (a = a - b);
}

inline int2& operator*=(int2& a, int b)
{
    return (a = a * b);
}

inline int2& operator/=(int2& a, int b)
{
    return (a = a / b);
}

inline int2& operator+=(int2& a, const int2& b)
{
    return (a = a + b);
}

inline int2& operator-=(int2& a, const int2& b)
{
    return (a = a - b);
}

inline int2& operator*=(int2& a, const int2& b)
{
    return (a = a * b);
}

inline int2& operator/=(int2& a, const int2& b)
{
    return (a = a / b);
}

inline bool2 operator<(const int2& a, const int2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

inline bool2 operator>(const int2& a, const int2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

inline bool2 operator<=(const int2& a, const int2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

inline bool2 operator>=(const int2& a, const int2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

inline bool2 operator==(const int2& a, const int2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

inline bool2 operator!=(const int2& a, const int2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}

//
// @region: Operator overloadng
//

inline int3 operator-(const int3& v)
{
    return int3(-v.x, -v.y, -v.z);
}

inline int3& operator++(int3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

inline int3& operator--(int3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

inline int3 operator++(int3& v, int)
{
    const int3 result = v;
    v.x++;
    v.y++;
    v.z++;
    return result;
}

inline int3 operator--(int3& v, int)
{
    const int3 result = v;
    v.x--;
    v.y--;
    v.z--;
    return result;
}

inline int3 operator+(const int3& a, const int3& b)
{
    return int3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline int3 operator-(const int3& a, const int3& b)
{
    return int3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline int3 operator*(const int3& a, const int3& b)
{
    return int3(a.x * b.x, a.y * b.y, a.z * b.z);
}

inline int3 operator/(const int3& a, const int3& b)
{
    return int3(a.x / b.x, a.y / b.y, a.z / b.z);
}

inline int3 operator+(const int3& a, int b)
{
    return int3(a.x + b, a.y + b, a.z + b);
}

inline int3 operator-(const int3& a, int b)
{
    return int3(a.x - b, a.y - b, a.z - b);
}

inline int3 operator*(const int3& a, int b)
{
    return int3(a.x * b, a.y * b, a.z * b);
}

inline int3 operator/(const int3& a, int b)
{
    return int3(a.x / b, a.y / b, a.z / b);
}

inline int3 operator+(int a, const int3& b)
{
    return int3(a + b.x, a + b.y, a + b.z);
}

inline int3 operator-(int a, const int3& b)
{
    return int3(a - b.x, a - b.y, a - b.z);
}

inline int3 operator*(int a, const int3& b)
{
    return int3(a * b.x, a * b.y, a * b.z);
}

inline int3 operator/(int a, const int3& b)
{
    return int3(a / b.x, a / b.y, a / b.z);
}

inline int3& operator+=(int3& a, int b)
{
    return (a = a + b);
}

inline int3& operator-=(int3& a, int b)
{
    return (a = a - b);
}

inline int3& operator*=(int3& a, int b)
{
    return (a = a * b);
}

inline int3& operator/=(int3& a, int b)
{
    return (a = a / b);
}

inline int3& operator+=(int3& a, const int3& b)
{
    return (a = a + b);
}

inline int3& operator-=(int3& a, const int3& b)
{
    return (a = a - b);
}

inline int3& operator*=(int3& a, const int3& b)
{
    return (a = a * b);
}

inline int3& operator/=(int3& a, const int3& b)
{
    return (a = a / b);
}

inline bool3 operator<(const int3& a, const int3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

inline bool3 operator>(const int3& a, const int3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

inline bool3 operator<=(const int3& a, const int3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

inline bool3 operator>=(const int3& a, const int3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}

inline bool3 operator==(const int3& a, const int3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

inline bool3 operator!=(const int3& a, const int3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

//
// @region: Operator overloadng
//

inline int4 operator-(const int4& v)
{
    return int4(-v.x, -v.y, -v.z, -v.w);
}

inline int4& operator++(int4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

inline int4& operator--(int4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

inline int4 operator++(int4& v, int)
{
    const int4 result = v;
    v.x++;
    v.y++;
    v.z++;
    v.w++;
    return result;
}

inline int4 operator--(int4& v, int)
{
    const int4 result = v;
    v.x--;
    v.y--;
    v.z--;
    v.w--;
    return result;
}

inline int4 operator+(const int4& a, const int4& b)
{
    return int4(a.x + b.x, a.y + b.y, a.z + b.z, a.w / b.w);
}

inline int4 operator-(const int4& a, const int4& b)
{
    return int4(a.x - b.x, a.y - b.y, a.z - b.z, a.w / b.w);
}

inline int4 operator*(const int4& a, const int4& b)
{
    return int4(a.x * b.x, a.y * b.y, a.z * b.z, a.w / b.w);
}

inline int4 operator/(const int4& a, const int4& b)
{
    return int4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline int4 operator+(const int4& a, int b)
{
    return int4(a.x + b, a.y + b, a.z + b, a.w + b);
}

inline int4 operator-(const int4& a, int b)
{
    return int4(a.x - b, a.y - b, a.z - b, a.w - b);
}

inline int4 operator*(const int4& a, int b)
{
    return int4(a.x * b, a.y * b, a.z * b, a.w * b);
}

inline int4 operator/(const int4& a, int b)
{
    return int4(a.x / b, a.y / b, a.z / b, a.w / b);
}

inline int4 operator+(int a, const int4& b)
{
    return int4(a + b.x, a + b.y, a + b.z, a + b.w);
}

inline int4 operator-(int a, const int4& b)
{
    return int4(a - b.x, a - b.y, a - b.z, a - b.w);
}

inline int4 operator*(int a, const int4& b)
{
    return int4(a * b.x, a * b.y, a * b.z, a * b.w);
}

inline int4 operator/(int a, const int4& b)
{
    return int4(a / b.x, a / b.y, a / b.z, a / b.w);
}

inline int4& operator+=(int4& a, int b)
{
    return (a = a + b);
}

inline int4& operator-=(int4& a, int b)
{
    return (a = a - b);
}

inline int4& operator*=(int4& a, int b)
{
    return (a = a * b);
}

inline int4& operator/=(int4& a, int b)
{
    return (a = a / b);
}

inline int4& operator+=(int4& a, const int4& b)
{
    return (a = a + b);
}

inline int4& operator-=(int4& a, const int4& b)
{
    return (a = a - b);
}

inline int4& operator*=(int4& a, const int4& b)
{
    return (a = a * b);
}

inline int4& operator/=(int4& a, const int4& b)
{
    return (a = a / b);
}

inline bool4 operator<(const int4& a, const int4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

inline bool4 operator>(const int4& a, const int4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

inline bool4 operator<=(const int4& a, const int4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

inline bool4 operator>=(const int4& a, const int4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

inline bool4 operator==(const int4& a, const int4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

inline bool4 operator!=(const int4& a, const int4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}

/* Get the smaller value
 */
inline uint min(uint x, uint y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
inline uint max(uint x, uint y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' to the [min, max]
 */
inline uint clamp(uint x, uint min, uint max)
{
    return x < min ? min : (x > max ? max : x);
}

/* Computes sign of 'x'
 */
inline int sign(float x)
{
    union
    {
        float f;
        int   i;
    } cvt;
    cvt.f = x;
    return sign(cvt.i);
}

/* Computes absolute value
 */
inline float abs(float x)
{
    return fabsf(x);
}

/* Computes cosine
 */
inline float cos(float x)
{
    return cosf(x);
}

/* Computes sine
 */
inline float sin(float x)
{
    return sinf(x);
}

/* Computes tangent
 */
inline float tan(float x)
{
    return tanf(x);
}

/* Computes hyperbolic cosine
 */
inline float cosh(float x)
{
    return coshf(x);
}

/* Computes hyperbolic sine
 */
inline float sinh(float x)
{
    return sinhf(x);
}

/* Computes hyperbolic tangent
 */
inline float tanh(float x)
{
    return tanhf(x);
}

/* Computes inverse cosine
 */
inline float acos(float x)
{
    return acosf(x);
}

/* Computes inverse sine
 */
inline float asin(float x)
{
    return asinf(x);
}

/* Computes inverse tangent
 */
inline float atan(float x)
{
    return atanf(x);
}

/* Computes inverse tangent with 2 args
 */
inline float atan2(float y, float x)
{
    return atan2f(y, x);
}

/* Computes Euler number raised to the power 'x'
 */
inline float exp(float x)
{
    return expf(x);
}

/* Computes 2 raised to the power 'x'
 */
inline float exp2(float x)
{
    return exp2f(x);
}

/* Computes the base Euler number logarithm
 */
inline float log(float x)
{
    return logf(x);
}

/* Computes the base 2 logarithm
 */
inline float log2(float x)
{
    return log2f(x);
}

/* Computes the base 10 logarithm
 */
inline float log10(float x)
{
    return log10f(x);
}

/* Computes the value of base raised to the power exponent
 */
inline float pow(float x, float y)
{
    return powf(x, y);
}

/* Get the fractal part of floating point
 */
inline float frac(float x)
{
    return modff(x, 0);
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float fmod(float x, float y)
{
    return fmodf(x, y);
}

/* Computes the smallest integer value not less than 'x'
 */
inline float ceil(float x)
{
    return ceilf(x);
}

/* Computes the largest integer value not greater than 'x'
 */
inline float floor(float x)
{
    return floorf(x);
}

/* Computes the nearest integer value
 */
inline float round(float x)
{
    return roundf(x);
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float trunc(float x)
{
    return truncf(x);
}

/* Get the smaller value
 */ 
inline float min(float x, float y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */ 
inline float max(float x, float y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' value to the [min, max].
 */
inline float clamp(float x, float min, float max)
{
    return x < min ? min : (x > max ? max : x);
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float saturate(float x)
{
    return clamp(x, 0.0f, 1.0f);
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float step(float y, float x)
{
    return x >= y;
}

/* Performs a linear interpolation.
 */
inline float lerp(float x, float y, float s)
{
    return x + (y - x) * s;
}

/* Compute a smooth Hermite interpolation
 * @return: 0 if x <= min
 *          1 if x >= max
 *          (0, 1) otherwise
 */
inline float smoothstep(float min, float max, float x)
{
    return (clamp(x, min, max) - min) / (max - min);
}

/* Computes square root of 'x'.
 */
inline float sqrt(float x)
{
    return sqrtf(x);
}

/* Computes inverse square root of 'x'.
 */
inline float rsqrt(float x)
{
    return 1.0f / sqrtf(x);
}

/* Computes fast inverse square root of 'x'.
 */
inline float frsqrt(float x)
{
    union
    {
        float f;
        int   i;
    } cvt;

    cvt.f = x;
    cvt.i = 0x5F3759DF - (cvt.i >> 1);
    cvt.f = cvt.f * (1.5f - (0.5f * x * cvt.f * cvt.f));
    return cvt.f;
}

/* Computes fast inverse square root of 'x'.
 */
inline float fsqrt(float x)
{
    return x == 0.0f ? 0.0f : 1.0f / frsqrt(x);
}

//
// @region: Operator overloading
//

inline float2 operator-(const float2& v)
{
    return float2(-v.x, -v.y);
}

inline const float2& operator+(const float2& v)
{
    return v;
}

inline float2& operator--(float2& v)
{
    --v.x;
    --v.y;
    return v;
}

inline float2& operator++(float2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

inline float2 operator--(float2& v, int)
{
    const float2 result = v;

    v.x--;
    v.y--;
    
    return result;
}

inline float2 operator++(float2& v, int)
{
    const float2 result = v;

    v.x++;
    v.y++;
    
    return result;
}

inline float2 operator+(const float2& a, const float2& b)
{
    return float2(a.x + b.x, a.y + b.y);
}

inline float2 operator-(const float2& a, const float2& b)
{
    return float2(a.x - b.x, a.y - b.y);
}

inline float2 operator*(const float2& a, const float2& b)
{
    return float2(a.x * b.x, a.y * b.y);
}

inline float2 operator/(const float2& a, const float2& b)
{
    return float2(a.x / b.x, a.y / b.y);
}

inline float2 operator+(const float2& a, float b)
{
    return float2(a.x + b, a.y + b);
}

inline float2 operator-(const float2& a, float b)
{
    return float2(a.x - b, a.y - b);
}

inline float2 operator*(const float2& a, float b)
{
    return float2(a.x * b, a.y * b);
}

inline float2 operator/(const float2& a, float b)
{
    return float2(a.x / b, a.y / b);
}

inline float2 operator+(float a, const float2& b)
{
    return float2(a + b.x, a + b.y);
}

inline float2 operator-(float a, const float2& b)
{
    return float2(a - b.x, a - b.y);
}

inline float2 operator*(float a, const float2& b)
{
    return float2(a * b.x, a * b.y);
}

inline float2 operator/(float a, const float2& b)
{
    return float2(a / b.x, a / b.y);
}

inline float2& operator+=(float2& a, const float2& b)
{
    return (a = a + b);
}

inline float2& operator+=(float2& a, float b)
{
    return (a = a + b);
}

inline float2& operator-=(float2& a, const float2& b)
{
    return (a = a - b);
}

inline float2& operator-=(float2& a, float b)
{
    return (a = a - b);
}

inline float2& operator*=(float2& a, const float2& b)
{
    return (a = a * b);
}

inline float2& operator*=(float2& a, float b)
{
    return (a = a * b);
}

inline float2& operator/=(float2& a, const float2& b)
{
    return (a = a / b);
}

inline float2& operator/=(float2& a, float b)
{
    return (a = a + b);
}

inline bool2 operator==(const float2& a, const float2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

inline bool2 operator!=(const float2& a, const float2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}

inline bool2 operator<(const float2& a, const float2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

inline bool2 operator>(const float2& a, const float2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

inline bool2 operator<=(const float2& a, const float2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

inline bool2 operator>=(const float2& a, const float2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int2 sign(const float2& v)
{
    return int2(sign(v.x),
                sign(v.y));
}

/* Computes absolute value
 */
inline float2 abs(const float2& v)
{
    return float2(abs(v.x),
                  abs(v.y));
}

/* Computes cosine
 */
inline float2 cos(const float2& v)
{
    return float2(cos(v.x),
                  cos(v.y));
}

/* Computes sine
 */
inline float2 sin(const float2& v)
{
    return float2(sin(v.x),
                  sin(v.y));
}

/* Computes tangent
 */
inline float2 tan(const float2& v)
{
    return float2(tan(v.x),
                  tan(v.y));
}

/* Computes hyperbolic cosine
 */
inline float2 cosh(const float2& v)
{
    return float2(cosh(v.x),
                  cosh(v.y));
}

/* Computes hyperbolic sine
 */
inline float2 sinh(const float2& v)
{
    return float2(sinh(v.x),
                  sinh(v.y));
}

/* Computes hyperbolic tangent
 */
inline float2 tanh(const float2& v)
{
    return float2(tanh(v.x),
                  tanh(v.y));
}

/* Computes inverse cosine
 */
inline float2 acos(const float2& v)
{
    return float2(acos(v.x),
                  acos(v.y));
}

/* Computes inverse sine
 */
inline float2 asin(const float2& v)
{
    return float2(asin(v.x),
                  asin(v.y));
}

/* Computes inverse tangent
 */
inline float2 atan(const float2& v)
{
    return float2(atan(v.x),
                  atan(v.y));
}

/* Computes inverse tangent with 2 args
 */
inline float2 atan2(const float2& a, const float2& b)
{
    return float2(atan2(a.x, b.x),
                  atan2(a.y, b.y));
}

/* Computes Euler number raised to the power 'x'
 */
inline float2 exp(const float2& v)
{
    return float2(exp(v.x),
                  exp(v.y));
}

/* Computes 2 raised to the power 'x'
 */
inline float2 exp2(const float2& v)
{
    return float2(exp2(v.x),
                  exp2(v.y));
}

/* Computes the base Euler number logarithm
 */
inline float2 log(const float2& v)
{
    return float2(log(v.x),
                  log(v.y));
}

/* Computes the base 2 logarithm
 */
inline float2 log2(const float2& v)
{
    return float2(log2(v.x),
                  log2(v.y));
}

/* Computes the base 10 logarithm
 */
inline float2 log10(const float2& v)
{
    return float2(log10(v.x),
                  log10(v.y));
}

/* Computes the value of base raised to the power exponent
 */
inline float2 pow(const float2& a, const float2& b)
{
    return float2(pow(a.x, b.x),
                  pow(a.y, b.y));
}

/* Get the fractal part of floating point
 */
inline float2 frac(const float2& v)
{
    return float2(frac(v.x),
                  frac(v.y));
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float2 fmod(const float2& a, const float2& b)
{
    return float2(fmod(a.x, b.x),
                  fmod(a.y, b.y));
}

/* Computes the smallest integer value not less than 'x'
 */
inline float2 ceil(const float2& v)
{
    return float2(ceil(v.x),
                  ceil(v.y));
}

/* Computes the largest integer value not greater than 'x'
 */
inline float2 floor(const float2& v)
{
    return float2(floor(v.x),
                  floor(v.y));
}

/* Computes the nearest integer value
 */
inline float2 round(const float2& v)
{
    return float2(round(v.x),
                  round(v.y));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float2 trunc(const float2& v)
{
    return float2(trunc(v.x),
                  trunc(v.y));
}

/* Get the smaller value
 */
inline float2 min(const float2& a, const float2& b)
{
    return float2(min(a.x, b.x),
                  min(a.y, b.y));
}

/* Get the larger value
 */
inline float2 max(const float2& a, const float2& b)
{
    return float2(max(a.x, b.x), 
                  max(a.y, b.y));
}

/* Clamps the 'x' value to the [min, max].
 */
inline float2 clamp(const float2& v, const float2& min, const float2& max)
{
    return float2(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y));
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float2 saturate(const float2& v)
{
    return float2(saturate(v.x),
                  saturate(v.y));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float2 step(const float2& a, const float2& b)
{
    return float2(step(a.x, b.x),
                  step(a.y, b.y));
}

/* Performs a linear interpolation.
 */
inline float2 lerp(const float2& a, const float2& b, const float2& t)
{
    return float2(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y));
}

/* Compute a smooth Hermite interpolation
 */
inline float2 smoothstep(const float2& a, const float2& b, const float2& t)
{
    return float2(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y));
}

/* Computes square root of 'x'.
 */
inline float2 sqrt(const float2& v)
{
    return float2(sqrt(v.x),
                  sqrt(v.y));
}

/* Computes inverse square root of 'x'.
 */
inline float2 rsqrt(const float2& v)
{
    return float2(rsqrt(v.x),
                  rsqrt(v.y));
}

/* Computes fast inverse square root of 'x'.
 */
inline float2 fsqrt(const float2& v)
{
    return float2(fsqrt(v.x),
                  fsqrt(v.y));
}

/* Computes fast inverse square root of 'x'.
 */
inline float2 frsqrt(const float2& v)
{
    return float2(frsqrt(v.x),
                  frsqrt(v.y));
}

//
// @region: Graphics funtions
//

/* Compute dot product of two vectors
 */ 
inline float dot(const float2& a, const float2& b)
{
    return a.x * b.x + a.y * b.y;
}

/* Compute squared length of vector
 */
inline float lengthsquared(const float2& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
inline float length(const float2& v)
{
    return sqrt(lengthsquared(v));
}

/* Compute distance from 'a' to b
 */
inline float distance(const float2& a, const float2& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
inline float distancesquared(const float2& a, const float2& b)
{
    return lengthsquared(a - b);
}

/* Compute normalized vector
 */
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

/* Compute reflection vector
 */
inline float2 reflect(const float2& v, const float2& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
inline float2 refract(const float2& v, const float2& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float2(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * v;
}

/* Compute faceforward vector
 */
inline float2 faceforward(const float2& n, const float2& i, const float2& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

//
// @region: Operators overloading
//

inline float3 operator-(const float3& v)
{
    return float3(-v.x, -v.y, -v.z);
}

inline const float3& operator+(const float3& v)
{
    return v;
}

inline float3& operator--(float3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

inline float3& operator++(float3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

inline float3 operator--(float3& v, int)
{
    const float3 result = v;

    v.x--;
    v.y--;
    v.z--;

    return result;
}

inline const float3& operator++(float3& v, int)
{
    const float3 result = v;

    v.x++;
    v.y++;
    v.z++;

    return result;
}

inline float3 operator+(const float3& a, const float3& b)
{
    return float3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline float3 operator-(const float3& a, const float3& b)
{
    return float3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline float3 operator*(const float3& a, const float3& b)
{
    return float3(a.x * b.x, a.y * b.y, a.z * b.z);
}

inline float3 operator/(const float3& a, const float3& b)
{
    return float3(a.x / b.x, a.y / b.y, a.z / b.z);
}

inline float3 operator+(const float3& a, float b)
{
    return float3(a.x + b, a.y + b, a.z + b);
}

inline float3 operator-(const float3& a, float b)
{
    return float3(a.x - b, a.y - b, a.z - b);
}

inline float3 operator*(const float3& a, float b)
{
    return float3(a.x * b, a.y * b, a.z * b);
}

inline float3 operator/(const float3& a, float b)
{
    return float3(a.x / b, a.y / b, a.z / b);
}

inline float3 operator+(float a, const float3& b)
{
    return float3(a + b.x, a + b.y, a + b.z);
}

inline float3 operator-(float a, const float3& b)
{
    return float3(a - b.x, a - b.y, a - b.z);
}

inline float3 operator*(float a, const float3& b)
{
    return float3(a * b.x, a * b.y, a * b.z);
}

inline float3 operator/(float a, const float3& b)
{
    return float3(a / b.x, a / b.y, a / b.z);
}

inline float3& operator+=(float3& a, const float3& b)
{
    return (a = a + b);
}

inline float3& operator+=(float3& a, float b)
{
    return (a = a + b);
}

inline float3& operator-=(float3& a, const float3& b)
{
    return (a = a - b);
}

inline float3& operator-=(float3& a, float b)
{
    return (a = a - b);
}

inline float3& operator*=(float3& a, const float3& b)
{
    return (a = a * b);
}

inline float3& operator*=(float3& a, float b)
{
    return (a = a * b);
}

inline float3& operator/=(float3& a, const float3& b)
{
    return (a = a / b);
}

inline float3& operator/=(float3& a, float b)
{
    return (a = a + b);
}

inline bool3 operator==(const float3& a, const float3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

inline bool3 operator!=(const float3& a, const float3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

inline bool3 operator<(const float3& a, const float3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

inline bool3 operator>(const float3& a, const float3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

inline bool3 operator<=(const float3& a, const float3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

inline bool3 operator>=(const float3& a, const float3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int3 sign(const float3& v)
{
    return int3(sign(v.x),
                sign(v.y),
                sign(v.z));
}

/* Computes absolute value
 */
inline float3 abs(const float3& v)
{
    return float3(abs(v.x),
                  abs(v.y),
                  abs(v.z));
}

/* Computes cosine
 */
inline float3 cos(const float3& v)
{
    return float3(cos(v.x),
                  cos(v.y),
                  cos(v.z));
}

/* Computes sine
 */
inline float3 sin(const float3& v)
{
    return float3(sin(v.x),
                  sin(v.y),
                  sin(v.z));
}

/* Computes tangent
 */
inline float3 tan(const float3& v)
{
    return float3(tan(v.x),
                  tan(v.y),
                  tan(v.z));
}

/* Computes hyperbolic cosine
 */
inline float3 cosh(const float3& v)
{
    return float3(cosh(v.x),
                  cosh(v.y),
                  cosh(v.z));
}

/* Computes hyperbolic sine
 */
inline float3 sinh(const float3& v)
{
    return float3(sinh(v.x),
                  sinh(v.y),
                  sinh(v.z));
}

/* Computes hyperbolic tangent
 */
inline float3 tanh(const float3& v)
{
    return float3(tanh(v.x),
                  tanh(v.y),
                  tanh(v.z));
}

/* Computes inverse cosine
 */
inline float3 acos(const float3& v)
{
    return float3(acos(v.x),
                  acos(v.y),
                  acos(v.z));
}

/* Computes inverse sine
 */
inline float3 asin(const float3& v)
{
    return float3(asin(v.x),
                  asin(v.y),
                  asin(v.z));
}

/* Computes inverse tangent
 */
inline float3 atan(const float3& v)
{
    return float3(atan(v.x),
                  atan(v.y),
                  asin(v.z));
}

/* Computes inverse tangent with 2 args
 */
inline float3 atan2(const float3& a, const float3& b)
{
    return float3(atan2(a.x, b.x),
                  atan2(a.y, b.y),
                  atan2(a.z, b.z));
}

/* Computes Euler number raised to the power 'x'
 */
inline float3 exp(const float3& v)
{
    return float3(exp(v.x),
                  exp(v.y),
                  exp(v.z));
}

/* Computes 2 raised to the power 'x'
 */
inline float3 exp2(const float3& v)
{
    return float3(exp2(v.x),
                  exp2(v.y),
                  exp2(v.z));
}

/* Computes the base Euler number logarithm
 */
inline float3 log(const float3& v)
{
    return float3(log(v.x),
                  log(v.y),
                  log(v.z));
}

/* Computes the base 2 logarithm
 */
inline float3 log2(const float3& v)
{
    return float3(log2(v.x),
                  log2(v.y),
                  log2(v.z));
}

/* Computes the base 10 logarithm
 */
inline float3 log10(const float3& v)
{
    return float3(log10(v.x),
                  log10(v.y),
                  log10(v.z));
}

/* Computes the value of base raised to the power exponent
 */
inline float3 pow(const float3& a, const float3& b)
{
    return float3(pow(a.x, b.x),
                  pow(a.y, b.y),
                  pow(a.z, b.z));
}

/* Get the fractal part of floating point
 */
inline float3 frac(const float3& v)
{
    return float3(frac(v.x),
                  frac(v.y),
                  frac(v.z));
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float3 fmod(const float3& a, const float3& b)
{
    return float3(fmod(a.x, b.x),
                  fmod(a.y, b.y),
                  fmod(a.z, b.z));
}

/* Computes the smallest integer value not less than 'x'
 */
inline float3 ceil(const float3& v)
{
    return float3(ceil(v.x),
                  ceil(v.y),
                  ceil(v.z));
}

/* Computes the largest integer value not greater than 'x'
 */
inline float3 floor(const float3& v)
{
    return float3(floor(v.x),
                  floor(v.y),
                  floor(v.z));
}

/* Computes the nearest integer value
 */
inline float3 round(const float3& v)
{
    return float3(round(v.x),
                  round(v.y),
                  round(v.z));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float3 trunc(const float3& v)
{
    return float3(trunc(v.x),
                  trunc(v.y),
                  trunc(v.z));
}

/* Get the smaller value
 */
inline float3 min(const float3& a, const float3& b)
{
    return float3(min(a.x, b.x),
                  min(a.y, b.y),
                  min(a.z, b.z));
}

/* Get the larger value
 */
inline float3 max(const float3& a, const float3& b)
{
    return float3(max(a.x, b.x), 
                  max(a.y, b.y),
                  max(a.z, b.z));
}

/* Clamps the 'x' value to the [min, max].
 */
inline float3 clamp(const float3& v, const float3& min, const float3& max)
{
    return float3(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y), 
                  clamp(v.z, min.z, max.z));
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float3 saturate(const float3& v)
{
    return float3(saturate(v.x),
                  saturate(v.y),
                  saturate(v.z));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float3 step(const float3& a, const float3& b)
{
    return float3(
        step(a.x, b.x),
        step(a.y, b.y),
        step(a.z, b.z)
    );
}

/* Performs a linear interpolation.
 */
inline float3 lerp(const float3& a, const float3& b, const float3& t)
{
    return float3(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y), 
                  lerp(a.z, b.z, t.z));
}

/* Compute a smooth Hermite interpolation
 */
inline float3 smoothstep(const float3& a, const float3& b, const float3& t)
{
    return float3(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y),
                  smoothstep(a.z, b.z, t.z));
}

/* Computes square root of 'x'.
 */
inline float3 sqrt(const float3& v)
{
    return float3(sqrt(v.x),
                  sqrt(v.y),
                  sqrt(v.z));
}

/* Computes inverse square root of 'x'.
 */
inline float3 rsqrt(const float3& v)
{
    return float3(rsqrt(v.x),
                  rsqrt(v.y),
                  rsqrt(v.z));
}

/* Computes fast inverse square root of 'x'.
 */
inline float3 fsqrt(const float3& v)
{
    return float3(fsqrt(v.x),
                  fsqrt(v.y),
                  fsqrt(v.z));
}

/* Computes fast inverse square root of 'x'.
 */
inline float3 frsqrt(const float3& v)
{
    return float3(frsqrt(v.x),
                  frsqrt(v.y),
                  frsqrt(v.z));
}

//
// @region: Graphics functions
//

/* Compute cross product of two vectors
 */
inline float3 cross(const float3& a, const float3& b)
{
    return float3(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    );
}

/* Compute dot product of two vectors
 */
inline float dot(const float3& a, const float3& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

/* Compute squared length of vector
 */
inline float lengthsquared(const float3& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
inline float length(const float3& v)
{
    return sqrt(lengthsquared(v));
}

/* Compute distance from 'a' to b
 */
inline float distance(const float3& a, const float3& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
inline float distancesquared(const float3& a, const float3& b)
{
    return lengthsquared(a - b);
}

/* Compute normalized vector
 */
inline float3 normalize(const float3& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float3(v.x * f, v.y * f, v.z * f);
    }
    else
    {
        return v;
    }
}

/* Compute reflection vector
 */
inline float3 reflect(const float3& v, const float3& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
inline float3 refract(const float3& v, const float3& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float3(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

/* Compute faceforward vector
 */
inline float3 faceforward(const float3& n, const float3& i, const float3& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

//
// @region: Operators overloading
//

inline float4 operator-(const float4& v)
{
    return float4(-v.x, -v.y, -v.z, -v.w);
}

inline const float4& operator+(const float4& v)
{
    return v;
}

inline float4& operator--(float4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

inline float4& operator++(float4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

inline float4 operator--(float4& v, int)
{
    const float4 result = v;

    v.x--;
    v.y--;
    v.z--;
    v.w--;

    return result;
}

inline float4 operator++(float4& v, int)
{
    const float4 result = v;

    v.x++;
    v.y++;
    v.z++;
    v.w++;
    
    return result;
}

inline float4 operator+(const float4& a, const float4& b)
{
    return float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

inline float4 operator-(const float4& a, const float4& b)
{
    return float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

inline float4 operator*(const float4& a, const float4& b)
{
    return float4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

inline float4 operator/(const float4& a, const float4& b)
{
    return float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline float4 operator+(const float4& a, float b)
{
    return float4(a.x + b, a.y + b, a.z + b, a.w + b);
}

inline float4 operator-(const float4& a, float b)
{
    return float4(a.x - b, a.y - b, a.z - b, a.w - b);
}

inline float4 operator*(const float4& a, float b)
{
    return float4(a.x * b, a.y * b, a.z * b, a.w * b);
}

inline float4 operator/(const float4& a, float b)
{
    return float4(a.x / b, a.y / b, a.z / b, a.w / b);
}

inline float4 operator+(float a, const float4& b)
{
    return float4(a + b.x, a + b.y, a + b.z, a + b.w);
}

inline float4 operator-(float a, const float4& b)
{
    return float4(a - b.x, a - b.y, a - b.z, a - b.w);
}

inline float4 operator*(float a, const float4& b)
{
    return float4(a * b.x, a * b.y, a * b.z, a * b.w);
}

inline float4 operator/(float a, const float4& b)
{
    return float4(a / b.x, a / b.y, a / b.z, a / b.w);
}

inline float4& operator+=(float4& a, const float4& b)
{
    return (a = a + b);
}

inline float4& operator+=(float4& a, float b)
{
    return (a = a + b);
}

inline float4& operator-=(float4& a, const float4& b)
{
    return (a = a - b);
}

inline float4& operator-=(float4& a, float b)
{
    return (a = a - b);
}

inline float4& operator*=(float4& a, const float4& b)
{
    return (a = a * b);
}

inline float4& operator*=(float4& a, float b)
{
    return (a = a * b);
}

inline float4& operator/=(float4& a, const float4& b)
{
    return (a = a / b);
}

inline float4& operator/=(float4& a, float b)
{
    return (a = a + b);
}

inline bool4 operator==(const float4& a, const float4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

inline bool4 operator!=(const float4& a, const float4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}

inline bool4 operator<(const float4& a, const float4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

inline bool4 operator>(const float4& a, const float4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

inline bool4 operator<=(const float4& a, const float4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

inline bool4 operator>=(const float4& a, const float4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int4 sign(const float4& v)
{
    return int4(sign(v.x),
                sign(v.y),
                sign(v.z),
                sign(v.w));
}

/* Computes absolute value
 */
inline float4 abs(const float4& v)
{
    return float4(abs(v.x),
                  abs(v.y),
                  abs(v.z),
                  abs(v.w));
}

/* Computes cosine
 */
inline float4 cos(const float4& v)
{
    return float4(cos(v.x),
                  cos(v.y),
                  cos(v.z),
                  cos(v.w));
}

/* Computes sine
 */
inline float4 sin(const float4& v)
{
    return float4(sin(v.x),
                  sin(v.y),
                  sin(v.z),
                  sin(v.w));
}

/* Computes tangent
 */
inline float4 tan(const float4& v)
{
    return float4(tan(v.x),
                  tan(v.y),
                  tan(v.z),
                  tan(v.w));
}

/* Computes hyperbolic cosine
 */
inline float4 cosh(const float4& v)
{
    return float4(cosh(v.x),
                  cosh(v.y),
                  cosh(v.z),
                  cosh(v.w));
}

/* Computes hyperbolic sine
 */
inline float4 sinh(const float4& v)
{
    return float4(sinh(v.x),
                  sinh(v.y),
                  sinh(v.z),
                  sinh(v.w));
}

/* Computes hyperbolic tangent
 */
inline float4 tanh(const float4& v)
{
    return float4(tanh(v.x),
                  tanh(v.y),
                  tanh(v.z),
                  tanh(v.w));
}

/* Computes inverse cosine
 */
inline float4 acos(const float4& v)
{
    return float4(acos(v.x),
                  acos(v.y),
                  acos(v.z),
                  acos(v.w));
}

/* Computes inverse sine
 */
inline float4 asin(const float4& v)
{
    return float4(asin(v.x),
                  asin(v.y),
                  asin(v.z),
                  asin(v.w));
}

/* Computes inverse tangent
 */
inline float4 atan(const float4& v)
{
    return float4(atan(v.x),
                  atan(v.y),
                  atan(v.z),
                  atan(v.w));
}

/* Computes inverse tangent with 2 args
 */
inline float4 atan2(const float4& a, const float4& b)
{
    return float4(atan2(a.x, b.x),
                  atan2(a.y, b.y),
                  atan2(a.z, b.z),
                  atan2(a.w, b.w));
}

/* Computes Euler number raised to the power 'x'
 */
inline float4 exp(const float4& v)
{
    return float4(exp(v.x),
                  exp(v.y),
                  exp(v.z),
                  exp(v.w));
}

/* Computes 2 raised to the power 'x'
 */
inline float4 exp2(const float4& v)
{
    return float4(exp2(v.x),
                  exp2(v.y),
                  exp2(v.z),
                  exp2(v.w));
}

/* Computes the base Euler number logarithm
 */
inline float4 log(const float4& v)
{
    return float4(log(v.x),
                  log(v.y),
                  log(v.z),
                  log(v.w));
}

/* Computes the base 2 logarithm
 */
inline float4 log2(const float4& v)
{
    return float4(log2(v.x),
                  log2(v.y),
                  log2(v.z),
                  log2(v.w)  );
}

/* Computes the base 10 logarithm
 */
inline float4 log10(const float4& v)
{
    return float4(log10(v.x),
                  log10(v.y),
                  log10(v.z),
                  log10(v.w));
}

/* Computes the value of base raised to the power exponent
 */
inline float4 pow(const float4& a, const float4& b)
{
    return float4(pow(a.x, b.x),
                  pow(a.y, b.y),
                  pow(a.z, b.z),
                  pow(a.w, b.w));
}

/* Get the fractal part of floating point
 */
inline float4 frac(const float4& v)
{
    return float4(frac(v.x),
                  frac(v.y),
                  frac(v.z),
                  frac(v.w));
}

/* Computes the floating-point remainder of the division operation x/y
 */
inline float4 fmod(const float4& a, const float4& b)
{
    return float4(fmod(a.x, b.x),
                  fmod(a.y, b.y),
                  fmod(a.z, b.z),
                  fmod(a.w, b.w));
}

/* Computes the smallest integer value not less than 'x'
 */
inline float4 ceil(const float4& v)
{
    return float4(ceil(v.x),
                  ceil(v.y),
                  ceil(v.z),
                  ceil(v.w));
}

/* Computes the largest integer value not greater than 'x'
 */
inline float4 floor(const float4& v)
{
    return float4(floor(v.x),
                  floor(v.y),
                  floor(v.z),
                  floor(v.w));
}

/* Computes the nearest integer value
 */
inline float4 round(const float4& v)
{
    return float4(round(v.x),
                  round(v.y),
                  round(v.z),
                  round(v.w));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
inline float4 trunc(const float4& v)
{
    return float4(trunc(v.x),
                  trunc(v.y),
                  trunc(v.z),
                  trunc(v.w));
}

/* Get the smaller value
 */
inline float4 min(const float4& a, const float4& b)
{
    return float4(min(a.x, b.x),
                  min(a.y, b.y),
                  min(a.z, b.z),
                  min(a.w, b.w));
}

/* Get the larger value
 */
inline float4 max(const float4& a, const float4& b)
{
    return float4(max(a.x, b.x), 
                  max(a.y, b.y),
                  max(a.z, b.z),
                  max(a.w, b.w));
}

/* Clamps the 'x' value to the [min, max].
 */
inline float4 clamp(const float4& v, const float4& min, const float4& max)
{
    return float4(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y), 
                  clamp(v.z, min.z, max.z), 
                  clamp(v.w, min.w, max.w));
}

/* Clamps the specified value within the range of 0 to 1
 */
inline float4 saturate(const float4& v)
{
    return float4(saturate(v.x),
                  saturate(v.y),
                  saturate(v.z),
                  saturate(v.w));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
inline float4 step(const float4& a, const float4& b)
{
    return float4(step(a.x, b.x),
                  step(a.y, b.y),
                  step(a.z, b.z),
                  step(a.w, b.w));
}

/* Performs a linear interpolation.
 */
inline float4 lerp(const float4& a, const float4& b, const float4& t)
{
    return float4(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y), 
                  lerp(a.z, b.z, t.z), 
                  lerp(a.w, b.w, t.w));
}

/* Compute a smooth Hermite interpolation
 */
inline float4 smoothstep(const float4& a, const float4& b, const float4& t)
{
    return float4(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y),
                  smoothstep(a.z, b.z, t.z),
                  smoothstep(a.w, b.w, t.w));
}

/* Computes square root of 'x'.
 */
inline float4 sqrt(const float4& v)
{
    return float4(sqrt(v.x),
                  sqrt(v.y),
                  sqrt(v.z),
                  sqrt(v.w));
}

/* Computes inverse square root of 'x'.
 */
inline float4 rsqrt(const float4& v)
{
    return float4(rsqrt(v.x),
                  rsqrt(v.y),
                  rsqrt(v.z),
                  rsqrt(v.w));
}

/* Computes fast inverse square root of 'x'.
 */
inline float4 fsqrt(const float4& v)
{
    return float4(fsqrt(v.x),
                  fsqrt(v.y),
                  fsqrt(v.z),
                  fsqrt(v.w));
}

/* Computes fast inverse square root of 'x'.
 */
inline float4 frsqrt(const float4& v)
{
    return float4(frsqrt(v.x),
                  frsqrt(v.y),
                  frsqrt(v.z),
                  frsqrt(v.w));
}

//
// @region: Graphics functions
//

/* Compute dot product of two vectors
 */
inline float dot(const float4& a, const float4& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

/* Compute squared length of vector
 */
inline float lengthsquared(const float4& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
inline float length(const float4& v)
{
    return sqrt(lengthsquared(v));
}

/* Compute distance from 'a' to b
 */
inline float distance(const float4& a, const float4& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
inline float distancesquared(const float4& a, const float4& b)
{
    return lengthsquared(a - b);
}

/* Compute normalized vector
 */
inline float4 normalize(const float4& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float4(v.x * f, v.y * f, v.z * f, v.w * f);
    }
    else
    {
        return v;
    }
}

/* Compute reflection vector
 */
inline float4 reflect(const float4& v, const float4& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
inline float4 refract(const float4& v, const float4& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float4(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

/* Compute faceforward vector
 */
inline float4 faceforward(const float4& n, const float4& i, const float4& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

//
// @region: Operators overloading
//

inline float2x2 operator-(const float2x2& m)
{
    float2x2 result;
    result[0] = -m[0];
    result[1] = -m[1];
    return result;
}

inline const float2x2& operator+(const float2x2& m)
{
    return m;
}

inline float2x2& operator--(float2x2& m)
{
    --m[0];
    --m[1];
    return m;
}

inline float2x2& operator++(float2x2& m)
{
    ++m[0];
    ++m[1];
    return m;
}

inline const float2x2& operator--(float2x2& m, int)
{
    m[0]--;
    m[1]--;
    return m;
}

inline const float2x2& operator++(float2x2& m, int)
{
    m[0]++;
    m[1]++;
    return m;
}

inline float2x2 operator+(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    return result;
}

inline float2x2 operator-(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    return result;
}

inline float2x2 operator*(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    return result;
}

inline float2x2 operator/(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    return result;
}

inline float2x2 operator+(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    return result;
}

inline float2x2 operator-(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    return result;
}

inline float2x2 operator*(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    return result;
}

inline float2x2 operator/(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    return result;
}

inline float2x2 operator+(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    return result;
}

inline float2x2 operator-(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    return result;
}

inline float2x2 operator*(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    return result;
}

inline float2x2 operator/(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    return result;
}

inline float2x2& operator+=(float2x2& a, const float2x2& b)
{
    return (a = a + b);
}

inline float2x2& operator+=(float2x2& a, float b)
{
    return (a = a + b);
}

inline float2x2& operator-=(float2x2& a, const float2x2& b)
{
    return (a = a - b);
}

inline float2x2& operator-=(float2x2& a, float b)
{
    return (a = a - b);
}

inline float2x2& operator*=(float2x2& a, const float2x2& b)
{
    return (a = a * b);
}

inline float2x2& operator*=(float2x2& a, float b)
{
    return (a = a * b);
}

inline float2x2& operator/=(float2x2& a, const float2x2& b)
{
    return (a = a / b);
}

inline float2x2& operator/=(float2x2& a, float b)
{
    return (a = a + b);
}

inline bool2x2 operator==(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    return result;
}

inline bool2x2 operator!=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    return result;
}

inline bool2x2 operator<(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    return result;
}

inline bool2x2 operator>(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    return result;
}

inline bool2x2 operator<=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    return result;
}

inline bool2x2 operator>=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    return result;
}

//
// @region: Common functions
//

inline float2x2 inverse(const float2x2& m)
{
    const float det = m[0][0] * m[1][1] - m[0][1] * m[1][0];
    if (det == 0.0f)
    {
        return m;
    }
    else
    {
        const float idet = 1.0f / det;

        return float2x2(
            idet *   m[1][1] , idet * (-m[0][1]),
            idet * (-m[1][0]), idet *   m[0][0]
        );
    }
}

inline float2x2 transpose(const float2x2& m)
{
    return float2x2(
        m[0][0], m[1][0],
        m[0][1], m[1][1]
    );
}

inline float2 mul(const float2x2& a, const float2& b)
{
    return float2(
        a[0][0] * b[0] + a[1][0] * b[1],
        a[0][1] * b[0] + a[1][1] * b[1]
    );
}

inline float2 mul(const float2& a, const float2x2& b)
{
    return float2(
        a[0] * b[0][0] + a[1] * b[0][1],
        a[0] * b[1][0] + a[1] * b[1][1]
    );
}

inline float2x2 mul(const float2x2& a, const float2x2& b)
{
    return float2x2(
        mul(a, b[0]),
        mul(a, b[1])
    );
}

//
// @region: Graphics functions
//

inline float2x2 float2x2::rotate(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float2x2(
        c, -s,
        s, c
    );
}

//
// @region: Operators overloading
//

inline float3x3 operator-(const float3x3& m)
{
    float3x3 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    return result;
}

inline const float3x3& operator+(const float3x3& m)
{
    return m;
}

inline float3x3& operator--(float3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

inline float3x3& operator++(float3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

inline const float3x3& operator--(float3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

inline const float3x3& operator++(float3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

inline float3x3 operator+(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

inline float3x3 operator-(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

inline float3x3 operator*(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

inline float3x3 operator/(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

inline float3x3 operator+(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

inline float3x3 operator-(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

inline float3x3 operator*(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

inline float3x3 operator/(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

inline float3x3 operator+(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

inline float3x3 operator-(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

inline float3x3 operator*(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

inline float3x3 operator/(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

inline float3x3& operator+=(float3x3& a, const float3x3& b)
{
    return (a = a + b);
}

inline float3x3& operator+=(float3x3& a, float b)
{
    return (a = a + b);
}

inline float3x3& operator-=(float3x3& a, const float3x3& b)
{
    return (a = a - b);
}

inline float3x3& operator-=(float3x3& a, float b)
{
    return (a = a - b);
}

inline float3x3& operator*=(float3x3& a, const float3x3& b)
{
    return (a = a * b);
}

inline float3x3& operator*=(float3x3& a, float b)
{
    return (a = a * b);
}

inline float3x3& operator/=(float3x3& a, const float3x3& b)
{
    return (a = a / b);
}

inline float3x3& operator/=(float3x3& a, float b)
{
    return (a = a + b);
}

inline bool3x3 operator==(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

inline bool3x3 operator!=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

inline bool3x3 operator<(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

inline bool3x3 operator>(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

inline bool3x3 operator<=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

inline bool3x3 operator>=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    return result;
}

//
// @region: Common functions
//

inline float3x3 transpose(const float3x3& m)
{
    return float3x3(
        m[0][0], m[1][0], m[2][0],
        m[0][1], m[1][1], m[2][1],
        m[0][2], m[1][2], m[2][2]
    );
}

inline float3 mul(const float3x3& a, const float3& b)
{
    const float3 a0 = float3(a[0][0], a[1][0], a[2][0]);
    const float3 a1 = float3(a[0][1], a[1][1], a[2][1]);
    const float3 a2 = float3(a[0][2], a[1][2], a[2][2]);

    return float3(
        dot(a0, b),
        dot(a1, b),
        dot(a2, b)
    );
}

inline float3 mul(const float3& a, const float3x3& b)
{
    return float3(
        dot(a, b[0]),
        dot(a, b[1]),
        dot(a, b[2])
    );
}

inline float3x3 mul(const float3x3& a, const float3x3& b)
{
    return float3x3(
        mul(a, b[0]),
        mul(a, b[1]),
        mul(a, b[2])
    );
}

inline float3x3 inverse(const float3x3& m)
{
    const float det = 
          m[0][0] * m[1][1] * m[2][2] - m[0][0] * m[1][2] * m[2][1]
        + m[0][1] * m[1][0] * m[2][2] - m[0][1] * m[1][2] * m[2][0]
        + m[0][2] * m[1][0] * m[2][1] - m[0][2] * m[1][1] * m[2][0];
    if (det == 0.0f)
    {
        return m;
    }
    else
    {
        const float idet = 1.0f / det;

        return float3x3(
            idet * (m[1][1] * m[2][2] - m[1][2] * m[2][1]),
            idet * (m[0][2] * m[2][1] - m[0][1] * m[2][2]),
            idet * (m[0][1] * m[1][2] - m[0][2] * m[1][1]),

            idet * (m[1][2] * m[2][0] - m[1][0] * m[2][2]),
            idet * (m[0][0] * m[2][2] - m[0][2] * m[2][0]),
            idet * (m[0][2] * m[1][0] - m[0][0] * m[1][2]),

            idet * (m[1][0] * m[2][1] - m[1][1] * m[2][0]),
            idet * (m[0][1] * m[2][0] - m[0][0] * m[2][1]),
            idet * (m[0][0] * m[1][1] - m[0][1] * m[1][0])
        );
    }
}

//
// @region: Operators overloading
//

inline float4x4 operator-(const float4x4& m)
{
    float4x4 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    result[3] = -m[3];
    return result;
}

inline const float4x4& operator+(const float4x4& m)
{
    return m;
}

inline float4x4& operator--(float4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

inline float4x4& operator++(float4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

inline const float4x4& operator--(float4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

inline const float4x4& operator++(float4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
}

inline float4x4 operator+(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

inline float4x4 operator+(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

inline float4x4 operator+(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
    return result;
}

inline float4x4 operator-(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

inline float4x4 operator-(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

inline float4x4 operator-(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

inline float4x4 operator*(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

inline float4x4 operator/(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

inline float4x4& operator+=(float4x4& a, const float4x4& b)
{
    return (a = a + b);
}

inline float4x4& operator+=(float4x4& a, float b)
{
    return (a = a + b);
}

inline float4x4& operator-=(float4x4& a, const float4x4& b)
{
    return (a = a - b);
}

inline float4x4& operator-=(float4x4& a, float b)
{
    return (a = a - b);
}

inline float4x4& operator*=(float4x4& a, const float4x4& b)
{
    return (a = a * b);
}

inline float4x4& operator*=(float4x4& a, float b)
{
    return (a = a * b);
}

inline float4x4& operator/=(float4x4& a, const float4x4& b)
{
    return (a = a / b);
}

inline float4x4& operator/=(float4x4& a, float b)
{
    return (a = a + b);
}

inline bool4x4 operator==(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

inline bool4x4 operator!=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

inline bool4x4 operator<(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

inline bool4x4 operator>(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

inline bool4x4 operator<=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

inline bool4x4 operator>=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
    return result;
}

//
// @region: Common functions
//

inline float4 mul(const float4x4& a, const float4& b)
{
    const float4 c0 = float4(a[0][0], a[1][0], a[2][0], a[3][0]);
    const float4 c1 = float4(a[0][1], a[1][1], a[2][1], a[3][1]);
    const float4 c2 = float4(a[0][2], a[1][2], a[2][2], a[3][2]);
    const float4 c3 = float4(a[0][3], a[1][3], a[2][3], a[3][3]);

    return float4(
        dot(c0, b),
        dot(c1, b),
        dot(c2, b),
        dot(c3, b)
    );
}

inline float4 mul(const float4& a, const float4x4& b)
{
    return float4(
        dot(a, b[0]),
        dot(a, b[1]),
        dot(a, b[2]),
        dot(a, b[3])
    );
}

inline float3 mul(const float4x4& a, const float3& b)
{
    const float4 b0 = float4(b.x, b.y, b.z, 1.0f);
    const float4 b1 = mul(a, b0);

    const float iw = 1.0f / b1.w;
    return float3(b1.x * iw, b1.y * iw, b1.z * iw);
}

inline float3 mul(const float3& a, const float4x4& b)
{
    const float4 a0 = float4(a.x, a.y, a.z, 1.0f);
    const float4 a1 = mul(a0, b);

    const float iw = 1.0f / a1.w;
    return float3(a1.x * iw, a1.y * iw, a1.z * iw);
}

inline float4x4 mul(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = mul(a, b[0]);
    result[1] = mul(a, b[1]);
    result[2] = mul(a, b[2]);
    result[3] = mul(a, b[3]);
    return result;
}

inline float4x4 min(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = min(a[0], b[0]);
    result[1] = min(a[1], b[1]);
    result[2] = min(a[2], b[2]);
    result[3] = min(a[3], b[3]);
    return result;
}

inline float4x4 max(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = max(a[0], b[0]);
    result[1] = max(a[1], b[1]);
    result[2] = max(a[2], b[2]);
    result[3] = max(a[3], b[3]);
    return result;
}

inline float4x4 clamp(const float4x4& v, const float4x4& min, const float4x4& max)
{
    float4x4 result;
    result[0] = clamp(v[0], min[0], max[0]);
    result[1] = clamp(v[1], min[1], max[1]);
    result[2] = clamp(v[2], min[2], max[2]);
    result[3] = clamp(v[3], min[3], max[3]);
    return result;
}

inline float4x4 transpose(const float4x4& m)
{
    float4x4 result;
    result[0][0] = m[0][0]; result[0][1] = m[1][0]; result[0][2] = m[2][0]; result[0][3] = m[3][0];
    result[1][0] = m[0][1]; result[1][1] = m[1][1]; result[1][2] = m[2][1]; result[1][3] = m[3][1];
    result[2][0] = m[0][2]; result[2][1] = m[1][2]; result[2][2] = m[2][2]; result[2][3] = m[3][2];
    result[3][0] = m[0][3]; result[3][1] = m[1][3]; result[3][2] = m[2][3]; result[3][3] = m[3][3];
    return result;
}

inline float4x4 inverse(const float4x4& m)
{
    const float n11 = m[0][0], n12 = m[1][0], n13 = m[2][0], n14 = m[3][0];
    const float n21 = m[0][1], n22 = m[1][1], n23 = m[2][1], n24 = m[3][1];
    const float n31 = m[0][2], n32 = m[1][2], n33 = m[2][2], n34 = m[3][2];
    const float n41 = m[0][3], n42 = m[1][3], n43 = m[2][3], n44 = m[3][3];

    const float t11 = n23 * n34 * n42 - n24 * n33 * n42 + n24 * n32 * n43 - n22 * n34 * n43 - n23 * n32 * n44 + n22 * n33 * n44;
    const float t12 = n14 * n33 * n42 - n13 * n34 * n42 - n14 * n32 * n43 + n12 * n34 * n43 + n13 * n32 * n44 - n12 * n33 * n44;
    const float t13 = n13 * n24 * n42 - n14 * n23 * n42 + n14 * n22 * n43 - n12 * n24 * n43 - n13 * n22 * n44 + n12 * n23 * n44;
    const float t14 = n14 * n23 * n32 - n13 * n24 * n32 - n14 * n22 * n33 + n12 * n24 * n33 + n13 * n22 * n34 - n12 * n23 * n34;

    const float det = n11 * t11 + n21 * t12 + n31 * t13 + n41 * t14;
    if (det < 0.0f)
    {
        return float4x4(0.0f);
    }

    const float idet = 1.0f / det;
    float4x4 result;

    result[0][0] = t11 * idet;
    result[0][1] = (n24 * n33 * n41 - n23 * n34 * n41 - n24 * n31 * n43 + n21 * n34 * n43 + n23 * n31 * n44 - n21 * n33 * n44) * idet;
    result[0][2] = (n22 * n34 * n41 - n24 * n32 * n41 + n24 * n31 * n42 - n21 * n34 * n42 - n22 * n31 * n44 + n21 * n32 * n44) * idet;
    result[0][3] = (n23 * n32 * n41 - n22 * n33 * n41 - n23 * n31 * n42 + n21 * n33 * n42 + n22 * n31 * n43 - n21 * n32 * n43) * idet;

    result[1][0] = t12 * idet;
    result[1][1] = (n13 * n34 * n41 - n14 * n33 * n41 + n14 * n31 * n43 - n11 * n34 * n43 - n13 * n31 * n44 + n11 * n33 * n44) * idet;
    result[1][2] = (n14 * n32 * n41 - n12 * n34 * n41 - n14 * n31 * n42 + n11 * n34 * n42 + n12 * n31 * n44 - n11 * n32 * n44) * idet;
    result[1][3] = (n12 * n33 * n41 - n13 * n32 * n41 + n13 * n31 * n42 - n11 * n33 * n42 - n12 * n31 * n43 + n11 * n32 * n43) * idet;

    result[2][0] = t13 * idet;
    result[2][1] = (n14 * n23 * n41 - n13 * n24 * n41 - n14 * n21 * n43 + n11 * n24 * n43 + n13 * n21 * n44 - n11 * n23 * n44) * idet;
    result[2][2] = (n12 * n24 * n41 - n14 * n22 * n41 + n14 * n21 * n42 - n11 * n24 * n42 - n12 * n21 * n44 + n11 * n22 * n44) * idet;
    result[2][3] = (n13 * n22 * n41 - n12 * n23 * n41 - n13 * n21 * n42 + n11 * n23 * n42 + n12 * n21 * n43 - n11 * n22 * n43) * idet;

    result[3][0] = t14 * idet;
    result[3][1] = (n13 * n24 * n31 - n14 * n23 * n31 + n14 * n21 * n33 - n11 * n24 * n33 - n13 * n21 * n34 + n11 * n23 * n34) * idet;
    result[3][2] = (n14 * n22 * n31 - n12 * n24 * n31 - n14 * n21 * n32 + n11 * n24 * n32 + n12 * n21 * n34 - n11 * n22 * n34) * idet;
    result[3][3] = (n12 * n23 * n31 - n13 * n22 * n31 + n13 * n21 * n32 - n11 * n23 * n32 - n12 * n21 * n33 + n11 * n22 * n33) * idet;

    return result;
}

//
// @region: Graphics functions
//

inline float4x4 float4x4::ortho(float l, float r, float b, float t, float n, float f)
{
    const float x = 1.0f / (r - l);
    const float y = 1.0f / (t - b);
    const float z = 1.0f / (f - n);

    float4x4 result;
    result[0] = float4(2.0f * x, 0, 0, 0);
    result[1] = float4(0, 2.0f * y, 0, 0);
    result[2] = float4(0, 0, 2.0f * z, 0);
    result[3] = float4(-x * (l + r), -y * (b + t), -z * (n + f), 1.0f);
    return result;
}

inline float4x4 float4x4::frustum(float l, float r, float b, float t, float n, float f)
{
    const float x = 1.0f / (r - l);
    const float y = 1.0f / (t - b);
    const float z = 1.0f / (f - n);

    float4x4 result;
    result[0] = float4(2.0f * x, 0, 0, 0);
    result[1] = float4(0, 2.0f * y, 0, 0);
    result[2] = float4(x * (l + r), y * (b + t), z * (n + f), 1.0f);
    result[3] = float4(0, 0, 2.0f * z, 0);
    return result;
}

inline float4x4 float4x4::perspective(float fov, float aspect, float znear, float zfar)
{
    const float a = 1.0f / tan(fov * 0.5f);
    const float b = zfar / (znear - zfar);

    float4x4 result;
    result[0] = float4(a / aspect,   0,         0,   0);
    result[1] = float4(         0,   a,         0,   0);
    result[2] = float4(         0,   0,         b,  -1);
    result[3] = float4(         0,   0, znear * b,   0);
    return result;
}

inline float4x4 float4x4::lookat(const float3& eye, const float3& target, const float3& up)
{
    const float3 z = normalize(eye - target);
    const float3 x = normalize(cross(up, z));
    const float3 y = normalize(cross( z, x));

    float4x4 result;
    result[0] = float4(x.x, y.x, z.x, 0);
    result[1] = float4(x.y, y.y, z.y, 0);
    result[2] = float4(x.z, y.z, z.z, 0);
    result[3] = float4(-dot(x, eye), -dot(y, eye), -dot(z, eye), 1.0f);
    return result;
}

inline float4x4 float4x4::scale(float s)
{
    return float4x4::scale(s, s, s);
}

inline float4x4 float4x4::scale(const float2& v)
{
    return float4x4::scale(v.x, v.y);
}

inline float4x4 float4x4::scale(const float3& v)
{
    return float4x4::scale(v.x, v.y, v.z);
}

inline float4x4 float4x4::scale(float x, float y, float z)
{
    return float4x4(
        x, 0, 0, 0,
        0, y, 0, 0, 
        0, 0, z, 0,
        0, 0, 0, 1
    );
}

inline float4x4 float4x4::translate(const float2& v)
{
    return float4x4::translate(v.x, v.y);
}

inline float4x4 float4x4::translate(const float3& v)
{
    return float4x4::translate(v.x, v.y, v.z);
}

inline float4x4 float4x4::translate(float x, float y, float z)
{
    return float4x4(
        1, 0, 0, 0,
        0, 1, 0, 0,
        0, 0, 1, 0,
        x, y, z, 1
    );
}

inline float4x4 float4x4::rotate(const float3& axis, float angle)
{
    return float4x4::rotate(axis.x, axis.y, axis.z, angle);
}

inline float4x4 float4x4::rotate(float x, float y, float z, float angle)
{
    const float c = cos(-angle);
    const float s = sin(-angle);
    const float t = 1.0f - c;

    float4x4 result;
    /* Row 1 */
    result[0] = float4(t * x * x + c,
                       t * x * y - s * z,
                       t * x * z + s * y,
                       0.0f);

    /* Row 2 */
    result[1] = float4(t * x * y + s * z,
                       t * y * y + c,
                       t * y * z - s * x,
                       0.0f);

    /* Row 3 */
    result[2] = float4(t * x * z - s * y,
                       t * y * z + s * x,
                       t * z * z + c,
                       0.0f);

    /* Row 4 */
    result[3] = float4(0, 0, 0, 1.0f);
    return result;
}

inline float4x4 float4x4::rotatex(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float4x4(
        1,  0, 0, 0,
        0,  c, s, 0,
        0, -s, c, 0,
        0,  0, 0, 1
    );
}

inline float4x4 float4x4::rotatey(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float4x4(
         c, 0, s, 0,
         0, 1, 0, 0,
        -s, 0, c, 0,
         0, 0, 0, 1
    );
}

inline float4x4 float4x4::rotatez(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float4x4(
         c, s, 0, 0,
        -s, c, 0, 0,
         0, 0, 1, 0,
         0, 0, 0, 1
    );
}

