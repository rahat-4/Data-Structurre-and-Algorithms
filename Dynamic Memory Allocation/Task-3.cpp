#include<iostream>
using namespace std;

int main()
{
    //Input row and column size
    int row;
    cout << "Enter row size: ";
    cin >> row;

	int** a = new int* [row];
	int *new_col = new int [row];

	//Input the column number of the array
    for(int i=0; i<row; ++i)
    {
        cout << "Enter column size: ";
        cin >> new_col[i];
        a[i] = new int[new_col[i]];

        cout << "Row " <<i+1 << endl;

        //Input the elements of the array
        for(int j=0; j<new_col[i]; j++)
        {
            cout << "Column "<<j+1 << ": ";
            cin >> a[i][j];
        }
    }
	//Print the 2D array
    cout << "2D Array: " << endl;
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<new_col[i]; j++)
        {
            cout << a[i][j]<<"\t";
        }
     cout << endl;
    }

    //De-allocate the array using the delete operator
	for (int i=0; i<row; i++)
    {
        delete [] a[i];
    }

	delete [] a;
	delete [] new_col;

	return 0;
}
