// LAB5-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

string sWord[] = { "he", "him", "his" };
string sWord1[] = { "she or he", "her or him", "hers or his" };

bool IsAlpabet(char ch) {
    if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
        return true;
    return false;
}

string replaceStrWord(string word) {
    string rep = "";
    for (int kk = 0; kk < 3; kk++) {
        if (sWord[kk] == word) {
            rep = sWord1[kk];
        }
    }
    if (rep.compare("") == 0)
        rep = word;
    return rep;
}

int main()
{
    string output = "";
    char next_symbol;
    string word = "";

    while (true) {
        output = "";

        do {
            word = "";
            while (true) {
                cin.get(next_symbol);
                if (IsAlpabet(next_symbol)) {
                    word += next_symbol;
                }
                else {
                    break;
                }
            }
           // if (word.compare("done" == 0)) {
             //   break;
           // }
                

            output = output + replaceStrWord(word);
            output = output + next_symbol;
        } while (next_symbol != '\n');
        cout << "Replace String: " << output << endl;
        string underdone = "";
        cout << "Do you want to continue: ";
        cin >> underdone;
        if (underdone == "no")
            break;
        cin.ignore();
    }
    return 0;
}


/*Program output:
* See an adviser, talk to him, and listen to him.
Replace String: See an adviser, talk to her or him, and listen to her or him.

Do you want to continue: n
*/