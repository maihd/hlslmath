union HLSLMATH_ALIGNED(uint4x4)
{
    uint                data[4][4];

    HLSLMATH_CONSTEXPR  uint4x4();
                        uint4x4(uint s);
                        uint4x4(
                            const uint4& m0, 
                            const uint4& m1, 
                            const uint4& m2, 
                            const uint4& m3
                        );
                        uint4x4(
                            uint m00, uint m01, uint m02, uint m03,
                            uint m10, uint m11, uint m12, uint m13,
                            uint m20, uint m21, uint m22, uint m23,
                            uint m30, uint m31, uint m32, uint m33
                        );

    uint4&              operator[](int index);
    const uint4&        operator[](int index) const;
};