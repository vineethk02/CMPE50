// CMPE50-HW-3-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("infile.txt");
    if (in.is_open()) {
        double num;
        double total = 0;
        int count = 0;
        while (in >> num) {
            total += num;
            count++;
        }
        cout << "Average of all numbers in infile.txt is: " << (total / count) << endl;
    }
    else {
        cout << "infile.txt does not exist" << endl;
    }
    return 0;
}



/*Program Output:
* infile.txt: 
* 3
* 4
* 5
* 6.5
* 4.7
*
* 
* Average of all numbers in infile.txt is: 4.64
*/