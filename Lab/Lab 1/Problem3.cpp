// Problem3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, fact=1, number;
	cout << "Enter a = ";
	cin >> a; 
	for (int i = a; i > 0; i--) {
		 fact*= i;
	}
	cout << fact;
	return 0;
		
}

/*Program Output:
* Enter a = 7
* 5040
* This is the lab assignment output
*/

