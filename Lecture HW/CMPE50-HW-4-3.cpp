// CMPE50-HW-4-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char first[20];
    char last[20];
    bool existVowel;
    int length1 = 0;
    int length2 = 0;
    char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };

    cout << "Enter first name: " << endl;
    cin >> first;

    cout << "Enter last name: " << endl;
    cin >> last;

    for (int i = 0; first[i]; i++, length1++) {
        if ((first[i] >= 'A') && (last[i] <= 'Z'))
            first[i] = first[i] + 32;
    }
    for (int i = 0; last[i]; i++, length2++) {
        last[i] = last[i] + 32;
        existVowel = false;
    }
    for (int i = 0; i < 5; i++) {
        if (first[0] == vowel[i]) {
            strcat(first, "way");
            existVowel = true;
            break;
        }
    }
    if (existVowel == false) {

        char temp = first[0];
        for (int i = 0; first[i]; i++) {
            first[i] = first[i + 1];
            first[length1 - 1] = temp;
            first[length1] = '\0';
            strcat(first, "ay");
        }
    }

    existVowel = false;
    for (int i = 0; i < 5; i++) {
        if (last[0] == vowel[i]) {
            strcat(last, "way");
            existVowel = true;
            break;
        }
    }

    if (existVowel == false) {
        char temp = last[0];
        int i;
        for (i = 0; first[i]; i++) {
            last[i] = last[i + 1];
            last[length2 - 1] = temp;
            last[length2] = '\0';
            strcat(last, "ay");
        }
    }
    first[0] = first[0] - 32;
    last[0] = last[0] - 32;
    
    cout << first << "";
    cout << last;

    return 0;
}


/*Program output:
* Enter first name: 
Erin
Enter last name: 
Jones
Erinway Onesjay
*/