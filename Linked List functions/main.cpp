#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head;

void insertAtFirst(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    if(head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}

void insertAtLast(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    node* location = head;
    while(location->next!=NULL)
    {
        location = location->next;
    }
    location->next = temp;
}

void insertPosition(int item,int pos)
{
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    node* location = head;
    for(int i=0; i<pos-2; i++)
    {
        location = location->next;
    }
    temp->next = location->next;
    location->next = temp;
}

void deleteAtFirst()
{
    node* del = head;
    head = head->next;
    delete del;
}

void deleteAtLast()
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

void deletePosition(int pos)
{
    node* location = head;
    for(int i=0; i<pos-2; i++)
    {
        location = location->next;
    }
    node* del = location->next;
    location->next = del->next;
    delete del;
}

void deleteValue(int item)
{
    node* location = head;
    node* del;
    if(location->data == item)
    {
        del = head;
        head = head->next;
        delete del;
    }
    else
    {
        while((location->next)->data != item)
        {
            location = location->next;
        }
        del = location->next;
        location->next = del->next;
        delete del;
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

int main()
{
    head = NULL;
    int n,e;
    cout << "How many element you add?" << endl;
    cin >> n;

    //insert first
    for(int i=0; i<n; i++)
    {
        cin >> e;
        insertAtFirst(e);
    }
    Print();

    //insert random position
    cout << "Insert at random position:" << endl;
    insertPosition(200,3);
    Print();
    insertPosition(2000,5);
    Print();

    //insert last
    cout << "Insert at last position:" << endl;
    insertAtLast(40);
    Print();
    insertAtLast(50);
    Print();

    //delete first
    cout << "Delete at first position:" << endl;
    deleteAtFirst();
    Print();
    deleteAtFirst();
    Print();

    //delete last
    cout << "Delete at last posititon:" << endl;
    deleteAtLast();
    Print();
    deleteAtLast();
    Print();

    //delete random position
    cout << "Delete at random position:" << endl;
    deletePosition(3);
    Print();
    deletePosition(2);
    Print();

    //delete by value
    cout << "Delete by value:" << endl;
    deleteValue(200);
    Print();
    deleteValue(2);
    Print();

    return 0;
}
