#include <iostream>
using namespace std;

void inputTotalSale(double &totalSale)
{
    cout << "Total Sale: $";
    cin >> totalSale;
}

void processTax(double &totalSale, double &totalStateTax, double &totalCountryTax, double &totalSalesTax)
{
    double stateTax = 0.04;
    double countryTax = 0.02;
    totalStateTax = totalSale * stateTax;
    totalCountryTax = totalSale * countryTax;
    totalSalesTax = totalStateTax + totalCountryTax;
}

void printTax(double &totalStateTax, double &totalCountryTax, double &totalSalesTax)
{
    cout << "State Sales Tax   : $" << totalStateTax << endl;
    cout << "Country Sales Tax : $" << totalCountryTax << endl;
    cout << "Total Sales Tax   : $" << totalSalesTax << endl;
}

int main()
{
    double totalStateTax;
    double totalCountryTax;
    double totalSalesTax;
    double totalSale;

    inputTotalSale(totalSale);
    processTax(totalSale, totalStateTax, totalCountryTax, totalSalesTax);
    printTax(totalStateTax, totalCountryTax, totalSalesTax);
}