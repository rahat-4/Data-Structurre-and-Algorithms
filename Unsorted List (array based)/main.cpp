#include"unsortedtype.cpp"
#include"studentinfo.h"
#include <iostream>

using namespace std;
void Print(UnsortedType<int>u)
{
    int value;
    for(int i=0; i<u.lengthIs(); i++)
    {
        u.getNextItem(value);
        cout << value << "\t";
    }
    cout << endl;
    u.resetList();
}

void searchItem(UnsortedType<int>u,int item)
{
    bool found = false;
    u.retriveItem(item,found);
    if(found)
    {
        cout << "Item is found." << endl;
    }
    else
    {
        cout << "Item is not found." << endl;
    }
}
void checkFull(UnsortedType<int>u)
{
    if(u.isFull())
    {
        cout << "List is full." << endl;
    }
    else
    {
        cout << "List is not full." << endl;
    }
}

int main()
{
    UnsortedType<int>ul;

    //insert four items
    cout << "Insert four items: ";
    int n;
    for(int i=0; i<4; i++)
    {
        cin >> n;
        ul.insertItem(n);
    }

    //print list
    Print(ul);

    //print length
    cout << ul.lengthIs() << endl;

    //insert one item
    ul.insertItem(1);

    //print list
    Print(ul);

    //Retrieve 4,5,9,10 and print whether found or not
    searchItem(ul,4);
    searchItem(ul,5);
    searchItem(ul,9);
    searchItem(ul,10);

    //print list is full or not
    checkFull(ul);

    //delete 5
    ul.deleteItem(5);

    //print list is full or not
    checkFull(ul);

    //delete 1
    ul.deleteItem(1);

    //print list
    Print(ul);

    //delete 6
    ul.deleteItem(6);

    //print list
    Print(ul);

    //StudentInfo class

    //insert 5 students records
    studentInfo s1(15234, "Jon", 2.6);
    studentInfo s2(13732, "Tyrion", 3.9);
    studentInfo s3(13569, "Sandor", 1.2);
    studentInfo s4(15467, "Ramsey 2", 3.1);
    studentInfo s5(16285, "Arya", 3.1);

    //create list object
    UnsortedType<studentInfo>s;

    //insert 5 items
    s.insertItem(s1);
    s.insertItem(s2);
    s.insertItem(s3);
    s.insertItem(s4);
    s.insertItem(s5);


    //delete id: 15467
    s.deleteItem(s4);

    //retrieve id:13569 and print found or not
    bool found = false;
    s.retriveItem(s3,found);
    if(found)
    {
        cout << "Item is found." << endl;
        s3.Print();
        cout << endl;

    }
    else
    {
        cout << "Item is not found." << endl;
    }
    //print student list
    studentInfo si;
    for(int i=0; i<s.lengthIs(); i++)
    {
        s.getNextItem(si);
        si.Print();
    }
    s.resetList();

    return 0;
}
