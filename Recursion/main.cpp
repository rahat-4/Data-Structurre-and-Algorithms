#include<cmath>
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int sumofDigits(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return (x%10)+sumofDigits(x/10);
    }
}

int findMin(int a[], int size)
{
    if(size==1)
    {
        return a[0];
    }
    else
    {
        int Min = findMin(a,size-1);
        if(Min<a[size-1])
        {
            return Min;
        }
        else
        {
            return a[size-1];
        }
    }
}

int DecToBin(int dec)
{
    if(dec==0)
    {
        return 0;
    }
    else
    {
        return (dec%2)+10*DecToBin(dec/2);
    }
}

float SeriesSum(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 1/pow(2,n)+SeriesSum(n-1);
    }
}

int main()
{
    //fibonacci
    int n;
    cout << "Which position's Fibonacci number you want to know?" << endl;
    cin >> n;

    int fibo = fib(n);
    cout << n << "th Fibonacci number is " << fibo << endl;

    //factorial
    cout << "Which factorial number you want to know?" << endl;
    cin >> n;

    int f = factorial(n);
    cout << n << " factorial number is " << f << endl;

    //Sum of Digit
    cout << "Which digits of integer number's sum you want to know?" << endl;
    cin >> n;

    int sumD = sumofDigits(n);
    cout << n << " digits of integer number's sum is " << sumD << endl;

    //Find minimum
    int s;
    cout << "Enter an array size:" << endl;
    cin >> s;

    int arr[10];
    int element;
    cout << "Enter an element of an array:" << endl;
    for(int i=0; i<s; i++)
    {
        cin >> element;
        arr[i] = element;
    }

    int minimum = findMin(arr, s);

    cout << "Minimum number:" << minimum << endl;

    //Decimal to Binary
    cout << "Enter a decimal number:" << endl;
    cin >> n;

    int b = DecToBin(n);
    cout << n << " binary number is " << b << endl;

    //Sum of Series
    cout << "Enter a power:" << endl;
    cin >> n;

    float sumseries = SeriesSum(n);
    cout << "Sum of series is " << sumseries << endl;
    return 0;
}
