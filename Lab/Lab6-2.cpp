// Lab6-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void output(ostream&, string);

class CounterType {
public: 
    CounterType(int);
    CounterType();

    //API function
    void output(ostream&);
    int get_counter();
    void add();
    void remove();
private: 
    int counter;
    bool check_amount(int);
};

CounterType::CounterType(int amount) {
    if (amount < 0) {
        cout << "inccorect amount" << endl;
        counter = 0;
        return;
    }
    counter = amount;
}

//template of countertype with default to 0
CounterType::CounterType() {
    counter = 0;
}

//output the currect amount to the given out stream
void CounterType::output(ostream& stream) {
    stream << "Counter is at: ";
    stream << get_counter() << endl;
}

int CounterType::get_counter() { //return the current number of counter
    return counter;
}

void CounterType::add() { // add one to counter
    int count = get_counter();
    if (check_amount(count + 1)) {
        counter = count + 1;
    }
}

//Remove one from the counter
void CounterType::remove() {
    int count = get_counter();
    if (check_amount(count - 1)) {
        counter = count - 1;
    }
}

//check if the amount will make the counter zero
bool CounterType::check_amount(int amount) {
    if (amount < 0) {
        cout << "new amount will be negative"
            << "Will not change counter" << endl;
        return false;
    }
    return true;
}

int main()
{
    //Count setup
    cout << "Counter one: Setup" << endl;   
    CounterType counter_one;
    cout << "Counter two: setup" << endl;
    CounterType counter_two(10);
    cout << "Counter three; setup" << endl;
    CounterType counter_three(-10);
    cout << endl;

    //Count Amount
    cout << "Counter one: amount" << endl;
    counter_one.output(cout);
    cout << "Counter two: amount" << endl;
    counter_two.output(cout);
    cout << "Counter three: amount" << endl;
    counter_three.output(cout);
    cout << endl;

    //Counter remove one
    cout << "Counter one: remove one" << endl;
    counter_one.remove();
    cout << "Counter two: remove one" << endl;
    counter_two.remove();
    cout << "Counter three: remove one" << endl;
    counter_three.remove();
    cout << endl;

    //Counter amount
    cout << "Counter one: amount" << endl;
    counter_one.output(cout);
    cout << "Counter two: amount" << endl;
    counter_two.output(cout);
    cout << "Counter three: amount" << endl;
    counter_three.output(cout);
    cout << endl;

    //Counter add one
    cout << "Counter one: Add one" << endl;
    counter_one.add();
    cout << "Counter two: Add one" << endl;
    counter_two.add();
    cout << "Counter three: Add one" << endl;
    counter_three.add();
    cout << endl;

    //Counter amount
    cout << "Counter one: amount" << endl;
    counter_one.output(cout);
    cout << "Counter two: amount" << endl;
    counter_two.output(cout);
    cout << "Counter three: amount" << endl;
    counter_three.output(cout);
    cout << endl;

    return 0;
}

/*Program Output:
* Counter one: remove one
new amount will be negativeWill not change counter
Counter two: remove one
Counter three: remove one
new amount will be negativeWill not change counter

Counter one: amount
Counter is at: 0
Counter two: amount
Counter is at: 9
Counter three: amount
Counter is at: 0

Counter one: Add one
Counter two: Add one
Counter three: Add one

Counter one: amount
Counter is at: 1
Counter two: amount
Counter is at: 10
Counter three: amount
Counter is at: 1
*/