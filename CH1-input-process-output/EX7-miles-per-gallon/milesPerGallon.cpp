#include <iostream>
using namespace std;

int main()
{
    int MPG;
    int milesDriven;
    int gallons;

    // Input
    cout << "Miles Driven :";
    cin >> milesDriven;
    cout << "Gallons Gas  :";
    cin >> gallons;

    // Process
    MPG = milesDriven / gallons;

    // Output
    cout << "Miles-per-Gallon : " << MPG << endl;

    return 0;
}