#include <iostream>
#include"sortedtype.h"
using namespace std;

void emptyCheck(SortedType sf)
{
    if(sf.IsEmpty())
    {
        cout << "List is Empty." << endl;
    }
    else
    {
        cout << "List is not Empty." << endl;
    }
}

void fullCheck(SortedType sf)
{
    if(sf.IsFull())
    {
        cout << "List is Full." << endl;
    }
    else
    {
        cout << "List is not Full." << endl;
    }
}

void Print(SortedType sf)
{
    int value;
    for(int i=0; i<sf.LengthIs(); i++)
    {
        sf.GetNextItem(value);
        cout << value << "\t";
    }
    cout << endl;
    sf.ResetList();
}

int main()
{
    //create list of integer
    SortedType s;

    int x;
    cout << "How many items do you insert?" << endl;
    cin >> x;
    //insert items
    int n;
    cout << "Insert item: ";
    for(int i=0; i<x; i++)
    {
        cin >> n;
        s.InsertItem(n);
    }

    //print list
    Print(s);


    cout << "Please insert which item you want to delete: ";
    //delete one item
    int d1;
    cin >> d1;
    s.DeleteItem(d1);
    cout<< endl;

    cout << "After delete item in the list: ";
    Print(s);


    return 0;
}
