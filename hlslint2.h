#pragma once

#include "hlsltypes.h"

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
