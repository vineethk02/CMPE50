// LAB10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "figure.h"
#include "circle.h"
#include "triangle.h"
#include "administrator.h"

using namespace std;

void exercise_1();
void exercise_2();

void myDraw(Figure* fig)
{
	fig->draw();
	cout << "\n myDraw: Derived class object calling center(). \n";
	fig->center();
}

int main() {

	exercise_1();

		exercise_2();

	return 0;

}


void exercise_1()
{

	Administrator admin;
	admin.input(cin);
	admin.print_check();

}

void exercise_2()
{
	Figure* fig;
	Triangle* tri = new Triangle;

	fig = tri;
	fig->draw();
	cout << "\n Derived class Triangle object calling center(). \n";
	fig->center();

	myDraw(tri);

	Circle* cir = new Circle;
	fig = cir;
	cir->draw();
	cout << "\n Derived class Circle object calling center(). \n";
	cir->center();

	myDraw(cir);

}
