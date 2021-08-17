// You can put your copyright here!
// Generate with hlslmath/tools/build
// Filename: D:\Projects\hlslmath\tools/../hlslmath.h
// Datetime: Tue Aug 17 20:04:42 2021

#pragma once

#include <math.h>

#undef min // When Windows.h was included, min is an macro
#undef max // When Windows.h was included, max is an macro

// Detect neon support & enable
#if defined(__ARM_NEON) && defined(HLSLMATH_ENABLE_NEON) && HLSLMATH_ENABLE_NEON
#   if defined(__aarch64__) && defined(__ANDROID__)
#       define HLSLMATH_ENABLE_NEON 0
#   else
#       include <arm_neon.h>     
#       define HLSLMATH_ENABLE_NEON 1
#   endif         
#else
#   define HLSLMATH_ENABLE_NEON 0
#endif

// Detect SSE support & enable
#if !defined(HLSLMATH_ENABLE_SSE)
#   define HLSLMATH_ENABLE_SSE 1
#endif

#if defined(__SSSE3__)
#   define HLSLMATH_SSE_SUPPORT 1
#endif

#if defined(__SSE__) || defined(__SSE2__) || defined(__SSE3__)
#   undef  HLSLMATH_SSE_SUPPORT
#   define HLSLMATH_SSE_SUPPORT 1
#endif

#if defined(__SSE4_1__) || defined(__SSE4_2__) || defined(__SSE_MATH__)
#   undef  HLSLMATH_SSE_SUPPORT
#   define HLSLMATH_SSE_SUPPORT 1
#endif

#if defined(_MSC_VER) && (defined(_M_IX86) || defined(_M_IX64))
#   if defined(_M_HYBRID_X86_ARM64)
#       undef  HLSLMATH_SSE_SUPPORT
#   define HLSLMATH_SSE_SUPPORT 0
#   else
#       undef  HLSLMATH_SSE_SUPPORT
#       define HLSLMATH_SSE_SUPPORT 1
#   endif
#endif

#if !HLSLMATH_SSE_SUPPORT
#   undef HLSLMATH_SSE_ENABLE
#   define HLSLMATH_SSE_ENABLE 0
#endif

// Better inline functions
#if defined(_MSC_VER)
#   define HLSLMATH_INLINE __forceinline
#elif defined(__GNUC__)
#   define HLSLMATH_INLINE __attribute__((always_inline)) inline
#else
#   define HLSLMATH_INLINE inline
#endif

// Multiple compiler support for constexpr
#if __cplusplus >= 201103L
#define HLSLMATH_CONSTEXPR constexpr
#else
#define HLSLMATH_CONSTEXPR HLSLMATH_INLINE
#endif

// Android polyfill for log2 and log2f
#if __ANDROID__ 
extern "C"
{
    HLSLMATH_INLINE float log2f(float x)
    {
        return (logf(x) / 0.693147180559945f);
    }

    HLSLMATH_INLINE double log2(double x)
    {
        return (log(x) / 0.693147180559945);
    }
}
#endif

// Types supported
typedef unsigned int uint;

union bool2;
union bool3;
union bool4;
union bool2x2;
union bool3x3;
union bool4x4;

union int2;
union int3;
union int4;
union int2x2;
union int3x3;
union int4x4;

union uint2;
union uint3;
union uint4;
union uint2x2;
union uint3x3;
union uint4x4;

union float2;
union float3;
union float4;
union float2x2;
union float3x3;
union float4x4;

//
// Custom build settings
//

#if (defined(_MSC_VER) && _MSC_VER >= 1900) || __unix__
#define HLSLMATH_DEFINE_INTRINSICS 1
#else
#define HLSLMATH_DEFINE_INTRINSICS 0
#endif

#include <assert.h>
#define HLSLMATH_ASSERT(exp, msg) assert((exp) && msg)

//
// Define types
//

union int2
{
public: // @region: Fields
    struct
    {
        int x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR int2() {}

    HLSLMATH_INLINE int2(int x, int y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE int2(int s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE int& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
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
    HLSLMATH_CONSTEXPR int3() {}

    HLSLMATH_INLINE int3(int x, int y, int z)
        : x(x)
        , y(y) 
        , z(z) {}

    HLSLMATH_INLINE int3(int s)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Fields
    HLSLMATH_INLINE int& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
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
    HLSLMATH_CONSTEXPR int4() {}

    HLSLMATH_INLINE int4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE int4(int s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE int& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }
};

union uint2
{
public: // @region: Fields
    struct
    {
        uint x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint2() {}

    HLSLMATH_INLINE uint2(uint x, uint y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE uint2(uint s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE uint& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint*)this)[index];
    }

    HLSLMATH_INLINE uint  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
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
    HLSLMATH_CONSTEXPR uint3() {}

    HLSLMATH_INLINE uint3(uint x, uint y, uint z)
        : x(x)
        , y(y) 
        , z(z) {}

    HLSLMATH_INLINE uint3(uint s)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Operators
    HLSLMATH_INLINE uint& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint*)this)[index];
    }

    HLSLMATH_INLINE uint  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint*)this)[index];
    }
};

union uint4
{
public: // @region: Fields
    struct
    {
        uint x, y, z, w;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint4() {}

    HLSLMATH_INLINE uint4(uint x, uint y, uint z, uint w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE uint4(int s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE uint& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }

    HLSLMATH_INLINE uint  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }
};

union bool2
{
public: // @region: Fields
    struct
    {
        bool x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR bool2() {}

    HLSLMATH_INLINE bool2(bool x, bool y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE bool2(bool s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE bool& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
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
    HLSLMATH_CONSTEXPR bool3() {}

    HLSLMATH_INLINE bool3(bool x, bool y, bool z)
        : x(x)
        , y(y) 
        , z(z) {}

    HLSLMATH_INLINE bool3(bool s)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Operators
    HLSLMATH_INLINE bool& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool*)this)[index];
    }

    HLSLMATH_INLINE bool  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
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
    HLSLMATH_CONSTEXPR bool4() {}

	HLSLMATH_INLINE bool4(bool x, bool y, bool z, bool w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE bool4(bool s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE bool& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }

    HLSLMATH_INLINE bool  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }
};

union float2
{
public: // @region: Fields
    struct
    {
        float x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR float2() {}

    HLSLMATH_INLINE float2(float x, float y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE float2(float s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE float& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float*)this)[index];
    }

    HLSLMATH_INLINE float  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float*)this)[index];
    }

#if HLSLMATH_ENABLE_NEON       
public:
    HLSLMATH_INLINE float2(float32x2_t neon_simd)
        : neon_simd(neon_simd) {}

    HLSLMATH_INLINE operator float32x2_t(void) const
    {
        return neon_simd;
    }

private:
    float32x2_t neon_simd;
#endif
};

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

union float4
{
public: // @region: Fields
    struct
    {
        float x, y, z, w; 
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR float4() {}

    HLSLMATH_INLINE float4(const float3& xyz, float w = 0.0f)
        : x(xyz.x)
        , y(xyz.y)
        , z(xyz.z)
        , w(w) {}

    HLSLMATH_INLINE float4(float x, float y, float z, float w)
        : x(x)
        , y(y)
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE float4(float s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE float& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

    HLSLMATH_INLINE float  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

public:
    /* Quaternion from axisangle
     */
    HLSLMATH_INLINE static float4 quat(const float3& axis, float angle);

    /* Convert quaternion to axisangle
     * @note: xyz is axis, w is angle
     */
    HLSLMATH_INLINE static float4 toaxis(const float4& quat);

    /* Convert quaternion to axisangle
     * @note: xyz is axis, w is angle
     */
    HLSLMATH_INLINE static void toaxis(const float4& quat, float3* axis, float* angle)
    {
        float4 axisangle = float4::toaxis(quat);
        if (axis)  *axis = float3(axisangle.x, axisangle.y, axisangle.z);
        if (angle) *angle = axisangle.w;
    }

    /* Quaternion from euler
     */
    HLSLMATH_INLINE static float4 euler(float x, float y, float z);

    /* Quaternion from euler
     */
    HLSLMATH_INLINE static float4 euler(const float3& v)
    {
        return euler(v.x, v.y, v.z);
    }
};

union int2x2
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR int2x2() {}

    HLSLMATH_INLINE int2x2(const int2& m0, const int2& m1)
    {
        (*this)[0] = m0;
        (*this)[1] = m1;
    }   

    HLSLMATH_INLINE int2x2(int m00, int m01, int m10, int m11)
    {
        (*this)[0] = int2(m00, m01);
        (*this)[1] = int2(m10, m11);
    }

    HLSLMATH_INLINE int2x2(int s)
    {
        (*this)[0] = int2(s, s);
        (*this)[1] = int2(s, s);
    }

public: // @region: Operators
    HLSLMATH_INLINE int2& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int2*)data)[index];
    }

    HLSLMATH_INLINE const int2& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int2*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        int data[2][2];
    };
};

union int3x3
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR int3x3() {}

    HLSLMATH_INLINE int3x3(const int3& m0, const int3& m1, const int3& m2)
    {
		(*this)[0] = m0;
		(*this)[1] = m1;
		(*this)[2] = m2;
    }

    HLSLMATH_INLINE int3x3(int m00, int m01, int m02,
                  int m10, int m11, int m12,
                  int m20, int m21, int m22)
    {
        (*this)[0] = int3(m00, m01, m02);
        (*this)[1] = int3(m10, m11, m12);
        (*this)[2] = int3(m20, m21, m22);
    }

    HLSLMATH_INLINE int3x3(int s)
    {
        (*this)[0] = int3(s, s, s);
        (*this)[1] = int3(s, s, s);
        (*this)[2] = int3(s, s, s);
    }

public: // @region: Operators
    HLSLMATH_INLINE int3& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int3*)data)[index];
    }

    HLSLMATH_INLINE const int3& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int3*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        int data[3][3];
    };
};

union int4x4
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR int4x4() {}

    HLSLMATH_INLINE int4x4(const int4& m0, const int4& m1, const int4& m2, const int4& m3)
    {
		(*this)[0] = m0;
		(*this)[1] = m1;
		(*this)[2] = m2;
		(*this)[3] = m3;
    }

    HLSLMATH_INLINE int4x4(int m00, int m01, int m02, int m03,
                  int m10, int m11, int m12, int m13,
                  int m20, int m21, int m22, int m23,
                  int m30, int m31, int m32, int m33)
    {
        (*this)[0] = int4(m00, m01, m02, m03);
        (*this)[1] = int4(m10, m11, m12, m13);
        (*this)[2] = int4(m20, m21, m22, m23);
        (*this)[3] = int4(m30, m31, m32, m33);
    }

    HLSLMATH_INLINE int4x4(int s)
    {
        (*this)[0] = int4(s, s, s, s);
        (*this)[1] = int4(s, s, s, s);
        (*this)[2] = int4(s, s, s, s);
        (*this)[3] = int4(s, s, s, s);
    }

public: // Constructors
    HLSLMATH_INLINE int4& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int4*)data)[index];
    }

    HLSLMATH_INLINE const int4& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int4*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        int data[4][4];
    };
};

union uint2x2
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint2x2() {}

    HLSLMATH_INLINE uint2x2(const uint2& m0, const uint2& m1)
    {
        (*this)[0] = m0;
        (*this)[1] = m1;
    }

    HLSLMATH_INLINE uint2x2(uint m00, uint m01, uint m10, uint m11)
    {
        (*this)[0] = uint2(m00, m01);
        (*this)[1] = uint2(m10, m11);
    }

    HLSLMATH_INLINE uint2x2(uint s)
    {
        (*this)[0] = uint2(s, s);
        (*this)[1] = uint2(s, s);
    }

public: // @region: Operators
    HLSLMATH_INLINE uint2& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint2*)data)[index];
    }

    HLSLMATH_INLINE const uint2& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint2*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        uint data[2][2];
    };
};

union uint3x3
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint3x3() {}

    HLSLMATH_INLINE uint3x3(const uint3& m0, const uint3& m1, const uint3& m2)
    {
        (*this)[0] = m0;
        (*this)[1] = m1;
        (*this)[2] = m2;
    }

    HLSLMATH_INLINE uint3x3(uint m00, uint m01, uint m02,
                  uint m10, uint m11, uint m12,
                  uint m20, uint m21, uint m22)
    {
        (*this)[0] = uint3(m00, m01, m02);
        (*this)[1] = uint3(m10, m11, m12);
        (*this)[2] = uint3(m20, m21, m22);
    }

    HLSLMATH_INLINE uint3x3(uint s)
    {
        (*this)[0] = uint3(s, s, s);
        (*this)[1] = uint3(s, s, s);
        (*this)[2] = uint3(s, s, s);
    }

public: // @region: Operators
    HLSLMATH_INLINE uint3& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint3*)data)[index];
    }

    HLSLMATH_INLINE const uint3& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint3*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        uint data[3][3];
    };
};

union uint4x4
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint4x4() {}

    HLSLMATH_INLINE uint4x4(const uint4& m0, const uint4& m1, const uint4& m2, const uint4& m3)
    {
        (*this)[0] = m0;
        (*this)[1] = m1;
        (*this)[2] = m2;
        (*this)[3] = m3;
    }

    HLSLMATH_INLINE uint4x4(uint m00, uint m01, uint m02, uint m03,
                   uint m10, uint m11, uint m12, uint m13,
                   uint m20, uint m21, uint m22, uint m23,
                   uint m30, uint m31, uint m32, uint m33)
    {
        (*this)[0] = uint4(m00, m01, m02, m03);
        (*this)[1] = uint4(m10, m11, m12, m13);
        (*this)[2] = uint4(m20, m21, m22, m23);
        (*this)[3] = uint4(m30, m31, m32, m33);
    }

    HLSLMATH_INLINE uint4x4(uint s)
    {
        (*this)[0] = uint4(s, s, s, s);
        (*this)[1] = uint4(s, s, s, s);
        (*this)[2] = uint4(s, s, s, s);
        (*this)[3] = uint4(s, s, s, s);
    }

public: // Constructors
    HLSLMATH_INLINE uint4& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint4*)data)[index];
    }

    HLSLMATH_INLINE const uint4& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint4*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        uint data[4][4];
    };
};

union bool2x2
{
public: // @region: Constructors
    inline bool2x2() {}

    inline bool2x2(const bool2& m0, const bool2& m1)
    {
		(*this)[0] = m0;
		(*this)[1] = m1;
    }

    inline bool2x2(bool m00, bool m01, bool m10, bool m11)
    {
        (*this)[0] = bool2(m00, m01);
        (*this)[1] = bool2(m10, m11);
    }

    inline bool2x2(bool s)
    {
        (*this)[0] = bool2(s, s);
        (*this)[1] = bool2(s, s);
    }

public: // @region: Operators
    inline bool2& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool2*)data)[index];
    }

    inline const bool2& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool2*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        bool data[2][2];
    };
};

union bool3x3
{
public: // @region: Constructors
    inline bool3x3() {}

    inline bool3x3(const bool3& m0, const bool3& m1, const bool3& m2)
    {
        (*this)[0] = m0;
        (*this)[1] = m1;
        (*this)[2] = m2;
    }

    inline bool3x3(bool m00, bool m01, bool m02,
                   bool m10, bool m11, bool m12,
                   bool m20, bool m21, bool m22)
    {
        (*this)[0] = bool3(m00, m01, m02);
        (*this)[1] = bool3(m10, m11, m12);
        (*this)[2] = bool3(m20, m21, m22);
    }

    inline bool3x3(bool s)
    {
        (*this)[0] = bool3(s, s, s);
        (*this)[1] = bool3(s, s, s);
        (*this)[2] = bool3(s, s, s);
    }

public: // @region: Operators
    inline bool3& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool3*)data)[index];
    }

    inline const bool3& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool3*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        bool data[3][3];
    };
};

union bool4x4
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR bool4x4() {}

    HLSLMATH_INLINE bool4x4(const bool4& m0, const bool4& m1, const bool4& m2, const bool4& m3)
    {
        (*this)[0] = m0;
        (*this)[1] = m1;
        (*this)[2] = m2;
        (*this)[3] = m3;
    }

    HLSLMATH_INLINE bool4x4(bool m00, bool m01, bool m02, bool m03,
                   bool m10, bool m11, bool m12, bool m13,
                   bool m20, bool m21, bool m22, bool m23,
                   bool m30, bool m31, bool m32, bool m33)
    {
        (*this)[0] = bool4(m00, m01, m02, m03);
        (*this)[1] = bool4(m10, m11, m12, m13);
        (*this)[2] = bool4(m20, m21, m22, m23);
        (*this)[3] = bool4(m30, m31, m32, m33);
    }

    HLSLMATH_INLINE bool4x4(bool s)
    {
        (*this)[0] = bool4(s, s, s, s);
        (*this)[1] = bool4(s, s, s, s);
        (*this)[2] = bool4(s, s, s, s);
        (*this)[3] = bool4(s, s, s, s);
    }

public: // Constructors
    HLSLMATH_INLINE bool4& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool4*)data)[index];
    }

    HLSLMATH_INLINE const bool4& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool4*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        bool data[4][4];
    };
};

union float2x2
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR float2x2() {}

	HLSLMATH_INLINE float2x2(const float2& m0, const float2& m1)
	{
		(*this)[0] = m0;
		(*this)[1] = m1;
	}

    HLSLMATH_INLINE float2x2(float m00, float m01, 
                    float m10, float m11)
    {
        (*this)[0] = float2(m00, m01);
        (*this)[1] = float2(m10, m11);
    }

    HLSLMATH_INLINE float2x2(float s)    
    {
        (*this)[0] = float2(s, s);
        (*this)[1] = float2(s, s);
    }

public: // @region: Operators
    HLSLMATH_INLINE float2& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float2*)data)[index];
    }

    HLSLMATH_INLINE const float2& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float2*)data)[index];
    }
   
public: // @region: Create functions
    HLSLMATH_INLINE static float2x2 identity()
    {
        return float2x2(1, 0, 0, 1);
    }

public: // @region: Graphics functions
    static float2x2 rotation(float angle);

    static float2x2 scalation(float x);
    static float2x2 scalation(const float2& v);
    static float2x2 scalation(float x, float y);
    
private: // @region: Internal fields
    struct
    {
        float data[2][2];
    };
};
union float3x3
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR float3x3() {}

	HLSLMATH_INLINE float3x3(const float3& m0, const float3& m1, const float3& m2)
	{
		(*this)[0] = m0;
		(*this)[1] = m1;
		(*this)[2] = m2;
	}

    HLSLMATH_INLINE float3x3(float m00, float m01, float m02,
                    float m10, float m11, float m12,
                    float m20, float m21, float m22)
    {
        (*this)[0] = float3(m00, m01, m02);
        (*this)[1] = float3(m10, m11, m12);
        (*this)[2] = float3(m20, m21, m22);
    }

    HLSLMATH_INLINE float3x3(float s)
    {
        (*this)[0] = float3(s, s, s);
        (*this)[1] = float3(s, s, s);
        (*this)[2] = float3(s, s, s);
    }
    
