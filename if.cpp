#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number between 0 & 100" << endl;
    cin >> x;

    if (x > 100)
    {
        cout << "Your number is greater than 100, try again" << endl;
        cin >> x;
    }
    else
    {
        cout << "Your number is less than 100" << endl;
    }
    if (x < 0)
    {
        cout << "Your number is less than 0, try again" << endl;
        cin >> x;
    }
    else
    {
        cout << "Your number is graeater than 0" << endl;
    }
    cout << "You entered: " << x << endl;

    // if (x < 10)
    // {
    //     cout << "less than" << endl;
    //     x = 5;
    // }
    // else
    // {
    //     cout << "Done" << endl;
    // }

    // cout << "What now" << endl;

    return 0;
}