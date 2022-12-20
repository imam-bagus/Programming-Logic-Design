#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int months = 11;
    float rainfall[months];
    float totalRainfall = 0;
    float averageRainfall = 0;
    float highestRainfall;
    float lowestRainfall;
    int month;

    for (month = 0; month <= months; month++)
    {
        cout << "Enter a total rainfall month " << month + 1 << " : ";
        cin >> rainfall[month];

        totalRainfall += rainfall[month];
    }

    highestRainfall = rainfall[0];

    for (month = 1; month <= months; month++)
    {
        if (rainfall[month] > highestRainfall)
        {
            highestRainfall = rainfall[month];
        }
    }

    lowestRainfall = rainfall[0];

    for (month = 1; month <= months; month++)
    {
        lowestRainfall = rainfall[month];
    }

    averageRainfall = totalRainfall / (month + 1);

    cout << fixed << setprecision(1);
    cout << "Total Rainfall : " << totalRainfall << endl;
    cout << "Average Rainfall : " << averageRainfall << endl;
    cout << "Highest Rainfall : " << highestRainfall << endl;
    cout << "Lowest Rainfall : " << lowestRainfall << endl;
}