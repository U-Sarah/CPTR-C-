#include <iostream>
#include <string>

using namespace std;

int main()
{
    char choice;
    cout << "Enter A, B,or C: ";
    cin >> choice;

    switch (choice)
    {
    case 'A':
    case 'a':
        cout << "You entered A" << endl;
        break;
    case 'B':
        cout << "You entered B" << endl;
        break;
    case 'C':
        cout << "You entered C" << endl;
        default: cout << "You did not enter A, B or C" << endl;
    }

    string name = "Mary", n1 = "bill", n2 = "Bill";

    if(name < n1 || name < n2) {
        cout << "the biggest name is " << name << endl;
    }

    return 0;
}