inline int2x2 operator-(const int2x2& m)
{
    return int2x2(
        -m[0][0], -m[0][1],
        -m[1][0], -m[1][1]);
}

inline int2x2& operator++(int2x2& m)
{
    ++m[0][0]; ++m[0][1];
    ++m[1][0]; ++m[1][1];
    return m;
}

inline int2x2& operator--(int2x2& m)
{
    --m[0][0]; --m[0][1];
    --m[1][0]; --m[1][1];
    return m;
}

inline int2x2 operator++(int2x2& m, int)
{
    const int2x2 result = m;
    ++m;
    return result;
}

inline int2x2 operator--(int2x2& m, int)
{
    const int2x2 result = m;
    --m;
    return result;
}

inline int2x2 operator+(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] + b[0][0], a[0][1] + b[0][1],
        a[1][0] + b[1][0], a[1][1] + b[1][1]);
}

inline int2x2 operator-(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] - b[0][0], a[0][1] - b[0][1],
        a[1][0] - b[1][0], a[1][1] - b[1][1]);
}

inline int2x2 operator*(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] * b[0][0], a[0][1] * b[0][1],
        a[1][0] * b[1][0], a[1][1] * b[1][1]);
}

inline int2x2 operator/(const int2x2& a, const int2x2& b)
{
    return int2x2(
        a[0][0] / b[0][0], a[0][1] / b[0][1],
        a[1][0] / b[1][0], a[1][1] / b[1][1]);
}

inline int2x2 operator+(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] + b, a[0][1] + b,
        a[1][0] + b, a[1][1] + b);
}

inline int2x2 operator-(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] - b, a[0][1] - b,
        a[1][0] - b, a[1][1] - b);
}

inline int2x2 operator*(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] * b, a[0][1] * b,
        a[1][0] * b, a[1][1] * b);
}

inline int2x2 operator/(const int2x2& a, int b)
{
    return int2x2(
        a[0][0] / b, a[0][1] / b,
        a[1][0] / b, a[1][1] / b);
}

inline int2x2 operator+(int a, const int2x2& b)
{
    return int2x2(
        a + b[0][0], a + b[0][1],
        a + b[1][0], a + b[1][1]);   
}

inline int2x2 operator-(int a, const int2x2& b)
{
    return int2x2(
        a - b[0][0], a - b[0][1],
        a - b[1][0], a - b[1][1]);   
}

inline int2x2 operator*(int a, const int2x2& b)
{
    return int2x2(
        a * b[0][0], a * b[0][1],
        a * b[1][0], a * b[1][1]);   
}

inline int2x2 operator/(int a, const int2x2& b)
{
    return int2x2(
        a / b[0][0], a / b[0][1],
        a / b[1][0], a / b[1][1]);   
}

inline int2x2& operator+=(int2x2& a, int b)
{
    return (a = a + b);
}

inline int2x2& operator-=(int2x2& a, int b)
{
    return (a = a - b);
}

inline int2x2& operator*=(int2x2& a, int b)
{
    return (a = a * b);
}

inline int2x2& operator/=(int2x2& a, int b)
{
    return (a = a / b);
}

inline int2x2& operator+=(int2x2& a, const int2x2& b)
{
    return (a = a + b);
}

inline int2x2& operator-=(int2x2& a, const int2x2& b)
{
    return (a = a - b);
}

inline int2x2& operator*=(int2x2& a, const int2x2& b)
{
    return (a = a * b);
}

inline int2x2& operator/=(int2x2& a, const int2x2& b)
{
    return (a = a / b);
}

inline bool2x2 operator<(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] < b[0][0], a[0][1] < b[0][1],
        a[1][0] < b[1][0], a[1][1] < b[1][1]);
}

inline bool2x2 operator>(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] > b[0][0], a[0][1] > b[0][1],
        a[1][0] > b[1][0], a[1][1] > b[1][1]);
}

inline bool2x2 operator<=(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] <= b[0][0], a[0][1] <= b[0][1],
        a[1][0] <= b[1][0], a[1][1] <= b[1][1]);
}

inline bool2x2 operator>=(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] >= b[0][0], a[0][1] >= b[0][1],
        a[1][0] >= b[1][0], a[1][1] >= b[1][1]);
}

inline bool2x2 operator==(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] == b[0][0], a[0][1] == b[0][1],
        a[1][0] == b[1][0], a[1][1] == b[1][1]);
}

inline bool2x2 operator!=(const int2x2& a, const int2x2& b)
{
    return bool2x2(
        a[0][0] != b[0][0], a[0][1] != b[0][1],
        a[1][0] != b[1][0], a[1][1] != b[1][1]);
}