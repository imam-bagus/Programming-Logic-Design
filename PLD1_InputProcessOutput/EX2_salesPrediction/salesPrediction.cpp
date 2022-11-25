#include <iostream>
using namespace std;

int main()
{
    float profit;
    float totalSales;

    cout << "Enter a total sales : $";
    cin >> totalSales;

    profit = totalSales * 0.23;

    cout << "Profit : $" << profit << endl;

    return 0;
}