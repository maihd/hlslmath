union int2
{
    struct
    {
        int             x, y;
    };

    HLSLMATH_CONSTEXPR  int2();
                        int2(int s);
                        int2(int x, int y);

    int&                operator[](int index);
    int                 operator[](int index) const;
};