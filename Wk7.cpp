/* UBIEBI SARAH
CPTR 1100
2/23/2026
*/

//Write a program that will ask a user for their name

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << "Hello, " << name << endl;

    return 0;
}