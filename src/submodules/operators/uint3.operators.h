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