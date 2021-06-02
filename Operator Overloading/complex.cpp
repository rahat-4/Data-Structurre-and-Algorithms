#include<iostream>
#include"complex.h"
using namespace std;

Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}

Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}

//Addition
Complex operator+(Complex a, Complex b)
{
    Complex sum;
    sum.Real = a.Real + b.Real;
    sum.Imaginary = a.Imaginary + b.Imaginary;
    return sum;
}

Complex operator+(int x, Complex a)
{
    Complex sum;
    sum.Real = x + a.Real;
    sum.Imaginary = a.Imaginary;
    return sum;
}

Complex operator+(Complex a, int x)
{
    Complex sum;
    sum.Real = a.Real + x;
    sum.Imaginary = a.Imaginary;
    return sum;
}

//Subtraction
Complex operator-(Complex a, Complex b)
{
    Complex sum;
    sum.Real = a.Real - b.Real;
    sum.Imaginary = a.Imaginary - b.Imaginary;
    return sum;
}

Complex operator-(int x, Complex a)
{
    Complex sum;
    sum.Real = x - a.Real;
    sum.Imaginary = a.Imaginary;
    return sum;
}

Complex operator-(Complex a, int x)
{
    Complex sum;
    sum.Real = a.Real - x;
    sum.Imaginary = a.Imaginary;
    return sum;
}

//Multiplication
Complex operator*(Complex a, Complex b)
{
    Complex sum;
    sum.Real = a.Real * b.Real;
    sum.Imaginary = a.Imaginary * b.Imaginary;
    return sum;
}

Complex operator*(int x, Complex a)
{
    Complex sum;
    sum.Real = x * a.Real;
    sum.Imaginary = a.Imaginary;
    return sum;
}

Complex operator*(Complex a, int x)
{
    Complex sum;
    sum.Real = a.Real * x;
    sum.Imaginary = a.Imaginary;
    return sum;
}

//Not Equal
bool operator!=(Complex a, Complex b)
{
    return (a.Real != b.Real) || (a.Imaginary != b.Imaginary);
}

//Equal
bool operator==(Complex a, Complex b)
{
    return (a.Real == b.Real) && (a.Imaginary == b.Imaginary);
}


void Complex::Print()
{
    if(Imaginary>0)
    {
        cout << Real << "+" << Imaginary << "i" << endl;
    }
    else
    {
        cout << Real << Imaginary << "i" << endl;
    }

}
