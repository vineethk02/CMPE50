// LAB7-2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rational
{
public:
	Rational();
	Rational(int n, int d);
	void input(istream& in);
	void output(ostream& out);
	void normalize();

	friend Rational add(Rational& r1, Rational& r2);
	friend Rational subtract(Rational& r1, Rational& r2);
	friend Rational multiply(Rational& r1, Rational& r2);
	friend Rational division(Rational& r1, Rational& r2);

	friend bool equal(const Rational& r1, const Rational& r2);
	friend bool less_than(const Rational& r1, const Rational& r2);

private:
	int numerator;
	int denominator;

	int gcd(int n1, int n2);
};

int main()
{
	Rational r1, r2;
	cout
		<< "Please input r1 fraction: ";
	r1.input(cin);
	cout << "r1: ";
	r1.output(cout);

	cout
		<< "Please input r2 fraction: ";
	r2.input(cin);
	cout << "r2: ";
	r2.output(cout);

	cout << "r1 + r2: ";
	add(r1, r2).output(cout);

	cout << "r1 - r2: ";
	subtract(r1, r2).output(cout);

	cout << "r1 * r2: ";
	multiply(r1, r2).output(cout);

	cout << "r1 / r2: ";
	division(r1, r2).output(cout);

	if (equal(r1, r2))
	{
		cout << "r1 equal r2\n";
	}
	else if (less_than(r1, r2))
	{
		cout << "r1 less than r2\n";
	}
	else
	{
		cout << "r1 more than r2\n";
	}
}
Rational::Rational() :
	numerator(1), denominator(1)
{

}
Rational::Rational(int n, int d)
{
	numerator = n;
	if (d == 0)
	{
		cout << "denominator can not be 0!!!\n";
		exit(1);
	}
	else
	{
		denominator = d;
		normalize();
	}
}
void Rational::input(istream& in)
{
	char stash;
	int n, d;
	cin >> n >> stash >> d;

	numerator = n;

	if (d == 0)
	{
		cout << "denominator can not be 0!!!\n";
		exit(1);
	}
	else
	{
		denominator = d;
		normalize();
	}
}
void Rational::output(ostream& out)
{
	if (numerator == 0)
	{
		cout << 0 << endl;
	}
	else if (numerator == denominator)
	{
		cout << 1 << endl;
	}
	else
	{
		out << numerator << "/" << denominator << endl;
	}
}
void Rational::normalize()
{
	if (numerator == 0)
	{
		return;
	}
	int g = gcd(numerator, denominator);
	numerator = numerator / g;
	denominator = denominator / g;

	if (numerator * denominator < 0)
	{
		numerator = -abs(numerator);
		denominator = abs(denominator);
	}
	else
	{
		numerator = abs(numerator);
		denominator = abs(denominator);
	}
}
int Rational::gcd(int n1, int n2)
{
	int tmp;

	while (n2 != 0)
	{
		tmp = n1;
		n1 = n2;
		n2 = tmp % n2;
	}
	return n1;
}
Rational add(Rational& r1, Rational& r2)
{
	int n = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
	int d = r1.denominator * r2.denominator;
	Rational result(n, d);
	result.normalize();
	return result;

}
Rational subtract(Rational& r1, Rational& r2)
{
	int n = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
	int d = r1.denominator * r2.denominator;
	Rational result(n, d);
	result.normalize();
	return result;

}
Rational multiply(Rational& r1, Rational& r2)
{
	int n = r1.numerator * r2.numerator;
	int d = r1.denominator * r2.denominator;
	Rational result(n, d);
	result.normalize();
	return result;
}
Rational division(Rational& r1, Rational& r2)
{
	if (r2.numerator == 0)
	{
		cout << "denominator can not be 0!!!\n";
		exit(1);
	}
	int n = r1.numerator * r2.denominator;
	int d = r1.denominator * r2.numerator;
	Rational result(n, d);
	result.normalize();

	return result;
}
bool equal(const Rational& r1, const Rational& r2)
{
	return r1.numerator * r2.denominator == r2.numerator * r1.denominator;

}
bool less_than(const Rational& r1, const Rational& r2)
{
	if (r1.numerator == 0 || r2.numerator == 0)
	{
		return r1.numerator < r2.numerator;
	}
	return r1.numerator * r2.denominator < r2.numerator* r1.denominator;

}


/*Program Output:
* Please input r1 fraction: 1/2
r1: 1/2
Please input r2 fraction: 6/5
r2: 6/5
r1 + r2: 17/10
r1 - r2: -7/10
r1 * r2: 3/5
r1 / r2: 5/12
r1 less than r2
*/
