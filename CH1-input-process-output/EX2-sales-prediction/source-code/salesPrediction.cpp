#include <iostream>
using namespace std;

int main()
{
    float profit;
    float totalSales;

    // Input
    cout << "Enter a total sales : $";
    cin >> totalSales;

    // Process
    profit = totalSales * 0.23;

    // Output
    cout << "Profit : $" << profit << endl;

    return 0;
}