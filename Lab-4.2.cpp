// This program prints "You Pass" if a student's average is

// 60 or higher and prints "You Fail" otherwise

// PLACE YOUR NAME HERE
/*
Ubiebi Sarah
CPTR 1100
2/25/2026
*/

#include <iostream>

using namespace std;

int main()

{

    float average; // holds the grade average
    char grade;    // holds the letter grade

    cout << "Input your average:" << endl;

    cin >> average;

    if (average < 0)
    {
        cout << "Average cannot be negative" << endl;
    }

    if (average > 100)
    {
        cout << "Invalid data" << endl;
    }
    else if (average >= 90)
    {
       grade = 'A';
        cout << grade << endl;
    }
    else if (average >= 80)
    {
        grade = 'B';
        cout << grade << endl;
    }
    else if (average >= 60)
    {
        cout << "You Pass" << endl;
    }
    else if (average >= 0)
    {
        cout << "You Fail" << endl;
    }

    return 0;
}