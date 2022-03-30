#include <iostream>

using namespace std;

int main()
{
	double grad[2][8]; 
	double largest = 0, smallest = 0;
	double largest1 = 0, smallest1 = 0;
	double ave_lab, ave_hw, overall;
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter marks of subject " << i + 1 << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "Enter the marks in assignment " << j + 1 << endl;
			cin >> grad[i][j];
		}
		cout << endl;
	}
	largest = grad[0][0];
	smallest = grad[0][0];
	largest1 = grad[1][0];
	smallest1 = grad[1][0];

	for (int k = 1; k < 5; k++)
	{
		if (largest < grad[0][k])
		{
			largest = grad[0][k];

		}
		if (smallest > grad[0][k])
		{
			smallest = grad[0][k];
		}
	}

	for (int m = 1; m < 5; m++)
	{

		if (largest1 < grad[1][m])
		{
			largest1 = grad[1][m];
		}

		if (smallest1 > grad[1][m])
		{
			smallest1 = grad[1][m];
		}
	}
	ave_lab = (grad[0][0] + grad[0][1] + grad[0][2] + grad[0][3] + grad[0][4]) / 5;
	ave_hw = (grad[1][0] + grad[1][1] + grad[1][2] + grad[1][3] + grad[1][4]) / 5;
	overall = (ave_lab + ave_hw) / 2;

	cout << "Topic\t1\t2\t3\t4\t5\tHigh\tWorst\tAverage\t" << endl;
	cout << "Lab\t" << grad[0][0] << "\t" << grad[0][1] << "\t" << grad[0][2] << "\t" << grad[0][3] << "\t" << grad[0][4] << "\t" << largest << "\t" << smallest << "\t" << ave_lab << endl;
	cout << "HW\t" << grad[1][0] << "\t" << grad[1][1] << "\t" << grad[1][2] << "\t" << grad[1][3] << "\t" << grad[1][4] << "\t" << largest1 << "\t" << smallest1 << "\t" << ave_hw << endl;
	cout << "Overall = " << overall << endl;

	if (ave_lab > 50 && ave_hw > 50)
	{
		cout << "Congratulations you are Promoted!!" << endl;
	}
	else if (ave_lab < 50 && ave_hw < 50)
	{
		cout << "You are demoted because you couldn't get more than 50% in both LAB and HW" << endl;
	}
	else if (ave_lab < 50)
	{
		cout << "You are demoted because you couldn't get more than 50% in Lab" << endl;
	}
	else
	{
		cout << "You are demoted because you couldn't get more than 50% in HW" << endl;
	}



}

/*Program Output:
* Enter marks of subject 1
Enter the marks in assignment 1
60
Enter the marks in assignment 2
90
Enter the marks in assignment 3
68
Enter the marks in assignment 4
79
Enter the marks in assignment 5
79

Enter marks of subject 2
Enter the marks in assignment 1
80
Enter the marks in assignment 2
26
Enter the marks in assignment 3
70
Enter the marks in assignment 4
90
Enter the marks in assignment 5
60

Topic   1       2       3       4       5       High    Worst   Average
Lab     60      90      68      79      79      90      60      75.2
HW      80      26      70      90      60      90      26      65.2
Overall = 70.2
Congratulations you are Promoted!!
*/
