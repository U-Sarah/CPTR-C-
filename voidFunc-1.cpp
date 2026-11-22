// Ubiebi Sarah
// CPTR 1100
// 3/20/26

#include <iostream>

using namespace std;

void addNum()
{
    // ask the user for the numbers
    int num1, num2, sum;
    cout << "Enter 2 numbers to add" << endl;
    cin >> num1 >> num2;

    // add the numbers
    sum = num1 + num2;

    // display the result
    cout << "The sum of " << num1 << " + " << num2 << " is: " << sum << endl;
}

void multiplyNum()
{
    int num1, num2, product;
    cout << "Enter 2 numbers to multiply" << endl;
    cin >> num1 >> num2;

    // multiply the numbers
    product = num1 * num2;
    // display the result
    cout << "The product of " << num1 << " * " << num2 << " is: " << product << endl;
}

int main()
{
    char answer;

    cout << "Do you want to add numbers? (y/n): ";
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        // call the addNum
        addNum();
    }
    else if (answer == 'n' || answer == 'N')
    {
        cout << "Would you like to multiply numbers? (y/n): ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            multiplyNum();
        }
        else
        {
            cout << "Okay, maybe next time!" << endl;
        }
    }

    cout << "Thanks for using my program" << endl;
    return 0;
}