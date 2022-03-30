// Problem4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int k;
    cout << "Enter k = ";
    cin >> k;
    for (int i = 3; i <= k; i++)

    {
        int div = 2;//divisor to check the prime numbers.
        while (div < i)

        {
            if (i % div == 0)//if i is divisible by divisor then it is not prime.
            {
                break;
            }
            div++;
        }
        if (div == i)
        {
            cout << div << endl;
        }
    }
    return 0;
}
/*Program Outut:
* Enter k = 89
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
This is the lab assignment output.              
*/
