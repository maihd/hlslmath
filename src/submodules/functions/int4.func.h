/* Computes sign of 'x'
 */
HLSLMATH_INLINE int4 sign(const int4& m)
{
    return int4(sign(m[0]),
                sign(m[1]),
                sign(m[2]),
                sign(m[3]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int4 abs(const int4& m)
{
    return int4(abs(m[0]),
                abs(m[1]),
                abs(m[2]),
                abs(m[3]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int4 min(const int4& a, const int4& b)
{
    return int4(min(a[0], b[0]),
                min(a[1], b[1]),
                min(a[2], b[2]),
                min(a[3], b[3]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int4 max(const int4& a, const int4& b)
{
    return int4(max(a[0], b[0]), 
                max(a[1], b[1]),
                max(a[2], b[2]),
                max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int4 clamp(const int4& v, const int4& min, const int4& max)
{
    return int4(clamp(v[0], min[0], max[0]), 
                clamp(v[1], min[1], max[1]), 
                clamp(v[2], min[2], max[2]), 
                clamp(v[3], min[3], max[3]));
}
