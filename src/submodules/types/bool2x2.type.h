union bool2x2
{
    bool                data[2][2];
    
    inline              bool2x2() {} // Default constructor, do no intialization
                        bool2x2(bool s);
                        bool2x2(const bool2& m0, const bool2& m1);
                        bool2x2(bool m00, bool m01, bool m10, bool m11);

    bool2&              operator[](int index);
    const bool2&        operator[](int index) const;
};