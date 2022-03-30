#include<iostream>
using namespace std;
int index(int[], int, int);
int main()
{
    int arr[10], i, num, num1;
    cout << "\n Enter total number of elements in array:";
    cin >> num;
    for (i = 0; i < num; i++)
    {
        cout << "\n Enter element " << i + 1 << ":";
        cin >> arr[i];
    }

    cout << "\n Enter the element to be found in array:";
    cin >> num1;
    int flag = index(arr, num, num1);

    if (flag == -1)
        cout << "\n" << num1 << " is not present array";
    else
        cout << "\n The number " << num1 << " is present at location" << flag + 1;

    return 0;
}

int index(int a[], int count, int num)
{
    int i, pos, flag = 0;
    for (i = 0; i < count; i++)
    {
        if (a[i] == num)
        {
            pos = i;
            flag = 1;
            break;

        }
    }

    if (flag == 0)
        return -1;

    else pos;
    return i;

}

/*Program Output:
*  Enter total number of elements in array:3

 Enter element 1:4

 Enter element 2:5

 Enter element 3:3

 Enter the element to be found in array:5

 The number 5 is present at location2
*/