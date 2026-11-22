// Ubiebi Sarah
//  Test 3 Program
//  4/27/26
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double grossPay(int hours, double pay);
double netPay(double taxRate, double gross);
void printPaycheck(string name, double pay, int hours, double taxRate, double gross, double net);

int main()
{
    char choice;

    do
    {
        cout << "Welcome to the Paycheck Calculator!" << endl;
        cout << "Please enter the following information:" << endl;
        string name;
        cout << "Enter the employee's name" << endl;

        getline(cin, name);

        int hours;
        double pay;
        cout << "Enter the number of hours worked: ";
        cin >> hours;
        cout << "Enter the hourly pay rate: ";
        cin >> pay;
        if (hours == 0 || pay == 0)
        {
            cout << "Enter a valid number of hours and pay rate." << endl;
            return 0;
        }
        double gross = grossPay(hours, pay);

        double taxRate = 15; // 15% tax rate
        double net = netPay(taxRate, gross);

        printPaycheck(name, pay, hours, taxRate, gross, net);

        cout << "Do you want to calculate for another Employee? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the Paycheck Calculator. Goodbye!" << endl;

    return 0;
}

double grossPay(int hours, double pay)
{
    double gross = hours * pay;
    return gross;
}

double netPay(double taxRate, double gross)
{
    double net = gross - (gross * taxRate / 100);
    return net;
}

void printPaycheck(string name, double pay, int hours, double taxRate, double gross, double net)
{

    cout << "Paycheck Summary:" << endl;

    cout << "Employee " << setw(20) << "Hourly Pay Rate" << setw(20) << "Hours Worked" << setw(20) << "Tax Rate" << setw(20) << "Gross Pay" << setw(20) << "Net Pay" << endl;
    cout << name << setw(18) << "$" << pay << setw(18) << hours << setw(18) << taxRate << "%" << setw(18) << "$" << gross << setw(18) << "$" << net << endl;
}