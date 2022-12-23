#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream salesData;
    string ID;
    double saleAmount;
    double totalSales;
    double totalSalesEachPerson;
    string tempSaleAmount;
    string tempID;

    salesData.open("sales.dat");

    cout << "Brewster's Used Cars, Inc" << endl;
    cout << "Sales Report" << endl;
    cout << endl;

    cout << "Salesperson ID              Sale Amount" << endl;
    cout << "=======================================" << endl;

    getline(salesData, ID, ',');
    tempID = ID;

    while (getline(salesData, tempSaleAmount, ','))
    {

        saleAmount = stoi(tempSaleAmount);

        if (ID != tempID)
        {

            cout << "Total Sales for this salesperson : $" << totalSalesEachPerson << endl;
            cout << endl;

            totalSalesEachPerson = 0;
            tempID = ID;
        }

        cout << ID << "\t \t \t \t $" << saleAmount << endl;

        totalSales += saleAmount;
        totalSalesEachPerson += saleAmount;
        getline(salesData, ID, ',');

        if (ID == "EOF")
        {
            cout << "Total Sales for this salesperson : $" << totalSalesEachPerson << endl;
        }
    }

    cout << endl;
    cout << "Total of All Sales : $" << totalSales << endl;
}