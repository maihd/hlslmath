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