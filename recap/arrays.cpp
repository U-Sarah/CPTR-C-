#include <iostream>

using namespace std;

int main()
{

    // define an array
    // 1. empNum, a 100 element array of integers
    const int SIZE = 100;
    int empNum[SIZE];

    // 2. payRate, a 25 element array of doubles
    const int SIZE2 = 25;
    double payRate[SIZE2];

    // 3. stateCapital, a 50-element array of strings
    const int SIZE3 = 50;
    string stateCapital[SIZE3];

    // 4. lightYears, a 1000 element array of doubles
    const int SIZE4 = 1000;
    double lightYears[SIZE4];

    const int ISIZE = 5;
    int tests[ISIZE] = {90, 100, 70, 85, 80}; // assigning values upon creation of the array

    // tests[0] = 90;
    // tests[3] = 85;
    // tests[1] = 100;
    // cout << "Enter two test scores" << endl;
    // cin >> tests[2] >> tests[4];

    int num = 0;
    for (int i = 0; i < ISIZE; i++)
    {
        cout << tests[i] << endl;
        num++;
    }
    cout << num << endl;

    return 0;
}