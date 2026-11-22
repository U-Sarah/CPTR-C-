// Ubiebi Sarah
// CPTR 1100
// 4/01/26

#include <iostream>
#include <string>

using namespace std;

void calAverage(double grade1, double grade2, double grade3); // This is the prototype for the calAverage function

int main()
{

    double grade1, grade2, grade3;
    string name;

    cout << "Welcome to the grade average calculator!. Before we proceed, please enter your name" << endl;
    cin >> name;
    cout << "Hello " << name << endl;

    calAverage(grade1, grade2, grade3);

    return 0;
}

void calAverage(double grade1, double grade2, double grade3)
{
    char response;
    cout << "Input three of your grades and I will calculate your average" << endl;
    cin >> grade1 >> grade2 >> grade3;

    double average = (grade1 + grade2 + grade3) / 3.0;

    cout << "Your average is: " << average << endl;
    cout << "Would you like to repeat the process? (Y/N)" << endl;
    cin >> response;

    if (response == 'Y' || response == 'y')
    {
        calAverage(grade1, grade2, grade3);
    }
    else
    {
        cout << "Thank you for using the grade average calculator. Goodbye!" << endl;
    }
}