// Lab2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int maximum = 0;
	int maximum2 = 0;

	cout << "Enter the number of array elements: ";
	for (int i = 0; i < 10; i++) { //i < 10 for the how many numbers can be listed, so only 10
		cin >> arr[i]; //input array
	}
	int temp[10];
	for (int i = 0; i < 10; i++) {
		temp[i] = arr[i]; //copying array into temp
	}
	for (int i = 0; i < 10; i++) {
		if (temp[i] > maximum) {
			maximum = temp[i]; //finding the largest number
		}
	}
	for (int i = 0; i < 10; i++) {
		if (temp[i] == maximum) {
			temp[i] = 0; //making the first maximum number to be 0, 
						 //so the second largest number can be found
		}
	}
	for (int i = 0; i < 10; i++) {
		if (temp[i] > maximum2) {
			maximum2 = temp[i]; //once the second largest number is found, then it is the second largest number in the array
		}
	}
	cout << "The second largest number: " << maximum2;
}


/*Program ouput:
* Enter the number of array elements: 1 2 9 3 6 4 5 8 7 0
The second largest number: 8
*/