#include"quetype.h"
#include<iostream>

using namespace std;

template<class T>
QueType<T>::QueType()
{
    front = -1;
    rear = -1;
}

template<class T>
bool QueType<T>::isEmpty()
{
    return front == -1 && rear == -1;
}

template<class T>
bool QueType<T>::isFull()
{
    return (rear+1)%max_items == front;
}

template<class T>
void QueType<T>::MakeEmpty()
{
    front = -1;
    rear = -1;
}

template<class T>
void QueType<T>::Enqueue(T item)
{
    try
    {
        if(isFull())
        {
            throw FullQueue();
        }
        else if(isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear+1)%max_items;
        }
        info[rear] = item;
    }
    catch(FullQueue f)
    {
        cout << "Queue is already Full." << endl;
    }
}

template<class T>
void QueType<T>::Dequeue()
{
    try
    {
        if(isEmpty())
        {
            throw EmptyQueue();
        }
        else if(rear == front)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front+1)%max_items;
        }
    }
    catch(EmptyQueue e)
    {
        cout << "Queue is already Empty." << endl;
    }
}

template<class T>
T QueType<T>::Front()
{
    return info[front];
}
