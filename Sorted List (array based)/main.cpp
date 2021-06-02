#include <iostream>
#include"sortedtype.cpp"
#include"timestamp.h"
using namespace std;

void emptyCheck(SortedType<int>sf)
{
    if(sf.isEmpty())
    {
        cout << "List is Empty." << endl;
    }
    else
    {
        cout << "List is not Empty." << endl;
    }
}

void fullCheck(SortedType<int>sf)
{
    if(sf.isFull())
    {
        cout << "List is Full." << endl;
    }
    else
    {
        cout << "List is not Full." << endl;
    }
}

void Print(SortedType<int>sf)
{
    int value;
    for(int i=0; i<sf.lengthIs(); i++)
    {
        sf.getNextItem(value);
        cout << value << "\t";
    }
    cout << endl;
    sf.resetList();
}

int main()
{
    //create list of integer
    SortedType<int>s;

    //check list is empty or not
    emptyCheck(s);

    //insert 5 items
    int n;
    cout << "Insert five item: ";
    for(int i=0; i<5; i++)
    {
        cin >> n;
        s.insertItem(n);
    }

    //print list
    Print(s);

    //check list is full or not
    fullCheck(s);

    //delete one item
    s.deleteItem(3);

    //print list
    Print(s);

    //check list is full or not
    fullCheck(s);

    /***
    CREATE TIMESTAMP CLASS OBJECT
    ***/

    timeStamp t1(15,34,23);
    timeStamp t2(45,12,12);
    timeStamp t3(35,12,6);
    timeStamp t4(12,40,18);
    timeStamp t5(12,12,12);

    //create list of objects of class timeStamp
    SortedType<timeStamp>t;

    //insert 5 time values ssmmhh format
    t.insertItem(t1);
    t.insertItem(t2);
    t.insertItem(t3);
    t.insertItem(t4);
    t.insertItem(t5);

    //print list
    timeStamp ts;
    for(int i=0; i<t.lengthIs(); i++)
    {
        t.getNextItem(ts);
        ts.Print();
    }
    t.resetList();
    cout << endl;

    //delete one timeStamp
    t.deleteItem(t5);

    //print list
    for(int i=0; i<t.lengthIs(); i++)
    {
        t.getNextItem(ts);
        ts.Print();
    }
    t.resetList();

    //check list is full or not
    if(t.isFull())
    {
        cout << "List is full." << endl;
    }
    else
    {
        cout << "List is not full." << endl;
    }

    return 0;
}
