// CMPE50-HW-1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double calHatSize(double height, double weight, double age) {
    double hatSize = (weight / height) * 2.9; //calculate hat size, the weight divied by height times 2.9
    return hatSize;
}

double calJacketSize(double height, double weight, double age) {
    double jacketSize = (height * weight) / 288;
    double i = 40;
    while (i <= age) { //while loop for adding 1/8 inch for 10 years over age of 30
        jacketSize += (1.0 / 8.0);
        i = i + 10;
    }
    return jacketSize;
}

double calWaistSize(double height, double weight, double age) {
    double waistSize = weight / 5.7;
    double i = 30;
    while (i <= age) { //adding 1/10 of an inch for each 2 years over age of 28
        waistSize += (1.0 / 10.0);
        i += 2;
    }
    return waistSize;
}

int main()
{
    double hatSize, jacketSize, waistSize;
    double height, weight, age;
    char ch;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    do {
        cout << "Give height in inches, weight in pounds, age in years\n";
        cin >> height;
        cin >> weight;
        cin >> age;
        hatSize = calHatSize(height, weight, age); //calling the function
        jacketSize = calJacketSize(height, weight, age); //calling the function
        waistSize = calWaistSize(height, weight, age); //calling the function

        cout << "Hat size = " << hatSize << endl;
        cout << "Jacket size = " << jacketSize << endl;
        cout << "Waist size = " << waistSize << endl;
        cout << "Enter Y or y repeat\n";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y'); //if character is Y or y, it is repeats, if not terminates
    return 0;
}

/* Program output;
* Give height in inches, weight in pounds, age in years
70
100
19
Hat size = 4.14
Jacket size = 24.31
Waist size = 17.54
Enter Y or y repeat
y
Give height in inches, weight in pounds, age in years
90
160
35
Hat size = 5.16
Jacket size = 50.00
Waist size = 28.37
Enter Y or y repeat
n
*/