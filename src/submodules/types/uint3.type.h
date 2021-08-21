union HLSLMATH_ALIGNAS(uint3)
{
    struct
    {
        uint            x, y, z;
    };

    inline              uint3() {} // Default constructor, do no intialization
                        uint3(uint s);
                        uint3(uint x, uint y, uint z);

    uint&               operator[](int index);
    uint                operator[](int index) const;
};