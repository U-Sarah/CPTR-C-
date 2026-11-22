/* Name: Ubiebi Sarah
 CPTR 1100
 Test #1
 2/11/26
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string item1, item2, item3;
    float price1, price2, price3;

    int quantity1, quantity2, quantity3;
    float total1, total2, total3;

    float subTotal;
    float totalBill;

    const double TAX_RATE = 10.25;

    cout << "Please enter the name of your first item and the price of the item:" << endl;
    getline(cin, item1);
    cin >> price1;
    cin.ignore();
    ;

    cout << "Please enter the name of your second item and the price of the item:" << endl;
    getline(cin, item2);
    cin >> price2;
    cin.ignore();

    cout << "Please enter the name of your third item and the price of the item:" << endl;
    getline(cin, item3);
    cin >> price3;
    cin.ignore();

    cout << "Your items are:" << endl;
    cout << left << setw(20) << "Item Name:" << setprecision(2) << fixed << showpoint << "Price:" << endl;

    cout << left << setw(20) << item1 << right << "$" << setw(6) << price1 << endl;
    cout << left << setw(20) << item2 << right << "$" << setw(6) << price2 << endl;
    cout << left << setw(20) << item3 << right << "$" << setw(6) << price3 << endl;

    cout << "How much " << item1 << " do you want?" << " " << "Enter a whole number for the quantity." << endl;
    cin >> quantity1;

    cout << "How much " << item2 << " do you want?" << " " << "Enter a whole number for the quantity." << endl;
    cin >> quantity2;

    cout << "How much " << item3 << " do you want?" << " " << "Enter a whole number for the quantity." << endl;
    cin >> quantity3;

    total1 = price1 * quantity1;
    total2 = price2 * quantity2;
    total3 = price3 * quantity2;

    cout << "Your totals are:" << endl;
    cout << left << setw(20) << item1 << right << "$" << setw(6) << total1 << endl;
    cout << left << setw(20) << item2 << right << "$" << setw(6) << total2 << endl;
    cout << left << setw(20) << item3 << right << "$" << setw(6) << total3 << endl;

    subTotal = total1 + total2 + total3;

    cout <<"\t" "\t"  << setw(12) << 
              "--------" << endl;
    cout << left << setw(20) << "Sub-Total" << right << "$" << setw(6) << subTotal << endl;
    cout << left << setw(20) << "Tax" << right << "$" << setw(6) << TAX_RATE << endl;
    // cout << left << "Tax" << right << setw(20) << "$" << TAX_RATE << endl;

    totalBill = subTotal + TAX_RATE;
    cout << "\t"
            "\t"

         << "-----------" << endl;
    cout << left << setw(20) << "Total Bill" << right << "$" << setw(6) << totalBill << endl;

    return 0;
}