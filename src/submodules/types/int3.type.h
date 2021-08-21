union HLSLMATH_ALIGNAS(int3)
{
    struct
    {
        int             x, y, z;
    };

    inline              int3() {} // Default constructor, do no intialization
                        int3(int s);
                        int3(int x, int y, int z);

    int&                operator[](int index);
    int                 operator[](int index) const;
};