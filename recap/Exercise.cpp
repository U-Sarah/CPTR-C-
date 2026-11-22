// Ubiebi Sarah
//  CPTR 1100
//  4/8/26
#include <iostream>
#include <iomanip>

using namespace std;

int teamWins(); // prototype for teamWinsfunction

int teamLosses(); // prototype for teamLosses function

float percentageWins(int wins, int losses); // prototype for percentageWins function

int main()
{
    int wins = teamWins();                        // teamWins function call, stores the return value in wins variable
    int losses = teamLosses();                    // teamLosses function call, stores the return value in losses variable
    float percent = percentageWins(wins, losses); // percentageWins function call, passing wins and losses as arguments, stores the return value in percent variable
    cout << wins << " wins and " << losses << " losses." << endl;
    cout << "Winning percentage: " << fixed << setprecision(2) << percent << "%" << endl;

    return 0;
}

int teamWins() // teamWins function definition
{
    int wins;
    cout << "Enter the number of wins: " << endl;
    cin >> wins;
    return wins;
}

int teamLosses() // teamLosses function definition
{
    int losses;
    cout << "Enter the number of losses: " << endl;
    cin >> losses;

    return losses;
}

float percentageWins(int wins, int losses) // percentageWins function definition
{
    float percentage = (static_cast<float>(wins) / (wins + losses)) * 100;
    return percentage;
}
