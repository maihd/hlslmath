//
// @region: Operator overloadng
//

inline uint2x2& operator++(uint2x2& m)
{
    ++m[0][0]; ++m[0][1];
    ++m[1][0]; ++m[1][1];
    return m;
}

inline uint2x2& operator--(uint2x2& m)
{
    --m[0][0]; --m[0][1];
    --m[1][0]; --m[1][1];
    return m;
}

inline uint2x2 operator++(uint2x2& m, int)
{
    const uint2x2 result = m;
    ++m;
    return result;
}

inline uint2x2 operator--(uint2x2& m, int)
{
    const uint2x2 result = m;
    --m;
    return result;
}

inline uint2x2 operator+(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] + b[0][0], a[0][1] + b[0][1],
        a[1][0] + b[1][0], a[1][1] + b[1][1]);
}

inline uint2x2 operator-(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] - b[0][0], a[0][1] - b[0][1],
        a[1][0] - b[1][0], a[1][1] - b[1][1]);
}

inline uint2x2 operator*(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] * b[0][0], a[0][1] * b[0][1],
        a[1][0] * b[1][0], a[1][1] * b[1][1]);
}

inline uint2x2 operator/(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(
        a[0][0] / b[0][0], a[0][1] / b[0][1],
        a[1][0] / b[1][0], a[1][1] / b[1][1]);
}

inline uint2x2 operator+(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] + b, a[0][1] + b,
        a[1][0] + b, a[1][1] + b);
}

inline uint2x2 operator-(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] - b, a[0][1] - b,
        a[1][0] - b, a[1][1] - b);
}

inline uint2x2 operator*(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] * b, a[0][1] * b,
        a[1][0] * b, a[1][1] * b);
}

inline uint2x2 operator/(const uint2x2& a, uint b)
{
    return uint2x2(
        a[0][0] / b, a[0][1] / b,
        a[1][0] / b, a[1][1] / b);
}

inline uint2x2 operator+(uint a, const uint2x2& b)
{
    return uint2x2(
        a + b[0][0], a + b[0][1],
        a + b[1][0], a + b[1][1]);   
}

inline uint2x2 operator-(uint a, const uint2x2& b)
{
    return uint2x2(
        a - b[0][0], a - b[0][1],
        a - b[1][0], a - b[1][1]);   
}

inline uint2x2 operator*(uint a, const uint2x2& b)
{
    return uint2x2(
        a * b[0][0], a * b[0][1],
        a * b[1][0], a * b[1][1]);   
}

inline uint2x2 operator/(uint a, const uint2x2& b)
{
    return uint2x2(
        a / b[0][0], a / b[0][1],
        a / b[1][0], a / b[1][1]);   
}

inline uint2x2& operator+=(uint2x2& a, uint b)
{
    return (a = a + b);
}

inline uint2x2& operator-=(uint2x2& a, uint b)
{
    return (a = a - b);
}

inline uint2x2& operator*=(uint2x2& a, uint b)
{
    return (a = a * b);
}

inline uint2x2& operator/=(uint2x2& a, uint b)
{
    return (a = a / b);
}

inline uint2x2& operator+=(uint2x2& a, const uint2x2& b)
{
    return (a = a + b);
}

inline uint2x2& operator-=(uint2x2& a, const uint2x2& b)
{
    return (a = a - b);
}

inline uint2x2& operator*=(uint2x2& a, const uint2x2& b)
{
    return (a = a * b);
}

inline uint2x2& operator/=(uint2x2& a, const uint2x2& b)
{
    return (a = a / b);
}

inline bool2x2 operator<(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] < b[0][0], a[0][1] < b[0][1],
        a[1][0] < b[1][0], a[1][1] < b[1][1]);
}

inline bool2x2 operator>(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] > b[0][0], a[0][1] > b[0][1],
        a[1][0] > b[1][0], a[1][1] > b[1][1]);
}

inline bool2x2 operator<=(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] <= b[0][0], a[0][1] <= b[0][1],
        a[1][0] <= b[1][0], a[1][1] <= b[1][1]);
}

inline bool2x2 operator>=(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] >= b[0][0], a[0][1] >= b[0][1],
        a[1][0] >= b[1][0], a[1][1] >= b[1][1]);
}

inline bool2x2 operator==(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] == b[0][0], a[0][1] == b[0][1],
        a[1][0] == b[1][0], a[1][1] == b[1][1]);
}

inline bool2x2 operator!=(const uint2x2& a, const uint2x2& b)
{
    return bool2x2(
        a[0][0] != b[0][0], a[0][1] != b[0][1],
        a[1][0] != b[1][0], a[1][1] != b[1][1]);
}

//
// @region: Common functions
//

/* Get the smaller value
 */
inline uint2x2 min(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(min(a[0], b[0]),
                   min(a[1], b[1]));
}

/* Get the larger value
 */
inline uint2x2 max(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(max(a[0], b[0]), 
                   max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline uint2x2 clamp(const uint2x2& m, const uint2x2& min, const uint2x2& max)
{
    return uint2x2(clamp(m[0], min[0], max[0]), 
                   clamp(m[1], min[1], max[1]));
}
