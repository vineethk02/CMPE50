#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char File_Name[1000];

    cout << "Enter File name: ";
    cin.get(File_Name, 1000);

    ifstream myfile(File_Name);//open file

    char c;
    int count = 1;
    int flag = 1;

    while (myfile.get(c)) {
        if (flag == 1) {
            cout << count << ":";
            flag = 0;
            count++;
        }
        cout << c;
        if (c == '\n')
            flag = 1;
    }

    myfile.close();

    return 0;
}


/*Program Output:
* Enter File name: sample.txt
1:With three or four loggerheads amongst three or four
2:score hogsheads. I have sounded the very
3: base-string of humility. Sirrah, I am sworn brother
4:to a leash of drawers; and can call them all by
5:their christen names, as Tom, Dick, and Francis.
6: They take it already upon their salvation, that
7:though I be but the prince of Wales, yet I am king
8:of courtesy; and tell me flatly I am no proud Jack,
9: like Falstaff, but a Corinthian, a lad of mettle, a
10:good boy, by the Lord, so they call me, and when I
11:am king of England, I shall command all the good
12:lads in Eastcheap.
*/