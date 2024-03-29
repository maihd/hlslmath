union HLSLMATH_ALIGNAS(uint2x2)
{
    uint                data[2][2];
    
    inline              uint2x2() {} // Default constructor, do no intialization
                        uint2x2(uint s);
                        uint2x2(const uint2& m0, const uint2& m1);
                        uint2x2(uint m00, uint m01, uint m10, uint m11);

    uint2&              operator[](int index);
    const uint2&        operator[](int index) const;
};