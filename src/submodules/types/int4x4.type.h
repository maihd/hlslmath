union HLSLMATH_ALIGNED(int4x4)
{
    int                 data[4][4];

    HLSLMATH_CONSTEXPR  int4x4();
                        int4x4(int s);
                        int4x4(const int4& m0, const int4& m1, const int4& m2, const int4& m3);
                        int4x4(
                            int m00, int m01, int m02, int m03,
                            int m10, int m11, int m12, int m13,
                            int m20, int m21, int m22, int m23,
                            int m30, int m31, int m32, int m33
                        );
                        
    int4&               operator[](int index);
    const int4&         operator[](int index) const;
};