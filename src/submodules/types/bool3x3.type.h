union bool3x3
{
    bool                data[3][3];

    inline              bool3x3() {} // Default constructor, do no intialization
                        bool3x3(bool s);
                        bool3x3(
                            const bool3& m0, 
                            const bool3& m1, 
                            const bool3& m2
                        );
                        bool3x3(
                            bool m00, bool m01, bool m02,
                            bool m10, bool m11, bool m12,
                            bool m20, bool m21, bool m22
                        );

    bool3&              operator[](int index);
    const bool3&        operator[](int index) const;
};