union bool3
{
    struct
    {
        bool            x, y, z;
    };

    HLSLMATH_CONSTEXPR  bool3();
                        bool3(bool s);
                        bool3(bool x, bool y, bool z);

    bool&               operator[](int index);
    bool                operator[](int index) const;
};