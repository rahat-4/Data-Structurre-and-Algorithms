#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

struct node
{
    int data;
    node* next;
};

class SortedType
{
private:
    node* head;
    node* temp;
    node* pos;
    node* currentPos;
    int length;

public:
    SortedType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(int);
    void DeleteItem(int);
    void RetrieveItem(int&,bool&);
    void ResetList();
    void GetNextItem(int&);
};
#endif // SORTEDTYPE_H_INCLUDED
