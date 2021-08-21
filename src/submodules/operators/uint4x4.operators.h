inline const uint4x4& operator+(const uint4x4& m)
{
    return m;
}

inline uint4x4& operator--(uint4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

inline uint4x4& operator++(uint4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

inline const uint4x4& operator--(uint4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

inline const uint4x4& operator++(uint4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
}

inline uint4x4 operator+(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

inline uint4x4 operator+(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

inline uint4x4 operator+(uint a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
    return result;
}

inline uint4x4 operator-(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

inline uint4x4 operator-(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

inline uint4x4 operator-(uint a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
    return result;
}

inline uint4x4 operator*(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

inline uint4x4 operator*(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

inline uint4x4 operator*(uint a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

inline uint4x4 operator/(const uint4x4& a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

inline uint4x4 operator/(const uint4x4& a, uint b)
{
    uint4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

inline uint4x4 operator/(int a, const uint4x4& b)
{
    uint4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

inline uint4x4& operator+=(uint4x4& a, const uint4x4& b)
{
    return (a = a + b);
}

inline uint4x4& operator+=(uint4x4& a, uint b)
{
    return (a = a + b);
}

inline uint4x4& operator-=(uint4x4& a, const uint4x4& b)
{
    return (a = a - b);
}

inline uint4x4& operator-=(uint4x4& a, uint b)
{
    return (a = a - b);
}

inline uint4x4& operator*=(uint4x4& a, const uint4x4& b)
{
    return (a = a * b);
}

inline uint4x4& operator*=(uint4x4& a, uint b)
{
    return (a = a * b);
}

inline uint4x4& operator/=(uint4x4& a, const uint4x4& b)
{
    return (a = a / b);
}

inline uint4x4& operator/=(uint4x4& a, uint b)
{
    return (a = a + b);
}

inline bool4x4 operator==(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

inline bool4x4 operator!=(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

inline bool4x4 operator<(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

inline bool4x4 operator>(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

inline bool4x4 operator<=(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

inline bool4x4 operator>=(const uint4x4& a, const uint4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
    return result;
}