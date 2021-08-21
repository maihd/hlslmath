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
#if HLSLMATH_ENABLE_NEON   
    return float2(vadd_f32(a, b));
#else
    return float2(a.x + b.x, a.y + b.y);
#endif
}

inline float2 operator-(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vsub_f32(a, b));
#else
    return float2(a.x - b.x, a.y - b.y);
#endif
}

inline float2 operator*(const float2& a, const float2& b)
{
#if HLSLMATH_ENABLE_NEON   
    return float2(vmul_f32(a, b));
#else
    return float2(a.x * b.x, a.y * b.y);
#endif
}

inline float2 operator/(const float2& a, const float2& b)
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

inline float2 operator+(const float2& a, float b)
{
    return a + float2(b);
}

inline float2 operator-(const float2& a, float b)
{
    return a - float2(b);
}

inline float2 operator*(const float2& a, float b)
{
    return a * float2(b);
}

inline float2 operator/(const float2& a, float b)
{
    return a / float2(b);
}

inline float2 operator+(float a, const float2& b)
{
    return float2(a) + b;
}

inline float2 operator-(float a, const float2& b)
{
    return float2(a) - b;
}

inline float2 operator*(float a, const float2& b)
{
    return float2(a) * b;
}

inline float2 operator/(float a, const float2& b)
{
    return float2(a) / b;
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