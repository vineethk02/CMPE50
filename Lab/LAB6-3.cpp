// LAB6-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Parallelogram {
private:
    double base, height, area, parallel;
public:
    Parallelogram(double b, double h) { //parameterized constructors to set values
        base = b;
        height = h;
    }
    void calculate() {
        area = base * height;
    }

    void display() {
        cout << "Area of Parallelogram: " << area;
    }
};



int main()
{
    double height, base;
    cout << "Base: ";
    cin >> base;
    cout << "Height: ";
    cin >> height;
    Parallelogram par(base, height); //objected created
    par.calculate(); //calling function
    par.display(); //calling function 

}

/*Program Output:
* Base: 7.3
Height: 8.7
Area of Parallelogram: 63.51  
*/