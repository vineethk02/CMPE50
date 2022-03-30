

//Include the required header files.

#include <iostream>

#include <string>

#include <vector>

//Use the standard namespace.

using namespace std;

//Declare the function prototype.

vector<string> split(string, string);

//Define the main() function.

int main()

{

	//Declare the variables.

	vector<string> splitedStr;

	string data;

	string choice;

	//Prompt and read input from the user.

	cout << "Enter string to split:" << endl;

	getline(cin, data);

	//Prompt and read input from the user.

	cout << "Enter delimiter string:" << endl;

	getline(cin, choice);

	//Call the function to split the string.

	splitedStr = split(data, choice);

	//Display the message.

	cout << "\nThe substrings are: ";

	//Start the for loop.

	for (int i = 0; i < splitedStr.size(); i++)

	{

		//Display the string.

		cout << "\"" << splitedStr[i] << "\"";

		//Add comma(,) after each string.

		if (i != splitedStr.size() - 1)

			cout << ",";

	}

	//Move to the next line.

	cout << endl << endl;

	//Used for Visual C++ studio IDE.

	system("pause");

	//Return 0 and exit from the program.

	return 0;

}

//Define the function to split the string.

vector<string> split(string target, string delimiter)

{

	//Declare variables

	unsigned first = 0;

	unsigned last;

	vector<string> subStr;

	//Start the loop to split the string based on the delimiter.

	while ((last = target.find(delimiter, first)) <= target.length())

	{

		//Add the string before the delimiter.

		subStr.push_back(target.substr(first, last - first));

		//Update the value of the variable first.

		first = last + delimiter.length();

	}

	subStr.push_back(target.substr(first));

	//Return the sub string.

	return subStr;

}

/*Program Output:
* Enter string to split:
fire truck
Enter delimiter string:
,

The substrings are: "fire truck"
*/