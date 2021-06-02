#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{
    dynArr num(5);

    for(int i=0; i<5; i++)
    {
        int n;
        cin >> n;
        num.setValue(i,n);
    }
    for(int i=0; i<5; i++)
    {
        cout << num.getValue(i) << "\t";
    }

    return 0;
}
