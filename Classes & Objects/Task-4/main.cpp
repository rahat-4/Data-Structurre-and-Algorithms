#include <iostream>
#include"dynarr.cpp"
using namespace std;

int main()
{
    dynArr<char>num(5);

    for(int i=0; i<5; i++)
    {
        char n;
        cin >> n;
        num.setValue(i,n);
    }
    for(int i=0; i<5; i++)
    {
        cout << num.getValue(i) << "\t";
    }

    return 0;
}
