// LAB5-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char sentence[1000];
    char str[100][100];
    int i = 0, j, k, s;
    char last;
    cout << "Write -1 in a new line to stop....\n\n";
    while (cin.getline(str[i], 100)) {
        if (str[i][0] == '-' && str[i][1] == '1')      
            break;
        i++;
    }

    s = 0;
    last = '.';

    for (j = 0; j < i; j++) {
        for (k = 0; str[j][k] != '\0'; k++) {
            if (str[j][k] == ' ' && last == ' ') {
                continue;
            }
            if (last == '.') {
                sentence[s++] = toupper(str[j][k]);
            }
            else {
                sentence[s++] = tolower(str[j][k]);
                last = sentence[s - 1];
            }
        }
    }
    sentence[s] = '\0';
    cout << "Output: \n" << endl;
    cout << sentence << endl;
    return 0;
}


/*Program output:
* Write -1 in a new line to stop....

noW iS thE TiMe fOr aLl
 gOOD MEN TO ComE TO tHe
 aId
oF
 ThE CounTRY.
-1
Output:

NOW IS THE TIME FOR ALL GOOD MEN TO COME TO THE AID OF THE COUNTRY.
*/