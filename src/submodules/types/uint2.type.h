union uint2
{
    struct
    {
        uint            x, y;
    };

    inline              uint2() {} // Default constructor, do no intialization
                        uint2(uint s);
                        uint2(uint x, uint y);

    uint&               operator[](int index);
    uint                operator[](int index) const;
};