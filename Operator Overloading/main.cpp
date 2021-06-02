#include <iostream>
#include"Complex.h"
using namespace std;

int main()
{
    Complex result;

    //Addition
    Complex c1(4,3);
    Complex c2(2,5);
    result = c1+c2;
    result.Print();
    cout << endl;
    result = 3+c2;
    result.Print();
    cout << endl;
    result = c1+8;
    result.Print();
    cout << endl;

    //Subtraction
    Complex c3(8,2);
    Complex c4(2,3);
    result = c3-c4;
    result.Print();
    cout << endl;
    result = 6-c4;
    result.Print();
    cout << endl;
    result = c3-4;
    result.Print();
    cout << endl;

    //Multiplication
    Complex c5(4,3);
    Complex c6(2,5);
    result = c5*c6;
    result.Print();
    cout << endl;
    result = 3*c6;
    result.Print();
    cout << endl;
    result = c6*8;
    result.Print();
    cout << endl;

    //Equal and Not Equal
    Complex c7(3,4);
    Complex c8(3,4);
    if(c7==c8)
    {
        cout << "This two complex number are equal." << endl;
    }
    else
    {
        cout << "This two complex number are not equal," << endl;
    }
    return 0;
}
