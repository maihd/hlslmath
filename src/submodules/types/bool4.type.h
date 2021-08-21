union bool4
{
    struct
    {
        bool x, y, z, w;
    };

    inline              bool4() {} // Default constructor, do no intialization
                        bool4(bool s);
                        bool4(bool x, bool y, bool z, bool w);

    bool&               operator[](int index);
    bool                operator[](int index) const;
};