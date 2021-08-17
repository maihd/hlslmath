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