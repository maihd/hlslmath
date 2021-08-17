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