union uint2
{
    struct
    {
        uint            x, y;
    };

    HLSLMATH_CONSTEXPR  uint2();
                        uint2(uint s);
                        uint2(uint x, uint y);

    uint&               operator[](int index);
    uint                operator[](int index) const;
};