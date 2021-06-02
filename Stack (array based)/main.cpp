#include"stacktype.cpp"
#include <iostream>

using namespace std;

void emptyCheck(StackType<int>s)
{
    if(s.isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }
}

void fullCheck(StackType<int>s)
{
    if(s.isFull())
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        cout << "Stack is not full." << endl;
    }
}

void Print(StackType<int>s)
{
    StackType<int>aux;
    while(!s.isEmpty())
    {
        aux.Push(s.Top());
        s.Pop();
    }

    while(!aux.isEmpty())
    {
        cout << aux.Top() << "\t";
        s.Push(aux.Top());
        aux.Pop();
    }
    cout << endl;
}

void largestFound(StackType<int>s)
{
    StackType<int>large;

    int l;
    l = s.Top();
    while(!s.isEmpty())
    {
        large.Push(s.Top());
        if (l < s.Top())
        {
            l = s.Top();
        }
        s.Pop();
    }
    cout << l << endl;

    while(!large.isEmpty())
    {
        s.Push(large.Top());
        large.Pop();
    }
    cout << endl;
}

bool isBalanced(string s)
{
    StackType<char>st;
    int l = int(s.length());
    for(int i=0; i<l; i++)
    {
        if (s[i] == '(')
        {
            st.Push(s[i]);
        }
        if(s[i] == ')')
        {
            if (st.isEmpty())
            {
                return false;
            }
            st.Pop();
        }
    }
    if(st.isEmpty())
    {
        return true;
    }
    return false;
}


int main()
{
    StackType<int>st;
    emptyCheck(st);

    for(int i=0; i<4; i++)
    {
        int n;
        cin >> n;
        st.Push(n);
    }
    emptyCheck(st);

    fullCheck(st);

    Print(st);

    st.Push(3);

    Print(st);

    fullCheck(st);

    st.Pop();
    st.Pop();

    cout << st.Top() << endl;

    st.Push(9);
    st.Push(8);
    st.Push(10);

    largestFound(st);

    Print(st);

    //take a string
    string str;
    cout << "Enter parenthesis:" << endl;
    cin >> str;
    if(isBalanced(str))
    {
        cout <<str<< " is balanced." << endl ;
    }
    else
    {
        cout <<str<<" is not balanced." << endl;
    }

    return 0;
}
