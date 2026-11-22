#include <iostream>
#include <string>

using namespace std;

int main()
{
    int temp;

    cout << "Enter the temperature for today: " << endl;
    cin >> temp;

    if (!(temp > 20 && temp < 100))
        cout << "The temperature is danger zone" << endl;
    else
        cout << "The temperature is ok today" << endl;
    return 0;
}