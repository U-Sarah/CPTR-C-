/*
Ubiebi Sarah
CPTR 1100
2/26/26*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int month, day, year, magicDate;

    cout << "Enter the month in numeric form (1-12):" << endl;
    cin >> month;

    cout << "Enter the day of the month (1-31):" << endl;
    cin >> day;

    cout << "Enter the year in two-digit format (e.g. 60 for 1960):" << endl;
    cin >> year;

    magicDate = month * day;

    if (month < 1 || month > 12)
    {
        cout << "Invalid month entered. Please enter a value between 1 and 12." << endl;
    }
    else if (day < 1 || day > 31)
    {
        cout << "Invalid day entered. Please enter a value between 1 and 31." << endl;
    }
    else if (year < 0 || year > 99)
    {
        cout << "Invalid year entered. Please enter a value between 0 and 99." << endl;
    }
    else
    {

        if (magicDate == year)
        {
            cout << "The date is magic!" << endl;
        }
        else
        {
            cout << "The date is not magic." << endl;
        }
    }

    return 0;
}