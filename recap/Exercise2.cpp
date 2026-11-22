// Ubiebi Sarah
//  CPTR 1100
//  4/15/26

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
write the following function definitions
a. receives 2 numbers and calculates and displays the sum
b. subtract function - asks for the numbers to subtract and calculate and return the difference. The answer should be displayed upon return
c. multiply - return the answer by reference. The answer should be displayed upon return
d. divide - receives the numbers to divide and return the quotient. do not allow division by 0
e. Quit - quits the program
*/

void welcomeMessage(); // prototype for welcomeMessage function, this function prints a welcome message to the user when called

void inputName(string name); // void functions acceopt parameters but do not return a value, this function takes a string parameter and prints a greeting message to the user using that name
void printMenu();
// this function prints a menu of the calculator's operations to the user

void add(int num1, int num2);

int subtract();

void multiply(int &product);

double divide(int num1, int num2);

void repeatMenu();

int main()
{
    welcomeMessage();

    string name;
    cout << "Before we begin, please enter your name: " << endl;
    cin >> name;
    inputName(name);
    printMenu();

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {

        int num1, num2;
        cout << "Enter two numbers to add" << endl;
        cin >> num1 >> num2;
        add(num1, num2);
        break;
    }
    case 2:
    {

        int difference;
        difference = subtract();
        cout << "The difference is: " << difference << endl;

        break;
    }
    case 3:
    {

        int answer;
        multiply(answer);
        cout << "The answer is: " << answer << endl;

        break;
    }
    case 4:
    {
        int num1, num2;
        cout << "Enter two numbers to divide excluding zero(0)" << endl;
        cin >> num1 >> num2;

        double result = divide(num1, num2);
        cout << "The quotient is: " << result << endl;
        break;
    }
    case 5:

    {

        cout << "Thank you for using the calculator program. Goodbye!" << endl;
        break;
    }
    default:
        cout << "Invalid choice. Please try again." << endl;
    }

    if (choice != 5)
    {
        cout << "Thank you for using the calculator program. Goodbye!" << endl;
    }

    // repeatMenu();

    return 0;
}

void welcomeMessage()
// this void function prints a message to the user when called
{

    cout << "Welcome to the calculator program!" << endl;
    cout << "This program would perform basic arithmetic operations." << endl;
}

void inputName(string name)
{

    cout << "Hello, " << name << " nice to meet you!" << endl;
}
void printMenu()
{
    cout << "Please enter a choice number from the menu below: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Quit" << endl;
}

void add(int num1, int num2)
{

    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    // return sum;
}

int subtract()
{
    int num1, num2;
    cout << "Enter two numbers to subtract" << endl;
    cin >> num1 >> num2;
    int difference = num1 - num2;
    return difference;
}

void multiply(int &product)
{
    int num1, num2;
    cout << "Enter two numbers to multiply" << endl;
    cin >> num1 >> num2;
    product = num1 * num2;
}
double divide(int num1, int num2)
{

    if (num2 == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }

    double quotient = static_cast<double>(num1) / num2;

    return quotient;
}

// void repeatMenu()
// {
//     char repeat;
//     cout << "Do you want to perform another operation? (Y/N)" << endl;
//     cin >> repeat;
//     if (repeat == 'Y' || repeat == 'y')
//     {
//         printMenu();
//     }
//     else
//     {
//         cout << "Thank you for using the calculator program. Goodbye!" << endl;
//     }
// }
