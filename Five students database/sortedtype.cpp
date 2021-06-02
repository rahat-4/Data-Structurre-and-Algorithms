#include<iostream>
#include"sortedtype.h"
using namespace std;

template<class T>
SortedType<T>::SortedType()
{
    length = 0;
    currentPos = -1;
}

template<class T>
void SortedType<T>::makeEmpty()
{
    length = 0;
}

template<class T>
bool SortedType<T>::isEmpty()
{
    return length == 0;
}

template<class T>
bool SortedType<T>::isFull()
{
    return length == max_items;
}

template<class T>
int SortedType<T>::lengthIs()
{
    return length;
}

template<class T>
void SortedType<T>::insertItem(T item)
{
    try
    {
        if(isFull())
        {
            throw ListFull();
        }
        if(isEmpty())
        {
            info[length] = item;
            length++;
        }
        else
        {
            int position = length;
            for(int i=0; i<lengthIs();i++)
            {
                if(item <= info[i])
                {
                    position = i;
                    break;
                }
            }
            for(int i=length; i>position; i--)
            {
                info[i] = info[i-1];
            }
            info[position] = item;
            length++;
        }
    }
    catch(ListFull f)
    {
        cout << "List is full." << endl;
    }
}

template<class T>
void SortedType<T>::deleteItem(T item)
{
    try
    {
        if(isEmpty())
        {
            throw ListEmpty();
        }
        int position = length;
        for(int i=0; i<lengthIs(); i++)
        {
            if(info[i] == item)
            {
                position = i;
                break;
            }
        }
        for(int i=position; i<lengthIs(); i++)
        {
            info[i] = info[i+1];
        }
        length--;
    }
    catch(ListEmpty e)
    {
        cout << "List is empty." << endl;
    }

}

template<class T>
void SortedType<T>::resetList()
{
    currentPos = -1;
}

template<class T>
void SortedType<T>::getNextItem(T& item)
{
    currentPos++;
    item = info[currentPos];
}

template<class T>
void SortedType<T>::retriveItem(T& item,bool& found)
{
    found = false;
    for(int i=0; i<lengthIs(); i++)
    {
        if(item == info[i])
        {
            found = true;
        }
    }
}
