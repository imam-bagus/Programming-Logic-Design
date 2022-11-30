#include <iostream>
using namespace std;

void getPurchase(double &purchase){
    cout << "Amount purchase : $";
    cin >> purchase;
}

void calculateTotalStateTax(double &purchase, double &totalStateTax){
    double stateTax = 0.04;
    totalStateTax = purchase * stateTax;
}

void calculateTotalCountryTax(double &purchase, double &totalCountryTax){
    double countryTax = 0.02;
    totalCountryTax = purchase * countryTax;
} 

void calculateSalesTax( double &totalSalesTax, double &totalStateTax, double &totalCountryTax){
    totalSalesTax = totalStateTax + totalCountryTax;
}

void calculateTotalSale(double &totalSale, double &purchase, double &totalSalesTax){
    totalSale = purchase + totalSalesTax;
}

void printAll(double &purchase, double &totalStateTax, double &totalCountryTax, double &totalSalesTax , double &totalSale){
    cout << "Purchase          : $" << purchase << endl;
    cout << "State Sales Tax   : $" << totalStateTax << endl;
    cout << "Country Sales Tax : $" << totalCountryTax << endl;
    cout << "Total Sales Tax   : $" << totalSalesTax << endl;
    cout << "Total Sale        : $" << totalSale << endl;
}

int main()
{
    double totalStateTax;
    double totalCountryTax;
    double purchase;
    double totalSalesTax;
    double totalSale;

    getPurchase(purchase);
    calculateTotalStateTax(purchase, totalStateTax);
    calculateTotalCountryTax(purchase, totalCountryTax);
    calculateSalesTax(totalSalesTax, totalStateTax, totalCountryTax);
    calculateTotalSale(totalSale, purchase, totalSalesTax);
    printAll(purchase, totalStateTax, totalCountryTax,totalSalesTax ,totalSale);

    return 0;
}
