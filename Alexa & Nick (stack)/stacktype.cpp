#include"stacktype.h"
#include<iostream>

using namespace std;

template<class T>
StackType<T>::StackType()
{
    top = -1;
}

template<class T>
bool StackType<T>::isEmpty()
{
    return top == -1;
}

template<class T>
bool StackType<T>::isFull()
{
    return top == max_size-1;
}

template<class T>
void StackType<T>::Push(T item)
{
    try
    {
        if(isFull())
        {
            throw FullStack();
        }
        top++;
        info[top] = item;
    }
    catch(FullStack f)
    {
        cout << "Stack is full." << endl;
    }
}

template<class T>
void StackType<T>::Pop()
{
    try
    {
        if(isEmpty())
        {
            throw EmptyStack();
        }
        top--;
    }
    catch(EmptyStack e)
    {
        cout << "Stack is empty." << endl;
    }
}

template<class T>
T StackType<T>::Top()
{
    return info[top];
}
