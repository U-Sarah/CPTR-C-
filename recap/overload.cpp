#include <iostream>

using namespace std;

void sum(int x, int y)
{
    cout << "In the int" << endl;
    cout << x + y << endl;
}

void sum(double x, double y)
{
    cout << "In thee double"<< endl;
    cout << x + y << endl;
}

int main()
{

    sum(10, 2);
    sum(10.3, 20.3); //it truncates the .3 and adds the whole numbers alone 

    return 0;
}