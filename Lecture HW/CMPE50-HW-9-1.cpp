#include<iostream>
#include<vector>
using namespace std;

//Function prototype declarartion
void selectionSort(vector<int>& eleList);
void fill_array(vector<int>& eleList);
void swap_values(int& s1, int& s2);

//main function
void main()
{
    //Declare variables
    vector<int> eleList;
    int i, n;

    //function call to fill vector
    fill_array(eleList);
    //Function call
    selectionSort(eleList);
    cout << "After sorting:" << endl;
    for (int i = 0; i < eleList[i].size; i++)
        cout << eleList[i] << endl;
    //Pause the system for a while
    system("pause");
}
//Function definitions
void fill_array(vector<int>& eleList)
{
    //Declare variable
    int num;
    //Prompt and read user input
    cout << "Enter elements(-1 to exit):";
    cin >> num;
    while (num != -1)
    {
        eleList.push_back(num);
        cin >> num;
    }
}

//Function definition
void selectionSort(vector<int>& eleList)
{
    int i, j;
    for (i = 0; i < eleList.size() - 1; i++)
    {
        for (j = i + 1; j < eleList.size(); j++)
        {
            if (eleList[i] > eleList[j])
            {
                swap(eleList[i], eleList[j]);
            }
        }
    }
}//End of Sort function

//function definition
void swap_values(int& s1, int& s2)
{
    //Declare variable
    int tempVal;
    //Swap values
    tempVal = s1;
    s1 = s2;
    s2 = tempVal;
}

/*Program Output:
* Enter elements(-1 to exit):30 10 20 5 40 -1
* After sorting:
* 5
* 10
* 20
* 30
* 40
*/