// // // This program will input the value of two sides of a right triangle and then
// // // determine the size of the hypotenuse.
// // // PLACE YOUR NAME HERE
// // // Ubiebi Sarah
// // // CPTR 1100
// // // 2/4/2026

// // #include <iostream>
// // #include <cmath> // needed for math functions like sqrt()
// // #include <iomanip>

// // using namespace std;
// // int main()
// // {
// // 	float a, b; // the smaller two sides of the triangle
// // 	float hyp;	// the hypotenuse calculated by the program

// // 	cout << "Please input the value of the two sides" << endl;
// // 	cin >> a >> b;

// // 	hyp = sqrt(pow(a, 2) + pow(b, 2));
// // 	// Fill in the assignment statement that determines the hypotenuse
// // 	cout << "The sides of the right triangle are " << a << " and " << b << endl;

// // 	cout << setprecision(2) << fixed << showpoint;

// // 	cout << "The hypotenuse is " << hyp << endl;
// // 	return 0;
// // }

// // // Please input the value of the two sides
// // // 9 3
// // // The sides of the right triangle are 9 and 3
// // // The hypotenuse is 9.49

// /*This program will ask a student for their name and allow the student to input of three of his grades. The program then
// determines the average of those grades. */

// // Ubiebi Sarah
// // CPTR 1100
// // 2/4/2026
// // Professor Kristen Griffen

// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cmath>

// using namespace std;

// int main()
// {

// 	// float divSales = 2.569;

// 	// cout << setw(8) << fixed << showpoint << setprecision(2) << divSales << endl;

// 	// int sum = 0;

// 	// cout << sum << endl;

// 	// int qty;
// 	// int salesReps;
// 	// double unitsEach;

// 	// cout << "Please enter the quantity" << endl;
// 	// cin >> qty;

// 	// cout << "Please enter the number of sales reps" << endl;
// 	// cin >> salesReps;

// 	// unitsEach = static_cast<double>(qty) / salesReps;
// 	// cout << "Totalsales Rep: " << unitsEach << endl;

// 	// int units;
// 	// float mass;
// 	// int weight;

// 	// cout << "Please input the mass" << endl;
// 	// cin >> mass;

// 	// cout << "Please input the units" << endl;
// 	// cin >> units;

// 	// weight = mass * units;

// 	// cout << "The weight is " << weight << endl;
// 	// int age;
// 	// double pay;
// 	// char section;

// 	// cout << "Please input your age, pay, and section" << endl;
// 	// cin >> age >> pay >> section;

// 	// cout << "Your age, pay and section are " << age << ", " << pay << ", and " << section << endl;

// 	// const int SIZE = 31;
// 	// char city[SIZE];

// 	// const int SIZE = 35;
// 	// char fullString[SIZE];

// 	// cout << "What is the full string?";
// 	// cin.getline(fullString, SIZE);

// 	// int grade1, grade3;
// 	// double grade2;

// 	// float average;

// 	// string fullName;

// 	// cout << "Please input your first and last name" << endl;
// 	// getline(cin, fullName);

// 	// cout << "Please input the first grade" << endl;
// 	// cin >> grade1;

// 	// cout << "Pease input the second grade" << endl;
// 	// cin >> grade2;

// 	// cout << "Please input the third grade" << endl;
// 	// cin >> grade3;

// 	// average = (grade1 + grade2 + grade3) / 3;

// 	// cout << "Student Name: " << fullName << endl;
// 	// cout << "First grade: " << grade1 << endl;

// 	// cout << setprecision(1) << fixed << showpoint << "Second grade: " << grade2 << endl;
// 	// cout << "Third grade: " << grade3 << endl;

// 	// cout << setprecision(2) << fixed << showpoint << "Your average grade is " << average << endl;
// 	return 0;
// }

// // Please input your first and last name
// // Sarah Ubiebi
// // Please input the first grade
// // 97
// // Pease input the second grade
// // 98.3
// // Please input the third grade
// // 95
// // Student Name: Sarah Ubiebi
// // First grade: 97
// // Second grade: 98.3
// // Third grade: 95
// // Your average grade is 96.77
// #include <iostream>

// using namespace std;

// int main() {
// 	float base, height, area;

// 	cout << "Please input the base and height of the triangle" << endl;
// 	cin >> base;

// 	cout << "Please input the height of the triangle" << endl;
// 	cin >> height;

// 	area = 0.5 * base * height;

// 	cout << "The area of the triangle is " << area << endl;
// 	return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int amount;
    float discount;
    float discountedAmount;
    int finalAmount;
    discount = 0.15; // 15% discount

    cout << "Please enter the sale amount: " << endl;
    cin >> amount;

    discountedAmount = amount * discount;
    // cout << "The discounted amount is: " << discountedAmount << endl;

    finalAmount = amount - discountedAmount;
    cout << "You save $" << discountedAmount << " on your purchase." << endl;
    cout << "You have to pay $" << finalAmount << " after the discount." << endl;

    return 0;
}