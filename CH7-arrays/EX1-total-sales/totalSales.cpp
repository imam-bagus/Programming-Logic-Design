#include <iostream>
using namespace std;

int main()
{
    int days = 6;
    float sales[days];
    float totalSales = 0;
    int day;

    for (day = 0; day <= days; day++)
    {
        cout << "Enter a sales day " << day + 1 << " : $";
        cin >> sales[day];

        totalSales += sales[day];
    }

    cout << "Total Sales for the week : $" << totalSales << endl;
}