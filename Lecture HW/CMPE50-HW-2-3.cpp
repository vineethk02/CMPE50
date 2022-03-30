// CMPE50-HW-2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include <iomanip>
using namespace std;
int countEven(int arr[], int size);
int main()
{
	int arr[] = { 1, 6, 3, 4, 7, 2, 8 };
	int size = sizeof(arr)/4;
	cout << "The number of even are: " << countEven(arr, size) << endl;
}

int countEven(int arr[], int size) {
	int a = 0;

	for (int i = 0; i < size; i++) {
		if ( arr[i] % 2 == 0) {
			a++;
		}

	}
	return a;
}


/*Program output:
* The number of even are: 4
*/
 