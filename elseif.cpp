#include <iostream>
#include <string>

using namespace std;

int main()
{
    // create name constants to hold minimum scores required for letter grades
    const int MIN_A = 90, MIN_B = 80,
              MIN_C = 70, MIN_D = 60;

    int testScore; // hold the test score

    char grade; // hold the letter grade

    // Get the numeric score from the user
    cout << "Enter your test score and I will tell you your letter grade" << endl;
    cin >> testScore;

    if (testScore < 0)
    {
        cout << "Your score cannot be a negative number" << endl;
        // cin >> testScore;
    }
    else
    {
        if (testScore >= 90)
        {
            grade = 'A';
        }
        else if (testScore >= 80)
        {
            grade = 'B';
        }
        else if (testScore >= 70)
        {
            grade = 'C';
        }
        else if (testScore >= 60)
        {
            grade = 'D';
        }
        else if (testScore >= 0)
        {
            grade = 'F';
        }
         cout << "Your letter grade is: " << grade << endl;
    }

   

    return 0;
}