public: // @region: Operators
    HLSLMATH_INLINE float3& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float3*)data)[index];
    }

    HLSLMATH_INLINE const float3& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float3*)data)[index];
    }

public: // @region: Create functions
    HLSLMATH_INLINE static float3x3 identity()
    {
        return float3x3(1, 0, 0, 0, 1, 0, 0, 0, 1);
    }

public: // @region: Graphics functions
    static float3x3 translation(const float2& v);
    static float3x3 translation(float x, float y);

    static float3x3 rotation(float angle);

    static float3x3 scalation(const float2& v);
    static float3x3 scalation(float x, float y);

    static float3x3 ortho(float l, float r, float b, float t);
    
private: // @region: Internal fields
    struct
    {
        float data[3][3];
    };
};

union float4x4
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR float4x4() {}

	HLSLMATH_INLINE float4x4(const float4& m0, const float4& m1, const float4& m2, const float4& m3)
	{
		(*this)[0] = m0;
		(*this)[1] = m1;
		(*this)[2] = m2;
		(*this)[3] = m3;
	}
    
    HLSLMATH_INLINE float4x4(float m00, float m01, float m02, float m03,
                    float m10, float m11, float m12, float m13,
                    float m20, float m21, float m22, float m23,
                    float m30, float m31, float m32, float m33)
    {
        (*this)[0] = float4(m00, m01, m02, m03);
        (*this)[1] = float4(m10, m11, m12, m13);
        (*this)[2] = float4(m20, m21, m22, m23);
        (*this)[3] = float4(m30, m31, m32, m33);
    }

    HLSLMATH_INLINE float4x4(float s)
    {
        (*this)[0] = float4(s, s, s, s);
        (*this)[1] = float4(s, s, s, s);
        (*this)[2] = float4(s, s, s, s);
        (*this)[3] = float4(s, s, s, s);
    }
    
public: // @region: Operators
    HLSLMATH_INLINE float4& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float4*)data)[index];
    }

    HLSLMATH_INLINE const float4& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float4*)data)[index];
    }

public: // @region: Constants
    HLSLMATH_INLINE static float4x4 identity()
    {
        return float4x4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
    }

public: // @region: Graphics functions
    static float4x4 scalation(float s);
    static float4x4 scalation(const float2& v);
    static float4x4 scalation(const float3& v);
    static float4x4 scalation(float x, float y, float z = 1.0f);

    static float4x4 translation(const float2& v);
    static float4x4 translation(const float3& v);
    static float4x4 translation(float x, float y, float z = 0.0f);

    static float4x4 rotation(const float4& quaternion);
    static float4x4 rotation(const float3& axis, float angle);
    static float4x4 rotation(float x, float y, float z, float angle);

    static float4x4 rotation_x(float angle);
    static float4x4 rotation_y(float angle);
    static float4x4 rotation_z(float angle);

    static void     decompose(const float4x4& m, float3* scalation, float4* quaternion, float3* translation);
    static void     decompose(const float4x4& m, float3* scalation, float3* axis, float* angle, float3* translation);

    static float4x4 lookat(const float3& eye, const float3& target, const float3& up);

    static float4x4 ortho(float l, float r, float b, float t, float n, float f);
    static float4x4 frustum(float l, float r, float b, float t, float n, float f);
    static float4x4 perspective(float fov, float aspect, float znear, float zfar);
    
private: // @region: Internal fields
    struct
    {
        float data[4][4];
    };
};
HLSLMATH_INLINE int2 operator-(const int2& v)
{
    return int2(-v.x, -v.y);
}

