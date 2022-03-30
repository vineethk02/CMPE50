#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int num1, num2;

    ifstream inputFile;
    ifstream inputFile2;
    inputFile.open("one.txt");
    inputFile2.open("two.txt");
    ofstream outputFile;
    outputFile.open("both.txt");

    inputFile >> num1;
    inputFile2 >> num2;
    while (inputFile.eof() && inputFile2.eof())
    {
        if (num1 < num2)
        {
            outputFile << num1;
            inputFile >> num1;
        }
        else
        {
            outputFile << num2;
            inputFile2 >> num2;
        }

    }

    inputFile.close();
    inputFile2.close();
    outputFile.close();

    return 0;
}


/*Program Output:
* one.txt:
* 1
* 2
* 3
* 4
* 5
* 
* two.txt:
* 6
* 7
* 8
* 9
* 10
* 
* both.txt:
* 1
* 2
* 3
* 4
* 5
* 6
* 7
* 8
* 9
* 10
*/