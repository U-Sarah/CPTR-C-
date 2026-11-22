#include <iostream>

using namespace std;

int main()
{
    int score1, score2, score3, score4, score5;
    double finalScore;

    cout << "Please enter the five test scores" << endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    finalScore = (score1 + score2 + score3 + score4 + score5) / 5;
    cout << "Your final score is " << finalScore << endl;

    return 0;
}