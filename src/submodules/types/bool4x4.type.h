union bool4x4
{
    bool                data[4][4];

    inline              bool4x4() {} // Default constructor, do no intialization
                        bool4x4(bool s);
                        bool4x4(
                            const bool4& m0, 
                            const bool4& m1, 
                            const bool4& m2, 
                            const bool4& m3
                        );
                        bool4x4(
                            bool m00, bool m01, bool m02, bool m03,
                            bool m10, bool m11, bool m12, bool m13,
                            bool m20, bool m21, bool m22, bool m23,
                            bool m30, bool m31, bool m32, bool m33
                        );

    bool4&              operator[](int index);
    const bool4&        operator[](int index) const;
};
