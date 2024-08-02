#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to check if a given year is a leap year
bool isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    return false;
}

// Function to get the day of the week for a given date
int dayOfWeek(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

// Function to print the calendar for a given month
void printCalendar(int daysInMonth, int startDay) {
    string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int currentDay = 1;
    cout << "|---------------------------|\n";
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
    cout << "|---------------------------|\n";
    cout << "| ";
    for (int i = 0; i < startDay; ++i) {
        cout << setw(2) << "- ";
    }
    for (int i = startDay; i < 7; ++i) {
        cout << setw(2) << currentDay++ << " ";
    }
    cout << "|\n";
    while (currentDay <= daysInMonth) {
        cout << "| ";
        for (int i = 0; i < 7; ++i) {
            if (currentDay <= daysInMonth) {
                cout << setw(2) << currentDay++ << " ";
            } else {
                cout << setw(2) << "- ";
            }
        }
        cout << "|\n";
    }
    // cout << "|---------------------------|\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int day, month, year;
        char ch;
        string dayName;
        cin >> day >> ch >> month >> ch >> year >> dayName;

        // Determine the number of days in the given month
        int daysInMonth;
        if (month == 2) {
            if (isLeapYear(year)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else {
            daysInMonth = 31;
        }

        // Get the day of the week for the 1st day of the given month
        int startDay = dayOfWeek(1, month, year);

        // Print the calendar
        cout << "|---------------------------|\n";
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
        cout << "|---------------------------|\n";
        printCalendar(daysInMonth, startDay);
        cout << "|---------------------------|\n\n";
    }

    return 0;
}
