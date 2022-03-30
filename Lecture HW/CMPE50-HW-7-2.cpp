// CMPE50-HW-7-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void reverse(int* arr, int size) {
    int *front = arr;
    int* rear = arr + (size - 1);
    while (front < rear) {
        int temp = *front;
        *front = *rear;
        *rear = temp;
        front++;
        rear--;
    }
}

int main()
{
    int n, x;
    cout << "Enter size: ";
    cin >> n;
    int* ptr = new int[n];
    cout << "Enter " << n << " Elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x;
        *(ptr + i) = x;
    }
    cout << "Original Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    reverse(ptr, n);

    cout << "\nReversed Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    delete ptr;
}


/*Program Output:
* Enter size: 5
Enter 5 Elements
1
2
3
4
5
Original Array
1 2 3 4 5
Reversed Array
5 4 3 2 1
*/