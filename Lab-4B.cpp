// This program illustrates the use of the switch statement.
// PLACE YOUR NAME HERE
/*
Ubiebi Sarah
CPTR 1100
2/25/2026*/

#include <iostream>

using namespace std;

int main()
{
    char grade;

    cout << "What grade did you earn in Programming I ?" << endl;
    cin >> grade;

    switch (grade)
    {

    case 'A':
    case 'a':
        cout << "an A - excellent work" << endl;
        break;

    case 'B':
    case 'b':
        cout << "you got a B - good job" << endl;
        break;

    case 'C':
    case 'c':
        cout << "earning a C is satisfactory" << endl;
        break;

    case 'D':
    case 'd':
        cout << "while D is passing, there is a problem" << endl;
        break;

    case 'F':
    case 'f':
        cout << "you failed - better luck next time" << endl;
        break;

    default:
        cout << "you did not enter an A, B, C, D, or F" << endl;
    }

    return 0;
}