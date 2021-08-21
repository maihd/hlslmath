union bool2
{
    struct
    {
        bool            x, y;
    };

    inline              bool2() {} // Default constructor, do no intialization
                        bool2(bool s);
                        bool2(bool x, bool y);

    bool&               operator[](int index);
    bool                operator[](int index) const;
};