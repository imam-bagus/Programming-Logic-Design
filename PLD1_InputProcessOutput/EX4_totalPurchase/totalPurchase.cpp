#include <iostream>
using namespace std;

int main()
{

    int item1, item2, item3, item4, item5, subTotal, salesTax, total;
    float tax = 0.06;

    cout << "Enter a Price Item 1 : $";
    cin >> item1;
    cout << "Enter a Price Item 2 : $";
    cin >> item2;
    cout << "Enter a Price Item 3 : $";
    cin >> item3;
    cout << "Enter a Price Item 4 : $";
    cin >> item4;
    cout << "Enter a Price Item 5 : $";
    cin >> item5;

    subTotal = item1 + item2 + item3 + item4 + item5;
    salesTax = subTotal * tax;
    total = subTotal + salesTax;

    cout << "Subtotal   : $" << subTotal << endl;
    cout << "Sales Tax  : $" << salesTax << endl;
    cout << "Total      : $" << total << endl;

    return 0;
}