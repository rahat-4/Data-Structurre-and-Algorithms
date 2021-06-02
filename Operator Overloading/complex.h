#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    friend Complex operator+(Complex, Complex);
    friend Complex operator+(int, Complex);
    friend Complex operator+(Complex, int);

    friend Complex operator-(Complex, Complex);
    friend Complex operator-(int, Complex);
    friend Complex operator-(Complex, int);

    friend Complex operator*(Complex, Complex);
    friend Complex operator*(int, Complex);
    friend Complex operator*(Complex, int);

    friend bool operator!=(Complex, Complex);
    friend bool operator==(Complex, Complex);
public:
    Complex();
    Complex(double,double);
    void Print();
private:
    double Real;
    double Imaginary;
};
#endif // COMPLEX_H_INCLUDED
