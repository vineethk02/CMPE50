// CMPE50-HW-8-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "manager.h"

using namespace std;
using namespace employeessavitch;

int main() {
	Manager m;
	m.addReport(SalariedEmployee("John Doe", "FD001", 450));
	m.addReport(SalariedEmployee("Amy Fowler", "FD006", 590));
	m.addReport(SalariedEmployee("Jimin Park", "FD051", 620));
	m.addReport(SalariedEmployee("Joey Tribiannni", "FD056", 160));
	m.addReport(SalariedEmployee("Monica Geller", "FD022", 780));
	m.addReport(SalariedEmployee("Rachel McAdams", "FD056", 480));
	m.addReport(SalariedEmployee("Nick Jonas", "FD091", 456));

	cout << m;

	return 0;
}

/*
Program Output:

__________________________________________________
Pay to the order of John Doe
The sum of 450 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: FD001
Salaried Employee. Regular Pay: 450
_________________________________________________


__________________________________________________
Pay to the order of Amy Fowler
The sum of 590 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: FD006
Salaried Employee. Regular Pay: 590
_________________________________________________


__________________________________________________
Pay to the order of Jimin Park
The sum of 620 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: FD051
Salaried Employee. Regular Pay: 620
_________________________________________________


__________________________________________________
Pay to the order of Joey Tribiannni
The sum of 160 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: FD056
Salaried Employee. Regular Pay: 160
_________________________________________________


__________________________________________________
Pay to the order of Monica Geller
The sum of 780 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: FD022
Salaried Employee. Regular Pay: 780
_________________________________________________


__________________________________________________
Pay to the order of Rachel McAdams
The sum of 480 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: FD056
Salaried Employee. Regular Pay: 480
_________________________________________________


__________________________________________________
Pay to the order of Nick Jonas
The sum of 456 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: FD091
Salaried Employee. Regular Pay: 456
_________________________________________________

*/