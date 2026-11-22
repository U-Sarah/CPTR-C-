// Ubiebi Sarah
// 4/22/26
// CPTR 1100
#include <iostream>

using namespace std;

int main()
{

    const int SIZE = 10;
    int scores[SIZE];
    cout << "Enter 10 test scores" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> scores[i];

        while (scores[i] < 0 || scores[i] > 100)
        {
            cout << "Please enter a valid score between 0 and 100" << endl;
            cin >> scores[i];
        }
    }
    cout << "You are done entering. The scores you entered are:" << endl;
    // cout << endl;

    int counter = 0;
    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (scores[i] == 100)
        {
            counter++;
        }
        sum += scores[i];
        cout << scores[i] << " ";
    }
    double average = sum / SIZE;
    cout << "\nThe average score is: " << average << endl;
    cout << "\nNumber of perfect scores: " << counter << endl;

    return 0;
}