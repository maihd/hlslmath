//
// @region: Operator overloadng
//

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

//
// @region: Common functions
//

/* Get the smaller value
 */
inline uint2 min(const uint2& a, const uint2& b)
{
    return uint2(min(a[0], b[0]),
                 min(a[1], b[1]));
}

/* Get the larger value
 */
inline uint2 max(const uint2& a, const uint2& b)
{
    return uint2(max(a[0], b[0]), 
                 max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline uint2 clamp(const uint2& m, const uint2& min, const uint2& max)
{
    return uint2(clamp(m[0], min[0], max[0]), 
                 clamp(m[1], min[1], max[1]));
}
