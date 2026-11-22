#include <iostream>

using namespace std;

void printHeading(string &name, int &age)
{

    cout << "Hello " << name << endl;
    cout << "The address of x is" << &name << endl;
    name = "Bill";

    cout << name << " is " << age << endl;
    age = age + 5;
}

int main()
{
    cout << "Main function" << endl;
    string x;
    cout << "The address of x is" << &x << endl;
    cout << "What is your name?" << endl;
    cin >> x;
    int age1 = 14;
    printHeading(x, age1); // go to line 6 and perform the function code when printing ends the code resumes here
    cout << "The name is..." << x << endl;
    cout << "The age is..." << age1 << endl;
    cout << "back from printHeading" << endl;

    return 0;
}