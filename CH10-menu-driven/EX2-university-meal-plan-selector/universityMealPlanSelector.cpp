#include <iostream>
using namespace std;

int main()
{
    int selection;
    int semester;
    int totalPrice;

    cout << "Plan 1: 7 meals per week for $560 per semester" << endl;
    cout << "Plan 2: 14 meals per week for $1,095 per semester" << endl;
    cout << "Plan 3: Unlimited meals for $1,500 per semester" << endl;
    cout << "4 for exit" << endl;

    cout << "select meal plan ?";
    cin >> selection;

    switch (selection)
    {
    case 1:
        cout << "Enter the number of semesters";
        cin >> semester;
        totalPrice = 560 * semester;
        cout << "Total : $" << totalPrice;
        break;
    case 2:
        cout << "Enter the number of semesters";
        cin >> semester;
        totalPrice = 1095 * semester;
        cout << "Total : $" << totalPrice;
        break;
    case 3:
        cout << "Enter the number of semesters";
        cin >> semester;
        totalPrice = 1500 * semester;
        cout << "Total : $" << totalPrice;
        break;
    default:
        cout << "Exit !!" << endl;
    }
}