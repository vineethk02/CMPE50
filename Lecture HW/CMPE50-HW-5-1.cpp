// CMPE50-HW-5-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct CDAccount {
    double balence;
    double interest_rate;
    int term;//months
};

void get_data(CDAccount& the_account);


int main()
{
    CDAccount account;
    get_data(account);
    double rate_fraction, interest;
    rate_fraction = account.interest_rate / 100.0;
    interest = account.balence * rate_fraction * (account.term / 12.0);
    account.balence = account.balence + interest;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "When ur CD maturies in: "
        << account.term << " months,\n"
        << "Balence is: "
        << account.balence << endl;
    return 0;
}

void get_data(CDAccount& the_account) {
    cout << "Enter balence:$ ";
    cin >> the_account.balence;
    cout << "Enter interest rate: ";
    cin >> the_account.interest_rate;
    cout << "Enter months(Less than 12 months): ";
    cin >> the_account.term;
}


/*Program Output:
* Enter balence:$ 5000
Enter interest rate: 2.5
Enter months(Less than 12 months): 9
When ur CD maturies in: 9 months,
Balence is: 5093.75
*/