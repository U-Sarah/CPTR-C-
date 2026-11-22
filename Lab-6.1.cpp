// This program prints the proverb
// "Now is the time for all good men to come to the aid of their party"
// in a function (procedure) called writeProverb that is called by the main function

// Ubiebi Sarah
// CPTR 1100
// 4/01/26

#include <iostream>

using namespace std;

void writeProverb(); // This is the prototype for the writeProverb function

int main()
{

    writeProverb(); // function call

    return 0;
}

void writeProverb() // This is the function definition
{

    cout << "Now is the time for all good men to come to the aid of their party" << endl;
}