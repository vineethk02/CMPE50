#include "Pet.h"
#include "Dog.h"
using namespace std;

// default constructor
Dog::Dog() :Pet() {
	breed = "";
	dateOfVaccinationShots = new string("");

}
// parameterized constructor
Dog::Dog(string nam, int a, string* dateOfVisit, string brd, string* dateOfVaccination) : Pet(nam, a, dateOfVisit) {
	breed = brd;
	dateOfVaccinationShots = dateOfVaccination;
}
// Copy constructor
Dog::Dog(const Dog& d) {
	breed = d.breed;
	dateOfVaccinationShots = d.dateOfVaccinationShots;
}
// mutators
void Dog::setBreed(string brd) {
	breed = brd;
}
void Dog::setDateOfVaccination(string* dateOfVaccination) {
	dateOfVaccinationShots = dateOfVaccination;
}
// Accessors
string Dog::getBreed() {
	return breed;
}
string* Dog::getDateOfVaccinationShots() {
	return dateOfVaccinationShots;
}

void Dog::print() {
	Pet::print();
	cout << "Breed: " << breed << endl;
	cout << "Date Of Vaccination Shots: " << *dateOfVaccinationShots << endl;
}
Dog :: ~Dog() {

}