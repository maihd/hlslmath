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