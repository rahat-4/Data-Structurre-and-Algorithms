#include<iostream>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};

node* head;

void InsertAtFirst(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->prev = NULL;
    temp->next = NULL;
    if(head!=NULL)
    {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}

void InsertAtLast(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->prev = NULL;
    temp->next = NULL;
    node* location = head;
    while(location->next!=NULL)
    {
        location = location->next;
    }
    location->next = temp;
    temp->prev = location;
}

void InsertPosition(int item,int pos)
{
    node* temp = new node();
    temp->data = item;
    temp->prev = NULL;
    temp->next = NULL;
    node* location = head;
    for(int i=0; i<pos-2; i++)
    {
        location = location->next;
    }
    temp->next = location->next;
    temp->prev = location;
    location->next->prev = temp;
    location->next = temp;
}

void DeleteAtFirst()
{
    node* del = head;
    head = head->next;
    head->prev = NULL;
    delete del;
}

void DeleteAtLast()
{
    node* location = head;
    while(location->next->next!=NULL)
    {
        location = location->next;
    }
    node* del = location->next;
    location->next = NULL;
    delete del;
}

void DeletePosition(int pos)
{
    node* location = head;
    for(int i=0; i<pos-2; i++)
    {
        location = location->next;
    }
    node* del = location->next;
    location->next = del->next;
    location->next->prev = location;
    delete del;
}

void DeleteValue(int item)
{
    node* location = head;
    node* del;
    if(location->data == item)
    {
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
    }
    else
    {
        while(location->next->data != item)
        {
            location = location->next;
        }
        del = location->next;

        if(del->next == NULL)
        {
            location->next = NULL;
            delete del;
        }
        else
        {
            location->next = del->next;
            del->next->prev = location;
            delete del;
        }
    }
}

void Print()
{
    node* location = head;
    while(location!=NULL)
    {
        cout << location->data << "\t";
        location = location->next;
    }
    cout << endl;
}

void PrintReverse()
{
    node* location = head;
    while(location->next!=NULL)
    {
        location = location->next;
    }
    node* current = location;
    while (current!=NULL)
    {
        cout << current->data << "\t";
        current = current->prev;
    }
}
int main()
{
    head = NULL;
    int n,e;
    cout << "How many element you add?" << endl;
    cin >> n;

    //insert first
    cout << "Insert first: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> e;
        InsertAtFirst(e);
    }

    cout << "After insert at first print elements:" << endl;
    Print();

    //insert random position
    cout << "Insert at random position:" << endl;
    int r,p;
    cin >> r >> p;
    InsertPosition(r,p);

    cout << "After insert at random position print elements:" << endl;
    Print();

    //insert last
    cout << "Insert at last position:" << endl;
    int l;
    cin >> l;
    InsertAtLast(l);

    cout << "After insert at last print elements:" << endl;
    Print();

    //delete first
    cout << "Delete at first position:" << endl;
    DeleteAtFirst();

    cout << "After delete at first print elements:" << endl;
    Print();

    //delete last
    cout << "Delete at last posititon:" << endl;
    DeleteAtLast();

    cout << "After delete at last print elements:" << endl;
    Print();

    //delete random position
    cout << "Delete at random position:" << endl;
    int rd;
    cin >> rd;
    DeletePosition(rd);

    cout << "After delete at random position print elements:" << endl;
    Print();

    //delete by value
    cout << "Delete by value:" << endl;
    int v;
    cin >> v;
    DeleteValue(v);

    cout << "After delete value print elements:" << endl;
    Print();

    //print reverse
    cout << "Reverse print:" << endl;
    PrintReverse();
    return 0;
}
