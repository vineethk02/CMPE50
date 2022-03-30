// CMPE50-HW-3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    int counter = 1;
    double q1, q2, q3, q4, q5;
    ifstream fin("scores.txt");

    if (!fin) {
        cout << "File not found" << endl;
        system("pause");
        return -1;
    }

    ofstream fout("formatted_scores.txt");
    while (!fin.eof()) {
        fin >> name >> q1 >> q2 >> q3 >> q4 >> q5;
        fout << left << setw(3) << counter << "." << setw(10) << name
            << fixed << right << setw(7) << setprecision(2) << q1
            << right << setw(7) << setprecision(2) << q2
            << right << setw(7) << setprecision(2) << q3
            << right << setw(7) << setprecision(2) << q4
            << right << setw(7) << setprecision(2) << q5 << endl;
        counter++;
    }
    fin.close();
    fout.close();
    system("pause");
    return 0;
}


/*Program output:
* scores.txt:
* Jones   80.5     77       95.7     88.6     100
Smith   80       99       100      87.8     93.76
Holmes  53.65    84.54    76.67    97.75    89.9


formatted_scores.txt:
1  .Jones       80.50  77.00  95.70  88.60 100.00
2  .Smith       80.00  99.00 100.00  87.80  93.76
3  .Holmes      53.65  84.54  76.67  97.75  89.90
*/