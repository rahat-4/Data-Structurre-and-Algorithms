#include"unsortedtype.h"
#include<iostream>
using namespace std;

template<class T>
UnsortedType<T>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

template<class T>
bool UnsortedType<T>::isEmpty()
{
    return length == 0;
}

template<class T>
bool UnsortedType<T>::isFull()
{
    return length == max_items;
}

template<class T>
void UnsortedType<T>::makeEmpty()
{
    length = 0;
}

template<class T>
void UnsortedType<T>::insertItem(T item)
{
    try
    {
        if(isFull())
        {
            throw ListFull();
        }
        info[length] = item;
        length++;
    }
    catch(ListFull f)
    {
        cout << "List is Full." << endl;
    }
}

template<class T>
void UnsortedType<T>::deleteItem(T item)
{
    try
    {
        if(isEmpty())
        {
            throw ListEmpty();
        }
        for(int i=0; i<length; i++)
        {
            if(info[i] == item)
            {
                info[i] = info[length-1];
                length--;
                break;
            }
        }
    }
    catch(ListEmpty e)
    {
        cout << "List is Empty." << endl;
    }
}

template<class T>
void UnsortedType<T>::retriveItem(T& item, bool& found)
{
    try
    {
        if(isEmpty())
        {
            throw ListEmpty();
        }
        found = false;
        for(int i=0; i<length; i++)
        {
            if(info[i] == item)
            {
                found = true;
                break;
            }
        }
    }
    catch(ListEmpty e)
    {
        cout << "List is empty" << endl;
    }
}

template<class T>
int UnsortedType<T>::lengthIs()
{
    return length;
}

template<class T>
void UnsortedType<T>::resetList()
{
    currentPos = -1;
}

template<class T>
void UnsortedType<T>::getNextItem(T& item)
{
    currentPos++;
    item = info[currentPos];
}
