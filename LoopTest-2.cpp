#include <iostream>

using namespace std;

int main()
{
    // int num;
    // int counter = 1;

    // cout << "Enter a number" << endl;
    // cin >> num;

    // while (num >= counter)
    // {
    //     num--;
    //     cout << num << endl;

    // }

    // int n;
    // int counter = 0;
    // int sum = 0;

    // cout << "Enter a number" << endl;
    // cin >> n;

    // while (n >= counter)
    // {
    //     sum += n;
    //     n--;

    // }
    // cout << "The sum is: " << sum << endl;

    // int num;
    // int counter = 1;
    // // int val;

    // cout << "Enter a number" << endl;
    // cin >> num;

    // while (counter <= 10)
    // {
    //     //    num *= counter;
    //     cout << num << "*" << counter << "=" << num * counter << endl;
    //     counter++;
    // }

    int num;
    int counter = 4;
    cout << "Enter four numbers" << endl;
    cin >> num;

    while (num >= 0)
    {
        cout << num << endl;

        cout << "Enter the next number" << endl;
        cin >> num;

        counter--;

    }

    return 0;
}