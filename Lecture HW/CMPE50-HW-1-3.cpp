// CMPE50-HW-1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void maximum(int x, int y) {
    if (x > y) {
        cout << "the maximum value is: " << x << endl;
    }
    else {
        cout << "the maximum value is: " << y << endl;
    }
}

void maximum(int x, int y, double a) {
    if (x > y && x > a) {
        cout << "Maximum value is: " << x << endl;
    }
    else if(y > x && y > a){
        cout << "Maximum value is: " << y << endl;
    }
    else {
        cout << "Maximum value is: " << a << endl;
    }
}

int main()
{
    int x, y;
    double a;
    cout << "Enter value for x: " << endl;
    cin >> x;
    cout << "Enter value for y: " << endl;
    cin >> y;
    cout << "Enter value for a: " << endl;
    cin >> a;
    maximum(x, y);
    maximum(x, y, a);
    return 0;
}

/*Program Output
* Enter value for x:
9
Enter value for y:
2
Enter value for a:
5
the maximum value is: 9
Maximum value is: 9
*/