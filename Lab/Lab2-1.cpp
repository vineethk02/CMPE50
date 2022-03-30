// Lab2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

void Add(int a, int b) {
    cout << "Adding numbers: " << a + b << endl; //adding the integers
}
void Add(double a, double b) {
    cout << "Adding doubles: " << a + b << endl; //adding doubles
}

void Add(char* a, char* b) {
    string full_line = string(a) + string(b);
    cout << "Adding strings: " << full_line << endl; //adding strings
}

int main()
{
    int x, y;
    double r, s;
    char a[10], b[10]; //up to 10 characters

    cout << "Enter Numbers: ";
    cin >> x >> y;

    cout << "Enter Doubles: ";
    cin >> r >> s;

    cout << "Enter Strings: ";
    cin >> a >> b;

    Add(x, y);
    Add(r, s);
    Add(a, b);
    
    return 0;
}

/*Program output:
* Enter Numbers: 5
3
Enter Doubles: 11.1
14.5
Enter Strngs: vin
kan
Adding numbers: 8
Adding doubles: 25.6
Adding strings: vinkan
*/