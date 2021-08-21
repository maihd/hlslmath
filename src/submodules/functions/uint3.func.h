/* Get the smaller value
 */
inline uint3 min(const uint3& a, const uint3& b)
{
    return uint3(min(a[0], b[0]),
                 min(a[1], b[1]),
                 min(a[2], b[2]));
}

/* Get the larger value
 */
inline uint3 max(const uint3& a, const uint3& b)
{
    return uint3(max(a[0], b[0]), 
                 max(a[1], b[1]),
                 max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline uint3 clamp(const uint3& v, const uint3& min, const uint3& max)
{
    return uint3(clamp(v[0], min[0], max[0]), 
                 clamp(v[1], min[1], max[1]), 
                 clamp(v[2], min[2], max[2]));
}

