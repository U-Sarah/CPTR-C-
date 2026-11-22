#include <iostream>

using namespace std;


void show(double length = 20.0, double width = 10.0);




int main()
{
    show(2, 4);
    show();
    show(5);

    return 0;
}

void show(double length, double width)
{
double area = length * width;
cout << "The area is " << area << endl;

}