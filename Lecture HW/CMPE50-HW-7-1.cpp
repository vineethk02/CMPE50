// CMPE50-HW-7-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class sstring : public string {
public:
	sstring() : string() {};
	sstring(const string& str) : string(str) {};
	sstring(const sstring& sstr) : string(sstr) {};
	sstring operator=(const sstring& sstr);
	sstring operator=(const char* cstr);
	friend sstring operator*(const sstring& sstr, int multiple);
	friend sstring operator-(const sstring& sstr1, const sstring& sstr2);
	friend sstring operator/(const sstring& sstr, int divider);
	friend sstring operator!(const sstring& sstr);
	//prefix increment
	friend sstring operator++(sstring& sstr);
	//post increment
	friend sstring operator++(sstring& sstr, int dummy);
	//prefix decrements
	friend sstring operator--(sstring& sstr);
	//post decrements
	friend sstring operator--(sstring& sstr, int dummy);
};

//overloading = operator for sstring class
sstring sstring :: operator=(const sstring& sstr) {
	string::operator=(sstr);
	return *this;
}

//overloading = operator for c class
sstring sstring ::operator=(const char* cstr) {
	string::operator=(cstr);
	return *this;
}

//overloading * operator
sstring operator*(const sstring& sstr, int multiple) {
	sstring temp = sstr;
	//create and append copies til the final sstring
	for (int i = 1; i < multiple; i++) {
		temp += sstr;
	}
	return temp; //return result obtained
}

//overloading - operator
sstring operator-(const sstring& sstr1, const sstring& sstr2) {
	int index = -1;
	for (int i = 0; i < sstr1.length(); i++) {
		bool found = true;
		for (int j = 0; j < sstr2.length(); j++) {
			if (sstr1[i + j] != sstr2[j]) {
				found = false;
				break;
			}
		}
		if (found) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		string temp = sstr1.substr(0, index) + sstr1.substr(index + sstr2.length());
		sstring tmps(temp);
		return tmps;
	}
	return sstr1;
}

//overloading / operator
sstring operator/(const sstring& sstr, int divider) {
	//find length
	double dlen = sstr.length() / divider;
	int len;
	//rounding to the nearest int
	if (ceil(dlen) - dlen <= 0.5)
		len = ceil(dlen);
	else
		len = floor(dlen);
	//return required substring
	return sstr.substr(0, len);
}

//operator ! operator
sstring operator!(const sstring& sstr) {
	//initialize empty string
	string temp = "";
	//store the reverse string
	for (int i = sstr.length() - 1; i >= 0; i--) {
		temp += sstr[i];
	}
	sstring tmpss(temp);
	return tmpss;
}

//prefix increment
sstring operator++(sstring& sstr) {
	if (sstr.length() <= 1)
		return sstr;
	return sstr.substr(sstr.length() - 1, sstr.length()) + sstr.substr(0, sstr.length() - 1);
}

//post increment
sstring operator++(sstring& sstr, int dummy) {
	if (sstr.length() <= 1)
		return sstr;
	return sstr.substr(sstr.length() - 1, sstr.length()) + sstr.substr(0, sstr.length() - 1);
}

//prefix decrement
sstring operator--(sstring& sstr) {
	if (sstr.length() <= 1)
		return sstr;
	return sstr.substr(1, sstr.length() - 1) + sstr.substr(0, 1);
}

//post decrement
sstring operator--(sstring& sstr, int dummy) {
	if (sstr.length() <= 1) 
		return sstr;
	return sstr.substr(1, sstr.length() - 1) + sstr.substr(0, 1);
}

int main()
{
	sstring sstr("Hello"), sstr2, sstr3, sstr4, sstr5, sstr6, sstr7, sstr8, sstr9;
	cout << "sstr= " << sstr << endl;
	sstr2 = sstr;
	cout << "sstr2= " << sstr2 << endl;
	sstr3 = sstr * 3;
	cout << "sstr3= " << sstr3 << endl;
	sstr4 = ++sstr;
	cout << "sstr4= " << sstr4 << endl;
	sstr5 = sstr--;
	cout << "sstr5= " << sstr5 << endl;
	sstr2 = "Hello World!";
	sstr6 = sstr2 / 3;
	cout << "sstr6= " << sstr6 << endl;
	sstr7 = sstr / 20;
	cout << "sstr7= " << sstr7 << endl;
	sstr8 = !sstr;
	cout << "sstr8= " << sstr8 << endl;
	//testing - operator
	sstring s1("HelloWorld!"), s2("World");
	sstr9 = s1 - s2;
	cout << "sstr9= " << sstr9 << endl;
	return 0;
}

/*Program Ouput:
* sstr= Hello
sstr2= Hello
sstr3= HelloHelloHello
sstr4= oHell
sstr5= elloH
sstr6= Hell
sstr7=
sstr8= olleH
sstr9= Hello!
*/