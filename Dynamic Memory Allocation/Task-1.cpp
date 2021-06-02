#include<iostream>
using namespace std;

int main()
{
	int n;
	//Input array size
	cout << "Enter array size: ";
	cin >> n;
	int* a = new int(n);

	//Input array elements
	cout << "Enter array elements: " << endl;
	for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    //Print the array
	cout << "Array: ";
	for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    //De-allocate the array using the delete operator
	delete [] a;

	return 0;
}
