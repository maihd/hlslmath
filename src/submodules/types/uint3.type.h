union uint3
{
    struct
    {
        uint            x, y, z;
    };

    HLSLMATH_CONSTEXPR  uint3();
                        uint3(uint s);
                        uint3(uint x, uint y, uint z);

    uint&               operator[](int index);
    uint                operator[](int index) const;
};