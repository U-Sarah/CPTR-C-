#include <iostream>

using namespace std;

void printHeading() // function Header
{
    cout << "This is the printHeading body" << endl;
}

// create a void function called displayMessage that prints a message
//  call the function from main

void displayMessage()
{
    cout << "This is the displayMessage Body" << endl;
}

int main()
{

    cout << "I'm in main" << endl;
    printHeading(); // function call - transfer to the function definition
    displayMessage();
    cout << "I'm back in main" << endl;
    return 0;
}