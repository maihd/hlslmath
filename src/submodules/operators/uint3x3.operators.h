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