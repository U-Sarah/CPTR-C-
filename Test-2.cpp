// This program will use the rand() and srand() functions to generate the secret number.  Here is the starter code:
#include <iostream>
#include <cstdlib> // Header file needed to use srand and rand
#include <ctime>   // Header file needed to use time

using namespace std;
int main()
{
    unsigned seed; // Random generator seed  // Use the time function to get a "seed”
                   // value for srand
    seed = time(0);
    srand(seed);

    // Now generate a secret random number for your guessing game between 1 and 10
    int secret_number = 1 + rand() % 50;
    // Now print your secret_number to see what prints.  You may add several secret numbers to see that it changes every time.
    //  . . .  FILL IN THE CODE TO COMPLETE THE GUESSING GAME  AS DESCRIBED ABOVE . . .

    int counter = 0;
    bool guessed = false;
    while (guessed == false)
    {
        int guess;
        cout << "Enter your guess between 1 and 50. " << endl;
        cin >> guess;
        counter++;

        if (guess == secret_number)
        {
            cout << "Congratulations, You figured out my number!" << endl;
            guessed = true;
        }
        else if (guess < secret_number)
        {
            cout << "too low, try again" << endl;
        }
        else
        {
            cout << "too high, try again" << endl;
        }
    }
    cout << "it took you " << counter << " guesses to figure it out" << endl;

    return 0;
}
