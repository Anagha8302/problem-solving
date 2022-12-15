/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C++ code for program
// to cyclically rotate
// an array by one
# include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
	int x = arr[n - 1], i;
	for (i = n - 1; i > 0; i--){
		arr[i] = arr[i - 1];
	}
	arr[0] = x;
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5}, i;
	int n = sizeof(arr) /
			sizeof(arr[0]);

	cout << "Given array is \n";
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	rotate(arr, n);

	cout << "\nRotated array is\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	return 0;
}

