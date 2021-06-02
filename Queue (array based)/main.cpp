#include"quetype.cpp"
#include"stacktype.cpp"
#include<iostream>

using namespace std;

void PrintBinary(int n)
{
    QueType<string>q;
    string temp = "1";
    int i=0;
    while(i<n)
    {
        cout << temp << endl;
        string s1,s2;
        s1 = temp;
        s2 = s1;
        s1.append("0");
        q.Enqueue(s1);
        s2.append("1");
        q.Enqueue(s2);
        temp = q.Front();
        q.Dequeue();

        i++;
    }
}

void CheckEmpty(QueType<int> q)
{
    if(q.isEmpty())
    {
        cout << "Queue is Empty." << endl;
    }
    else
    {
        cout << "Queue is not Empty." << endl;
    }
}

void CheckFull(QueType<int> q)
{
    if(q.isFull())
    {
        cout << "Queue is Full." << endl;
    }
    else
    {
        cout << "Queue is not Full." << endl;
    }
}


void Print(QueType<int> q)
{
    QueType<int>aux;
    while(!q.isEmpty())
    {
        aux.Enqueue(q.Front());
        cout << q.Front() << "\t";
        q.Dequeue();
    }

    while(!aux.isEmpty())
    {
        q.Enqueue(aux.Front());
        aux.Dequeue();
    }
    cout << endl;
}

void PrintReverse(QueType<int>q)
{
    StackType<int>st;
    while(!q.isEmpty())
    {
        st.Push(q.Front());
        q.Dequeue();
    }

    while(!st.isEmpty())
    {
        q.Enqueue(st.Top());
        cout << st.Top() << "\t";
        st.Pop();
    }
    cout << endl;
}
bool WeightMeter(QueType<int> q, int weightLimit)
{
    QueType<int>temp;
    int sum = 0;
    while(!q.isEmpty())
    {
        temp.Enqueue(q.Front());
        sum = sum+q.Front();
        q.Dequeue();
    }
    while(!temp.isEmpty())
    {
        q.Enqueue(temp.Front());
        temp.Dequeue();
    }

    if(weightLimit>=sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    QueType<int> q;
    int n;
    CheckEmpty(q);
    q.Front();
    for(int i=0;i<4;i++)
    {
        cin>>n;
        q.Enqueue(n);
    }
    CheckEmpty(q);
    CheckFull(q);
    cin>>n;
    q.Enqueue(n);
    Print(q);
    CheckFull(q);
    cin>>n;
    q.Enqueue(n);
    q.Dequeue();
    q.Dequeue();
    Print(q);
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    CheckEmpty(q);
    q.Dequeue();
    for(int i=0;i<5;i++)
    {
        cin>>n;
        q.Enqueue(n);
    }
    PrintReverse(q);
    Print(q);

    QueType<int> lift;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        lift.Enqueue(n);
    }
    int weigtLimit;
    cin>>weigtLimit;
    if(WeightMeter(lift,weigtLimit))
    {
        cout << "Good to go." << endl;
    }
    else
    {
        cout << "Over Weight." << endl << "Maximum Limit " << weigtLimit << endl;
    }
    //Now change the max_items
    int binaryNumbers;
    cin>>binaryNumbers;
    PrintBinary(binaryNumbers);

    return 0;
}
