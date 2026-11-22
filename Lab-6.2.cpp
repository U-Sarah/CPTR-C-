// Exercise 3
//  Ubiebi Sarah
//  CPTR 1100
//  4/01/26

#include <iostream>
#include <string>

using namespace std;

void writeProverb(string word); // This is the prototype for the writeProverb function

int main()
{
    string wordCode;
    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ______ "
         << endl;
    cout << "Please input the word you would like to have finish the proverb" << endl;

    cin >> wordCode;

    writeProverb(wordCode);
    return 0;
}

void writeProverb(string word)
{
    cout << "Now is the time for all good men to come to the aid of their " << word << endl;
}