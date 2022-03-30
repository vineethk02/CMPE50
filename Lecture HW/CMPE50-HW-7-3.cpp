// CMPE50-HW-7-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class StringArray {
private:
	string* dynamicArray;
	int size;
public:
	StringArray() {
		dynamicArray = nullptr;
		size = 0;
	}
	bool add(string& newEntry) {
		string* tempArray = new string[size + 1];
		for (int i = 0; i < size; i++)
			tempArray[i]= dynamicArray[i];
		tempArray[size] = newEntry;
		size++;
		delete dynamicArray;
		dynamicArray = tempArray;
		return true;
	}
	bool deletes(string& deleteEntry) {
		int index = -1;
		for (int i = 0; i < size; i++) {
			if (dynamicArray[i].compare(deleteEntry) == 0) {
				index = i;
				break;
			}
		}
		if (index == -1)
			return false;
		string* tempArray = new string[size - 1];
		for (int i = 0, j = 0; i < size; i++) {
			if (i != index) {
				tempArray[j] = dynamicArray[i];
				j++;
			}
		}
		size--;
		delete dynamicArray;
		dynamicArray = tempArray;
		return true;
	}
	string* get(int pos) {
		if (pos < 0 || pos >= size)
			return nullptr;
		return &dynamicArray[pos];
	}
	void print() {
		for (int i = 0; i < size; i++)
			cout << dynamicArray[i] << " ";
		cout << endl;
	}
};

int main()
{
	StringArray arr;
	string str = "Hello";
	arr.add(str);
	str = "world";
	arr.add(str);
	str = "good";
	arr.add(str);
	str = "better";
	arr.add(str);
	arr.print();
	str = "good";
	arr.deletes(str);
	arr.print();
	cout << *arr.get(2) << endl;
	return 0;
}

/*Program Output;
* Hello world good better 
Hello world better 
better

*/