#pragma once
#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Pet.h"
#include <string>
using namespace std;
class Dog : public Pet {
public:
	// default constructor
	Dog();
	// parameterized constructor
	Dog(string, int, string*, string, string*);
	// Copy constructor
	Dog(const Dog&);
	// mutators
	void setBreed(string);
	void setDateOfVaccination(string*);
	// Accessors
	string getBreed();
	string* getDateOfVaccinationShots();
	void print();
	~Dog();
private:
	string breed;
	string* dateOfVaccinationShots;
};
#endif