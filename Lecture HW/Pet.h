#pragma once
#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
	// default constructor
	Pet();
	// parameterized constructor
	Pet(string, int, string*);
	// Copy constructor
	Pet(const Pet&);
	// mutators
	void setName(string);
	void setAge(int);
	void setDateOfVisits(string*);
	// Accessors
	string getName();
	int getAge();
	string* getDateOfVisits();
	// displays all the data about the pets
	virtual void print();
	~Pet();
	//Use friend to overload operator ==
	friend bool operator == (const Pet&, const Pet&);

private:
	string name;
	int age;
	string* dateOfVisits;
};
#endif