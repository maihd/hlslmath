union HLSLMATH_ALIGNED(int3)
{
    struct
    {
        int             x, y, z;
    };

    HLSLMATH_CONSTEXPR  int3();
                        int3(int s);
                        int3(int x, int y, int z);

    int&                operator[](int index);
    int                 operator[](int index) const;
};