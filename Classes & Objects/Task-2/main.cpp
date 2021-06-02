#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{
    int nSize;
    cout << "Enter Array size: ";
    cin >> nSize;

    dynArr num(nSize);

    for(int i=0; i<nSize; i++)
    {
        int n;
        cin >> n;
        num.setValue(i,n);
    }
    for(int i=0; i<nSize; i++)
    {
        cout << num.getValue(i) << "\t";
    }

    num.allocate(nSize);
    return 0;
}
