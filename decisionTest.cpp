#include <iostream>

using namespace std;

int main()
{
    char grade;
    int score;

    cout << "Enter a score between 0 and 100: " << endl;
    cin >> score;
    if (score <= 0 || score > 100)
    {
        cout << "Invalid input. Please enter a score between 0 and 100." << endl;
    }

    if (score >= 90 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 80 )
    {
        grade = 'B';
    }
    else if (score >= 70 && score < 80)
    {
        grade = 'C';
    }
    else if (score >= 60 && score < 70)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    switch (grade)
    {
    case 'A':

        cout << "Excellent work" << endl;
        break;
    case 'B':

        cout << "Good job" << endl;
        break;
    case 'C':

        cout << "Fair" << endl;
        break;
    case 'D':

        cout << "You can do better" << endl;
        break;
    case 'F':

        cout << "You need to work harder" << endl;
        break;
    }
    cout << "Your grade is " << grade << endl;

    return 0;
}