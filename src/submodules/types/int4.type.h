union HLSLMATH_ALIGNED(int4)
{
    struct
    {
        int x, y, z, w;
    };

    HLSLMATH_CONSTEXPR  int4();
                        int4(int s);
                        int4(int x, int y, int z, int w);

    int&                operator[](int index);
    int                 operator[](int index) const;
};