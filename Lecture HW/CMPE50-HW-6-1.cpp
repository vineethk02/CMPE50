// CMPE50-6-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class DayOfYear {
public: 
    friend bool equal(DayOfYear date1, DayOfYear date2);
    friend bool isAfter(DayOfYear date1, DayOfYear date2);
    friend bool isBefore(DayOfYear date1, DayOfYear date2);
    friend DayOfYear add(DayOfYear date1, DayOfYear date2);
    DayOfYear(int the_month, int the_day);
    DayOfYear();
    void input();
    void output();
    int get_month();
    int get_day();
private:
    void check_date();
    int month;
    int day;
};

int main()
{
    //declare two dayofyear obj
    DayOfYear date1(12, 30);
    DayOfYear date2(12, 29);

    //print the dates on screen
    cout << "Date1: (month day) " << date1.get_month() << " " << date1.get_day() << endl;
    cout << "Date2: (month day) " << date1.get_month() << " " << date1.get_day() << endl;

    //check if date1 is after date2
    if (isAfter(date1, date2)) {
        cout << "Date1 is after Date2" << endl;
    }
    //check if date1 is before date2
    if (isBefore(date1, date2)) {
        cout << "Date1 is before Date2" << endl;
    }

    DayOfYear date3; //create new obj
    date3 = add(date1, date2);
    cout << "Date3 = Date1 + Date2: (month day)" << date3.get_month() << " " << date3.get_day() << endl;
}

DayOfYear add(DayOfYear date1, DayOfYear date2) {
    int month, day;
    month = date1.month + date2.month;

    //if month is greater than 12
    if (month > 12) {
        if (month == 24) {
            month = 12;
        }
        else {
            month = month % 12;
        }
    }

    day = date1.day + date2.day;

    //if the day is greater then 30
    if (day > 30) {
        if (day == 60) {
            day = 30;
        }
        else {
            day = day % 30;
        }
        month += 1;
    }

    //if month is greater than 12
    if (month > 12) {
        if (month == 24) {
            month = 12;
        }
        else {
            month = month % 12;
        }
    }
    return DayOfYear(month, day);
}

bool isAfter(DayOfYear date1, DayOfYear date2) {
    //if date1 is greater than date2
    if (date1.month > date2.month) {
        return true;
    }
    //if both are same
    if (date1.month == date2.month) {
        //check the days of date1 and date2
        if (date1.day > date2.day) {
            return true;
        }
    }
    return false;
}

bool isBefore(DayOfYear date1, DayOfYear date2) {
    //if date1 is less than date2
    if (date1.month < date2.month) {
        return true;
    }
    //if both are same
    if (date1.month == date2.month) {
        //check the days of date1 and date2
        if (date1.day < date2.day) {
            return true;
        }
    }
    return false;
}

bool equal(DayOfYear date1, DayOfYear date2) {
    return(date1.month == date2.month && date1.day == date2.day);
}

DayOfYear::DayOfYear(int the_month, int the_day) {
    day = the_day;
    month = the_month;
}

DayOfYear::DayOfYear() {
    //initializing to Jan 1st
    day = 1;
    month = 1;
}

int DayOfYear::get_month() {
    return month;
}

int DayOfYear::get_day() {
    return day;
}

/*Program Output:
* Date1: (month day) 12 30
Date2: (month day) 12 29
Date1 is after Date2
Date3 = Date1 + Date2: (month day)1 29
*/