// CMPE50-HW-6-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Duple {
public:
    Duple();
    Duple(int first, int second);
    friend istream& operator >> (istream &ins, Duple &second);
    friend ostream& operator << (ostream &outs, Duple &second);
    Duple operator + (Duple& oth);
    Duple operator - (Duple& oth);
private:
    int f, s;
};

Duple::Duple() {
    f = s = 0;
}

Duple::Duple(int first, int second) {
    f = first;
    s = second;
}

istream& operator >> (istream& ins, Duple& second) {
    //take input from stdin using ins into second
    ins >> second.f >> second.s;
    return ins;
}

ostream& operator << (ostream& outs, Duple& second) {
    outs << "(" << second.f << "," << second.s << ")" << endl;
    return outs;
}

Duple Duple:: operator+(Duple& oth) {
    //asing two duples according to the conversions
    return *(new Duple(this->f + oth.f, this->s + oth.s));
}

Duple Duple:: operator-(Duple& oth) {
    //subtract the two duples according to the conversions
    return *(new Duple(this->f - oth.f, this->s - oth.s));
}

int main()
{
    Duple x;
    Duple y;
    cin >> x >> y;
    cout << x << y;
    Duple z = x + y;
    cout << z;
    Duple a = x - y;
    cout << a;
}


/*Program Output:
*1 2
*4 5
*(1,2)
*(4,5)
*(5,7)
*(-3,-3)
*/