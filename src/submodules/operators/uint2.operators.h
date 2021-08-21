inline uint2& operator++(uint2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

inline uint2& operator--(uint2& v)
{
    --v.x;
    --v.y;
    return v;
}

inline uint2 operator++(uint2& v, int)
{
    const uint2 result = v;
    v.x++;
    v.y++;
    return result;
}

inline uint2 operator--(uint2& v, int)
{
    const uint2 result = v;
    v.x--;
    v.y--;
    return result;
}

inline uint2 operator+(const uint2& a, const uint2& b)
{
    return uint2(a.x + b.x, a.y + b.y);
}

inline uint2 operator-(const uint2& a, const uint2& b)
{
    return uint2(a.x - b.x, a.y - b.y);
}

inline uint2 operator*(const uint2& a, const uint2& b)
{
    return uint2(a.x * b.x, a.y * b.y);
}

inline uint2 operator/(const uint2& a, const uint2& b)
{
    return uint2(a.x / b.x, a.y / b.y);
}

inline uint2 operator+(const uint2& a, uint b)
{
    return uint2(a.x + b, a.y + b);
}

inline uint2 operator-(const uint2& a, uint b)
{
    return uint2(a.x - b, a.y - b);
}

inline uint2 operator*(const uint2& a, uint b)
{
    return uint2(a.x * b, a.y * b);
}

inline uint2 operator/(const uint2& a, uint b)
{
    return uint2(a.x / b, a.y / b);
}

inline uint2 operator+(uint a, const uint2& b)
{
    return uint2(a + b.x, a + b.y);
}

inline uint2 operator-(uint a, const uint2& b)
{
    return uint2(a - b.x, a - b.y);
}

inline uint2 operator*(uint a, const uint2& b)
{
    return uint2(a * b.x, a * b.y);
}

inline uint2 operator/(uint a, const uint2& b)
{
    return uint2(a / b.x, a / b.y);
}

inline uint2& operator+=(uint2& a, uint b)
{
    return (a = a + b);
}

inline uint2& operator-=(uint2& a, uint b)
{
    return (a = a - b);
}

inline uint2& operator*=(uint2& a, uint b)
{
    return (a = a * b);
}

inline uint2& operator/=(uint2& a, uint b)
{
    return (a = a / b);
}

inline uint2& operator+=(uint2& a, const uint2& b)
{
    return (a = a + b);
}

inline uint2& operator-=(uint2& a, const uint2& b)
{
    return (a = a - b);
}

inline uint2& operator*=(uint2& a, const uint2& b)
{
    return (a = a * b);
}

inline uint2& operator/=(uint2& a, const uint2& b)
{
    return (a = a / b);
}

inline bool2 operator<(const uint2& a, const uint2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

inline bool2 operator>(const uint2& a, const uint2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

inline bool2 operator<=(const uint2& a, const uint2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

inline bool2 operator>=(const uint2& a, const uint2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

inline bool2 operator==(const uint2& a, const uint2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

inline bool2 operator!=(const uint2& a, const uint2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}