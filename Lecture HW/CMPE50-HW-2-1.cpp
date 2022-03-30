// CMPE50-HW-2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<cmath>
using namespace std;
double calculateAverage(double s1, double s2, double s3, double s4);
double calculateStandardDeviation(double s1, double s2, double s3, double s4, double average, int n);
int main()
{
	double s1, s2, s3, s4;
	double avg, sdeviation;
	char option;
	do
	{
		cout << "Enter s1:";
		cin >> s1;
		cout << "Enter s2:";
		cin >> s2;
		cout << "Enter s3:";
		cin >> s3;
		cout << "Enter s4:";
		cin >> s4;
		avg = calculateAverage(s1, s2, s3, s4);
		cout << "Average: " << avg << endl;
		sdeviation = calculateStandardDeviation(s1, s2, s3, s4, avg, 4);
		cout << "Standard deviation:" << sdeviation << endl;
		cout << "Do you want to continue then press y:";
		cin >> option;
	} while (option == 'y');
}
double calculateAverage(double s1, double s2, double s3, double s4)
{
	return (s1 + s2 + s3 + s4) / 4;
}
double calculateStandardDeviation(double s1, double s2, double s3, double s4, double mean, int n)
{
	double sd;
	sd = (pow((s1 - mean), 2) + pow((s2 - mean), 2) +
		pow((s3 - mean), 2) + pow((s4 - mean), 2)) / n;
	sd = sqrt(sd);
	return sd;
}


/*Program Output:
* Enter s1:45
Enter s2:67
Enter s3:89
Enter s4:34
Average: 58.75
Standard deviation:21.1232
Do you want to continue then press y:y
Enter s1:4
Enter s2:6
Enter s3:2
Enter s4:6
Average: 4.5
Standard deviation:1.65831
Do you want to continue then press y:n
*/