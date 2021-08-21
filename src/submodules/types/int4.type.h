union HLSLMATH_ALIGNAS(int4)
{
    struct
    {
        int x, y, z, w;
    };

    inline              int4() {} // Default constructor, do no intialization
                        int4(int s);
                        int4(int x, int y, int z, int w);

    int&                operator[](int index);
    int                 operator[](int index) const;
};