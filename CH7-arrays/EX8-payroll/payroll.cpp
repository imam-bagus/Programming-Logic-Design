#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int empID[SIZE] = {56588, 45201, 78951, 87775, 84512, 13028, 75804};
    int hours[SIZE];
    float payRate[SIZE];
    float wages[SIZE];
    int index;

    for (index = 0; index <= (SIZE - 1); index++)
    {
        cout << "Employee ID " << empID[index] << endl;
        cout << "hours worked : ";
        cin >> hours[index];
        cout << "Pay rate :";
        cin >> payRate[index];
        cout << "---------------" << endl;

        wages[index] = payRate[index] * hours[index];
    }

    cout << "================" << endl;

    for (index = 0; index <= (SIZE - 1); index++)
    {
        cout << "Employee ID : " << empID[index] << endl;
        cout << "Gross Wages : " << wages[index] << endl;
        cout << "---------------" << endl;
    }
}