HLSLMATH_INLINE int2& operator++(int2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

HLSLMATH_INLINE int2& operator--(int2& v)
{
    --v.x;
    --v.y;
    return v;
}

HLSLMATH_INLINE int2 operator++(int2& v, int)
{
    const int2 result = v;
    v.x++;
    v.y++;
    return result;
}

HLSLMATH_INLINE int2 operator--(int2& v, int)
{
    const int2 result = v;
    v.x--;
    v.y--;
    return result;
}

HLSLMATH_INLINE int2 operator+(const int2& a, const int2& b)
{
    return int2(a.x + b.x, a.y + b.y);
}

HLSLMATH_INLINE int2 operator-(const int2& a, const int2& b)
{
    return int2(a.x - b.x, a.y - b.y);
}

HLSLMATH_INLINE int2 operator*(const int2& a, const int2& b)
{
    return int2(a.x * b.x, a.y * b.y);
}

HLSLMATH_INLINE int2 operator/(const int2& a, const int2& b)
{
    return int2(a.x / b.x, a.y / b.y);
}

HLSLMATH_INLINE int2 operator+(const int2& a, int b)
{
    return int2(a.x + b, a.y + b);
}

HLSLMATH_INLINE int2 operator-(const int2& a, int b)
{
    return int2(a.x - b, a.y - b);
}

HLSLMATH_INLINE int2 operator*(const int2& a, int b)
{
    return int2(a.x * b, a.y * b);
}

HLSLMATH_INLINE int2 operator/(const int2& a, int b)
{
    return int2(a.x / b, a.y / b);
}

HLSLMATH_INLINE int2 operator+(int a, const int2& b)
{
    return int2(a + b.x, a + b.y);
}

HLSLMATH_INLINE int2 operator-(int a, const int2& b)
{
    return int2(a - b.x, a - b.y);
}

HLSLMATH_INLINE int2 operator*(int a, const int2& b)
{
    return int2(a * b.x, a * b.y);
}

HLSLMATH_INLINE int2 operator/(int a, const int2& b)
{
    return int2(a / b.x, a / b.y);
}

HLSLMATH_INLINE int2& operator+=(int2& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int2& operator-=(int2& a, int b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int2& operator*=(int2& a, int b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int2& operator/=(int2& a, int b)
{
    return (a = a / b);
}

HLSLMATH_INLINE int2& operator+=(int2& a, const int2& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int2& operator-=(int2& a, const int2& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int2& operator*=(int2& a, const int2& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int2& operator/=(int2& a, const int2& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool2 operator<(const int2& a, const int2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

HLSLMATH_INLINE bool2 operator>(const int2& a, const int2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

HLSLMATH_INLINE bool2 operator<=(const int2& a, const int2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

HLSLMATH_INLINE bool2 operator>=(const int2& a, const int2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

HLSLMATH_INLINE bool2 operator==(const int2& a, const int2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

HLSLMATH_INLINE bool2 operator!=(const int2& a, const int2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}
HLSLMATH_INLINE int3 operator-(const int3& v)
{
    return int3(-v.x, -v.y, -v.z);
}

HLSLMATH_INLINE int3& operator++(int3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

HLSLMATH_INLINE int3& operator--(int3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

HLSLMATH_INLINE int3 operator++(int3& v, int)
{
    const int3 result = v;
    v.x++;
    v.y++;
    v.z++;
    return result;
}

HLSLMATH_INLINE int3 operator--(int3& v, int)
{
    const int3 result = v;
    v.x--;
    v.y--;
    v.z--;
    return result;
}

HLSLMATH_INLINE int3 operator+(const int3& a, const int3& b)
{
    return int3(a.x + b.x, a.y + b.y, a.z + b.z);
}

HLSLMATH_INLINE int3 operator-(const int3& a, const int3& b)
{
    return int3(a.x - b.x, a.y - b.y, a.z - b.z);
}

HLSLMATH_INLINE int3 operator*(const int3& a, const int3& b)
{
    return int3(a.x * b.x, a.y * b.y, a.z * b.z);
}

HLSLMATH_INLINE int3 operator/(const int3& a, const int3& b)
{
    return int3(a.x / b.x, a.y / b.y, a.z / b.z);
}

HLSLMATH_INLINE int3 operator+(const int3& a, int b)
{
    return int3(a.x + b, a.y + b, a.z + b);
}

HLSLMATH_INLINE int3 operator-(const int3& a, int b)
{
    return int3(a.x - b, a.y - b, a.z - b);
}

HLSLMATH_INLINE int3 operator*(const int3& a, int b)
{
    return int3(a.x * b, a.y * b, a.z * b);
}

HLSLMATH_INLINE int3 operator/(const int3& a, int b)
{
    return int3(a.x / b, a.y / b, a.z / b);
}

HLSLMATH_INLINE int3 operator+(int a, const int3& b)
{
    return int3(a + b.x, a + b.y, a + b.z);
}

HLSLMATH_INLINE int3 operator-(int a, const int3& b)
{
    return int3(a - b.x, a - b.y, a - b.z);
}

HLSLMATH_INLINE int3 operator*(int a, const int3& b)
{
    return int3(a * b.x, a * b.y, a * b.z);
}

HLSLMATH_INLINE int3 operator/(int a, const int3& b)
{
    return int3(a / b.x, a / b.y, a / b.z);
}

HLSLMATH_INLINE int3& operator+=(int3& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int3& operator-=(int3& a, int b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int3& operator*=(int3& a, int b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int3& operator/=(int3& a, int b)
{
    return (a = a / b);
}

HLSLMATH_INLINE int3& operator+=(int3& a, const int3& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int3& operator-=(int3& a, const int3& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int3& operator*=(int3& a, const int3& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int3& operator/=(int3& a, const int3& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool3 operator<(const int3& a, const int3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

HLSLMATH_INLINE bool3 operator>(const int3& a, const int3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

HLSLMATH_INLINE bool3 operator<=(const int3& a, const int3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

HLSLMATH_INLINE bool3 operator>=(const int3& a, const int3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}

HLSLMATH_INLINE bool3 operator==(const int3& a, const int3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

HLSLMATH_INLINE bool3 operator!=(const int3& a, const int3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}
HLSLMATH_INLINE int4 operator-(const int4& v)
{
    return int4(-v.x, -v.y, -v.z, -v.w);
}

HLSLMATH_INLINE int4& operator++(int4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

HLSLMATH_INLINE int4& operator--(int4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

HLSLMATH_INLINE int4 operator++(int4& v, int)
{
    const int4 result = v;
    v.x++;
    v.y++;
    v.z++;
    v.w++;
    return result;
}

HLSLMATH_INLINE int4 operator--(int4& v, int)
{
    const int4 result = v;
    v.x--;
    v.y--;
    v.z--;
    v.w--;
    return result;
}

HLSLMATH_INLINE int4 operator+(const int4& a, const int4& b)
{
    return int4(a.x + b.x, a.y + b.y, a.z + b.z, a.w / b.w);
}

HLSLMATH_INLINE int4 operator-(const int4& a, const int4& b)
{
    return int4(a.x - b.x, a.y - b.y, a.z - b.z, a.w / b.w);
}

HLSLMATH_INLINE int4 operator*(const int4& a, const int4& b)
{
    return int4(a.x * b.x, a.y * b.y, a.z * b.z, a.w / b.w);
}

HLSLMATH_INLINE int4 operator/(const int4& a, const int4& b)
{
    return int4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

HLSLMATH_INLINE int4 operator+(const int4& a, int b)
{
    return int4(a.x + b, a.y + b, a.z + b, a.w + b);
}

HLSLMATH_INLINE int4 operator-(const int4& a, int b)
{
    return int4(a.x - b, a.y - b, a.z - b, a.w - b);
}

HLSLMATH_INLINE int4 operator*(const int4& a, int b)
{
    return int4(a.x * b, a.y * b, a.z * b, a.w * b);
}

HLSLMATH_INLINE int4 operator/(const int4& a, int b)
{
    return int4(a.x / b, a.y / b, a.z / b, a.w / b);
}

HLSLMATH_INLINE int4 operator+(int a, const int4& b)
{
    return int4(a + b.x, a + b.y, a + b.z, a + b.w);
}

HLSLMATH_INLINE int4 operator-(int a, const int4& b)
{
    return int4(a - b.x, a - b.y, a - b.z, a - b.w);
}

HLSLMATH_INLINE int4 operator*(int a, const int4& b)
{
    return int4(a * b.x, a * b.y, a * b.z, a * b.w);
}

HLSLMATH_INLINE int4 operator/(int a, const int4& b)
{
    return int4(a / b.x, a / b.y, a / b.z, a / b.w);
}

HLSLMATH_INLINE int4& operator+=(int4& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int4& operator-=(int4& a, int b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int4& operator*=(int4& a, int b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int4& operator/=(int4& a, int b)
{
    return (a = a / b);
}

HLSLMATH_INLINE int4& operator+=(int4& a, const int4& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int4& operator-=(int4& a, const int4& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int4& operator*=(int4& a, const int4& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int4& operator/=(int4& a, const int4& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool4 operator<(const int4& a, const int4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

HLSLMATH_INLINE bool4 operator>(const int4& a, const int4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

HLSLMATH_INLINE bool4 operator<=(const int4& a, const int4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

HLSLMATH_INLINE bool4 operator>=(const int4& a, const int4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

HLSLMATH_INLINE bool4 operator==(const int4& a, const int4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

HLSLMATH_INLINE bool4 operator!=(const int4& a, const int4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}
HLSLMATH_INLINE uint2& operator++(uint2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

HLSLMATH_INLINE uint2& operator--(uint2& v)
{
    --v.x;
    --v.y;
    return v;
}

HLSLMATH_INLINE uint2 operator++(uint2& v, int)
{
    const uint2 result = v;
    v.x++;
    v.y++;
    return result;
}

HLSLMATH_INLINE uint2 operator--(uint2& v, int)
{
    const uint2 result = v;
    v.x--;
    v.y--;
    return result;
}

HLSLMATH_INLINE uint2 operator+(const uint2& a, const uint2& b)
{
    return uint2(a.x + b.x, a.y + b.y);
}

HLSLMATH_INLINE uint2 operator-(const uint2& a, const uint2& b)
{
    return uint2(a.x - b.x, a.y - b.y);
}

HLSLMATH_INLINE uint2 operator*(const uint2& a, const uint2& b)
{
    return uint2(a.x * b.x, a.y * b.y);
}

HLSLMATH_INLINE uint2 operator/(const uint2& a, const uint2& b)
{
    return uint2(a.x / b.x, a.y / b.y);
}

HLSLMATH_INLINE uint2 operator+(const uint2& a, uint b)
{
    return uint2(a.x + b, a.y + b);
}

HLSLMATH_INLINE uint2 operator-(const uint2& a, uint b)
{
    return uint2(a.x - b, a.y - b);
}

HLSLMATH_INLINE uint2 operator*(const uint2& a, uint b)
{
    return uint2(a.x * b, a.y * b);
}

HLSLMATH_INLINE uint2 operator/(const uint2& a, uint b)
{
    return uint2(a.x / b, a.y / b);
}

HLSLMATH_INLINE uint2 operator+(uint a, const uint2& b)
{
    return uint2(a + b.x, a + b.y);
}

HLSLMATH_INLINE uint2 operator-(uint a, const uint2& b)
{
    return uint2(a - b.x, a - b.y);
}

HLSLMATH_INLINE uint2 operator*(uint a, const uint2& b)
{
    return uint2(a * b.x, a * b.y);
}

HLSLMATH_INLINE uint2 operator/(uint a, const uint2& b)
{
    return uint2(a / b.x, a / b.y);
}

HLSLMATH_INLINE uint2& operator+=(uint2& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint2& operator-=(uint2& a, uint b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint2& operator*=(uint2& a, uint b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint2& operator/=(uint2& a, uint b)
{
    return (a = a / b);
}

HLSLMATH_INLINE uint2& operator+=(uint2& a, const uint2& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint2& operator-=(uint2& a, const uint2& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint2& operator*=(uint2& a, const uint2& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint2& operator/=(uint2& a, const uint2& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool2 operator<(const uint2& a, const uint2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

HLSLMATH_INLINE bool2 operator>(const uint2& a, const uint2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

HLSLMATH_INLINE bool2 operator<=(const uint2& a, const uint2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

HLSLMATH_INLINE bool2 operator>=(const uint2& a, const uint2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

HLSLMATH_INLINE bool2 operator==(const uint2& a, const uint2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

HLSLMATH_INLINE bool2 operator!=(const uint2& a, const uint2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}
HLSLMATH_INLINE uint3& operator++(uint3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

HLSLMATH_INLINE uint3& operator--(uint3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

HLSLMATH_INLINE uint3 operator++(uint3& v, int)
{
    const uint3 result = v;
    v.x++;
    v.y++;
    v.z++;
    return result;
}

HLSLMATH_INLINE uint3 operator--(uint3& v, int)
{
    const uint3 result = v;
    v.x--;
    v.y--;
    v.z--;
    return result;
}

HLSLMATH_INLINE uint3 operator+(const uint3& a, const uint3& b)
{
    return uint3(a.x + b.x, a.y + b.y, a.z + b.z);
}

HLSLMATH_INLINE uint3 operator-(const uint3& a, const uint3& b)
{
    return uint3(a.x - b.x, a.y - b.y, a.z - b.z);
}

HLSLMATH_INLINE uint3 operator*(const uint3& a, const uint3& b)
{
    return uint3(a.x * b.x, a.y * b.y, a.z * b.z);
}

HLSLMATH_INLINE uint3 operator/(const uint3& a, const uint3& b)
{
    return uint3(a.x / b.x, a.y / b.y, a.z / b.z);
}

HLSLMATH_INLINE uint3 operator+(const uint3& a, uint b)
{
    return uint3(a.x + b, a.y + b, a.z + b);
}

HLSLMATH_INLINE uint3 operator-(const uint3& a, uint b)
{
    return uint3(a.x - b, a.y - b, a.z - b);
}

HLSLMATH_INLINE uint3 operator*(const uint3& a, uint b)
{
    return uint3(a.x * b, a.y * b, a.z * b);
}

HLSLMATH_INLINE uint3 operator/(const uint3& a, uint b)
{
    return uint3(a.x / b, a.y / b, a.z / b);
}

HLSLMATH_INLINE uint3 operator+(uint a, const uint3& b)
{
    return uint3(a + b.x, a + b.y, a + b.z);
}

HLSLMATH_INLINE uint3 operator-(uint a, const uint3& b)
{
    return uint3(a - b.x, a - b.y, a - b.z);
}

HLSLMATH_INLINE uint3 operator*(uint a, const uint3& b)
{
    return uint3(a * b.x, a * b.y, a * b.z);
}

HLSLMATH_INLINE uint3 operator/(uint a, const uint3& b)
{
    return uint3(a / b.x, a / b.y, a / b.z);
}

HLSLMATH_INLINE uint3& operator+=(uint3& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint3& operator-=(uint3& a, uint b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint3& operator*=(uint3& a, uint b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint3& operator/=(uint3& a, uint b)
{
    return (a = a / b);
}

HLSLMATH_INLINE uint3& operator+=(uint3& a, const uint3& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint3& operator-=(uint3& a, const uint3& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint3& operator*=(uint3& a, const uint3& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint3& operator/=(uint3& a, const uint3& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool3 operator<(const uint3& a, const uint3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

HLSLMATH_INLINE bool3 operator>(const uint3& a, const uint3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

HLSLMATH_INLINE bool3 operator<=(const uint3& a, const uint3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

HLSLMATH_INLINE bool3 operator>=(const uint3& a, const uint3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}

HLSLMATH_INLINE bool3 operator==(const uint3& a, const uint3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

HLSLMATH_INLINE bool3 operator!=(const uint3& a, const uint3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}
HLSLMATH_INLINE uint4& operator++(uint4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

HLSLMATH_INLINE uint4& operator--(uint4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

HLSLMATH_INLINE uint4 operator++(uint4& v, int)
{
    const uint4 result = v;
    v.x++;
    v.y++;
    v.z++;
    v.w++;
    return result;
}

HLSLMATH_INLINE uint4 operator--(uint4& v, int)
{
    const uint4 result = v;
    v.x--;
    v.y--;
    v.z--;
    v.w--;
    return result;
}

HLSLMATH_INLINE uint4 operator+(const uint4& a, const uint4& b)
{
    return uint4(a.x + b.x, a.y + b.y, a.z + b.z, a.w / b.w);
}

HLSLMATH_INLINE uint4 operator-(const uint4& a, const uint4& b)
{
    return uint4(a.x - b.x, a.y - b.y, a.z - b.z, a.w / b.w);
}

HLSLMATH_INLINE uint4 operator*(const uint4& a, const uint4& b)
{
    return uint4(a.x * b.x, a.y * b.y, a.z * b.z, a.w / b.w);
}

HLSLMATH_INLINE uint4 operator/(const uint4& a, const uint4& b)
{
    return uint4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

HLSLMATH_INLINE uint4 operator+(const uint4& a, uint b)
{
    return uint4(a.x + b, a.y + b, a.z + b, a.w + b);
}

HLSLMATH_INLINE uint4 operator-(const uint4& a, uint b)
{
    return uint4(a.x - b, a.y - b, a.z - b, a.w - b);
}

HLSLMATH_INLINE uint4 operator*(const uint4& a, uint b)
{
    return uint4(a.x * b, a.y * b, a.z * b, a.w * b);
}

HLSLMATH_INLINE uint4 operator/(const uint4& a, uint b)
{
    return uint4(a.x / b, a.y / b, a.z / b, a.w / b);
}

HLSLMATH_INLINE uint4 operator+(uint a, const uint4& b)
{
    return uint4(a + b.x, a + b.y, a + b.z, a + b.w);
}

HLSLMATH_INLINE uint4 operator-(uint a, const uint4& b)
{
    return uint4(a - b.x, a - b.y, a - b.z, a - b.w);
}

HLSLMATH_INLINE uint4 operator*(uint a, const uint4& b)
{
    return uint4(a * b.x, a * b.y, a * b.z, a * b.w);
}

HLSLMATH_INLINE uint4 operator/(uint a, const uint4& b)
{
    return uint4(a / b.x, a / b.y, a / b.z, a / b.w);
}

HLSLMATH_INLINE uint4& operator+=(uint4& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint4& operator-=(uint4& a, uint b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint4& operator*=(uint4& a, uint b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint4& operator/=(uint4& a, uint b)
{
    return (a = a / b);
}

HLSLMATH_INLINE uint4& operator+=(uint4& a, const uint4& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint4& operator-=(uint4& a, const uint4& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint4& operator*=(uint4& a, const uint4& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint4& operator/=(uint4& a, const uint4& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool4 operator<(const uint4& a, const uint4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

HLSLMATH_INLINE bool4 operator>(const uint4& a, const uint4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

HLSLMATH_INLINE bool4 operator<=(const uint4& a, const uint4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

HLSLMATH_INLINE bool4 operator>=(const uint4& a, const uint4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

HLSLMATH_INLINE bool4 operator==(const uint4& a, const uint4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

HLSLMATH_INLINE bool4 operator!=(const uint4& a, const uint4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}
HLSLMATH_INLINE float2 operator-(const float2& v)
{
    return float2(-v.x, -v.y);
}

HLSLMATH_INLINE const float2& operator+(const float2& v)
{
    return v;
}

HLSLMATH_INLINE float2& operator--(float2& v)
{
    --v.x;
    --v.y;
    return v;
}

HLSLMATH_INLINE float2& operator++(float2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

HLSLMATH_INLINE float2 operator--(float2& v, int)
{
    const float2 result = v;

    v.x--;
    v.y--;
    
    return result;
}

HLSLMATH_INLINE float2 operator++(float2& v, int)
{
    const float2 result = v;

    v.x++;
    v.y++;
    
    return result;
}

HLSLMATH_INLINE float2 operator+(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vadd_f32(a, b));
#else
    return float2(a.x + b.x, a.y + b.y);
#endif
}

HLSLMATH_INLINE float2 operator-(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vsub_f32(a, b));
#else
    return float2(a.x - b.x, a.y - b.y);
#endif
}

HLSLMATH_INLINE float2 operator*(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vmul_f32(a, b));
#else
    return float2(a.x * b.x, a.y * b.y);
#endif
}

HLSLMATH_INLINE float2 operator/(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON && 0 // experimental
    float2 res;
    __asm volatile(
    "vcvt.f32.u32  q0, q0     \n\t"
    "vrecpe.f32    q0, q0     \n\t"
    "vmul.f32      q0, q0, q1 \n\t"
    "vcvt.u32.f32  q0, q0     \n\t"
        : 
        : "r"(dst), "r"()
        :
        );
#else
    return float2(a.x / b.x, a.y / b.y);
#endif
}

HLSLMATH_INLINE float2 operator+(const float2& a, float b)
{
    return a + float2(b);
}

HLSLMATH_INLINE float2 operator-(const float2& a, float b)
{
    return a - float2(b);
}

HLSLMATH_INLINE float2 operator*(const float2& a, float b)
{
    return a * float2(b);
}

HLSLMATH_INLINE float2 operator/(const float2& a, float b)
{
    return a / float2(b);
}

HLSLMATH_INLINE float2 operator+(float a, const float2& b)
{
    return float2(a) + b;
}

HLSLMATH_INLINE float2 operator-(float a, const float2& b)
{
    return float2(a) - b;
}

HLSLMATH_INLINE float2 operator*(float a, const float2& b)
{
    return float2(a) * b;
}

HLSLMATH_INLINE float2 operator/(float a, const float2& b)
{
    return float2(a) / b;
}

HLSLMATH_INLINE float2& operator+=(float2& a, const float2& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float2& operator+=(float2& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float2& operator-=(float2& a, const float2& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float2& operator-=(float2& a, float b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float2& operator*=(float2& a, const float2& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float2& operator*=(float2& a, float b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float2& operator/=(float2& a, const float2& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE float2& operator/=(float2& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool2 operator==(const float2& a, const float2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

HLSLMATH_INLINE bool2 operator!=(const float2& a, const float2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}

HLSLMATH_INLINE bool2 operator<(const float2& a, const float2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

HLSLMATH_INLINE bool2 operator>(const float2& a, const float2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

HLSLMATH_INLINE bool2 operator<=(const float2& a, const float2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

HLSLMATH_INLINE bool2 operator>=(const float2& a, const float2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}
HLSLMATH_INLINE float3 operator-(const float3& v)
{
    return float3(-v.x, -v.y, -v.z);
}

HLSLMATH_INLINE const float3& operator+(const float3& v)
{
    return v;
}

HLSLMATH_INLINE float3& operator--(float3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

HLSLMATH_INLINE float3& operator++(float3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

HLSLMATH_INLINE float3 operator--(float3& v, int)
{
    const float3 result = v;

    v.x--;
    v.y--;
    v.z--;

    return result;
}

HLSLMATH_INLINE float3 operator++(float3& v, int)
{
    const float3 result = v;

    v.x++;
    v.y++;
    v.z++;

    return result;
}

HLSLMATH_INLINE float3 operator+(const float3& a, const float3& b)
{
    return float3(a.x + b.x, a.y + b.y, a.z + b.z);
}

HLSLMATH_INLINE float3 operator-(const float3& a, const float3& b)
{
    return float3(a.x - b.x, a.y - b.y, a.z - b.z);
}

HLSLMATH_INLINE float3 operator*(const float3& a, const float3& b)
{
    return float3(a.x * b.x, a.y * b.y, a.z * b.z);
}

HLSLMATH_INLINE float3 operator/(const float3& a, const float3& b)
{
    return float3(a.x / b.x, a.y / b.y, a.z / b.z);
}

HLSLMATH_INLINE float3 operator+(const float3& a, float b)
{
    return float3(a.x + b, a.y + b, a.z + b);
}

HLSLMATH_INLINE float3 operator-(const float3& a, float b)
{
    return float3(a.x - b, a.y - b, a.z - b);
}

HLSLMATH_INLINE float3 operator*(const float3& a, float b)
{
    return float3(a.x * b, a.y * b, a.z * b);
}

HLSLMATH_INLINE float3 operator/(const float3& a, float b)
{
    return float3(a.x / b, a.y / b, a.z / b);
}

HLSLMATH_INLINE float3 operator+(float a, const float3& b)
{
    return float3(a + b.x, a + b.y, a + b.z);
}

HLSLMATH_INLINE float3 operator-(float a, const float3& b)
{
    return float3(a - b.x, a - b.y, a - b.z);
}

HLSLMATH_INLINE float3 operator*(float a, const float3& b)
{
    return float3(a * b.x, a * b.y, a * b.z);
}

HLSLMATH_INLINE float3 operator/(float a, const float3& b)
{
    return float3(a / b.x, a / b.y, a / b.z);
}

HLSLMATH_INLINE float3& operator+=(float3& a, const float3& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float3& operator+=(float3& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float3& operator-=(float3& a, const float3& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float3& operator-=(float3& a, float b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float3& operator*=(float3& a, const float3& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float3& operator*=(float3& a, float b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float3& operator/=(float3& a, const float3& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE float3& operator/=(float3& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool3 operator==(const float3& a, const float3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

HLSLMATH_INLINE bool3 operator!=(const float3& a, const float3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

HLSLMATH_INLINE bool3 operator<(const float3& a, const float3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

HLSLMATH_INLINE bool3 operator>(const float3& a, const float3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

HLSLMATH_INLINE bool3 operator<=(const float3& a, const float3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

HLSLMATH_INLINE bool3 operator>=(const float3& a, const float3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}
HLSLMATH_INLINE float4 operator-(const float4& v)
{
    return float4(-v.x, -v.y, -v.z, -v.w);
}

HLSLMATH_INLINE const float4& operator+(const float4& v)
{
    return v;
}

HLSLMATH_INLINE float4& operator--(float4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

HLSLMATH_INLINE float4& operator++(float4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

HLSLMATH_INLINE float4 operator--(float4& v, int)
{
    const float4 result = v;

    v.x--;
    v.y--;
    v.z--;
    v.w--;

    return result;
}

HLSLMATH_INLINE float4 operator++(float4& v, int)
{
    const float4 result = v;

    v.x++;
    v.y++;
    v.z++;
    v.w++;
    
    return result;
}

HLSLMATH_INLINE float4 operator+(const float4& a, const float4& b)
{
    return float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

HLSLMATH_INLINE float4 operator-(const float4& a, const float4& b)
{
    return float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

HLSLMATH_INLINE float4 operator*(const float4& a, const float4& b)
{
    return float4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

HLSLMATH_INLINE float4 operator/(const float4& a, const float4& b)
{
    return float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

HLSLMATH_INLINE float4 operator+(const float4& a, float b)
{
    return float4(a.x + b, a.y + b, a.z + b, a.w + b);
}

HLSLMATH_INLINE float4 operator-(const float4& a, float b)
{
    return float4(a.x - b, a.y - b, a.z - b, a.w - b);
}

HLSLMATH_INLINE float4 operator*(const float4& a, float b)
{
    return float4(a.x * b, a.y * b, a.z * b, a.w * b);
}

HLSLMATH_INLINE float4 operator/(const float4& a, float b)
{
    return float4(a.x / b, a.y / b, a.z / b, a.w / b);
}

HLSLMATH_INLINE float4 operator+(float a, const float4& b)
{
    return float4(a + b.x, a + b.y, a + b.z, a + b.w);
}

HLSLMATH_INLINE float4 operator-(float a, const float4& b)
{
    return float4(a - b.x, a - b.y, a - b.z, a - b.w);
}

HLSLMATH_INLINE float4 operator*(float a, const float4& b)
{
    return float4(a * b.x, a * b.y, a * b.z, a * b.w);
}

HLSLMATH_INLINE float4 operator/(float a, const float4& b)
{
    return float4(a / b.x, a / b.y, a / b.z, a / b.w);
}

HLSLMATH_INLINE float4& operator+=(float4& a, const float4& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float4& operator+=(float4& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float4& operator-=(float4& a, const float4& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float4& operator-=(float4& a, float b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float4& operator*=(float4& a, const float4& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float4& operator*=(float4& a, float b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float4& operator/=(float4& a, const float4& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE float4& operator/=(float4& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool4 operator==(const float4& a, const float4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

HLSLMATH_INLINE bool4 operator!=(const float4& a, const float4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}

HLSLMATH_INLINE bool4 operator<(const float4& a, const float4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

HLSLMATH_INLINE bool4 operator>(const float4& a, const float4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

HLSLMATH_INLINE bool4 operator<=(const float4& a, const float4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

HLSLMATH_INLINE bool4 operator>=(const float4& a, const float4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}
HLSLMATH_INLINE int2x2 operator-(const int2x2& m)
{
    return int2x2(
        -m[0][0], -m[0][1],
        -m[1][0], -m[1][1]);
}

HLSLMATH_INLINE int2x2& operator++(int2x2& m)
{
    ++m[0][0]; ++m[0][1];
    ++m[1][0]; ++m[1][1];
    return m;
}

HLSLMATH_INLINE int2x2& operator--(int2x2& m)
{
    --m[0][0]; --m[0][1];
    --m[1][0]; --m[1][1];
    return m;
}

HLSLMATH_INLINE int2x2 operator++(int2x2& m, int)
{
    const int2x2 result = m;
    ++m;
    return result;
}

HLSLMATH_INLINE int2x2 operator--(int2x2& m, int)
{
    const int2x2 result = m;
    --m;
    return result;
}

HLSLMATH_INLINE int2x2 operator+(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] + b[0][0], a[0][1] + b[0][1],
        a[1][0] + b[1][0], a[1][1] + b[1][1]);
}

HLSLMATH_INLINE int2x2 operator-(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] - b[0][0], a[0][1] - b[0][1],
        a[1][0] - b[1][0], a[1][1] - b[1][1]);
}

HLSLMATH_INLINE int2x2 operator*(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] * b[0][0], a[0][1] * b[0][1],
        a[1][0] * b[1][0], a[1][1] * b[1][1]);
}

HLSLMATH_INLINE int2x2 operator/(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] / b[0][0], a[0][1] / b[0][1],
        a[1][0] / b[1][0], a[1][1] / b[1][1]);
}

HLSLMATH_INLINE int2x2 operator+(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] + b, a[0][1] + b,
        a[1][0] + b, a[1][1] + b);
}

HLSLMATH_INLINE int2x2 operator-(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] - b, a[0][1] - b,
        a[1][0] - b, a[1][1] - b);
}

HLSLMATH_INLINE int2x2 operator*(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] * b, a[0][1] * b,
        a[1][0] * b, a[1][1] * b);
}

HLSLMATH_INLINE int2x2 operator/(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] / b, a[0][1] / b,
        a[1][0] / b, a[1][1] / b);
}

HLSLMATH_INLINE int2x2 operator+(int a, const int2x2& b)
{
    return int2x2(
        a + b[0][0], a + b[0][1],
        a + b[1][0], a + b[1][1]);   
}

HLSLMATH_INLINE int2x2 operator-(int a, const int2x2& b)
{
    return int2x2(
        a - b[0][0], a - b[0][1],
        a - b[1][0], a - b[1][1]);   
}

HLSLMATH_INLINE int2x2 operator*(int a, const int2x2& b)
{
    return int2x2(
        a * b[0][0], a * b[0][1],
        a * b[1][0], a * b[1][1]);   
}

HLSLMATH_INLINE int2x2 operator/(int a, const int2x2& b)
{
    return int2x2(
        a / b[0][0], a / b[0][1],
        a / b[1][0], a / b[1][1]);   
}

HLSLMATH_INLINE int2x2& operator+=(int2x2& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int2x2& operator-=(int2x2& a, int b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int2x2& operator*=(int2x2& a, int b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int2x2& operator/=(int2x2& a, int b)
{
    return (a = a / b);
}

HLSLMATH_INLINE int2x2& operator+=(int2x2& a, const int2x2& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int2x2& operator-=(int2x2& a, const int2x2& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int2x2& operator*=(int2x2& a, const int2x2& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int2x2& operator/=(int2x2& a, const int2x2& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool2x2 operator<(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] < b[0][0], a[0][1] < b[0][1],
        a[1][0] < b[1][0], a[1][1] < b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator>(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] > b[0][0], a[0][1] > b[0][1],
        a[1][0] > b[1][0], a[1][1] > b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator<=(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] <= b[0][0], a[0][1] <= b[0][1],
        a[1][0] <= b[1][0], a[1][1] <= b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator>=(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] >= b[0][0], a[0][1] >= b[0][1],
        a[1][0] >= b[1][0], a[1][1] >= b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator==(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] == b[0][0], a[0][1] == b[0][1],
        a[1][0] == b[1][0], a[1][1] == b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator!=(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] != b[0][0], a[0][1] != b[0][1],
        a[1][0] != b[1][0], a[1][1] != b[1][1]);
}
HLSLMATH_INLINE int3x3 operator-(const int3x3& m)
{
    int3x3 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    return result;
}

HLSLMATH_INLINE const int3x3& operator+(const int3x3& m)
{
    return m;
}

HLSLMATH_INLINE int3x3& operator--(int3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

HLSLMATH_INLINE int3x3& operator++(int3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

HLSLMATH_INLINE const int3x3& operator--(int3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

HLSLMATH_INLINE const int3x3& operator++(int3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

HLSLMATH_INLINE int3x3 operator+(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

HLSLMATH_INLINE int3x3 operator-(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

HLSLMATH_INLINE int3x3 operator*(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

HLSLMATH_INLINE int3x3 operator/(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

HLSLMATH_INLINE int3x3 operator+(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

HLSLMATH_INLINE int3x3 operator-(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

HLSLMATH_INLINE int3x3 operator*(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

HLSLMATH_INLINE int3x3 operator/(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

HLSLMATH_INLINE int3x3 operator+(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

HLSLMATH_INLINE int3x3 operator-(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

HLSLMATH_INLINE int3x3 operator*(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

HLSLMATH_INLINE int3x3 operator/(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

HLSLMATH_INLINE int3x3& operator+=(int3x3& a, const int3x3& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int3x3& operator+=(int3x3& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int3x3& operator-=(int3x3& a, const int3x3& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int3x3& operator-=(int3x3& a, int b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int3x3& operator*=(int3x3& a, const int3x3& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int3x3& operator*=(int3x3& a, int b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int3x3& operator/=(int3x3& a, const int3x3& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE int3x3& operator/=(int3x3& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool3x3 operator==(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator!=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator<(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator>(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator<=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator>=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    return result;
}
HLSLMATH_INLINE int4x4 operator-(const int4x4& m)
{
    int4x4 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    result[3] = -m[3];
    return result;
}

HLSLMATH_INLINE const int4x4& operator+(const int4x4& m)
{
    return m;
}

HLSLMATH_INLINE int4x4& operator--(int4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

HLSLMATH_INLINE int4x4& operator++(int4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

HLSLMATH_INLINE const int4x4& operator--(int4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

HLSLMATH_INLINE const int4x4& operator++(int4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
}

HLSLMATH_INLINE int4x4 operator+(const int4x4& a, const int4x4& b)
{
    int4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

HLSLMATH_INLINE int4x4 operator+(const int4x4& a, int b)
{
    int4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

HLSLMATH_INLINE int4x4 operator+(int a, const int4x4& b)
{
    int4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
    return result;
}

HLSLMATH_INLINE int4x4 operator-(const int4x4& a, const int4x4& b)
{
    int4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

HLSLMATH_INLINE int4x4 operator-(const int4x4& a, int b)
{
    int4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

HLSLMATH_INLINE int4x4 operator-(int a, const int4x4& b)
{
    int4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
    return result;
}

HLSLMATH_INLINE int4x4 operator*(const int4x4& a, const int4x4& b)
{
    int4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

HLSLMATH_INLINE int4x4 operator*(const int4x4& a, int b)
{
    int4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

HLSLMATH_INLINE int4x4 operator*(int a, const int4x4& b)
{
    int4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

HLSLMATH_INLINE int4x4 operator/(const int4x4& a, const int4x4& b)
{
    int4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

HLSLMATH_INLINE int4x4 operator/(const int4x4& a, int b)
{
    int4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

HLSLMATH_INLINE int4x4 operator/(int a, const int4x4& b)
{
    int4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

HLSLMATH_INLINE int4x4& operator+=(int4x4& a, const int4x4& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int4x4& operator+=(int4x4& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE int4x4& operator-=(int4x4& a, const int4x4& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int4x4& operator-=(int4x4& a, int b)
{
    return (a = a - b);
}

HLSLMATH_INLINE int4x4& operator*=(int4x4& a, const int4x4& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int4x4& operator*=(int4x4& a, int b)
{
    return (a = a * b);
}

HLSLMATH_INLINE int4x4& operator/=(int4x4& a, const int4x4& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE int4x4& operator/=(int4x4& a, int b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool4x4 operator==(const int4x4& a, const int4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator!=(const int4x4& a, const int4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator<(const int4x4& a, const int4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator>(const int4x4& a, const int4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator<=(const int4x4& a, const int4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator>=(const int4x4& a, const int4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
    return result;
}
HLSLMATH_INLINE uint2x2& operator++(uint2x2& m)
{
    ++m[0][0]; ++m[0][1];
    ++m[1][0]; ++m[1][1];
    return m;
}

HLSLMATH_INLINE uint2x2& operator--(uint2x2& m)
{
    --m[0][0]; --m[0][1];
    --m[1][0]; --m[1][1];
    return m;
}

HLSLMATH_INLINE uint2x2 operator++(uint2x2& m, int)
{
    const uint2x2 result = m;
    ++m;
    return result;
}

HLSLMATH_INLINE uint2x2 operator--(uint2x2& m, int)
{
    const uint2x2 result = m;
    --m;
    return result;
}

HLSLMATH_INLINE uint2x2 operator+(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] + b[0][0], a[0][1] + b[0][1],
        a[1][0] + b[1][0], a[1][1] + b[1][1]);
}

HLSLMATH_INLINE uint2x2 operator-(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] - b[0][0], a[0][1] - b[0][1],
        a[1][0] - b[1][0], a[1][1] - b[1][1]);
}

HLSLMATH_INLINE uint2x2 operator*(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] * b[0][0], a[0][1] * b[0][1],
        a[1][0] * b[1][0], a[1][1] * b[1][1]);
}

HLSLMATH_INLINE uint2x2 operator/(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] / b[0][0], a[0][1] / b[0][1],
        a[1][0] / b[1][0], a[1][1] / b[1][1]);
}

HLSLMATH_INLINE uint2x2 operator+(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] + b, a[0][1] + b,
        a[1][0] + b, a[1][1] + b);
}

HLSLMATH_INLINE uint2x2 operator-(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] - b, a[0][1] - b,
        a[1][0] - b, a[1][1] - b);
}

HLSLMATH_INLINE uint2x2 operator*(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] * b, a[0][1] * b,
        a[1][0] * b, a[1][1] * b);
}

HLSLMATH_INLINE uint2x2 operator/(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] / b, a[0][1] / b,
        a[1][0] / b, a[1][1] / b);
}

HLSLMATH_INLINE uint2x2 operator+(uint a, const uint2x2& b)
{
    return uint2x2(
        a + b[0][0], a + b[0][1],
        a + b[1][0], a + b[1][1]);   
}

HLSLMATH_INLINE uint2x2 operator-(uint a, const uint2x2& b)
{
    return uint2x2(
        a - b[0][0], a - b[0][1],
        a - b[1][0], a - b[1][1]);   
}

HLSLMATH_INLINE uint2x2 operator*(uint a, const uint2x2& b)
{
    return uint2x2(
        a * b[0][0], a * b[0][1],
        a * b[1][0], a * b[1][1]);   
}

HLSLMATH_INLINE uint2x2 operator/(uint a, const uint2x2& b)
{
    return uint2x2(
        a / b[0][0], a / b[0][1],
        a / b[1][0], a / b[1][1]);   
}

HLSLMATH_INLINE uint2x2& operator+=(uint2x2& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint2x2& operator-=(uint2x2& a, uint b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint2x2& operator*=(uint2x2& a, uint b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint2x2& operator/=(uint2x2& a, uint b)
{
    return (a = a / b);
}

HLSLMATH_INLINE uint2x2& operator+=(uint2x2& a, const uint2x2& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint2x2& operator-=(uint2x2& a, const uint2x2& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint2x2& operator*=(uint2x2& a, const uint2x2& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint2x2& operator/=(uint2x2& a, const uint2x2& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE bool2x2 operator<(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] < b[0][0], a[0][1] < b[0][1],
        a[1][0] < b[1][0], a[1][1] < b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator>(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] > b[0][0], a[0][1] > b[0][1],
        a[1][0] > b[1][0], a[1][1] > b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator<=(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] <= b[0][0], a[0][1] <= b[0][1],
        a[1][0] <= b[1][0], a[1][1] <= b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator>=(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] >= b[0][0], a[0][1] >= b[0][1],
        a[1][0] >= b[1][0], a[1][1] >= b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator==(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] == b[0][0], a[0][1] == b[0][1],
        a[1][0] == b[1][0], a[1][1] == b[1][1]);
}

HLSLMATH_INLINE bool2x2 operator!=(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] != b[0][0], a[0][1] != b[0][1],
        a[1][0] != b[1][0], a[1][1] != b[1][1]);
}
HLSLMATH_INLINE const uint3x3& operator+(const uint3x3& m)
{
    return m;
}

HLSLMATH_INLINE uint3x3& operator--(uint3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

HLSLMATH_INLINE uint3x3& operator++(uint3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

HLSLMATH_INLINE const uint3x3& operator--(uint3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

HLSLMATH_INLINE const uint3x3& operator++(uint3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

HLSLMATH_INLINE uint3x3 operator+(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

HLSLMATH_INLINE uint3x3 operator-(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

HLSLMATH_INLINE uint3x3 operator*(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

HLSLMATH_INLINE uint3x3 operator/(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

HLSLMATH_INLINE uint3x3 operator+(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

HLSLMATH_INLINE uint3x3 operator-(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

HLSLMATH_INLINE uint3x3 operator*(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

HLSLMATH_INLINE uint3x3 operator/(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

HLSLMATH_INLINE uint3x3 operator+(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

HLSLMATH_INLINE uint3x3 operator-(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

HLSLMATH_INLINE uint3x3 operator*(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

HLSLMATH_INLINE uint3x3 operator/(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

HLSLMATH_INLINE uint3x3& operator+=(uint3x3& a, const uint3x3& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint3x3& operator+=(uint3x3& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint3x3& operator-=(uint3x3& a, const uint3x3& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint3x3& operator-=(uint3x3& a, uint b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint3x3& operator*=(uint3x3& a, const uint3x3& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint3x3& operator*=(uint3x3& a, uint b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint3x3& operator/=(uint3x3& a, const uint3x3& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE uint3x3& operator/=(uint3x3& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool3x3 operator==(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator!=(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator<(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator>(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator<=(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator>=(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    return result;
}
HLSLMATH_INLINE const uint4x4& operator+(const uint4x4& m)
{
    return m;
}

HLSLMATH_INLINE uint4x4& operator--(uint4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

HLSLMATH_INLINE uint4x4& operator++(uint4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

HLSLMATH_INLINE const uint4x4& operator--(uint4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

HLSLMATH_INLINE const uint4x4& operator++(uint4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
}

HLSLMATH_INLINE uint4x4 operator+(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

HLSLMATH_INLINE uint4x4 operator+(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

HLSLMATH_INLINE uint4x4 operator+(uint a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
    return result;
}

HLSLMATH_INLINE uint4x4 operator-(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

HLSLMATH_INLINE uint4x4 operator-(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

HLSLMATH_INLINE uint4x4 operator-(uint a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
    return result;
}

HLSLMATH_INLINE uint4x4 operator*(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

HLSLMATH_INLINE uint4x4 operator*(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

HLSLMATH_INLINE uint4x4 operator*(uint a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

HLSLMATH_INLINE uint4x4 operator/(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

HLSLMATH_INLINE uint4x4 operator/(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

HLSLMATH_INLINE uint4x4 operator/(int a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

HLSLMATH_INLINE uint4x4& operator+=(uint4x4& a, const uint4x4& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint4x4& operator+=(uint4x4& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE uint4x4& operator-=(uint4x4& a, const uint4x4& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint4x4& operator-=(uint4x4& a, uint b)
{
    return (a = a - b);
}

HLSLMATH_INLINE uint4x4& operator*=(uint4x4& a, const uint4x4& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint4x4& operator*=(uint4x4& a, uint b)
{
    return (a = a * b);
}

HLSLMATH_INLINE uint4x4& operator/=(uint4x4& a, const uint4x4& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE uint4x4& operator/=(uint4x4& a, uint b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool4x4 operator==(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator!=(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator<(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator>(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator<=(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator>=(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
    return result;
}
HLSLMATH_INLINE float2x2 operator-(const float2x2& m)
{
    float2x2 result;
    result[0] = -m[0];
    result[1] = -m[1];
    return result;
}

HLSLMATH_INLINE const float2x2& operator+(const float2x2& m)
{
    return m;
}

HLSLMATH_INLINE float2x2& operator--(float2x2& m)
{
    --m[0];
    --m[1];
    return m;
}

HLSLMATH_INLINE float2x2& operator++(float2x2& m)
{
    ++m[0];
    ++m[1];
    return m;
}

HLSLMATH_INLINE const float2x2& operator--(float2x2& m, int)
{
    m[0]--;
    m[1]--;
    return m;
}

HLSLMATH_INLINE const float2x2& operator++(float2x2& m, int)
{
    m[0]++;
    m[1]++;
    return m;
}

HLSLMATH_INLINE float2x2 operator+(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    return result;
}

HLSLMATH_INLINE float2x2 operator-(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    return result;
}

HLSLMATH_INLINE float2x2 operator*(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    return result;
}

HLSLMATH_INLINE float2x2 operator/(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    return result;
}

HLSLMATH_INLINE float2x2 operator+(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    return result;
}

HLSLMATH_INLINE float2x2 operator-(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    return result;
}

HLSLMATH_INLINE float2x2 operator*(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    return result;
}

HLSLMATH_INLINE float2x2 operator/(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    return result;
}

HLSLMATH_INLINE float2x2 operator+(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    return result;
}

HLSLMATH_INLINE float2x2 operator-(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    return result;
}

HLSLMATH_INLINE float2x2 operator*(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    return result;
}

HLSLMATH_INLINE float2x2 operator/(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    return result;
}

HLSLMATH_INLINE float2x2& operator+=(float2x2& a, const float2x2& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float2x2& operator+=(float2x2& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float2x2& operator-=(float2x2& a, const float2x2& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float2x2& operator-=(float2x2& a, float b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float2x2& operator*=(float2x2& a, const float2x2& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float2x2& operator*=(float2x2& a, float b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float2x2& operator/=(float2x2& a, const float2x2& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE float2x2& operator/=(float2x2& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool2x2 operator==(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    return result;
}

HLSLMATH_INLINE bool2x2 operator!=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    return result;
}

HLSLMATH_INLINE bool2x2 operator<(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    return result;
}

HLSLMATH_INLINE bool2x2 operator>(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    return result;
}

HLSLMATH_INLINE bool2x2 operator<=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    return result;
}

HLSLMATH_INLINE bool2x2 operator>=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    return result;
}
HLSLMATH_INLINE float3x3 operator-(const float3x3& m)
{
    float3x3 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    return result;
}

HLSLMATH_INLINE const float3x3& operator+(const float3x3& m)
{
    return m;
}

HLSLMATH_INLINE float3x3& operator--(float3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

HLSLMATH_INLINE float3x3& operator++(float3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

HLSLMATH_INLINE const float3x3& operator--(float3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

HLSLMATH_INLINE const float3x3& operator++(float3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

HLSLMATH_INLINE float3x3 operator+(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

HLSLMATH_INLINE float3x3 operator-(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

HLSLMATH_INLINE float3x3 operator*(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

HLSLMATH_INLINE float3x3 operator/(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

HLSLMATH_INLINE float3x3 operator+(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

HLSLMATH_INLINE float3x3 operator-(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

HLSLMATH_INLINE float3x3 operator*(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

HLSLMATH_INLINE float3x3 operator/(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

HLSLMATH_INLINE float3x3 operator+(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

HLSLMATH_INLINE float3x3 operator-(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

HLSLMATH_INLINE float3x3 operator*(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

HLSLMATH_INLINE float3x3 operator/(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

HLSLMATH_INLINE float3x3& operator+=(float3x3& a, const float3x3& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float3x3& operator+=(float3x3& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float3x3& operator-=(float3x3& a, const float3x3& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float3x3& operator-=(float3x3& a, float b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float3x3& operator*=(float3x3& a, const float3x3& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float3x3& operator*=(float3x3& a, float b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float3x3& operator/=(float3x3& a, const float3x3& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE float3x3& operator/=(float3x3& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool3x3 operator==(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator!=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator<(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator>(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator<=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

HLSLMATH_INLINE bool3x3 operator>=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    return result;
}
HLSLMATH_INLINE float4x4 operator-(const float4x4& m)
{
    float4x4 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    result[3] = -m[3];
    return result;
}

HLSLMATH_INLINE const float4x4& operator+(const float4x4& m)
{
    return m;
}

HLSLMATH_INLINE float4x4& operator--(float4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

HLSLMATH_INLINE float4x4& operator++(float4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

HLSLMATH_INLINE const float4x4& operator--(float4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

HLSLMATH_INLINE const float4x4& operator++(float4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
}

HLSLMATH_INLINE float4x4 operator+(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

HLSLMATH_INLINE float4x4 operator+(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

HLSLMATH_INLINE float4x4 operator+(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
    return result;
}

HLSLMATH_INLINE float4x4 operator-(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

HLSLMATH_INLINE float4x4 operator-(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

HLSLMATH_INLINE float4x4 operator-(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
    return result;
}

HLSLMATH_INLINE float4x4 operator*(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

HLSLMATH_INLINE float4x4 operator*(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

HLSLMATH_INLINE float4x4 operator*(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

HLSLMATH_INLINE float4x4 operator/(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

HLSLMATH_INLINE float4x4 operator/(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

HLSLMATH_INLINE float4x4 operator/(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

HLSLMATH_INLINE float4x4& operator+=(float4x4& a, const float4x4& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float4x4& operator+=(float4x4& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float4x4& operator-=(float4x4& a, const float4x4& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float4x4& operator-=(float4x4& a, float b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float4x4& operator*=(float4x4& a, const float4x4& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float4x4& operator*=(float4x4& a, float b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float4x4& operator/=(float4x4& a, const float4x4& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE float4x4& operator/=(float4x4& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool4x4 operator==(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator!=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator<(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator>(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator<=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

HLSLMATH_INLINE bool4x4 operator>=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
    return result;
}
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

/* Convert radians to degrees
 */
HLSLMATH_INLINE float degrees(float x)
{
    const float factor = 180.0f / 3.14159265358979f;
    return x * factor;
}

/* Convert degrees to radians
 */
HLSLMATH_INLINE float radians(float x)
{
    const float factor = 3.14159265358979f / 180.0f;
    return x * factor;
}

/* Convert radians to degrees
 */
HLSLMATH_INLINE double degrees(double x)
{
    const double factor = 180.0 / 3.14159265358979;
    return x * factor;
}

/* Convert degrees to radians
 */
HLSLMATH_INLINE double radians(double x)
{
    const double factor = 3.14159265358979f / 180.0;
    return x * factor;
}

HLSLMATH_INLINE int asint(float x)
{
    union
    {
        int   ival;
        float fval;
    } cvt;
    cvt.fval = x;
    return cvt.ival;
}

HLSLMATH_INLINE int2 asint(const float2& v)
{
    return int2(asint(v.x), asint(v.y));
}

HLSLMATH_INLINE int3 asint(const float3& v)
{
    return int3(asint(v.x), asint(v.y), asint(v.z));
}

HLSLMATH_INLINE int4 asint(const float4& v)
{
    return int4(asint(v.x), asint(v.y), asint(v.z), asint(v.w));
}

HLSLMATH_INLINE int2x2 asint(const float2x2& m)
{
    return int2x2(
        asint(m[0][0]), asint(m[0][1]),
        asint(m[1][0]), asint(m[1][1]));
}

HLSLMATH_INLINE int3x3 asint(const float3x3& m)
{
    return int3x3(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]));
}

HLSLMATH_INLINE int4x4 asint(const float4x4& m)
{
    return int4x4(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]), asint(m[0][3]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]), asint(m[1][3]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]), asint(m[2][3]),
        asint(m[3][0]), asint(m[3][1]), asint(m[3][2]), asint(m[3][3]));
}

HLSLMATH_INLINE int asint(uint x)
{
    union
    {
        int  ival;
        uint uval;
    } cvt;
    cvt.uval = x;
    return cvt.ival;
}

HLSLMATH_INLINE int2 asint(const uint2& v)
{
    return int2(asint(v.x), asint(v.y));
}

HLSLMATH_INLINE int3 asint(const uint3& v)
{
    return int3(asint(v.x), asint(v.y), asint(v.z));
}

HLSLMATH_INLINE int4 asint(const uint4& v)
{
    return int4(asint(v.x), asint(v.y), asint(v.z), asint(v.w));
}

HLSLMATH_INLINE int2x2 asint(const uint2x2& m)
{
    return int2x2(
        asint(m[0][0]), asint(m[0][1]),
        asint(m[1][0]), asint(m[1][1]));
}

HLSLMATH_INLINE int3x3 asint(const uint3x3& m)
{
    return int3x3(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]));
}

HLSLMATH_INLINE int4x4 asint(const uint4x4& m)
{
    return int4x4(
        asint(m[0][0]), asint(m[0][1]), asint(m[0][2]), asint(m[0][3]),
        asint(m[1][0]), asint(m[1][1]), asint(m[1][2]), asint(m[1][3]),
        asint(m[2][0]), asint(m[2][1]), asint(m[2][2]), asint(m[2][3]),
        asint(m[3][0]), asint(m[3][1]), asint(m[3][2]), asint(m[3][3]));
}

HLSLMATH_INLINE uint asuint(int x)
{
    union
    {
        int  ival;
        uint uval;
    } cvt;
    cvt.ival = x;
    return cvt.uval;
}

HLSLMATH_INLINE uint2 asuint(const int2& v)
{
    return uint2(asuint(v.x), asuint(v.y));
}

HLSLMATH_INLINE uint3 asuint(const int3& v)
{
    return uint3(asuint(v.x), asuint(v.y), asuint(v.z));
}

HLSLMATH_INLINE uint4 asuint(const int4& v)
{
    return uint4(asuint(v.x), asuint(v.y), asuint(v.z), asuint(v.w));
}

HLSLMATH_INLINE uint2x2 asuint(const int2x2& v)
{
    return uint2x2(
        asuint(v[0][0]), asuint(v[0][1]),
        asuint(v[1][0]), asuint(v[1][1]));
}

HLSLMATH_INLINE uint3x3 asuint(const int3x3& v)
{
    return uint3x3(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]));
}

HLSLMATH_INLINE uint4x4 asuint(const int4x4& v)
{
    return uint4x4(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]), asuint(v[0][3]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]), asuint(v[1][3]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]), asuint(v[2][3]),
        asuint(v[3][0]), asuint(v[3][1]), asuint(v[3][2]), asuint(v[3][3]));
}

HLSLMATH_INLINE uint asuint(float x)
{
    union
    {
        uint  uval;
        float fval;
    } cvt;
    cvt.fval = x;
    return cvt.uval;
}

HLSLMATH_INLINE uint2 asuint(const float2& v)
{
    return uint2(asuint(v.x), asuint(v.y));
}

HLSLMATH_INLINE uint3 asuint(const float3& v)
{
    return uint3(asuint(v.x), asuint(v.y), asuint(v.z));
}

HLSLMATH_INLINE uint4 asuint(const float4& v)
{
    return uint4(asuint(v.x), asuint(v.y), asuint(v.z), asuint(v.w));
}

HLSLMATH_INLINE uint2x2 asuint(const float2x2& v)
{
    return uint2x2(
        asuint(v[0][0]), asuint(v[0][1]),
        asuint(v[1][0]), asuint(v[1][1]));
}

HLSLMATH_INLINE uint3x3 asuint(const float3x3& v)
{
    return uint3x3(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]));
}

HLSLMATH_INLINE uint4x4 asuint(const float4x4& v)
{
    return uint4x4(
        asuint(v[0][0]), asuint(v[0][1]), asuint(v[0][2]), asuint(v[0][3]),
        asuint(v[1][0]), asuint(v[1][1]), asuint(v[1][2]), asuint(v[1][3]),
        asuint(v[2][0]), asuint(v[2][1]), asuint(v[2][2]), asuint(v[2][3]),
        asuint(v[3][0]), asuint(v[3][1]), asuint(v[3][2]), asuint(v[3][3]));
}

HLSLMATH_INLINE void asuint(double x, uint* lowbits, uint* highbits)
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

HLSLMATH_INLINE float asfloat(int x)
{
    union
    {
        int   ival;
        float fval;
    } cvt;
    cvt.ival = x;
    return cvt.fval;
}

HLSLMATH_INLINE float2 asfloat(const int2& v)
{
    return float2(asfloat(v.x), asfloat(v.y));
}

HLSLMATH_INLINE float3 asfloat(const int3& v)
{
    return float3(asfloat(v.x), asfloat(v.y), asfloat(v.z));
}

HLSLMATH_INLINE float4 asfloat(const int4& v)
{
    return float4(asfloat(v.x), asfloat(v.y), asfloat(v.z), asfloat(v.w));
}

HLSLMATH_INLINE float2x2 asfloat(const int2x2& m)
{
    return float2x2(
        asfloat(m[0][0]), asfloat(m[0][1]),
        asfloat(m[1][0]), asfloat(m[1][1]));
}

HLSLMATH_INLINE float3x3 asfloat(const int3x3& m)
{
    return float3x3(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]));
}

HLSLMATH_INLINE float4x4 asfloat(const int4x4& m)
{
    return float4x4(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]), asfloat(m[0][3]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]), asfloat(m[1][3]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]), asfloat(m[2][3]),
        asfloat(m[3][0]), asfloat(m[3][1]), asfloat(m[3][2]), asfloat(m[3][3]));
}

HLSLMATH_INLINE float asfloat(uint x)
{
    union
    {
        uint  uval;
        float fval;
    } cvt;
    cvt.uval = x;
    return cvt.fval;
}

HLSLMATH_INLINE float2 asfloat(const uint2& v)
{
    return float2(asfloat(v.x), asfloat(v.y));
}

HLSLMATH_INLINE float3 asfloat(const uint3& v)
{
    return float3(asfloat(v.x), asfloat(v.y), asfloat(v.z));
}

HLSLMATH_INLINE float4 asfloat(const uint4& v)
{
    return float4(asfloat(v.x), asfloat(v.y), asfloat(v.z), asfloat(v.w));
}

HLSLMATH_INLINE float2x2 asfloat(const uint2x2& m)
{
    return float2x2(
        asfloat(m[0][0]), asfloat(m[0][1]),
        asfloat(m[1][0]), asfloat(m[1][1]));
}

HLSLMATH_INLINE float3x3 asfloat(const uint3x3& m)
{
    return float3x3(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]));
}

HLSLMATH_INLINE float4x4 asfloat(const uint4x4& m)
{
    return float4x4(
        asfloat(m[0][0]), asfloat(m[0][1]), asfloat(m[0][2]), asfloat(m[0][3]),
        asfloat(m[1][0]), asfloat(m[1][1]), asfloat(m[1][2]), asfloat(m[1][3]),
        asfloat(m[2][0]), asfloat(m[2][1]), asfloat(m[2][2]), asfloat(m[2][3]),
        asfloat(m[3][0]), asfloat(m[3][1]), asfloat(m[3][2]), asfloat(m[3][3]));
}

HLSLMATH_INLINE float asfloat(float x)
{
    return x;
}

HLSLMATH_INLINE float2 asfloat(const float2& v)
{
    return v;
}

HLSLMATH_INLINE float3 asfloat(const float3& v)
{
    return v;
}

HLSLMATH_INLINE float4 asfloat(const float4& v)
{
    return v;
}

HLSLMATH_INLINE float2x2 asfloat(const float2x2& m)
{
    return m;
}

HLSLMATH_INLINE float3x3 asfloat(const float3x3& m)
{
    return m;
}

HLSLMATH_INLINE float4x4 asfloat(const float4x4& m)
{
    return m;
}

/* Compute the sign of 'x'
 */
HLSLMATH_INLINE int sign(int x)
{
    return x >> 31;
}

#if HLSLMATH_DEFINE_INTRINSICS != 0
/* Computes absolute value
 */
HLSLMATH_INLINE int abs(int x)
{
    const int bits = sizeof(int) * 8 - 1;
    return (x + (x >> bits)) ^ (x >> bits);
}
#endif

/* Get the smaller value
 */
HLSLMATH_INLINE int min(int x, int y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
HLSLMATH_INLINE int max(int x, int y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' to the [min, max]
 */
HLSLMATH_INLINE int clamp(int x, int min, int max)
{
    return x < min ? min : (x > max ? max : x);
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int2 sign(const int2& m)
{
    return int2(sign(m[0]),
                sign(m[1]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int2 abs(const int2& m)
{
    return int2(abs(m[0]),
                abs(m[1]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int2 min(const int2& a, const int2& b)
{
    return int2(min(a[0], b[0]),
                min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int2 max(const int2& a, const int2& b)
{
    return int2(max(a[0], b[0]), 
                max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int2 clamp(const int2& m, const int2& min, const int2& max)
{
    return int2(clamp(m[0], min[0], max[0]), 
                clamp(m[1], min[1], max[1]));
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int3 sign(const int3& m)
{
    return int3(sign(m[0]),
                sign(m[1]),
                sign(m[2]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int3 abs(const int3& m)
{
    return int3(abs(m[0]),
                abs(m[1]),
                abs(m[2]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int3 min(const int3& a, const int3& b)
{
    return int3(min(a[0], b[0]),
                min(a[1], b[1]),
                min(a[2], b[2]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int3 max(const int3& a, const int3& b)
{
    return int3(max(a[0], b[0]), 
                max(a[1], b[1]),
                max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int3 clamp(const int3& v, const int3& min, const int3& max)
{
    return int3(clamp(v[0], min[0], max[0]), 
                clamp(v[1], min[1], max[1]), 
                clamp(v[2], min[2], max[2]));
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int4 sign(const int4& m)
{
    return int4(sign(m[0]),
                sign(m[1]),
                sign(m[2]),
                sign(m[3]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int4 abs(const int4& m)
{
    return int4(abs(m[0]),
                abs(m[1]),
                abs(m[2]),
                abs(m[3]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int4 min(const int4& a, const int4& b)
{
    return int4(min(a[0], b[0]),
                min(a[1], b[1]),
                min(a[2], b[2]),
                min(a[3], b[3]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int4 max(const int4& a, const int4& b)
{
    return int4(max(a[0], b[0]), 
                max(a[1], b[1]),
                max(a[2], b[2]),
                max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int4 clamp(const int4& v, const int4& min, const int4& max)
{
    return int4(clamp(v[0], min[0], max[0]), 
                clamp(v[1], min[1], max[1]), 
                clamp(v[2], min[2], max[2]), 
                clamp(v[3], min[3], max[3]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE uint min(uint x, uint y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
HLSLMATH_INLINE uint max(uint x, uint y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' to the [min, max]
 */
HLSLMATH_INLINE uint clamp(uint x, uint min, uint max)
{
    return x < min ? min : (x > max ? max : x);
}

/* Get the smaller value
 */
HLSLMATH_INLINE uint2 min(const uint2& a, const uint2& b)
{
    return uint2(min(a[0], b[0]),
                 min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint2 max(const uint2& a, const uint2& b)
{
    return uint2(max(a[0], b[0]), 
                 max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint2 clamp(const uint2& m, const uint2& min, const uint2& max)
{
    return uint2(clamp(m[0], min[0], max[0]), 
                 clamp(m[1], min[1], max[1]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE uint3 min(const uint3& a, const uint3& b)
{
    return uint3(min(a[0], b[0]),
                 min(a[1], b[1]),
                 min(a[2], b[2]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint3 max(const uint3& a, const uint3& b)
{
    return uint3(max(a[0], b[0]), 
                 max(a[1], b[1]),
                 max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint3 clamp(const uint3& v, const uint3& min, const uint3& max)
{
    return uint3(clamp(v[0], min[0], max[0]), 
                 clamp(v[1], min[1], max[1]), 
                 clamp(v[2], min[2], max[2]));
}


/* Get the smaller value
 */
HLSLMATH_INLINE uint4 min(const uint4& a, const uint4& b)
{
    return uint4(min(a[0], b[0]),
                 min(a[1], b[1]),
                 min(a[2], b[2]),
                 min(a[3], b[3]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint4 max(const uint4& a, const uint4& b)
{
    return uint4(max(a[0], b[0]), 
                 max(a[1], b[1]),
                 max(a[2], b[2]),
                 max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint4 clamp(const uint4& v, const uint4& min, const uint4& max)
{
    return uint4(clamp(v[0], min[0], max[0]), 
                 clamp(v[1], min[1], max[1]), 
                 clamp(v[2], min[2], max[2]), 
                 clamp(v[3], min[3], max[3]));
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int sign(float x)
{
    union
    {
        float f;
        int   i;
    } cvt;
    cvt.f = x;
    return sign(cvt.i);
}

#if HLSLMATH_DEFINE_INTRINSICS != 0
/* Computes absolute value
 */
HLSLMATH_INLINE float abs(float x)
{
    return fabsf(x);
}

/* Computes cosine
 */
HLSLMATH_INLINE float cos(float x)
{
    return cosf(x);
}

/* Computes sine
 */
HLSLMATH_INLINE float sin(float x)
{
    return sinf(x);
}

/* Computes tangent
 */
HLSLMATH_INLINE float tan(float x)
{
    return tanf(x);
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float cosh(float x)
{
    return coshf(x);
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float sinh(float x)
{
    return sinhf(x);
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float tanh(float x)
{
    return tanhf(x);
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float acos(float x)
{
    return acosf(x);
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float asin(float x)
{
    return asinf(x);
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float atan(float x)
{
    return atanf(x);
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float atan2(float y, float x)
{
    return atan2f(y, x);
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float exp(float x)
{
    return expf(x);
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float exp2(float x)
{
    return exp2f(x);
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float log(float x)
{
    return logf(x);
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float log2(float x)
{
    return log2f(x);
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float log10(float x)
{
    return log10f(x);
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float pow(float x, float y)
{
    return powf(x, y);
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float fmod(float x, float y)
{
    return fmodf(x, y);
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float ceil(float x)
{
    return ceilf(x);
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float floor(float x)
{
    return floorf(x);
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float round(float x)
{
    return roundf(x);
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float trunc(float x)
{
    return truncf(x);
}
#endif

/* Get the fractal part of floating point
*/
HLSLMATH_INLINE float frac(float x)
{
	return modff(x, 0);
}

/* Get the smaller value
 */ 
HLSLMATH_INLINE float min(float x, float y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */ 
HLSLMATH_INLINE float max(float x, float y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float clamp(float x, float min, float max)
{
    return x < min ? min : (x > max ? max : x);
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float saturate(float x)
{
    return clamp(x, 0.0f, 1.0f);
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float step(float y, float x)
{
    return x >= y;
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float lerp(float x, float y, float s)
{
    return x + (y - x) * s;
}

/* Compute a smooth Hermite interpolation
 * @return: 0 if x <= min
 *          1 if x >= max
 *          (0, 1) otherwise
 */
HLSLMATH_INLINE float smoothstep(float min, float max, float x)
{
    return (clamp(x, min, max) - min) / (max - min);
}

#if HLSLMATH_DEFINE_INTRINSICS != 0
/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float sqrt(float x)
{
    return sqrtf(x);
}
#endif

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float rsqrt(float x)
{
    return 1.0f / sqrtf(x);
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float frsqrt(float x)
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
HLSLMATH_INLINE float fsqrt(float x)
{
    return x == 0.0f ? 0.0f : 1.0f / frsqrt(x);
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int2 sign(const float2& v)
{
    return int2(sign(v.x),
                sign(v.y));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float2 abs(const float2& v)
{
    return float2(abs(v.x),
                  abs(v.y));
}

/* Computes cosine
 */
HLSLMATH_INLINE float2 cos(const float2& v)
{
    return float2(cos(v.x),
                  cos(v.y));
}

/* Computes sine
 */
HLSLMATH_INLINE float2 sin(const float2& v)
{
    return float2(sin(v.x),
                  sin(v.y));
}

/* Computes tangent
 */
HLSLMATH_INLINE float2 tan(const float2& v)
{
    return float2(tan(v.x),
                  tan(v.y));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float2 cosh(const float2& v)
{
    return float2(cosh(v.x),
                  cosh(v.y));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float2 sinh(const float2& v)
{
    return float2(sinh(v.x),
                  sinh(v.y));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float2 tanh(const float2& v)
{
    return float2(tanh(v.x),
                  tanh(v.y));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float2 acos(const float2& v)
{
    return float2(acos(v.x),
                  acos(v.y));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float2 asin(const float2& v)
{
    return float2(asin(v.x),
                  asin(v.y));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float2 atan(const float2& v)
{
    return float2(atan(v.x),
                  atan(v.y));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float2 atan2(const float2& a, const float2& b)
{
    return float2(atan2(a.x, b.x),
                  atan2(a.y, b.y));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float2 exp(const float2& v)
{
    return float2(exp(v.x),
                  exp(v.y));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float2 exp2(const float2& v)
{
    return float2(exp2(v.x),
                  exp2(v.y));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float2 log(const float2& v)
{
    return float2(log(v.x),
                  log(v.y));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float2 log2(const float2& v)
{
    return float2(log2(v.x),
                  log2(v.y));
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float2 log10(const float2& v)
{
    return float2(log10(v.x),
                  log10(v.y));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float2 pow(const float2& a, const float2& b)
{
    return float2(pow(a.x, b.x),
                  pow(a.y, b.y));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float2 frac(const float2& v)
{
    return float2(frac(v.x),
                  frac(v.y));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float2 fmod(const float2& a, const float2& b)
{
    return float2(fmod(a.x, b.x),
                  fmod(a.y, b.y));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float2 ceil(const float2& v)
{
    return float2(ceil(v.x),
                  ceil(v.y));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float2 floor(const float2& v)
{
    return float2(floor(v.x),
                  floor(v.y));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float2 round(const float2& v)
{
    return float2(round(v.x),
                  round(v.y));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float2 trunc(const float2& v)
{
    return float2(trunc(v.x),
                  trunc(v.y));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float2 min(const float2& a, const float2& b)
{
    return float2(min(a.x, b.x),
                  min(a.y, b.y));
}

/* Get the larger value
 */
HLSLMATH_INLINE float2 max(const float2& a, const float2& b)
{
    return float2(max(a.x, b.x), 
                  max(a.y, b.y));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float2 clamp(const float2& v, const float2& min, const float2& max)
{
    return float2(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float2 saturate(const float2& v)
{
    return float2(saturate(v.x),
                  saturate(v.y));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float2 step(const float2& a, const float2& b)
{
    return float2(step(a.x, b.x),
                  step(a.y, b.y));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float2 lerp(const float2& a, const float2& b, const float2& t)
{
    return float2(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float2 lerp(const float2& a, const float2& b, float t)
{
    return float2(lerp(a.x, b.x, t),
                  lerp(a.y, b.y, t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float2 smoothstep(const float2& a, const float2& b, const float2& t)
{
    return float2(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float2 sqrt(const float2& v)
{
    return float2(sqrt(v.x),
                  sqrt(v.y));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float2 rsqrt(const float2& v)
{
    return float2(rsqrt(v.x),
                  rsqrt(v.y));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float2 fsqrt(const float2& v)
{
    return float2(fsqrt(v.x),
                  fsqrt(v.y));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float2 frsqrt(const float2& v)
{
    return float2(frsqrt(v.x),
                  frsqrt(v.y));
}

//
// @region: Graphics funtions
//

/* Compute dot product of two vectors
 */ 
HLSLMATH_INLINE float dot(const float2& a, const float2& b)
{
    return a.x * b.x + a.y * b.y;
}

/* Compute squared length of vector
 */
HLSLMATH_INLINE float lensqr(const float2& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
HLSLMATH_INLINE float length(const float2& v)
{
    return sqrt(lensqr(v));
}

/* Compute distance from 'a' to b
 */
HLSLMATH_INLINE float distance(const float2& a, const float2& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
HLSLMATH_INLINE float distsqr(const float2& a, const float2& b)
{
    return lensqr(a - b);
}

/* Compute normalized vector
 */
HLSLMATH_INLINE float2 normalize(const float2& v)
{
    const float lsqr = lensqr(v);
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
HLSLMATH_INLINE float2 reflect(const float2& v, const float2& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
HLSLMATH_INLINE float2 refract(const float2& v, const float2& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float2(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * v;
}

/* Compute faceforward vector
 */
HLSLMATH_INLINE float2 faceforward(const float2& n, const float2& i, const float2& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int3 sign(const float3& v)
{
    return int3(sign(v.x),
                sign(v.y),
                sign(v.z));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float3 abs(const float3& v)
{
    return float3(abs(v.x),
                  abs(v.y),
                  abs(v.z));
}

/* Computes cosine
 */
HLSLMATH_INLINE float3 cos(const float3& v)
{
    return float3(cos(v.x),
                  cos(v.y),
                  cos(v.z));
}

/* Computes sine
 */
HLSLMATH_INLINE float3 sin(const float3& v)
{
    return float3(sin(v.x),
                  sin(v.y),
                  sin(v.z));
}

/* Computes tangent
 */
HLSLMATH_INLINE float3 tan(const float3& v)
{
    return float3(tan(v.x),
                  tan(v.y),
                  tan(v.z));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float3 cosh(const float3& v)
{
    return float3(cosh(v.x),
                  cosh(v.y),
                  cosh(v.z));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float3 sinh(const float3& v)
{
    return float3(sinh(v.x),
                  sinh(v.y),
                  sinh(v.z));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float3 tanh(const float3& v)
{
    return float3(tanh(v.x),
                  tanh(v.y),
                  tanh(v.z));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float3 acos(const float3& v)
{
    return float3(acos(v.x),
                  acos(v.y),
                  acos(v.z));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float3 asin(const float3& v)
{
    return float3(asin(v.x),
                  asin(v.y),
                  asin(v.z));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float3 atan(const float3& v)
{
    return float3(atan(v.x),
                  atan(v.y),
                  asin(v.z));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float3 atan2(const float3& a, const float3& b)
{
    return float3(atan2(a.x, b.x),
                  atan2(a.y, b.y),
                  atan2(a.z, b.z));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float3 exp(const float3& v)
{
    return float3(exp(v.x),
                  exp(v.y),
                  exp(v.z));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float3 exp2(const float3& v)
{
    return float3(exp2(v.x),
                  exp2(v.y),
                  exp2(v.z));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float3 log(const float3& v)
{
    return float3(log(v.x),
                  log(v.y),
                  log(v.z));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float3 log2(const float3& v)
{
    return float3(log2(v.x),
                  log2(v.y),
                  log2(v.z));
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float3 log10(const float3& v)
{
    return float3(log10(v.x),
                  log10(v.y),
                  log10(v.z));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float3 pow(const float3& a, const float3& b)
{
    return float3(pow(a.x, b.x),
                  pow(a.y, b.y),
                  pow(a.z, b.z));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float3 frac(const float3& v)
{
    return float3(frac(v.x),
                  frac(v.y),
                  frac(v.z));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float3 fmod(const float3& a, const float3& b)
{
    return float3(fmod(a.x, b.x),
                  fmod(a.y, b.y),
                  fmod(a.z, b.z));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float3 ceil(const float3& v)
{
    return float3(ceil(v.x),
                  ceil(v.y),
                  ceil(v.z));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float3 floor(const float3& v)
{
    return float3(floor(v.x),
                  floor(v.y),
                  floor(v.z));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float3 round(const float3& v)
{
    return float3(round(v.x),
                  round(v.y),
                  round(v.z));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float3 trunc(const float3& v)
{
    return float3(trunc(v.x),
                  trunc(v.y),
                  trunc(v.z));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float3 min(const float3& a, const float3& b)
{
    return float3(min(a.x, b.x),
                  min(a.y, b.y),
                  min(a.z, b.z));
}

/* Get the larger value
 */
HLSLMATH_INLINE float3 max(const float3& a, const float3& b)
{
    return float3(max(a.x, b.x), 
                  max(a.y, b.y),
                  max(a.z, b.z));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float3 clamp(const float3& v, const float3& min, const float3& max)
{
    return float3(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y), 
                  clamp(v.z, min.z, max.z));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float3 saturate(const float3& v)
{
    return float3(saturate(v.x),
                  saturate(v.y),
                  saturate(v.z));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float3 step(const float3& a, const float3& b)
{
    return float3(
        step(a.x, b.x),
        step(a.y, b.y),
        step(a.z, b.z)
    );
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float3 lerp(const float3& a, const float3& b, const float3& t)
{
    return float3(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y), 
                  lerp(a.z, b.z, t.z));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float3 lerp(const float3& a, const float3& b, float t)
{
    return float3(lerp(a.x, b.x, t),
                  lerp(a.y, b.y, t), 
                  lerp(a.z, b.z, t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float3 smoothstep(const float3& a, const float3& b, const float3& t)
{
    return float3(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y),
                  smoothstep(a.z, b.z, t.z));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float3 sqrt(const float3& v)
{
    return float3(sqrt(v.x),
                  sqrt(v.y),
                  sqrt(v.z));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float3 rsqrt(const float3& v)
{
    return float3(rsqrt(v.x),
                  rsqrt(v.y),
                  rsqrt(v.z));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float3 fsqrt(const float3& v)
{
    return float3(fsqrt(v.x),
                  fsqrt(v.y),
                  fsqrt(v.z));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float3 frsqrt(const float3& v)
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
HLSLMATH_INLINE float3 cross(const float3& a, const float3& b)
{
    return float3(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    );
}

/* Compute dot product of two vectors
 */
HLSLMATH_INLINE float dot(const float3& a, const float3& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

/* Compute squared length of vector
 */
HLSLMATH_INLINE float lensqr(const float3& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
HLSLMATH_INLINE float length(const float3& v)
{
    return sqrt(lensqr(v));
}

/* Compute distance from 'a' to b
 */
HLSLMATH_INLINE float distance(const float3& a, const float3& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
HLSLMATH_INLINE float distsqr(const float3& a, const float3& b)
{
    return lensqr(a - b);
}

/* Compute normalized vector
 */
HLSLMATH_INLINE float3 normalize(const float3& v)
{
    const float lsqr = lensqr(v);
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
HLSLMATH_INLINE float3 reflect(const float3& v, const float3& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
HLSLMATH_INLINE float3 refract(const float3& v, const float3& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float3(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

/* Compute faceforward vector
 */
HLSLMATH_INLINE float3 faceforward(const float3& n, const float3& i, const float3& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int4 sign(const float4& v)
{
    return int4(sign(v.x),
                sign(v.y),
                sign(v.z),
                sign(v.w));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float4 abs(const float4& v)
{
    return float4(abs(v.x),
                  abs(v.y),
                  abs(v.z),
                  abs(v.w));
}

/* Computes cosine
 */
HLSLMATH_INLINE float4 cos(const float4& v)
{
    return float4(cos(v.x),
                  cos(v.y),
                  cos(v.z),
                  cos(v.w));
}

/* Computes sine
 */
HLSLMATH_INLINE float4 sin(const float4& v)
{
    return float4(sin(v.x),
                  sin(v.y),
                  sin(v.z),
                  sin(v.w));
}

/* Computes tangent
 */
HLSLMATH_INLINE float4 tan(const float4& v)
{
    return float4(tan(v.x),
                  tan(v.y),
                  tan(v.z),
                  tan(v.w));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float4 cosh(const float4& v)
{
    return float4(cosh(v.x),
                  cosh(v.y),
                  cosh(v.z),
                  cosh(v.w));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float4 sinh(const float4& v)
{
    return float4(sinh(v.x),
                  sinh(v.y),
                  sinh(v.z),
                  sinh(v.w));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float4 tanh(const float4& v)
{
    return float4(tanh(v.x),
                  tanh(v.y),
                  tanh(v.z),
                  tanh(v.w));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float4 acos(const float4& v)
{
    return float4(acos(v.x),
                  acos(v.y),
                  acos(v.z),
                  acos(v.w));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float4 asin(const float4& v)
{
    return float4(asin(v.x),
                  asin(v.y),
                  asin(v.z),
                  asin(v.w));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float4 atan(const float4& v)
{
    return float4(atan(v.x),
                  atan(v.y),
                  atan(v.z),
                  atan(v.w));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float4 atan2(const float4& a, const float4& b)
{
    return float4(atan2(a.x, b.x),
                  atan2(a.y, b.y),
                  atan2(a.z, b.z),
                  atan2(a.w, b.w));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float4 exp(const float4& v)
{
    return float4(exp(v.x),
                  exp(v.y),
                  exp(v.z),
                  exp(v.w));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float4 exp2(const float4& v)
{
    return float4(exp2(v.x),
                  exp2(v.y),
                  exp2(v.z),
                  exp2(v.w));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float4 log(const float4& v)
{
    return float4(log(v.x),
                  log(v.y),
                  log(v.z),
                  log(v.w));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float4 log2(const float4& v)
{
    return float4(log2(v.x),
                  log2(v.y),
                  log2(v.z),
                  log2(v.w)  );
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float4 log10(const float4& v)
{
    return float4(log10(v.x),
                  log10(v.y),
                  log10(v.z),
                  log10(v.w));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float4 pow(const float4& a, const float4& b)
{
    return float4(pow(a.x, b.x),
                  pow(a.y, b.y),
                  pow(a.z, b.z),
                  pow(a.w, b.w));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float4 frac(const float4& v)
{
    return float4(frac(v.x),
                  frac(v.y),
                  frac(v.z),
                  frac(v.w));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float4 fmod(const float4& a, const float4& b)
{
    return float4(fmod(a.x, b.x),
                  fmod(a.y, b.y),
                  fmod(a.z, b.z),
                  fmod(a.w, b.w));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float4 ceil(const float4& v)
{
    return float4(ceil(v.x),
                  ceil(v.y),
                  ceil(v.z),
                  ceil(v.w));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float4 floor(const float4& v)
{
    return float4(floor(v.x),
                  floor(v.y),
                  floor(v.z),
                  floor(v.w));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float4 round(const float4& v)
{
    return float4(round(v.x),
                  round(v.y),
                  round(v.z),
                  round(v.w));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float4 trunc(const float4& v)
{
    return float4(trunc(v.x),
                  trunc(v.y),
                  trunc(v.z),
                  trunc(v.w));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float4 min(const float4& a, const float4& b)
{
    return float4(min(a.x, b.x),
                  min(a.y, b.y),
                  min(a.z, b.z),
                  min(a.w, b.w));
}

/* Get the larger value
 */
HLSLMATH_INLINE float4 max(const float4& a, const float4& b)
{
    return float4(max(a.x, b.x), 
                  max(a.y, b.y),
                  max(a.z, b.z),
                  max(a.w, b.w));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float4 clamp(const float4& v, const float4& min, const float4& max)
{
    return float4(clamp(v.x, min.x, max.x), 
                  clamp(v.y, min.y, max.y), 
                  clamp(v.z, min.z, max.z), 
                  clamp(v.w, min.w, max.w));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float4 saturate(const float4& v)
{
    return float4(saturate(v.x),
                  saturate(v.y),
                  saturate(v.z),
                  saturate(v.w));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float4 step(const float4& a, const float4& b)
{
    return float4(step(a.x, b.x),
                  step(a.y, b.y),
                  step(a.z, b.z),
                  step(a.w, b.w));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float4 lerp(const float4& a, const float4& b, const float4& t)
{
    return float4(lerp(a.x, b.x, t.x),
                  lerp(a.y, b.y, t.y), 
                  lerp(a.z, b.z, t.z), 
                  lerp(a.w, b.w, t.w));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float4 lerp(const float4& a, const float4& b, float t)
{
    return float4(lerp(a.x, b.x, t),
                  lerp(a.y, b.y, t), 
                  lerp(a.z, b.z, t), 
                  lerp(a.w, b.w, t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float4 smoothstep(const float4& a, const float4& b, const float4& t)
{
    return float4(smoothstep(a.x, b.x, t.x),
                  smoothstep(a.y, b.y, t.y),
                  smoothstep(a.z, b.z, t.z),
                  smoothstep(a.w, b.w, t.w));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float4 sqrt(const float4& v)
{
    return float4(sqrt(v.x),
                  sqrt(v.y),
                  sqrt(v.z),
                  sqrt(v.w));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float4 rsqrt(const float4& v)
{
    return float4(rsqrt(v.x),
                  rsqrt(v.y),
                  rsqrt(v.z),
                  rsqrt(v.w));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float4 fsqrt(const float4& v)
{
    return float4(fsqrt(v.x),
                  fsqrt(v.y),
                  fsqrt(v.z),
                  fsqrt(v.w));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float4 frsqrt(const float4& v)
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
HLSLMATH_INLINE float dot(const float4& a, const float4& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

/* Compute squared length of vector
 */
HLSLMATH_INLINE float lensqr(const float4& v)
{
    return dot(v, v);
}

/* Compute length of vector
 */
HLSLMATH_INLINE float length(const float4& v)
{
    return sqrt(lensqr(v));
}

/* Compute distance from 'a' to b
 */
HLSLMATH_INLINE float distance(const float4& a, const float4& b)
{
    return length(a - b);
}

/* Compute squared distance from 'a' to b
 */
HLSLMATH_INLINE float distsqr(const float4& a, const float4& b)
{
    return lensqr(a - b);
}

/* Compute normalized vector
 */
HLSLMATH_INLINE float4 normalize(const float4& v)
{
    const float lsqr = lensqr(v);
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
HLSLMATH_INLINE float4 reflect(const float4& v, const float4& n)
{
    return v - 2.0f * dot(v, n) * n;
}

/* Compute refraction vector
 */
HLSLMATH_INLINE float4 refract(const float4& v, const float4& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float4(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

/* Compute faceforward vector
 */
HLSLMATH_INLINE float4 faceforward(const float4& n, const float4& i, const float4& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

/* Quaternion multiplication
 */
HLSLMATH_INLINE float4 qmul(const float4& a, const float4& b)
{
    const float3 a3 = float3(a.x, a.y, a.z);
    const float3 b3 = float3(b.x, b.y, b.z);

    float3 xyz = a3 * b.w + b3 * a.w + cross(a3, b3);
    float  w   = a.w * b.w - dot(a3, b3);
    return float4(xyz, w);
}

HLSLMATH_INLINE float4 qinverse(const float4& q)
{
    return float4(q.x, q.y, q.z, -q.w);
}

HLSLMATH_INLINE float4 qconj(const float4& q)
{
    return float4(-q.x, -q.y, -q.z, q.w);
}

HLSLMATH_INLINE float4 float4::quat(const float3& axis, float angle)
{
    if (lensqr(axis) == 0.0f)
    {
        return float4(0, 0, 0, 1);
    }

    float4 r = float4(normalize(axis) * sin(angle * 0.5f), cosf(angle * 0.5f));
    return r;
}

HLSLMATH_INLINE float4 float4::toaxis(const float4& quat)
{
    float4 c = quat;
    if (c.w != 0.0f)
    {
        c = normalize(quat);
    }

    float3 axis;
    const float den = sqrtf(1.0f - c.w * c.w);
    if (den > 0.0001f)
    {
        axis = float3(c.x, c.y, c.z) / den;
    }
    else
    {
        axis = float3(1, 0, 0);
    }

    float angle = 2.0f * cosf(c.w);
    return float4(axis, angle);
}

HLSLMATH_INLINE float4 float4::euler(float x, float y, float z)
{
    float r;
    float p;

    r = z * 0.5f;
    p = x * 0.5f;
    y = y * 0.5f; // Now y mean yaw

    const float c1 = cos(y);
    const float c2 = cos(p);
    const float c3 = cos(r);
    const float s1 = sin(y);
    const float s2 = sin(p);
    const float s3 = sin(r);

    return float4(
        s1 * s2 * c3 + c1 * c2 * s3,
        s1 * c2 * c3 + c1 * s2 * s3,
        c1 * s2 * c3 - s1 * c2 * s3,
        c1 * c2 * c3 - s1 * s2 * s3
    );
}
/* Computes sign of 'x'
 */
HLSLMATH_INLINE int2x2 sign(const int2x2& m)
{
    return int2x2(sign(m[0]),
                  sign(m[1]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int2x2 abs(const int2x2& m)
{
    return int2x2(abs(m[0]),
                  abs(m[1]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int2x2 min(const int2x2& a, const int2x2& b)
{
    return int2x2(min(a[0], b[0]),
                  min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int2x2 max(const int2x2& a, const int2x2& b)
{
    return int2x2(max(a[0], b[0]), 
                  max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int2x2 clamp(const int2x2& m, const int2x2& min, const int2x2& max)
{
    return int2x2(clamp(m[0], min[0], max[0]), 
                  clamp(m[1], min[1], max[1]));
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int3x3 sign(const int3x3& m)
{
    return int3x3(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int3x3 abs(const int3x3& m)
{
    return int3x3(abs(m[0]),
                  abs(m[1]),
                  abs(m[2]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int3x3 min(const int3x3& a, const int3x3& b)
{
    return int3x3(min(a[0], b[0]),
                  min(a[1], b[1]),
                  min(a[2], b[2]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int3x3 max(const int3x3& a, const int3x3& b)
{
    return int3x3(max(a[0], b[0]), 
                  max(a[1], b[1]),
                  max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int3x3 clamp(const int3x3& v, const int3x3& min, const int3x3& max)
{
    return int3x3(clamp(v[0], min[0], max[0]), 
                  clamp(v[1], min[1], max[1]), 
                  clamp(v[2], min[2], max[2]));
}

/* Computes sign of 'x'
 */
HLSLMATH_INLINE int4x4 sign(const int4x4& m)
{
    return int4x4(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]),
                  sign(m[3]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int4x4 abs(const int4x4& m)
{
    return int4x4(abs(m[0]),
                  abs(m[1]),
                  abs(m[2]),
                  abs(m[3]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int4x4 min(const int4x4& a, const int4x4& b)
{
    return int4x4(min(a[0], b[0]),
                  min(a[1], b[1]),
                  min(a[2], b[2]),
                  min(a[3], b[3]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int4x4 max(const int4x4& a, const int4x4& b)
{
    return int4x4(max(a[0], b[0]), 
                  max(a[1], b[1]),
                  max(a[2], b[2]),
                  max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int4x4 clamp(const int4x4& v, const int4x4& min, const int4x4& max)
{
    return int4x4(clamp(v[0], min[0], max[0]), 
                  clamp(v[1], min[1], max[1]), 
                  clamp(v[2], min[2], max[2]), 
                  clamp(v[3], min[3], max[3]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE uint2x2 min(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(min(a[0], b[0]),
                   min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint2x2 max(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(max(a[0], b[0]), 
                   max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint2x2 clamp(const uint2x2& m, const uint2x2& min, const uint2x2& max)
{
    return uint2x2(clamp(m[0], min[0], max[0]), 
                   clamp(m[1], min[1], max[1]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE uint3x3 min(const uint3x3& a, const uint3x3& b)
{
    return uint3x3(min(a[0], b[0]),
                   min(a[1], b[1]),
                   min(a[2], b[2]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint3x3 max(const uint3x3& a, const uint3x3& b)
{
    return uint3x3(max(a[0], b[0]), 
                   max(a[1], b[1]),
                   max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint3x3 clamp(const uint3x3& v, const uint3x3& min, const uint3x3& max)
{
    return uint3x3(clamp(v[0], min[0], max[0]), 
                   clamp(v[1], min[1], max[1]), 
                   clamp(v[2], min[2], max[2]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE uint4x4 min(const uint4x4& a, const uint4x4& b)
{
    return uint4x4(min(a[0], b[0]),
                   min(a[1], b[1]),
                   min(a[2], b[2]),
                   min(a[3], b[3]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint4x4 max(const uint4x4& a, const uint4x4& b)
{
    return uint4x4(max(a[0], b[0]), 
                   max(a[1], b[1]),
                   max(a[2], b[2]),
                   max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint4x4 clamp(const uint4x4& v, const uint4x4& min, const uint4x4& max)
{
    return uint4x4(clamp(v[0], min[0], max[0]), 
                   clamp(v[1], min[1], max[1]), 
                   clamp(v[2], min[2], max[2]), 
                   clamp(v[3], min[3], max[3]));
}


/* Computes sign of 'x'
 */
HLSLMATH_INLINE int2x2 sign(const float2x2& m)
{
    return int2x2(sign(m[0]),
                  sign(m[1]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float2x2 abs(const float2x2& m)
{
    return float2x2(abs(m[0]),
                    abs(m[1]));
}

/* Computes cosine
 */
HLSLMATH_INLINE float2x2 cos(const float2x2& m)
{
    return float2x2(cos(m[0]),
                    cos(m[1]));
}

/* Computes sine
 */
HLSLMATH_INLINE float2x2 sin(const float2x2& m)
{
    return float2x2(sin(m[0]),
                    sin(m[1]));
}

/* Computes tangent
 */
HLSLMATH_INLINE float2x2 tan(const float2x2& m)
{
    return float2x2(tan(m[0]),
                    tan(m[1]));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float2x2 cosh(const float2x2& m)
{
    return float2x2(cosh(m[0]),
                    cosh(m[1]));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float2x2 sinh(const float2x2& m)
{
    return float2x2(sinh(m[0]),
                    sinh(m[1]));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float2x2 tanh(const float2x2& m)
{
    return float2x2(tanh(m[0]),
                    tanh(m[1]));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float2x2 acos(const float2x2& m)
{
    return float2x2(acos(m[0]),
                    acos(m[1]));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float2x2 asin(const float2x2& m)
{
    return float2x2(asin(m[0]),
                    asin(m[1]));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float2x2 atan(const float2x2& m)
{
    return float2x2(atan(m[0]),
                    atan(m[1]));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float2x2 atan2(const float2x2& y, const float2x2& x)
{
    return float2x2(atan2(y[0], x[0]),
                    atan2(y[1], x[1]));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float2x2 exp(const float2x2& m)
{
    return float2x2(exp(m[0]),
                    exp(m[1]));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float2x2 exp2(const float2x2& m)
{
    return float2x2(exp2(m[0]),
                    exp2(m[1]));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float2x2 log(const float2x2& m)
{
    return float2x2(log(m[0]),
                    log(m[1]));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float2x2 log2(const float2x2& m)
{
    return float2x2(log2(m[0]),
                    log2(m[1]));
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float2x2 log10(const float2x2& m)
{
    return float2x2(log10(m[0]),
                    log10(m[1]));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float2x2 pow(const float2x2& x, const float2x2& y)
{
    return float2x2(pow(x[0], y[0]),
                    pow(x[1], y[1]));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float2x2 frac(const float2x2& m)
{
    return float2x2(frac(m[0]),
                    frac(m[1]));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float2x2 fmod(const float2x2& a, const float2x2& b)
{
    return float2x2(fmod(a[0], b[0]),
                    fmod(a[1], b[1]));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float2x2 ceil(const float2x2& m)
{
    return float2x2(ceil(m[0]),
                    ceil(m[0]));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float2x2 floor(const float2x2& m)
{
    return float2x2(floor(m[0]),
                    floor(m[1]));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float2x2 round(const float2x2& m)
{
    return float2x2(round(m[0]),
                    round(m[1]));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float2x2 trunc(const float2x2& m)
{
    return float2x2(trunc(m[0]),
                    trunc(m[1]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float2x2 min(const float2x2& a, const float2x2& b)
{
    return float2x2(min(a[0], b[0]),
                    min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE float2x2 max(const float2x2& a, const float2x2& b)
{
    return float2x2(max(a[0], b[0]), 
                    max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float2x2 clamp(const float2x2& m, const float2x2& min, const float2x2& max)
{
    return float2x2(clamp(m[0], min[0], max[0]), 
                    clamp(m[1], min[1], max[1]));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float2x2 saturate(const float2x2& m)
{
    return float2x2(saturate(m[0]),
                    saturate(m[1]));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float2x2 step(const float2x2& a, const float2x2& b)
{
    return float2x2(step(a[0], b[0]),
                    step(a[1], b[1]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float2x2 lerp(const float2x2& a, const float2x2& b, const float2x2& t)
{
    return float2x2(lerp(a[0], b[0], t[0]),
                    lerp(a[1], b[1], t[1]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float2x2 lerp(const float2x2& a, const float2x2& b, float t)
{
    return float2x2(lerp(a[0], b[0], t),
                    lerp(a[1], b[1], t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float2x2 smoothstep(const float2x2& a, const float2x2& b, const float2x2& t)
{
    return float2x2(smoothstep(a[0], b[0], t[0]),
                    smoothstep(a[1], b[1], t[1]));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float2x2 sqrt(const float2x2& m)
{
    return float2x2(sqrt(m[0]),
                    sqrt(m[1]));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float2x2 rsqrt(const float2x2& m)
{
    return float2x2(rsqrt(m[0]),
                    rsqrt(m[1]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float2x2 fsqrt(const float2x2& m)
{
    return float2x2(fsqrt(m[0]),
                    fsqrt(m[1]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float2x2 frsqrt(const float2x2& m)
{
    return float2x2(frsqrt(m[0]),
                    frsqrt(m[1]));
}

//
// @region: matrix operations
//

HLSLMATH_INLINE float2x2 inverse(const float2x2& m)
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

HLSLMATH_INLINE float2x2 transpose(const float2x2& m)
{
    return float2x2(
        m[0][0], m[1][0],
        m[0][1], m[1][1]
    );
}

HLSLMATH_INLINE float2 mul(const float2x2& a, const float2& b)
{
    return float2(
        a[0][0] * b[0] + a[1][0] * b[1],
        a[0][1] * b[0] + a[1][1] * b[1]
    );
}

HLSLMATH_INLINE float2 mul(const float2& a, const float2x2& b)
{
    return float2(
        a[0] * b[0][0] + a[1] * b[0][1],
        a[0] * b[1][0] + a[1] * b[1][1]
    );
}

HLSLMATH_INLINE float2x2 mul(const float2x2& a, const float2x2& b)
{
    return float2x2(
        mul(a, b[0]),
        mul(a, b[1])
    );
}

//
// @region: Graphics functions
//

HLSLMATH_INLINE float2x2 float2x2::rotation(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float2x2(
        c, -s,
        s, c
    );
}

HLSLMATH_INLINE float2x2 float2x2::scalation(float x)
{
    return float2x2::scalation(x, x);
}

HLSLMATH_INLINE float2x2 float2x2::scalation(const float2& v)
{
    return float2x2::scalation(v.x, v.y);
}

HLSLMATH_INLINE float2x2 float2x2::scalation(float x, float y)
{
    return float2x2(x, 0, 0, y);
}
/* Computes sign of 'x'
 */
HLSLMATH_INLINE int3x3 sign(const float3x3& m)
{
    return int3x3(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float3x3 abs(const float3x3& m)
{
    return float3x3(abs(m[0]),
                    abs(m[1]),
                    abs(m[2]));
}

/* Computes cosine
 */
HLSLMATH_INLINE float3x3 cos(const float3x3& m)
{
    return float3x3(cos(m[0]),
                    cos(m[1]),
                    cos(m[2]));
}

/* Computes sine
 */
HLSLMATH_INLINE float3x3 sin(const float3x3& m)
{
    return float3x3(sin(m[0]),
                    sin(m[1]),
                    sin(m[2]));
}

/* Computes tangent
 */
HLSLMATH_INLINE float3x3 tan(const float3x3& m)
{
    return float3x3(tan(m[0]),
                    tan(m[1]),
                    tan(m[2]));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float3x3 cosh(const float3x3& m)
{
    return float3x3(cosh(m[0]),
                    cosh(m[1]),
                    cosh(m[2]));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float3x3 sinh(const float3x3& m)
{
    return float3x3(sinh(m[0]),
                    sinh(m[1]),
                    sinh(m[2]));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float3x3 tanh(const float3x3& m)
{
    return float3x3(tanh(m[0]),
                    tanh(m[1]),
                    tanh(m[2]));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float3x3 acos(const float3x3& m)
{
    return float3x3(acos(m[0]),
                    acos(m[1]),
                    acos(m[2]));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float3x3 asin(const float3x3& m)
{
    return float3x3(asin(m[0]),
                    asin(m[1]),
                    asin(m[2]));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float3x3 atan(const float3x3& m)
{
    return float3x3(atan(m[0]),
                    atan(m[1]),
                    asin(m[2]));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float3x3 atan2(const float3x3& a, const float3x3& b)
{
    return float3x3(atan2(a[0], b[0]),
                    atan2(a[1], b[1]),
                    atan2(a[2], b[2]));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float3x3 exp(const float3x3& m)
{
    return float3x3(exp(m[0]),
                    exp(m[1]),
                    exp(m[2]));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float3x3 exp2(const float3x3& m)
{
    return float3x3(exp2(m[0]),
                    exp2(m[1]),
                    exp2(m[2]));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float3x3 log(const float3x3& m)
{
    return float3x3(log(m[0]),
                    log(m[1]),
                    log(m[2]));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float3x3 log2(const float3x3& m)
{
    return float3x3(log2(m[0]),
                    log2(m[1]),
                    log2(m[2]));
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float3x3 log10(const float3x3& m)
{
    return float3x3(log10(m[0]),
                    log10(m[1]),
                    log10(m[2]));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float3x3 pow(const float3x3& a, const float3x3& b)
{
    return float3x3(pow(a[0], b[0]),
                    pow(a[1], b[1]),
                    pow(a[2], b[2]));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float3x3 frac(const float3x3& v)
{
    return float3x3(frac(v[0]),
                    frac(v[1]),
                    frac(v[2]));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float3x3 fmod(const float3x3& a, const float3x3& b)
{
    return float3x3(fmod(a[0], b[0]),
                    fmod(a[1], b[1]),
                    fmod(a[2], b[2]));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float3x3 ceil(const float3x3& m)
{
    return float3x3(ceil(m[0]),
                    ceil(m[1]),
                    ceil(m[2]));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float3x3 floor(const float3x3& m)
{
    return float3x3(floor(m[0]),
                    floor(m[1]),
                    floor(m[2]));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float3x3 round(const float3x3& m)
{
    return float3x3(round(m[0]),
                    round(m[1]),
                    round(m[2]));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float3x3 trunc(const float3x3& m)
{
    return float3x3(trunc(m[0]),
                    trunc(m[1]),
                    trunc(m[2]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float3x3 min(const float3x3& a, const float3x3& b)
{
    return float3x3(min(a[0], b[0]),
                    min(a[1], b[1]),
                    min(a[2], b[2]));
}

/* Get the larger value
 */
HLSLMATH_INLINE float3x3 max(const float3x3& a, const float3x3& b)
{
    return float3x3(max(a[0], b[0]), 
                    max(a[1], b[1]),
                    max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float3x3 clamp(const float3x3& v, const float3x3& min, const float3x3& max)
{
    return float3x3(clamp(v[0], min[0], max[0]), 
                    clamp(v[1], min[1], max[1]), 
                    clamp(v[2], min[2], max[2]));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float3x3 saturate(const float3x3& m)
{
    return float3x3(saturate(m[0]),
                    saturate(m[1]),
                    saturate(m[2]));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float3x3 step(const float3x3& a, const float3x3& b)
{
    return float3x3(step(a[0], b[0]),
                    step(a[1], b[1]),
                    step(a[2], b[2]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float3x3 lerp(const float3x3& a, const float3x3& b, const float3x3& t)
{
    return float3x3(lerp(a[0], b[0], t[0]),
                    lerp(a[1], b[1], t[1]), 
                    lerp(a[2], b[2], t[2]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float3x3 lerp(const float3x3& a, const float3x3& b, float t)
{
    return float3x3(lerp(a[0], b[0], t),
                    lerp(a[1], b[1], t), 
                    lerp(a[2], b[2], t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float3x3 smoothstep(const float3x3& a, const float3x3& b, const float3x3& t)
{
    return float3x3(smoothstep(a[0], b[0], t[0]),
                    smoothstep(a[1], b[1], t[1]),
                    smoothstep(a[2], b[2], t[2]));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float3x3 sqrt(const float3x3& m)
{
    return float3x3(sqrt(m[0]),
                    sqrt(m[1]),
                    sqrt(m[2]));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float3x3 rsqrt(const float3x3& m)
{
    return float3x3(rsqrt(m[0]),
                    rsqrt(m[1]),
                    rsqrt(m[2]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float3x3 fsqrt(const float3x3& m)
{
    return float3x3(fsqrt(m[0]),
                    fsqrt(m[1]),
                    fsqrt(m[2]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float3x3 frsqrt(const float3x3& m)
{
    return float3x3(frsqrt(m[0]),
                    frsqrt(m[1]),
                    frsqrt(m[2]));
}

//
// @region: Matrix operations
//

HLSLMATH_INLINE float3x3 transpose(const float3x3& m)
{
    return float3x3(
        m[0][0], m[1][0], m[2][0],
        m[0][1], m[1][1], m[2][1],
        m[0][2], m[1][2], m[2][2]
    );
}

HLSLMATH_INLINE float3 mul(const float3x3& a, const float3& b)
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

HLSLMATH_INLINE float3 mul(const float3& a, const float3x3& b)
{
    return float3(
        dot(a, b[0]),
        dot(a, b[1]),
        dot(a, b[2])
    );
}

HLSLMATH_INLINE float3x3 mul(const float3x3& a, const float3x3& b)
{
    return float3x3(
        mul(a, b[0]),
        mul(a, b[1]),
        mul(a, b[2])
    );
}

HLSLMATH_INLINE float3x3 inverse(const float3x3& m)
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
// @region: Graphics functions
//

HLSLMATH_INLINE float3x3 float3x3::translation(const float2& v)
{
    return float3x3::translation(v.x, v.y);
}

HLSLMATH_INLINE float3x3 float3x3::translation(float x, float y)
{
    return float3x3(
        1, 0, 0,
        0, 1, 0,
        x, y, 1
    );
}

HLSLMATH_INLINE float3x3 float3x3::rotation(float angle)
{
    const float c = cos(angle);
    const float s = sin(angle);
    return float3x3(
        c, -s, 0,
        s,  c, 0,
        0,  0, 1
    );
}

HLSLMATH_INLINE float3x3 float3x3::scalation(const float2& v)
{
    return float3x3::scalation(v.x, v.y);
}

HLSLMATH_INLINE float3x3 float3x3::scalation(float x, float y)
{
    return float3x3(
        x, 0, 0,
        0, y, 0,
        0, 0, 1
    );
}

HLSLMATH_INLINE float3x3 float3x3::ortho(float l, float r, float b, float t)
{
    const float w = (r - l);
    const float h = (t - b);
    const float x = 1.0f / w;
    const float y = 1.0f / h;

    return float3x3(
            2.0f * x,            0, 0,
                   0,     2.0f * y, 0,
        -x * (l + r), -y * (b + t), 1
    );
}
/* Computes sign of 'x'
 */
HLSLMATH_INLINE int4x4 sign(const float4x4& m)
{
    return int4x4(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]),
                  sign(m[3]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE float4x4 abs(const float4x4& m)
{
    return float4x4(abs(m[0]),
                    abs(m[1]),
                    abs(m[2]),
                    abs(m[3]));
}

/* Computes cosine
 */
HLSLMATH_INLINE float4x4 cos(const float4x4& m)
{
    return float4x4(cos(m[0]),
                    cos(m[1]),
                    cos(m[2]),
                    cos(m[3]));
}

/* Computes sine
 */
HLSLMATH_INLINE float4x4 sin(const float4x4& m)
{
    return float4x4(sin(m[0]),
                    sin(m[1]),
                    sin(m[2]),
                    sin(m[3]));
}

/* Computes tangent
 */
HLSLMATH_INLINE float4x4 tan(const float4x4& m)
{
    return float4x4(tan(m[0]),
                    tan(m[1]),
                    tan(m[2]),
                    tan(m[3]));
}

/* Computes hyperbolic cosine
 */
HLSLMATH_INLINE float4x4 cosh(const float4x4& m)
{
    return float4x4(cosh(m[0]),
                    cosh(m[1]),
                    cosh(m[2]),
                    cosh(m[3]));
}

/* Computes hyperbolic sine
 */
HLSLMATH_INLINE float4x4 sinh(const float4x4& m)
{
    return float4x4(sinh(m[0]),
                    sinh(m[1]),
                    sinh(m[2]),
                    sinh(m[3]));
}

/* Computes hyperbolic tangent
 */
HLSLMATH_INLINE float4x4 tanh(const float4x4& m)
{
    return float4x4(tanh(m[0]),
                    tanh(m[1]),
                    tanh(m[2]),
                    tanh(m[3]));
}

/* Computes inverse cosine
 */
HLSLMATH_INLINE float4x4 acos(const float4x4& m)
{
    return float4x4(acos(m[0]),
                    acos(m[1]),
                    acos(m[2]),
                    acos(m[3]));
}

/* Computes inverse sine
 */
HLSLMATH_INLINE float4x4 asin(const float4x4& m)
{
    return float4x4(asin(m[0]),
                    asin(m[1]),
                    asin(m[2]),
                    asin(m[3]));
}

/* Computes inverse tangent
 */
HLSLMATH_INLINE float4x4 atan(const float4x4& m)
{
    return float4x4(atan(m[0]),
                    atan(m[1]),
                    atan(m[2]),
                    atan(m[3]));
}

/* Computes inverse tangent with 2 args
 */
HLSLMATH_INLINE float4x4 atan2(const float4x4& a, const float4x4& b)
{
    return float4x4(atan2(a[0], b[0]),
                    atan2(a[1], b[1]),
                    atan2(a[2], b[2]),
                    atan2(a[3], b[3]));
}

/* Computes Euler number raised to the power 'x'
 */
HLSLMATH_INLINE float4x4 exp(const float4x4& m)
{
    return float4x4(exp(m[0]),
                    exp(m[1]),
                    exp(m[2]),
                    exp(m[3]));
}

/* Computes 2 raised to the power 'x'
 */
HLSLMATH_INLINE float4x4 exp2(const float4x4& m)
{
    return float4x4(exp2(m[0]),
                    exp2(m[1]),
                    exp2(m[2]),
                    exp2(m[3]));
}

/* Computes the base Euler number logarithm
 */
HLSLMATH_INLINE float4x4 log(const float4x4& m)
{
    return float4x4(log(m[0]),
                    log(m[1]),
                    log(m[2]),
                    log(m[3]));
}

/* Computes the base 2 logarithm
 */
HLSLMATH_INLINE float4x4 log2(const float4x4& m)
{
    return float4x4(log2(m[0]),
                    log2(m[1]),
                    log2(m[2]),
                    log2(m[3]));
}

/* Computes the base 10 logarithm
 */
HLSLMATH_INLINE float4x4 log10(const float4x4& m)
{
    return float4x4(log10(m[0]),
                    log10(m[1]),
                    log10(m[2]),
                    log10(m[3]));
}

/* Computes the value of base raised to the power exponent
 */
HLSLMATH_INLINE float4x4 pow(const float4x4& a, const float4x4& b)
{
    return float4x4(pow(a[0], b[0]),
                    pow(a[1], b[1]),
                    pow(a[2], b[2]),
                    pow(a[3], b[3]));
}

/* Get the fractal part of floating point
 */
HLSLMATH_INLINE float4x4 frac(const float4x4& m)
{
    return float4x4(frac(m[0]),
                    frac(m[1]),
                    frac(m[2]),
                    frac(m[3]));
}

/* Computes the floating-point remainder of the division operation x/y
 */
HLSLMATH_INLINE float4x4 fmod(const float4x4& a, const float4x4& b)
{
    return float4x4(fmod(a[0], b[0]),
                    fmod(a[1], b[1]),
                    fmod(a[2], b[2]),
                    fmod(a[3], b[3]));
}

/* Computes the smallest integer value not less than 'x'
 */
HLSLMATH_INLINE float4x4 ceil(const float4x4& m)
{
    return float4x4(ceil(m[0]),
                    ceil(m[1]),
                    ceil(m[2]),
                    ceil(m[3]));
}

/* Computes the largest integer value not greater than 'x'
 */
HLSLMATH_INLINE float4x4 floor(const float4x4& m)
{
    return float4x4(floor(m[0]),
                    floor(m[1]),
                    floor(m[2]),
                    floor(m[3]));
}

/* Computes the nearest integer value
 */
HLSLMATH_INLINE float4x4 round(const float4x4& m)
{
    return float4x4(round(m[0]),
                    round(m[1]),
                    round(m[2]),
                    round(m[3]));
}

/* Computes the nearest integer not greater in magnitude than 'x'
 */
HLSLMATH_INLINE float4x4 trunc(const float4x4& m)
{
    return float4x4(trunc(m[0]),
                    trunc(m[1]),
                    trunc(m[2]),
                    trunc(m[3]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE float4x4 min(const float4x4& a, const float4x4& b)
{
    return float4x4(min(a[0], b[0]),
                    min(a[1], b[1]),
                    min(a[2], b[2]),
                    min(a[3], b[3]));
}

/* Get the larger value
 */
HLSLMATH_INLINE float4x4 max(const float4x4& a, const float4x4& b)
{
    return float4x4(max(a[0], b[0]), 
                    max(a[1], b[1]),
                    max(a[2], b[2]),
                    max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE float4x4 clamp(const float4x4& v, const float4x4& min, const float4x4& max)
{
    return float4x4(clamp(v[0], min[0], max[0]), 
                    clamp(v[1], min[1], max[1]), 
                    clamp(v[2], min[2], max[2]), 
                    clamp(v[3], min[3], max[3]));
}

/* Clamps the specified value within the range of 0 to 1
 */
HLSLMATH_INLINE float4x4 saturate(const float4x4& m)
{
    return float4x4(saturate(m[0]),
                    saturate(m[1]),
                    saturate(m[2]),
                    saturate(m[3]));
}

/* Compares two values, returning 0 or 1 based on which value is greater.
 */
HLSLMATH_INLINE float4x4 step(const float4x4& a, const float4x4& b)
{
    return float4x4(step(a[0], b[0]),
                    step(a[1], b[1]),
                    step(a[2], b[2]),
                    step(a[3], b[3]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float4x4 lerp(const float4x4& a, const float4x4& b, const float4x4& t)
{
    return float4x4(lerp(a[0], b[0], t[0]),
                    lerp(a[1], b[1], t[1]), 
                    lerp(a[2], b[2], t[2]), 
                    lerp(a[3], b[3], t[3]));
}

/* Performs a linear interpolation.
 */
HLSLMATH_INLINE float4x4 lerp(const float4x4& a, const float4x4& b, float t)
{
    return float4x4(lerp(a[0], b[0], t),
                    lerp(a[1], b[1], t), 
                    lerp(a[2], b[2], t), 
                    lerp(a[3], b[3], t));
}

/* Compute a smooth Hermite interpolation
 */
HLSLMATH_INLINE float4x4 smoothstep(const float4x4& a, const float4x4& b, const float4x4& t)
{
    return float4x4(smoothstep(a[0], b[0], t[0]),
                    smoothstep(a[1], b[1], t[1]),
                    smoothstep(a[2], b[2], t[2]),
                    smoothstep(a[3], b[3], t[3]));
}

/* Computes square root of 'x'.
 */
HLSLMATH_INLINE float4x4 sqrt(const float4x4& m)
{
    return float4x4(sqrt(m[0]),
                    sqrt(m[1]),
                    sqrt(m[2]),
                    sqrt(m[3]));
}

/* Computes inverse square root of 'x'.
 */
HLSLMATH_INLINE float4x4 rsqrt(const float4x4& m)
{
    return float4x4(rsqrt(m[0]),
                    rsqrt(m[1]),
                    rsqrt(m[2]),
                    rsqrt(m[3]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float4x4 fsqrt(const float4x4& m)
{
    return float4x4(fsqrt(m[0]),
                    fsqrt(m[1]),
                    fsqrt(m[2]),
                    fsqrt(m[3]));
}

/* Computes fast inverse square root of 'x'.
 */
HLSLMATH_INLINE float4x4 frsqrt(const float4x4& m)
{
    return float4x4(frsqrt(m[0]),
                    frsqrt(m[1]),
                    frsqrt(m[2]),
                    frsqrt(m[3]));
}

//
// @region: Matrix operations
//

HLSLMATH_INLINE float4 mul(const float4x4& a, const float4& b)
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

HLSLMATH_INLINE float4 mul(const float4& a, const float4x4& b)
{
    return float4(
        dot(a, b[0]),
        dot(a, b[1]),
        dot(a, b[2]),
        dot(a, b[3])
    );
}

HLSLMATH_INLINE float3 mul(const float4x4& a, const float3& b)
{
    const float4 b0 = float4(b.x, b.y, b.z, 1.0f);
    const float4 b1 = mul(a, b0);

    const float iw = 1.0f / b1.w;
    return float3(b1.x * iw, b1.y * iw, b1.z * iw);
}

HLSLMATH_INLINE float3 mul(const float3& a, const float4x4& b)
{
    const float4 a0 = float4(a.x, a.y, a.z, 1.0f);
    const float4 a1 = mul(a0, b);

    const float iw = 1.0f / a1.w;
    return float3(a1.x * iw, a1.y * iw, a1.z * iw);
}

HLSLMATH_INLINE float4x4 mul(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = mul(a, b[0]);
    result[1] = mul(a, b[1]);
    result[2] = mul(a, b[2]);
    result[3] = mul(a, b[3]);
    return result;
}

HLSLMATH_INLINE float4x4 transpose(const float4x4& m)
{
    float4x4 result;
    result[0][0] = m[0][0]; result[0][1] = m[1][0]; result[0][2] = m[2][0]; result[0][3] = m[3][0];
    result[1][0] = m[0][1]; result[1][1] = m[1][1]; result[1][2] = m[2][1]; result[1][3] = m[3][1];
    result[2][0] = m[0][2]; result[2][1] = m[1][2]; result[2][2] = m[2][2]; result[2][3] = m[3][2];
    result[3][0] = m[0][3]; result[3][1] = m[1][3]; result[3][2] = m[2][3]; result[3][3] = m[3][3];
    return result;
}

HLSLMATH_INLINE float4x4 inverse(const float4x4& m)
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

HLSLMATH_INLINE float4x4 float4x4::ortho(float l, float r, float b, float t, float n, float f)
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

HLSLMATH_INLINE float4x4 float4x4::frustum(float l, float r, float b, float t, float n, float f)
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

HLSLMATH_INLINE float4x4 float4x4::perspective(float fov, float aspect, float znear, float zfar)
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

HLSLMATH_INLINE float4x4 float4x4::lookat(const float3& eye, const float3& target, const float3& up)
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

HLSLMATH_INLINE float4x4 float4x4::scalation(float s)
{
    return float4x4::scalation(s, s, s);
}

HLSLMATH_INLINE float4x4 float4x4::scalation(const float2& v)
{
    return float4x4::scalation(v.x, v.y);
}

HLSLMATH_INLINE float4x4 float4x4::scalation(const float3& v)
{
    return float4x4::scalation(v.x, v.y, v.z);
}

HLSLMATH_INLINE float4x4 float4x4::scalation(float x, float y, float z)
{
    return float4x4(
        x, 0, 0, 0,
        0, y, 0, 0, 
        0, 0, z, 0,
        0, 0, 0, 1
    );
}

HLSLMATH_INLINE float4x4 float4x4::translation(const float2& v)
{
    return float4x4::translation(v.x, v.y);
}

HLSLMATH_INLINE float4x4 float4x4::translation(const float3& v)
{
    return float4x4::translation(v.x, v.y, v.z);
}

HLSLMATH_INLINE float4x4 float4x4::translation(float x, float y, float z)
{
    return float4x4(
        1, 0, 0, 0,
        0, 1, 0, 0,
        0, 0, 1, 0,
        x, y, z, 1
    );
}

HLSLMATH_INLINE float4x4 float4x4::rotation(const float3& axis, float angle)
{
    return float4x4::rotation(axis.x, axis.y, axis.z, angle);
}

HLSLMATH_INLINE float4x4 float4x4::rotation(float x, float y, float z, float angle)
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

HLSLMATH_INLINE float4x4 float4x4::rotation_x(float angle)
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

HLSLMATH_INLINE float4x4 float4x4::rotation_y(float angle)
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

HLSLMATH_INLINE float4x4 float4x4::rotation_z(float angle)
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

HLSLMATH_INLINE float4x4 float4x4::rotation(const float4& quaternion)
{
    float4 axisangle = float4::toaxis(quaternion);
    return float4x4::rotation(axisangle.x, axisangle.y, axisangle.z, axisangle.w);
}

HLSLMATH_INLINE void float4x4::decompose(const float4x4& m, float3* scalation, float4* quaternion, float3* translation)
{
    if (translation)
    {
        *translation = float3(m[3][0], m[3][1], m[3][2]);
    }

    if (!scalation && !quaternion)
    {
        return;
    }

    float3 xaxis(m[0][0], m[0][1], m[0][2]);
    float3 yaxis(m[1][0], m[1][1], m[1][2]);
    float3 zaxis(m[2][0], m[2][1], m[2][2]);

    float scale_x = length(xaxis);
    float scale_y = length(yaxis);
    float scale_z = length(zaxis);

    const float n11 = m[0][0], n12 = m[1][0], n13 = m[2][0], n14 = m[3][0];
    const float n21 = m[0][1], n22 = m[1][1], n23 = m[2][1], n24 = m[3][1];
    const float n31 = m[0][2], n32 = m[1][2], n33 = m[2][2], n34 = m[3][2];
    const float n41 = m[0][3], n42 = m[1][3], n43 = m[2][3], n44 = m[3][3];

    const float t11 = n23 * n34 * n42 - n24 * n33 * n42 + n24 * n32 * n43 - n22 * n34 * n43 - n23 * n32 * n44 + n22 * n33 * n44;
    const float t12 = n14 * n33 * n42 - n13 * n34 * n42 - n14 * n32 * n43 + n12 * n34 * n43 + n13 * n32 * n44 - n12 * n33 * n44;
    const float t13 = n13 * n24 * n42 - n14 * n23 * n42 + n14 * n22 * n43 - n12 * n24 * n43 - n13 * n22 * n44 + n12 * n23 * n44;
    const float t14 = n14 * n23 * n32 - n13 * n24 * n32 - n14 * n22 * n33 + n12 * n24 * n33 + n13 * n22 * n34 - n12 * n23 * n34;

    const float det = n11 * t11 + n21 * t12 + n31 * t13 + n41 * t14;
    if (det < 0) scale_z = -scale_z;

    if (scalation)
    {
        *scalation = float3(scale_x, scale_y, scale_z);
    }

    if (!quaternion)
    {
        return;
    }

    float rn;

    // Factor the scale out of the matrix axes.
    rn = 1.0f / scale_x;
    xaxis.x *= rn;
    xaxis.y *= rn;
    xaxis.z *= rn;

    rn = 1.0f / scale_y;
    yaxis.x *= rn;
    yaxis.y *= rn;
    yaxis.z *= rn;

    rn = 1.0f / scale_z;
    zaxis.x *= rn;
    zaxis.y *= rn;
    zaxis.z *= rn;

    // Now calculate the rotation from the resulting matrix (axes).
    float trace = xaxis.x + yaxis.y + zaxis.z + 1.0f;

    if (trace > 0.0001f)
    {
        float s = 0.5f / sqrt(trace);
        quaternion->w = 0.25f / s;
        quaternion->x = (yaxis.z - zaxis.y) * s;
        quaternion->y = (zaxis.x - xaxis.z) * s;
        quaternion->z = (xaxis.y - yaxis.x) * s;
    }
    else
    {
        // Note: since xaxis, yaxis, and zaxis are normalized, 
        // we will never divide by zero in the code below.
        if (xaxis.x > yaxis.y && xaxis.x > zaxis.z)
        {
            float s = 0.5f / sqrt(1.0f + xaxis.x - yaxis.y - zaxis.z);
            quaternion->w = (yaxis.z - zaxis.y) * s;
            quaternion->x = 0.25f / s;
            quaternion->y = (yaxis.x + xaxis.y) * s;
            quaternion->z = (zaxis.x + xaxis.z) * s;
        }
        else if (yaxis.y > zaxis.z)
        {
            float s = 0.5f / sqrt(1.0f + yaxis.y - xaxis.x - zaxis.z);
            quaternion->w = (zaxis.x - xaxis.z) * s;
            quaternion->x = (yaxis.x + xaxis.y) * s;
            quaternion->y = 0.25f / s;
            quaternion->z = (zaxis.y + yaxis.z) * s;
        }
        else
        {
            float s = 0.5f / sqrt(1.0f + zaxis.z - xaxis.x - yaxis.y);
            quaternion->w = (xaxis.y - yaxis.x) * s;
            quaternion->x = (zaxis.x + xaxis.z) * s;
            quaternion->y = (zaxis.y + yaxis.z) * s;
            quaternion->z = 0.25f / s;
        }
    }
}

HLSLMATH_INLINE void float4x4::decompose(const float4x4& m, float3* scalation, float3* axis, float* angle, float3* translation)
{
    if (axis || angle)
    {
        float4 quat;
        decompose(m, scalation, &quat, translation);

        float4::toaxis(quat, axis, angle);
    }
    else
    {
        decompose(m, scalation, (float4*)0, translation);
    }
}
// File 'D:\Projects\hlslmath\tools/../hlslmath.h' end here.
