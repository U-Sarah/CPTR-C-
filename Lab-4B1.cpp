// Write a program that illustrates the use of logical operators 
// The program will ask the user to input the year of college that the
// student is in based on a menu as shown in the sample run.  The user 
// will then be asked to enter the student’s GPA.  It will then give a 
// message to the user based on the following conditions:
// 1.	If the student’s GPA is greater than or equal to 2.0 and the year is equal to 4, print “It is time to graduate soon” to the screen
// 2.	If the year is 2 or 3 and the GPA is greater than 3.0, print “You are doing great so far” to the screen
// 3.	If the year is less than 2 or the GPA is less than 2.0, print “You need focus more on your schooling” to the screen

/*
Ubiebi Sarah
CPTR 1100
2/26/26*/

#include <iostream>
// #include <string>

using namespace std;
int main()
{
    char year;
    float gpa;

    cout << "What year are student are you?" << endl;
    cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)" << endl;

    cin >> year;

    cout << "Now enter your GPA" << endl;
    cin >> gpa;

    if ((gpa >= 2.0) && (year == '4'))
    {
        cout << "It is time to graduate soon" << endl;
    }
    else if ((year == '2' || year == '3') && (gpa > 3.0))
    {
        cout << "You are doing great so far" << endl;
    }
    else if ((year < '2') || (gpa < 2.0))
    {
        cout << "You need to focus more on your schooling" << endl;
    }
    else
    { // this was added to handle all other cases that are not handled by the above if statements
        cout << "Keep working hard" << endl;
    }

    return 0;
}