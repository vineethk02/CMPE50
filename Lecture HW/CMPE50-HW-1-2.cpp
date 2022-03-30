// CMPE50-HW-1-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float buyDeepFriedTwinkie(float dollar) {
	char input;
	float total = 0;
	while (total <= 3.50) {
		cout << "Please inserts coins or dollars: " << endl;
		cout << "n - Nickel" << endl;
		cout << "d - Dimes" << endl;
		cout << "q - Quarters" << endl;
		cout << "D - Dollars" << endl;
		cout << "Deep Fried Twinkie is $3.50, You inserted $" << total << endl;
		cout << "Next coin: ";
		cin >> input;

		if (input == 'n')
			total = total + 0.05;

		else if (input == 'd')
			total = total + 0.1;

		else if (input == 'q')
			total = total + 0.25;

		else if (input == 'D')
			total = total + 1;
		cin.ignore();

		if (total >= 3.5) {
			cout << "Enjoy your deep fried twinkie!!!!!!!!. Your change is $" << total-3.5 << endl;
			return total - 3.5;
		}
	}

}
int main() {
	char c = 'y';
	float dollar = 0.0;
	cout << "Welcome to Deep fried twinkiw vending machine!!!!!!!!" << endl;
	cout << "Twinkies are $3.50" << endl;

	while (c == 'y' || c == 'Y') {
		dollar = buyDeepFriedTwinkie(dollar);
		cout << "Would you like to buy another?" << endl;
		cin >> c;
	}
}

/*Program Output:
* Welcome to Deep fried twinkiw vending machine!!!!!!!!
Twinkies are $3.50
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $0
Next coin: D
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $1
Next coin: D
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $2
Next coin: D
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $3
Next coin: D
Enjoy your deep fried twinkie!!!!!!!!. Your change is $0.5
Would you like to buy another?
y
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $0
Next coin: D
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $1
Next coin: q
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $1.25
Next coin: q
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $1.5
Next coin: q
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $1.75
Next coin: D
Please inserts coins or dollars:
n - Nickel
d - Dimes
q - Quarters
D - Dollars
Deep Fried Twinkie is $3.50, You inserted $2.75
Next coin: D
Enjoy your deep fried twinkie!!!!!!!!. Your change is $0.25
Would you like to buy another?
n
*/