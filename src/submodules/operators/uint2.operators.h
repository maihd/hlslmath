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