union HLSLMATH_ALIGNAS(int3x3)
{
    int                 data[3][3];

    inline              int3x3() {} // Default constructor, do no intialization
                        int3x3(int s);
                        int3x3(
                            const int3& m0,
                            const int3& m1,
                            const int3& m2);
                        int3x3(
                            int m00, int m01, int m02,
                            int m10, int m11, int m12,
                            int m20, int m21, int m22);

    int3&               operator[](int index);
    const int3&         operator[](int index) const;
};