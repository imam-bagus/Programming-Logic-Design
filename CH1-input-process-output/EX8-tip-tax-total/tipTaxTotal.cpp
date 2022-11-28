#include <iostream>
using namespace std;

int main()
{
    int total;
    int charge;
    float tip = 0.15;
    float totalTip;
    float salesTax = 0.07;
    float totalSalesTax;

    // Input
    cout << "Charge Food : $";
    cin >> charge;

    // Process
    totalTip = charge * tip;
    totalSalesTax = charge * salesTax;
    total = charge + totalTip + totalSalesTax;

    // Output
    cout << "Charge    : $" << charge << endl;
    cout << "Tip       : $" << totalTip << endl;
    cout << "Sales Tax : $" << totalSalesTax << endl;
    cout << "Total     : $" << total << endl;

    return 0;
}