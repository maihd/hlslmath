union uint4
{
    struct
    {
        uint            x, y, z, w;
    };

    HLSLMATH_CONSTEXPR  uint4();
                        uint4(int s);
                        uint4(uint x, uint y, uint z, uint w);

    uint&               operator[](int index);
    uint                operator[](int index) const;
};