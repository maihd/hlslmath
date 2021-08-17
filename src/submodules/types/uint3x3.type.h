union uint3x3
{
    uint                data[3][3];

    HLSLMATH_CONSTEXPR  uint3x3();
                        uint3x3(uint s);
                        uint3x3(const uint3& m0, const uint3& m1, const uint3& m2);
                        uint3x3(
                            uint m00, uint m01, uint m02,
                            uint m10, uint m11, uint m12,
                            uint m20, uint m21, uint m22
                        );

    uint3&              operator[](int index);
    const uint3&        operator[](int index) const;
};