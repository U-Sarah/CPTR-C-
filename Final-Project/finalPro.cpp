// Ubiebi Sarah
// CPTR 1100
//  4/29/26
// Professor Kristen Griffin

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

void addExpense(string category[], double amount[], int &counter, int maxSize);
void printMenu();
// bool repeatMenu(char repeat);
void viewExpenses(string category[], double amount[], int counter);
float calculateTotalExpenses(double amount[], int counter, float &total, float budget);
float findHighestExpense(double amount[], int counter);
void setBudget(float &budget);

int main()
{
    cout << "================================" << endl;
    cout << "    PERSONAL EXPENSE TRACKER    " << endl;
    cout << "================================" << endl;
    string name;
    cout << "Hi, welcome to your personal finance manager!" << endl;
    cout << "Please enter your name: " << endl;
    getline(cin, name);
    cout << "Hello, " << name << "! Let's get started." << endl;
    const int CATEGORY_SIZE = 100;
    string category[CATEGORY_SIZE];
    double amount[CATEGORY_SIZE];
    int counter = 0;

    float total = 0.0;
    float budget = 0.0;

    do
    {
        printMenu();

        char choice;
        cin >> choice;
        cin.ignore(); // Clear the input buffer
        switch (choice)
        {
        case 'A':
        case 'a':
        {

            addExpense(category, amount, counter, CATEGORY_SIZE); // category size takes the value of 10 which is passed as maxSize in the function itself.
            break;
        }
        case 'V':
        case 'v':
        {
            viewExpenses(category, amount, counter);
            break;
        }
        case 'C':
        case 'c':
        {
            calculateTotalExpenses(amount, counter, total, budget);
            cout << "================================" << endl;
            cout << "       TOTAL EXPENSES           " << endl;
            cout << "================================" << endl;
            cout << fixed << setprecision(2);
            cout << "Total expenses: $" << total << endl;
            cout << "================================" << endl;
            break;
        }
        case 'F':
        case 'f':
        {
            float highest = findHighestExpense(amount, counter);
            cout << "================================" << endl;
            cout << "       HIGHEST EXPENSE          " << endl;
            cout << "================================" << endl;
            cout << fixed << setprecision(2);
            cout << "Highest expense: $" << highest << endl;
            cout << "================================" << endl;
            break;
        }
        case 'S':
        case 's':
        {
            setBudget(budget);
            calculateTotalExpenses(amount, counter, total, budget);

            break;
        }

        case 'Q':
        case 'q':
        {
            cout << "================================" << endl;
            cout << "           GOODBYE!             " << endl;
            cout << "  Thank you for using Personal  " << endl;
            cout << "    Expense Tracker, " << name << "!" << endl;
            cout << "================================" << endl;
            return 0;
        }
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (true);

    return 0;
}

void printMenu()
{
    cout << "================================" << endl;
    cout << "           MAIN MENU           " << endl;
    cout << "================================" << endl;
    cout << "A: Add expense" << endl;
    cout << "C: Calculate total expenses" << endl;
    cout << "F: Find highest expense" << endl;
    cout << "S: Set Budget" << endl;
    cout << "V: View expenses" << endl;
    cout << "Q: Quit" << endl;
    cout << "================================" << endl;
    cout << "Please enter your choice: ";
}

void addExpense(string category[], double amount[], int &counter, int maxSize) // pass by reference to counter so that it can be updated in the main function as well.
{

    char response;

    do
    {
        if (counter >= maxSize)
        {
            cout << "You have reached the maximum number of expenses." << endl;
            return;
        }

        cout << "Enter expense category (e.g., Food, Rent, Utilities): " << endl;

        getline(cin, category[counter]);
        cout << "Enter the amount of the expense: " << endl;
        cin >> amount[counter];
        cin.ignore(); // Clear the input buffer before using getline
        cout << "Your expense has been added successfully!" << endl;
        cout << "Do you want to add another expense? (y/n): ";
        cin >> response;
        cin.ignore(); // Clear the input buffer before using getline
        counter++;

    } while (response == 'y' || response == 'Y');
}

void viewExpenses(string category[], double amount[], int counter) // pass by values since we are only reading the values and not modifying them.
{
    if (counter == 0)
    {
        cout << "No expenses found." << endl;
        return;
    }

    cout << "================================" << endl;
    cout << "         YOUR EXPENSES          " << endl;
    cout << "================================" << endl;
    cout << left << setw(20) << "Category" << setw(10) << "Amount" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << fixed << setprecision(2);
        cout << left << setw(20) << category[i] << "$" << amount[i] << endl;
    }

    cout << "================================" << endl;
}

float calculateTotalExpenses(double amount[], int counter, float &total, float budget) // pass by value
{

    total = 0;
    for (int i = 0; i < counter; i++)
    {
        total += amount[i];
    }
    if (budget == 0)
    {
        cout << "No budget set." << endl;
    }
    else if (total > budget)
    {
        cout << "You have exceeded your budget by $" << total - budget << endl;
    }
    else if (total < budget)
    {
        cout << "You are within your budget. You have $" << budget - total << " left." << endl;
    }
    else if (total == budget)
    {
        cout << "You have exactly met your budget." << endl;
    }

    return total;
}

float findHighestExpense(double amount[], int counter) // pass by value since we are only reading the values and not modifying them.
{
    if (counter == 0)
    {
        cout << "No expense found" << endl;
        return 0;
    }
    float highest = amount[0];

    for (int i = 1; i < counter; i++)
    {
        if (amount[i] > highest)
        {
            highest = amount[i];
        }
    }
    return highest;
}

void setBudget(float &budget) // pass by reference since we want to update the budget value in the main function as well.
{
    cout << "================================" << endl;
    cout << "          SET BUDGET            " << endl;
    cout << "================================" << endl;
    cout << "Enter your budget: $";
    cin >> budget;
    cout << "================================" << endl;
    cout << "Budget set successfully!        " << endl;
    cout << "================================" << endl;
}
