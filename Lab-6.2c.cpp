// Ubiebi Sarah
// CPTR 1100
// 4/1/26

#include <iostream>
using namespace std;
int cubeIt(int x);
int main()
{
    int x = 2;
    int cube;
    cube = cubeIt(x);
    // prototype for a user defined function
    // that returns the cube of the value passed
    // to it.
    // This is the call to the cubeIt function.
    cout << "The cube of " << x << " is " << cube << endl;
    return 0;
}

int cubeIt(int x)
// Notice that the function type is int
// rather than void
{

    int num;
    num = x * x * x;
    return num;
}