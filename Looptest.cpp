// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     int num;
//     char answer;
//     // cout << "Enter a number between 1 and 10 and I will validate it" << endl;

//     cin >> answer;

//     cout << "Are you a student? Enter Y or N";

//     while (answer == 'y' || answer == 'Y')
//     {
//         // cout << "the number is greater "<< endl;
//         // cout << "Enter a new number" << endl;
//         cout << "Yoou are a student" << endl;
//         answer = 'n';
//     }

//     cout << "I'm done" << endl;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{

    int number = 1, last;

    cout << "Enter the start and end number and it will print all even numbers between the range" << endl;
    cin >> number >> last;

    for (number; number <= last; number++)
    {

        if (number % 2 == 0)
        {
            cout << number << " " << endl;
        }
    }

    for (int x = 1; x <= 10; x++)
    {

        // print the odd numbers between 1 and 10
        if (x % 2 == 1)
        {
            cout << x << " " << endl;
        }
    }

    // print hello 5 five times and running total

    for (int i = 0, sum = 0; i < 5; i++)
    {
        cout << i << " " << "Hello" << endl;
        sum += i;
        cout << "the sum is now " << sum << " " << endl;
    }

    // runing total of prices

    int numItems; // let the user tell us how many items they are purchasing. it would be used to control the loop, help us know when to stop
    double itemSales;
    double totalSale = 0; // accumulator, initialized to 0

    // Get the number of items from the user
    cout << "How many items did you buy?" << endl;
    cin >> numItems;

    // Get the sales for each item and accumulate a total
    for (int item = 1; item <= numItems; item++)
    {
        cout << "Enter the sales for the item #: " << item << endl;
        cin >> itemSales;
        totalSale += itemSales;
    }
    cout << "the total sales for  " << numItems << " items is $ " << totalSale << endl;

    // print even numbers between a range using while loop

    while (number <= last)
    {

        if (number % 2 == 0)
        {
            cout << number << " " << endl;
        }
        number++;
    }

    // sentinel values - any value that would not be a good value that would be used to stop the loop

    int testScore;
    int num = 1;
    double totalScores = 0;

    cout << "Enter your test scores. When finished, enter -1 to stop. \n";

    cin >> testScore; // enter the first test score

    while (testScore != -1)
    {
        totalScores += testScore;
        cout << "Enter you next test score or -1 to stop." << endl;
        cin >> testScore;
        num++;
    }
    cout << "Your total average  of all scores is " << totalScores / num << endl;

    return 0;
}
