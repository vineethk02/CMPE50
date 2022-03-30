// Lab2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the value for N: ";
	cin >> n;
	char ch[n];
	cout << "Enter the string: ";
	cin >> ch;
	cout << "the reverse string is: ";
	for (int i = n - 2; i >= 0; i--) { //since we know the last element is a null and te second to last is a !, hence we will start at N - 2
		cout << ch[i];
	}
	return 0;
}

