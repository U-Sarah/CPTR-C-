#include <iostream>

using namespace std;

bool func1(int &, int &, double &);

int main()
{

    int x, y;
    double z = 10.2;

    // cout << func1(x, y, z) << endl;
    bool answer = func1(x, y, z);
    if (answer == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    cout << "x is " << x << " y is " << y << " z is " << z << endl;
    return 0;
}
bool func1(int &i1, int &i2, double &d1) // requires names. Reference parameters and pass-by value
{
    d1 = 14.8;
    i1 = 145;
    i2 = 24;
    return false;
}