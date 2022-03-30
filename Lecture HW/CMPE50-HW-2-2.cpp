// CMPE50-HW-2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swapFrontBack(int array[], int size) {
    if (size == 0) { //checks if the array size is 0
        cout << "Array is empty\n";
    }
    else {
        int temp;
        temp = array[size - 1];
        array[size - 1] = array[0];
        array[0] = temp;
        for (int i = 0; i < 5; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[5] = { 1000, 2, 3, 17, -15 };
    swapFrontBack(arr, 5);
    
    return 0;
}

/*Program Output:
* -15 2 3 17 1000
*/