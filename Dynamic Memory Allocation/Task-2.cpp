#include<iostream>
using namespace std;

int main()
{
    //Input row and column size
    int row,col;
    cout<<"Enter row size: ";
    cin>>row;
    cout<<"Enter column size: ";
    cin>>col;

	char** str = new char* [row];

	//Input character elements of the 2D array
	for (int i=0; i<row; i++)
	{
	    str[i] = new char[col];
	}

	for (int i=0; i<row; i++)
	{
		for (int j=0; j<col ; j++)
            {
                char w;
                cin >> w;
                str[i][j] = w;
            }
	}

	//Print the 2D array
	cout << "2D Array: " << endl;
	for (int i=0; i<row; i++)
	{
		for (int j=0; j<col; j++)
        {
            cout << str[i][j];
        }
        cout << endl;
	}

	//De-allocate the array using the delete operator
	for (int i=0; i<row; i++)
    {
        delete [] str[i];
    }

	delete [] str;

	return 0;
}
