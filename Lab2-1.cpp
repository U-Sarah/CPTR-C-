#include <iostream>

using namespace std;

int main()
{
    int temp;

    cout << "What's the current temperature?" << endl;
    cin >> temp;

    if (temp >= 60)

    {
        cout << "No jacket needed" << endl;
        cout << "The temperature you entered is " << temp << endl;

        if (temp == 60)
            cout << "You just made the cut" << endl;
    }
    else
    {
        cout << "It's cold outside" << endl;
        cout << "You need to wear a jacket" << endl;

        if(temp <= 20)
            cout << "Stay indoors" << endl;
    }

    cout << "Have a great day" << endl;

    return 0;
}
