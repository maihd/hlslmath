union HLSLMATH_ALIGNAS(uint4)
{
    struct
    {
        uint            x, y, z, w;
    };

    inline              uint4() {} // Default constructor, do no intialization
                        uint4(int s);
                        uint4(uint x, uint y, uint z, uint w);

    uint&               operator[](int index);
    uint                operator[](int index) const;
};