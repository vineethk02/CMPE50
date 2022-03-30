#include "Pet.h"
using namespace std;

// default constructor
Pet::Pet() {
    name = "";
    age = 0;
    dateOfVisits = new string("");
}
// parameterized constructor
Pet::Pet(string nam, int a, string* dateOfVisit) {
    name = nam;
    age = a;
    dateOfVisits = dateOfVisit;
}
// Copy constructor
Pet::Pet(const Pet& p) {
    name = p.name;
    age = p.age;
    *dateOfVisits = *p.dateOfVisits;
}
// mutators
void Pet::setName(string nam) {
    name = nam;
}
void Pet::setAge(int ag) {
    age = ag;
}
void Pet::setDateOfVisits(string* dateOfVisit) {
    dateOfVisits = dateOfVisit;
}
// Accessors
string Pet::getName() {
    return name;
}
int Pet::getAge() {
    return age;
}
string* Pet::getDateOfVisits() {
    return dateOfVisits;
}
// displays all the data about the pets
void Pet::print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Date of Visits: " << *dateOfVisits << endl;
}
Pet :: ~Pet() {

}
//Use friend to overload operator ==
bool operator == (const Pet& p1, const Pet& p2) {
    return ((p1.name.compare(p2.name) == 0) && (p1.age == p2.age)
        && (p1.dateOfVisits == p2.dateOfVisits));

}