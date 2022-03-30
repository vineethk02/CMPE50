// LAB4-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int n = 0, count, arr[50], i = 0, j, input;
	char x[50];
	cout << "Enter 1 for user input or another number for file input: ";
	cin >> input;

	if (input == 1) {
		cout << "\nHow many numbers? ";
		cin >> n;
		cout << "Enter " << n << "integers:\n";
		for (i = 0; i < n; i++)
			cin >> arr[i];
	}
	if (input != 1) {
		cout << "\nEnter file name: ";
		cin >> x;
		ifstream myFile(x);
		while (myFile >> arr[i]) {
			n++;
			i++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "\nN\tCount\n";
	for (i = 0; i < n; i++) {
		count = 1;
		while (arr[i] == arr[i + 1] && i < n) {
			count++;
			i++;
		}
		cout << arr[i] << "\t" << count << endl;
	}
	return 0;
}

  

/*Program output:
* Enter 1 for user input or another number for file input: 1

How many numbers?9
Enter 9integers:
1
5
3
5
8
3
7
9
2

N       Count
9       1
8       1
7       1
5       2
3       2
2       1
1       1
*/