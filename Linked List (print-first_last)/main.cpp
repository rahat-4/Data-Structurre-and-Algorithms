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
    if(head!=NULL)
    {
        temp->next = head;
    }
    head = temp;
}

void insertAtLast(int item)
{
    node* location;
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    location = head;
    while(location->next!=NULL)
    {
        location = location->next;
    }
    location->next = temp;
}

void Print()
{
    node* location = head;
    while(location!=NULL)
    {
        cout << location->data <<"\t";
        location = location->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    //insert at first
    int n,value;
    cout << "How many item you stored at first?" << endl;
    cin >> n;
    cout << "Input value:" << endl;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        insertAtFirst(value);
    }

    Print();

    //insert at last
    insertAtLast(10);
    Print();
    insertAtLast(15);
    Print();
    insertAtLast(20);
    Print();

    return 0;
}
