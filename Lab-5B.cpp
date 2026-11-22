// Ubiebi Sarah
// 3/19/26
// CPTR 1100

#include <iostream>

using namespace std;

int main()
{
    // sample program
    int score1, score2, score3; // Three test scores
    double average;             // Average test score
    char again;                 // Loop again? Y or N

    do
    { // Get three test scores
        cout << "\nEnter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;
        // Calculate and display the average
        average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << "\n\n";

        // Does the user want to average another set?
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    // the program asks the user to enter three scores and then calculates the average of the three scores entered by the user. After displaying the average, the program asks the user if they want to get the average of another set  of scores. If the user enters 'Y' or 'y', the program will repeat the process of asking for three scores and calculating the average. If the user enters any other character, the program will end.

    // number 1 in the lab
    int integer = 1;
    do
    {
        cout << integer << endl;
        integer += 2;
    } while (integer <= 10);

    // number 2 in the lab

    int num1, num2;
    char loop;
    int answer;

    do
    {
        cout << "Enter two numbers:";
        cin >> num1 >> num2;
        cout << num1 << num2 << endl;

        answer = num1 * num2;
        cout << num1 << " * " << num2 << " = " << answer << endl;

        cout << "Do you want to multiply more numbers? (Y/N)" << endl;
        cin >> loop;

    } while (loop == 'Y' || loop == 'y');

    cout << "Thanks for using my program" << endl;

    return 0;
}