#include <iostream>

using namespace std;

int sum(int num1, int num2)
{

    int sum1 = num1 + num2;
    return sum1;
}

double distance(double rate, double time)
{
    double distance = rate * time;

    return 14.2;
}

char getKey()
{

    return 'S';
}
//write a header for a function named days. The function should return an int and have three int parameters: years, months, and weeks
int days(int years, int months, int weeks)
{

    return 2;
}
int main()
{
    int x, y;
    cout << "Enter two numbers and I will add and print the sum" << endl;
    cin >> x >> y;
    int sum1 = sum(x, y) * 2;
    cout << "The sum of " << x << " and " << y << " is " << sum1 << endl;

    distance(10.5, 23.7);

    return 0;
}