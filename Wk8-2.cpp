#include <iostream>

using namespace std;

int main()
{

    int score;
    cout << "Enter your score between 0 - 100: " << endl;
    cin >> score;

    // if (score >= 0 && score <= 100)
    // {
    //     cout << "Your score is between 0 and 100" << endl;
    // }
    // else
    // {
    //     cout << "Your score is not between 0 and 100" << endl;
    // }

    if (score < 0 || score > 100)
    {
        int x = score;
        cout << "the score is not between 0 & 100" << endl;
        while (x < 0 || x > 100)
        {
            cout << "enter  a score between 0 & 100: " << endl;
            cin >> x;
        }
    }
    cout << "the score is between 0 & 100" << endl;

    return 0;
}