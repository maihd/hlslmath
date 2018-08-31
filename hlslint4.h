#pragma once

#include "hlsltypes.h"

//
// @region: Operator overloadng
//

inline int4 operator-(const int4& v)
{
    return int3(-v.x, -v.y, -v.z, -v.w);
}

inline int4& operator++(int4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

inline int4& operator--(int4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

inline const int4& operator++(int4& v, int)
{
    v.x++;
    v.y++;
    v.z++;
    v.w++;
    return v;
}

inline const int4& operator--(int4& v, int)
{
    v.x--;
    v.y--;
    v.z--;
    v.w--;
    return v;
}

inline int4 operator+(const int4& a, const int4& b)
{
    return int4(a.x + b.x, a.y + b.y, a.z + b.z, a.w / b.w);
}

inline int4 operator-(const int4& a, const int4& b)
{
    return int4(a.x - b.x, a.y - b.y, a.z - b.z, a.w / b.w);
}

inline int4 operator*(const int4& a, const int4& b)
{
    return int4(a.x * b.x, a.y * b.y, a.z * b.z, a.w / b.w);
}

inline int4 operator/(const int4& a, const int4& b)
{
    return int4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline int4 operator+(const int4& a, int b)
{
    return int4(a.x + b, a.y + b, a.z + b, a.w + b);
}

inline int4 operator-(const int4& a, int b)
{
    return int4(a.x - b, a.y - b, a.z - b, a.w - b);
}

inline int4 operator*(const int4& a, int b)
{
    return int4(a.x * b, a.y * b, a.z * b, a.w * b);
}

inline int4 operator/(const int4& a, int b)
{
    return int4(a.x / b, a.y / b, a.z / b, a.w / b);
}

inline int4 operator+(int a, const int4& b)
{
    return int4(a + b.x, a + b.y, a + b.z, a + b.w);
}

inline int4 operator-(int a, const int4& b)
{
    return int4(a - b.x, a - b.y, a - b.z, a - b.w);
}

inline int4 operator*(int a, const int4& b)
{
    return int4(a * b.x, a * b.y, a * b.z, a * b.w);
}

inline int4 operator/(int a, const int4& b)
{
    return int4(a / b.x, a / b.y, a / b.z, a / b.w);
}

inline int4& operator+=(int4& a, int b)
{
    return (a = a + b);
}

inline int4& operator-=(int4& a, int b)
{
    return (a = a - b);
}

inline int4& operator*=(int4& a, int b)
{
    return (a = a * b);
}

inline int4& operator/=(int4& a, int b)
{
    return (a = a / b);
}

inline int4& operator+=(int4& a, const int4& b)
{
    return (a = a + b);
}

inline int4& operator-=(int4& a, const int4& b)
{
    return (a = a - b);
}

inline int4& operator*=(int4& a, const int4& b)
{
    return (a = a * b);
}

inline int4& operator/=(int4& a, const int4& b)
{
    return (a = a / b);
}

inline bool4 operator<(const int4& a, const int4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

inline bool4 operator>(const int4& a, const int4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

inline bool4 operator<=(const int4& a, const int4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

inline bool4 operator>=(const int4& a, const int4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

inline bool4 operator==(const int4& a, const int4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

inline bool4 operator!=(const int4& a, const int4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}
