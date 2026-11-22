#include <iostream>
#include <string>

using namespace std;

void first();  // function prototype - tells the compiler that there is a function called first that will be defined later in the code
void second(); // function prototype - tells the compiler that there is a function called second that will be defined later in the code

void displayValue(int num)
{
    cout << "The number is" << num << endl;
}

void addNums(string name, int num1, int num2)
{
    cout << "Hello " << name << endl;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

int main()
{
    int x = 7;
    int y = 1015;

    // cout << "I'm in main now" << endl;
    // first();  // calls the first function
    // second(); // calls the second function
    // cout << "I'm back in main" << endl;
    displayValue(x);
    displayValue(y);
    cout << "Enter 2 numbers that you want to add and I will give you the sum" << endl;
    cin >> x >> y;
    addNums("Larry", x, 45);
    return 0;
}

void first()
{

    cout << "In the first function" << endl;
    second(); // calls the second function
}
void second()
{
    cout << "In the second function" << endl;
    first();
}