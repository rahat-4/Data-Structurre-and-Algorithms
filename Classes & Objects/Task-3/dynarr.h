#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int, int, int);
    int getValue(int, int);
private:
    int** data;
    int row, col;
};
#endif // DYNARR_H_INCLUDED
