//Ubiebi Sarah
//3/18/26
//CPTR 1100
// Lab 5A: While Loops


#include <iostream>

using namespace std;

int main()
{

    char letter = 'a';

    while (letter != 'x')
    {
        cout << "Please enter a letter" << endl;
        cin >> letter;
        cout << "The letter you entered is " << letter << endl;
    }

    // This program will ask the user to enter a letter and will check if the letter enteredis 'x'. If the letter is 'x', the code exis the loop but if the letter entered is any letter that sin't 'x', the code continues to ask the user to enter a letter until the user enters 'x'.
    // cout << "This is the sample program" << endl;


    int i = 5;

    while (i > 0)
    {

        cout << i << endl;
        i--;
    }
    cout << "After the loop is done, " << "i" << " = " << i << endl;
    // cout << "This is number 1 in the lab" << endl;


    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (num <= 50)
    {
        num *= 2;
        cout << num << endl;
    }
    // cout << "This is number 2 in the lab" << endl;

    int num;

    cout << "Input a number between 1 and 10:" << endl;
    cin >> num;

    while (num < 1 || num > 10)
    {

        cout << "Your number must be between 1 and 10, Try Again!" << endl;
        cin >> num;
    }

    cout << "You entered " << num << endl;
    // cout << "This is number 3 in the lab" << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int counter = 0;

    cout << "Print the multiplication table for " << num << " is:" << endl;
    while (counter <= 9 && (num > 1 && num <= 50))
    {

        counter++;
        int answer = num * counter;
        cout << num << " * " << counter << " = " << answer << endl;
    }
    // cout << "This is number 4 in the lab" << endl;


    int score;
    cout << "Enter your 5 test scores " << endl;

    int counter = 1;
    float total = 0;
    float average;

    while (counter <= 5)
    {
        cin >> score;
        counter++;
        total += score;
    }
    cout << "Sum of the scores is " << total << endl;

    average = total / 5;
    cout << "The average score is " << average << endl;
    // cout << "This is number 5 in the lab" << endl;

    return 0;
}
