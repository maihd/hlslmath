//
// @region: Operator overloadng
//

inline int2 operator-(const int2& v)
{
    return int2(-v.x, -v.y);
}

inline int2& operator++(int2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

inline int2& operator--(int2& v)
{
    --v.x;
    --v.y;
    return v;
}

inline int2 operator++(int2& v, int)
{
    const int2 result = v;
    v.x++;
    v.y++;
    return result;
}

inline int2 operator--(int2& v, int)
{
    const int2 result = v;
    v.x--;
    v.y--;
    return result;
}

inline int2 operator+(const int2& a, const int2& b)
{
    return int2(a.x + b.x, a.y + b.y);
}

inline int2 operator-(const int2& a, const int2& b)
{
    return int2(a.x - b.x, a.y - b.y);
}

inline int2 operator*(const int2& a, const int2& b)
{
    return int2(a.x * b.x, a.y * b.y);
}

inline int2 operator/(const int2& a, const int2& b)
{
    return int2(a.x / b.x, a.y / b.y);
}

inline int2 operator+(const int2& a, int b)
{
    return int2(a.x + b, a.y + b);
}

inline int2 operator-(const int2& a, int b)
{
    return int2(a.x - b, a.y - b);
}

inline int2 operator*(const int2& a, int b)
{
    return int2(a.x * b, a.y * b);
}

inline int2 operator/(const int2& a, int b)
{
    return int2(a.x / b, a.y / b);
}

inline int2 operator+(int a, const int2& b)
{
    return int2(a + b.x, a + b.y);
}

inline int2 operator-(int a, const int2& b)
{
    return int2(a - b.x, a - b.y);
}

inline int2 operator*(int a, const int2& b)
{
    return int2(a * b.x, a * b.y);
}

inline int2 operator/(int a, const int2& b)
{
    return int2(a / b.x, a / b.y);
}

inline int2& operator+=(int2& a, int b)
{
    return (a = a + b);
}

inline int2& operator-=(int2& a, int b)
{
    return (a = a - b);
}

inline int2& operator*=(int2& a, int b)
{
    return (a = a * b);
}

inline int2& operator/=(int2& a, int b)
{
    return (a = a / b);
}

inline int2& operator+=(int2& a, const int2& b)
{
    return (a = a + b);
}

inline int2& operator-=(int2& a, const int2& b)
{
    return (a = a - b);
}

inline int2& operator*=(int2& a, const int2& b)
{
    return (a = a * b);
}

inline int2& operator/=(int2& a, const int2& b)
{
    return (a = a / b);
}

inline bool2 operator<(const int2& a, const int2& b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

inline bool2 operator>(const int2& a, const int2& b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

inline bool2 operator<=(const int2& a, const int2& b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

inline bool2 operator>=(const int2& a, const int2& b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

inline bool2 operator==(const int2& a, const int2& b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

inline bool2 operator!=(const int2& a, const int2& b)
{
    return bool2(a.x != b.x, a.y != b.y);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int2 sign(const int2& m)
{
    return int2(sign(m[0]),
                sign(m[1]));
}

/* Computes absolute value
 */
inline int2 abs(const int2& m)
{
    return int2(abs(m[0]),
                abs(m[1]));
}

/* Get the smaller value
 */
inline int2 min(const int2& a, const int2& b)
{
    return int2(min(a[0], b[0]),
                min(a[1], b[1]));
}

/* Get the larger value
 */
inline int2 max(const int2& a, const int2& b)
{
    return int2(max(a[0], b[0]), 
                max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline int2 clamp(const int2& m, const int2& min, const int2& max)
{
    return int2(clamp(m[0], min[0], max[0]), 
                clamp(m[1], min[1], max[1]));
}
