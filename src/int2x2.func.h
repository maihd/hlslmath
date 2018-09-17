//
// @region: Operator overloadng
//

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

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int2x2 sign(const int2x2& m)
{
    return int2x2(sign(m[0]),
                  sign(m[1]));
}

/* Computes absolute value
 */
inline int2x2 abs(const int2x2& m)
{
    return int2x2(abs(m[0]),
                  abs(m[1]));
}

/* Get the smaller value
 */
inline int2x2 min(const int2x2& a, const int2x2& b)
{
    return int2x2(min(a[0], b[0]),
                  min(a[1], b[1]));
}

/* Get the larger value
 */
inline int2x2 max(const int2x2& a, const int2x2& b)
{
    return int2x2(max(a[0], b[0]), 
                  max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline int2x2 clamp(const int2x2& m, const int2x2& min, const int2x2& max)
{
    return int2x2(clamp(m[0], min[0], max[0]), 
                  clamp(m[1], min[1], max[1]));
}
