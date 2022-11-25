#include <iostream>
using namespace std;

int main()
{
    int MPG;
    int milesDriven;
    int gallons;

    cout << "Miles Driven :";
    cin >> milesDriven;
    cout << "Gallons Gas  :";
    cin >> gallons;

    MPG = milesDriven / gallons;

    cout << "Miles-per-Gallon : " << MPG << endl;

    return 0;
}