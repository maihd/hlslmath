union bool2
{
    struct
    {
        bool            x, y;
    };

    HLSLMATH_CONSTEXPR  bool2();
                        bool2(bool s);
                        bool2(bool x, bool y);

    bool&               operator[](int index);
    bool                operator[](int index) const;
};