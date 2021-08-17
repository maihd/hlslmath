union bool4
{
    struct
    {
        bool x, y, z, w;
    };

    HLSLMATH_CONSTEXPR  bool4();
                        bool4(bool s);
                        bool4(bool x, bool y, bool z, bool w);

    bool&               operator[](int index);
    bool                operator[](int index) const;
};