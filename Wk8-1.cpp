#include <iostream>
#include <cmath>
#include <cctype> //needed for isalpha function

using namespace std;

int main()
{

    char letter;
    cout << "Enter anything and I will tell you if it's a letter" << endl;
    cin >> letter;

    if ((isalpha(letter)) == true)
        cout << letter << " is an alphabetic character" << endl;
    else
    {
        cout << letter << " is not an alphabetic character" << endl;
    }

    return 0;
}