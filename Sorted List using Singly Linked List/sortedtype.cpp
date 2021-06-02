#include<iostream>
#include"sortedtype.h"
using namespace std;

SortedType::SortedType()
{
    head = NULL;
    temp = NULL;
    pos = NULL;
    currentPos = NULL;
    length = 0;
}

void SortedType::MakeEmpty()
{
    pos = head;
    node* del;
    while(pos!=NULL)
    {
        del = pos;
        pos = pos->next;
        delete del;
    }
    delete pos;
    length = 0;
}

bool SortedType::IsEmpty()
{
    return head == NULL;
}

bool SortedType::IsFull()
{
    return false;
}

int SortedType::LengthIs()
{
    return length;
}

void SortedType::InsertItem(int item)
{
    temp = new node();
    temp->data = item;
    temp->next = NULL;
    if(head!=NULL)
    {
        pos = head;
        if(pos->data > item)
        {
            temp->next = head;
            head = temp;
            length++;
        }
        else
        {
            while(pos->next!=NULL)
            {
                if((pos->next)->data >= item)
                {
                    temp->next = pos->next;
                    pos->next = temp;
                    length++;
                    break;
                }
                else
                {
                    pos = pos->next;
                }
            }
            if(temp->next == NULL)
            {
                pos->next = temp;
                length++;
            }
        }
    }
    else
    {
        head = temp;
        length++;
    }
}

void SortedType::DeleteItem(int item)
{
    node* del;
    pos = head;
    if(pos->data == item)
    {
        del = head;
        head = pos->next;
        delete del;
        length--;
    }
    else
    {
        while(pos!=NULL)
        {
            if(pos->next->data == item)
            {
                del = pos->next;
                pos->next = del->next;
                delete del;
                length--;
                break;
            }
            else
            {
                pos = pos->next;
            }
        }
    }
}

void SortedType::RetrieveItem(int& item, bool& found)
{
    found = false;
    pos = head;
    while(pos!=NULL)
    {
        if(pos->data == item)
        {
            found = true;
            break;
        }
        else
        {
            pos = pos->next;
        }
    }
}

void SortedType::ResetList()
{
    currentPos = NULL;
}

void SortedType::GetNextItem(int& item)
{
    if(currentPos == NULL)
    {
        currentPos = head;
    }
    item = currentPos->data;
    currentPos = currentPos->next;
}
