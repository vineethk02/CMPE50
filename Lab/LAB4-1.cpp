// LAB4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string fileName = "LabInput.txt";

    ifstream fin;
    fin.open(fileName);
    if (!fin) {
        cout << "File does not exist" << endl;
        system("pause");
        exit(0);
    }

    char ch;
    int index = 0;
    char* ptr;

    char arr[100];
    ptr = arr;

    while (fin >> ch) { //read characters from file
        *(ptr + index) = ch; //increment the index and set ch
        index++;
    }


    *(ptr + index) = '\0';
    cout << "File in LabInput.txt" << endl;
    cout << ptr << endl;

    fin.close();

    ofstream fout;
    fout.open("LabOutput.txt");

    fout << ptr << ch++;

    fout.close();
    system("pause");
    return 0;
}


/*Program Output:
* LabInput.txt:
* a
* b
* c
* d
* e
* f
* g
* h
* 
* LabOutput.txt:
* abcdefgh
*/

