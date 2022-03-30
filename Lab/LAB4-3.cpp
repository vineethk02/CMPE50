// LAB4-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sortTwoFiles(ifstream& in1, ifstream& in2, ofstream& out);
int main()
{
	ifstream iFile1;
	ifstream iFile2;
	ofstream oFile;
	string iFileName1;
	string iFileName2;
	string oFileName;

	cout << "Enter First file: ";
	cin >> iFileName1;

	cout << "Enter second file: ";
	cin >> iFileName2;
	if (iFile1.fail()) {
		cout << iFileName1 << "file not opened" << endl;
		system("pause");
		exit(1);
	}

	iFile2.open(iFileName2);
	if (iFile1.fail()) {
		cout << iFileName2 << "File not opened" << endl;
		system("pause");
		exit(1);
	}

	cout << "Enter output file: ";
	cin >> oFileName;

	iFile1.open(iFileName1);
	

	oFile.open(oFileName);
	if (oFile.fail()) {
		cout << oFileName << "File not opened" << endl;
		system("pause");
		exit(1);
	}

	sortTwoFiles(iFile1, iFile2, oFile);

	iFile1.close();
	iFile2.close();
	oFile.close();

	system("pause");
	return 0;
}

void sortTwoFiles(ifstream& in1, ifstream& in2, ofstream& out) {
	int x;
	int y;

	in1 >> x;
	in2 >> y;

	while (!in1.eof() && !in2.eof()) {
		/*check if the int in the first file is less than or equal to
		* the file in the second 
		*/
		if (x <= y) {
			cout << x << endl;
			cin >> x;
		}
		else {
			/*if the int in the first file is greater than the int in
			* the second file
			*/
			cout << y << endl;
			cin >> y;
		} 
	}
	if (x <= y) {
		//while (!in2.eof()) {
			cout << y << endl;
			in2 >> y;
		
	}
	else {
		//while (!in1.eof()) {
			cout << x << endl;
			in1 >> x;
		
	}
	
}


/*Program output:
* firstFile.txt:
* 0
* 2
* 4
* 6
* 8
* 10
* 
* secondFile.txt:
* 1
* 3
* 5
* 7
* 9
* 11
* 
* outFile.txt:
* 0
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
* 11
*/