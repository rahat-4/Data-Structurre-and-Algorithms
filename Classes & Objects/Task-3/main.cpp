#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{
    int row,col;
    cout << "Input row size: ";
    cin >> row;
    cout << "Input column size: ";
    cin >> col;
    dynArr d(row,col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int n;
            cin >>n;
            d.setValue(i,j,n);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << d.getValue(i,j) << "\t";
        }
        cout << endl;
    }
}
