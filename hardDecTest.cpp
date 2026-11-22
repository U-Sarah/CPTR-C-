#include <iostream>

using namespace std;

int main()
{

    // for (int i = 1; i <=20; i++) {
    //     cout << i << " .Hello" << endl;
    // }

    // for (int i = 1; i <= 50; i++) {
    //    if (i % 2 == 0) {
    //        cout << i << " is an even number" << endl;
    //    }
    //    else {
    //        cout << i << " is an odd number" << endl;
    //    }
    // }

    // int n;

    // cout << "Enter a number and I will pint the multiplication table for that number" << endl;
    // cin >> n;

    // for (int i = 1; i <=10; i++) {
    //     cout << n << " * " << i << " = " << n * i << endl;
    // }

    char loop;

    do
    {
        int scores;
        int total = 0;
        cout << "Enter five test scores I will average them" << endl;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Enter score " << i << endl;
            cin >> scores;
            total += scores;
        }

        double average = total / 5.0;

        cout << "The total is: " << total << endl;
        cout << "The average is: " << average << endl;

        if (average >= 70)
        {
            cout << "Good job" << endl;
        }
        else
        {
            cout << "Keep trying" << endl;
        }

        cout << "Do you want to continue with the program? (Y/N)" << endl;
        cin >> loop;

    } while (loop == 'Y' || loop == 'y');

    return 0;
}

//  while (true)
//         {
//             cout << "Do you want to continue the program? (Y/N)" << endl;
//             cin >> loop;
//             cout << "Thanks for using my loop";
//         }