inline int3x3 operator-(const int3x3& m)
{
    int3x3 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    return result;
}

inline const int3x3& operator+(const int3x3& m)
{
    return m;
}

inline int3x3& operator--(int3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

inline int3x3& operator++(int3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

inline const int3x3& operator--(int3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

inline const int3x3& operator++(int3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

inline int3x3 operator+(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

inline int3x3 operator-(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

inline int3x3 operator*(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

inline int3x3 operator/(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

inline int3x3 operator+(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

inline int3x3 operator-(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

inline int3x3 operator*(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

inline int3x3 operator/(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

inline int3x3 operator+(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

inline int3x3 operator-(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

inline int3x3 operator*(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

inline int3x3 operator/(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

inline int3x3& operator+=(int3x3& a, const int3x3& b)
{
    return (a = a + b);
}

inline int3x3& operator+=(int3x3& a, int b)
{
    return (a = a + b);
}

inline int3x3& operator-=(int3x3& a, const int3x3& b)
{
    return (a = a - b);
}

inline int3x3& operator-=(int3x3& a, int b)
{
    return (a = a - b);
}

inline int3x3& operator*=(int3x3& a, const int3x3& b)
{
    return (a = a * b);
}

inline int3x3& operator*=(int3x3& a, int b)
{
    return (a = a * b);
}

inline int3x3& operator/=(int3x3& a, const int3x3& b)
{
    return (a = a / b);
}

inline int3x3& operator/=(int3x3& a, int b)
{
    return (a = a + b);
}

inline bool3x3 operator==(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

inline bool3x3 operator!=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

inline bool3x3 operator<(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

inline bool3x3 operator>(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

inline bool3x3 operator<=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

inline bool3x3 operator>=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    return result;
}