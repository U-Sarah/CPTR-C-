// Ubiebi Sarah
// CPTR 1100
// 4/1/26

#include <iostream>
#include <iomanip>
using namespace std;
float calNetPay(int hours, float rate);
int main()
{

    int hoursWorked = 20;
    float payRate = 5.00;
    float netPay;
    cout << setprecision(2) << fixed << showpoint;
    netPay = calNetPay(hoursWorked, payRate);
    cout << " The net pay is $" << netPay << endl;
    return 0;
}

float calNetPay(int hours, float rate)
{
    return hours * rate;
}