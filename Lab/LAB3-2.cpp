// LAB3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

int main()
{
	int arr[3][3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the elements of the " << i + 1 << " row " << endl;
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
			cout << "\t";
		}
		cout << endl;
	}
	if (arr[0][0] == 0 && arr[0][1] == 0 && arr[1][0] == 0)
	{
		cout << "It is an lower triangluar matrix" << endl;
	}
	else if (arr[1][2] == 0 && arr[2][1] == 0 && arr[2][2] == 0)
	{
		cout << "It is an upper triangluar matrix" << endl;
	}
	else if (arr[0][0] == 0 && arr[0][1] == 0 && arr[1][0] == 0 && arr[1][2] == 0 && arr[2][1] == 0 && arr[2][2] == 0)
	{
		cout << "It is both upper and lower" << endl;
	}
	else
	{
		cout << "it is a normal matrix" << endl;
	}
}

/*Program Output:
* Enter the elements of the 1 row

1
9
0
Enter the elements of the 2 row
0
9
5
Enter the elements of the 3 row
0
0
0
1       9       0
0       9       5
0       0       0
it is a normal matrix
*/
