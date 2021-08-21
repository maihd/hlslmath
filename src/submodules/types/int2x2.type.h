union HLSLMATH_ALIGNAS(int2x2)
{
    int                 data[2][2];

    inline              int2x2() {} // Default constructor, do no intialization
                        int2x2(int s);
                        int2x2(const int2& m0, const int2& m1);
                        int2x2(int m00, int m01, int m10, int m11);

    int2&               operator[](int index);
    const int2&         operator[](int index) const;
};