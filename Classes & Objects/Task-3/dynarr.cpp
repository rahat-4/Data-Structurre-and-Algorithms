#include"dynarr.h"
#include<iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    row = 0;
    col = 0;
}

dynArr::dynArr(int r, int c)
{
    row = r;
    col = c;
    data = new int*[row];
    for(int i=0; i<row; i++)
    {
        data[i] = new int[col];
    }
}

dynArr::~dynArr()
{
    for(int i=0; i<row; i++)
    {
        delete [] data[i];
    }
    delete [] data;
}

void dynArr::setValue(int row, int col, int value)
{
    data[row][col] = value;
}

int dynArr::getValue(int row, int col)
{
    return data[row][col];
}
