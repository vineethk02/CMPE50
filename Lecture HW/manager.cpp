#include <iostream>
#include <string>
#include "manager.h"

using namespace std;

namespace employeessavitch
{
	Manager::Manager() : SalariedEmployee(), noReport(0), salEmployees(NULL)
	{
		//deliberately empty
	}

	Manager::Manager(Manager& m) : noReport(m.noReport)
	{
		SalariedEmployee* newArray = new SalariedEmployee[m.noReport];

		for (int i = 0; i < noReport; i++) {
			newArray[i].set_name(m.salEmployees[i].get_name());
			newArray[i].set_net_pay(m.salEmployees[i].get_net_pay());
			newArray[i].set_salary(m.salEmployees[i].get_salary());
			newArray[i].set_ssn(m.salEmployees[i].get_ssn());
		}

		salEmployees = newArray;
	}

	Manager::~Manager()
	{
		if (salEmployees != NULL)
			delete[] salEmployees;
		noReport = 0;
	}

	Manager& Manager::operator=(const Manager m)
	{
		noReport = m.noReport;
		SalariedEmployee* newArray = new SalariedEmployee[m.noReport];

		for (int i = 0; i < noReport; i++) {
			newArray[i].set_name(m.salEmployees[i].get_name());
			newArray[i].set_net_pay(m.salEmployees[i].get_net_pay());
			newArray[i].set_salary(m.salEmployees[i].get_salary());
			newArray[i].set_ssn(m.salEmployees[i].get_ssn());
		}
		salEmployees = newArray;
		return *this;
	}

	void Manager::addReport(SalariedEmployee e)
	{
		SalariedEmployee* newArray = new SalariedEmployee[noReport + 1];

		for (int i = 0; i < noReport; i++) {
			newArray[i].set_name(salEmployees[i].get_name());
			newArray[i].set_net_pay(salEmployees[i].get_net_pay());
			newArray[i].set_salary(salEmployees[i].get_salary());
			newArray[i].set_ssn(salEmployees[i].get_ssn());
		}
		newArray[noReport].set_name(e.get_name());
		newArray[noReport].set_net_pay(e.get_net_pay());
		newArray[noReport].set_salary(e.get_salary());
		newArray[noReport].set_ssn(e.get_ssn());
		noReport++;
		SalariedEmployee* temp = salEmployees;
		salEmployees = newArray;
		if (temp != NULL)
			delete[] temp;
	}

	ostream& operator<<(ostream& os, Manager& m)
	{
		for (int i = 0; i < m.noReport; i++) {
			m.salEmployees[i].set_net_pay(m.salEmployees[i].get_salary());
			os << "\n__________________________________________________\n";
			os << "Pay to the order of " << m.salEmployees[i].get_name() << endl;
			os << "The sum of " << m.salEmployees[i].get_net_pay() << " Dollars\n";
			os << "_________________________________________________\n";
			os << "Check Stub NOT NEGOTIABLE \n";
			os << "Employee Number: " << m.salEmployees[i].get_ssn() << endl;
			os << "Salaried Employee. Regular Pay: "
				<< m.salEmployees[i].get_salary() << endl;
			cout << "_________________________________________________\n";
			os << "\n";
		}
		return os;
	}
}