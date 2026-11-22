#include <iostream>
#include <string>

using namespace std;

int main()
{

    int val = 0;

    // ask the user to provide a number for te number of "hellos" to print
    cout << "How many times do you want hello to print>" << endl;
    int num;
    cin >> num;
    while (val < num)
    {
        val += 10;
        cout << val  << endl;
    }
    cout << "\nval is now: " << val << endl;
    return 0;
}