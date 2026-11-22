#include <iostream>
#include <string>

using namespace std;

int main()
{
    // int num = 2;

    // while (num <= 20)
    // {
    //     // cout << num << endl;
    //     if (num % 2 == 0)
    //     {
    //         cout << num << endl;
    //     }
    //     num++;
    // }

    // int n;

    // int num = 1;

    // cout << "Enter a number and I will print from 1 to that number" << endl;
    // cin >> n;

    // while (num <= n)
    // {
    //     cout << num << endl;
    //     num++;
    // }

    // int n;
    // int num = 1;
    // int sum = 0;

    // cout << "Enter a number and I'll give you the sum of all numbers from 1 to that number" << endl;
    // cin >> n;

    // while (num <= n)
    // {
    //     sum += num;
    //     num++;
    // }
    // cout << sum << endl;

    // int numbers;

    // int sum = 0;
    // int num = 1;

    // cout << "Enter five numbers and I'll give you the sum" << endl;
    // cin >> numbers;

    // while (num < 5)
    // {
    //     sum += numbers;
    //     cout << "Enter the next number" << endl;
    //     cin >> numbers;
    //     num ++;
    // }
    // cout << sum << endl;
    //   cout << "The sum is" << sum += numbers << endl;

    // int numbers;
    // int sum = 0;
    // int counter = 1;

    // cout << "Enter numbers. When finished, enter 0 to stop" << endl;
    // cin >> numbers;

    // while (numbers != 0)
    // {
    //     sum += numbers;
    //     cout << "Enter your next number" << endl;
    //     cin >> numbers;
    //     counter++;
    // }
    // cout << sum << endl;

    // int num =1;

    // do
    // {

    //     cout << num << endl;
    //     num++;
    // } while (num <= 10);

    // int num;
    // int counter = 1;

    // cout << "Enter  a number and I'll print it" << endl;
    // cin >> num;

    // do
    // {
    //     cout << num << endl;
    //     ;
    // } while (false);

    // string name;

    // this would ask the student for their name until the name equals Bryan
    // while (name != "Bryan")
    // {
    //     cout << "Enter your name" << endl;
    //     cin >> name;

    //     cout << "Hello " << name << endl;
    // }

    int n;
    int num = 1;
    int sum = 0;

    cout << "Enter a number" << endl;
    cin >> n;

    while (num <= n)
    {
        num++;
        sum += num;
        cout << sum << endl;
    }

    return 0;
}