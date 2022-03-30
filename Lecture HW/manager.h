#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "salariedemployee.h"

using namespace std;

namespace employeessavitch
{
	class Manager : public SalariedEmployee
	{
	public:
		Manager();
		Manager(Manager& m);
		~Manager();
		Manager& operator=(const Manager m);
		void addReport(SalariedEmployee e);
		friend ostream& operator<<(ostream& os, Manager& m);

	private:
		int noReport;
		SalariedEmployee* salEmployees;
	};
}//employeessavitch
#endif //MANAGER_H