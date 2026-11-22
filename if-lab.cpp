/* write an if statement that performs the following logic:
 *Ask the user for the number of hours worked and payRate
 * The program will calculate the total pay (hours worked * payRate)
 - if the number of hours is greater than 40, multiply the payRate by 1.5 and then calculate the total pay
 * Add additional statements, of your choice, for the condiions
 */

// Ubiebi Sarah
// CPTR 1100
//  2/18/26

#include <iostream>

using namespace std;

int main()
{
    int hoursWorked;
    float payRate, totalPay;

    cout << "Enter the number of hours worked" << endl;
    cin >> hoursWorked;

    cout << "Enter your pay rate" << endl;
    cin >> payRate;

    if (hoursWorked > 40)
    {
        payRate *= 1.5;
        totalPay = hoursWorked * payRate;

        cout << "Your total pay is: " << totalPay << endl;
        cout << "You got extra moneyyyy" << endl;
    }
    else
    {
        totalPay = hoursWorked * payRate;
        cout << "Your total pay is:" << totalPay << endl;
        cout << "Well-done!!" << endl;
    }

    return 0;
}