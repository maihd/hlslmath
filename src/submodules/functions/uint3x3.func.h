/* Get the smaller value
 */
inline uint3x3 min(const uint3x3& a, const uint3x3& b)
{
    return uint3x3(min(a[0], b[0]),
                   min(a[1], b[1]),
                   min(a[2], b[2]));
}

/* Get the larger value
 */
inline uint3x3 max(const uint3x3& a, const uint3x3& b)
{
    return uint3x3(max(a[0], b[0]), 
                   max(a[1], b[1]),
                   max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline uint3x3 clamp(const uint3x3& v, const uint3x3& min, const uint3x3& max)
{
    return uint3x3(clamp(v[0], min[0], max[0]), 
                   clamp(v[1], min[1], max[1]), 
                   clamp(v[2], min[2], max[2]));
}
