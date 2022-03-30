#include "Dog.h"
/*
* Write a function PrintBill that takes an argument of a reference to Pet and print out the pet’s information.
Decalre a Dog object, fill in the necessary information,and call PrintBill.
*/
// displays all the data about the dogs
void PrintBill(Pet*);

int main()
{
	//Create a pet pointer object
	Pet* pet;
	//Create a pet and a dog object
	Pet p;
	Dog d;
	//Set pet values
	p.setAge(1);
	p.setName("Pet1");
	p.setDateOfVisits(new string("10/12/2020"));
	//Pass it's address
	pet = &p;
	//Display details
	cout << "Pet info:\n";
	PrintBill(pet);
	//Set dog info
	d.setAge(2);
	d.setName("Pet2");
	d.setDateOfVisits(new string("10/12/2020"));
	d.setBreed("Pomerarian");
	d.setDateOfVaccination(new string("10/12/2020"));
	//Display
	pet = &d;
	cout << "\nDog info:\n";
	PrintBill(pet);
	return 0;
}
// displays all the data about the pets
void PrintBill(Pet* p) {
	p->print();
}

/*Program Output:
* Pet info:
Name: Pet1
Age: 1
Date of Visits: 10/12/2020

Dog info:
Name: Pet2
Age: 2
Date of Visits: 10/12/2020
Breed: Pomerarian
Date Of Vaccination Shots: 10/12/2020
*/