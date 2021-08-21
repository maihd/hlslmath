/* Computes sign of 'x'
 */
inline int3 sign(const int3& m)
{
    return int3(sign(m[0]),
                sign(m[1]),
                sign(m[2]));
}

/* Computes absolute value
 */
inline int3 abs(const int3& m)
{
    return int3(abs(m[0]),
                abs(m[1]),
                abs(m[2]));
}

/* Get the smaller value
 */
inline int3 min(const int3& a, const int3& b)
{
    return int3(min(a[0], b[0]),
                min(a[1], b[1]),
                min(a[2], b[2]));
}

/* Get the larger value
 */
inline int3 max(const int3& a, const int3& b)
{
    return int3(max(a[0], b[0]), 
                max(a[1], b[1]),
                max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline int3 clamp(const int3& v, const int3& min, const int3& max)
{
    return int3(clamp(v[0], min[0], max[0]), 
                clamp(v[1], min[1], max[1]), 
                clamp(v[2], min[2], max[2]));
}
