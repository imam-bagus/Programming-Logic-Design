#include <iostream>
using namespace std;

int main()
{
    float stateTax = 0.04;
    float countryTax = 0.02;
    float totalStateTax;
    float totalCountryTax;
    int purchase;
    int totalSalesTax;
    int totalSale;

    // Input
    cout << "Amount Purchase : $";
    cin >> purchase;
    cout << endl;

    // Process
    totalStateTax = purchase * stateTax;
    totalCountryTax = purchase * countryTax;
    totalSalesTax = totalStateTax + totalCountryTax;
    totalSale = purchase + totalSalesTax;

    // Output
    cout << "Purchase          : $" << purchase << endl;
    cout << "State Sales Tax   : $" << totalStateTax << endl;
    cout << "Country Sales Tax : $" << totalCountryTax << endl;
    cout << "Total Sales Tax   : $" << totalSalesTax << endl;
    cout << "Total Sale        : $" << totalSale << endl;

    return 0;
}