#include <iostream>
using namespace std;

int main()
{
    double hourlyPayRate;
    int hoursWorked;
    double grossPay;

    cout << "Enter a hourly pay rate : $";
    cin >> hourlyPayRate;

    while (hourlyPayRate < 7.50 || hourlyPayRate > 18.25)
    {
        cout << "ERROR: Pay rates must in the range of $7.50 through $18.25." << endl;
        cout << "Enter a hourly pay rate : $";
        cin >> hourlyPayRate;
    }

    cout << "Enter a number hours worked : ";
    cin >> hoursWorked;

    while (hoursWorked < 0 || hoursWorked > 40)
    {
        cout << "ERROR: hours worked must in the range of 0 through 40." << endl;
        cout << "Enter a number hours worked : ";
        cin >> hoursWorked;
    }

    grossPay = hourlyPayRate * hoursWorked;

    cout << "The employee's Gross pay : $" << grossPay << endl;
}