/* Get the smaller value
 */
HLSLMATH_INLINE uint4 min(const uint4& a, const uint4& b)
{
    return uint4(min(a[0], b[0]),
                 min(a[1], b[1]),
                 min(a[2], b[2]),
                 min(a[3], b[3]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint4 max(const uint4& a, const uint4& b)
{
    return uint4(max(a[0], b[0]), 
                 max(a[1], b[1]),
                 max(a[2], b[2]),
                 max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint4 clamp(const uint4& v, const uint4& min, const uint4& max)
{
    return uint4(clamp(v[0], min[0], max[0]), 
                 clamp(v[1], min[1], max[1]), 
                 clamp(v[2], min[2], max[2]), 
                 clamp(v[3], min[3], max[3]));
}
