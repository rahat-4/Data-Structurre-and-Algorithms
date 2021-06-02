#include"stacktype.cpp"
#include <iostream>

using namespace std;

int main()
{
    int n,m,x;
    cin >> n >> m >> x;

    //declare stack
    StackType<int>A;
    StackType<int>B;

    int num;
    //input in stack A
    for(int i=0; i<n; i++)
    {
        cin >> num;
        A.Push(num);
    }

    //input in stack B
    for(int i=0; i<m; i++)
    {
        cin >> num;
        B.Push(num);
    }

    int sum = 0;
    int result = 0;


    while(true)
    {
        //remove lowest top element
        if(sum<x)
        {
            if(A.Top() <= B.Top())
            {
                sum += A.Top();
                if(sum<=x)
                {
                    A.Pop();
                    result += 1;
                }
                else
                {
                    break;
                }
            }
            else
            {
                sum += B.Top();
                if(sum<=x)
                {
                    B.Pop();
                    result += 1;
                }
                else
                {
                    break;
                }
            }
        }
    else
    {
        break;
    }

    }

    //print result ;
    cout << result;
    return 0;
}
