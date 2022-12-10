#include <iostream>
using namespace std;

int main()
{
    // input
    float commision = 0.02;
    int stock = 0;

    int purchasedStock = 1000;
    float purchasePrice = 32.87;
    float boughtCommission;
    float totalPurchase;

    int soldStock = 1000;
    float sellPrice = 33.92;
    float soldCommission;
    float totalSell;

    float total;

    // Process
    stock = purchasedStock;
    totalPurchase = purchasePrice * stock;
    boughtCommission = totalPurchase * commision;

    totalSell = sellPrice * stock;
    soldCommission = totalSell * commision;
    stock = purchasedStock - soldStock;

    total = totalSell - totalPurchase - boughtCommission - soldCommission;

    // Output
    cout.precision(2);
    cout << "Total Purchased            : $" << fixed << totalPurchase << endl;
    cout << "Broker Commission(Purchase): $" << fixed << boughtCommission << endl;
    cout << "Sold Stock                 : " << soldStock << endl;
    cout << "Broker Commission(Sold)    : $" << fixed << soldCommission << endl;
    cout << "Total Profit or loss       : $" << fixed << total << endl;

    return 0;
}