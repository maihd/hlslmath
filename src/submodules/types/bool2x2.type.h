union bool2x2
{
    bool                data[2][2];
    
    HLSLMATH_CONSTEXPR  bool2x2();
                        bool2x2(bool s);
                        bool2x2(const bool2& m0, const bool2& m1);
                        bool2x2(bool m00, bool m01, bool m10, bool m11);

    bool2&              operator[](int index);
    const bool2&        operator[](int index) const;
};