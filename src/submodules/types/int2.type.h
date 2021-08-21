union int2
{
    struct
    {
        int             x, y;
    };

    inline              int2() {} // Default constructor, do no intialization
                        int2(int s);
                        int2(int x, int y);

    int&                operator[](int index);
    int                 operator[](int index) const;
};