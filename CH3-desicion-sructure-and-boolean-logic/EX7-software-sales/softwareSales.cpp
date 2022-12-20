#include <iostream>
using namespace std;

const int PRICE = 99;

int main()
{
    int quantity;
    float discount;
    float total;
    float totalAfterDiscount;

    cout << "Enter number of packages purchased :";
    cin >> quantity;

    total = PRICE * quantity;

    if (quantity >= 10 & quantity <= 19)
    {
        discount = total * 0.2;
    }
    else
    {
        if (quantity >= 20 & quantity <= 49)
        {
            discount = total * 0.3;
        }
        else
        {
            if (quantity >= 50 & quantity <= 99)
            {
                discount = total * 0.4;
            }
            else
            {
                if (quantity >= 100)
                {
                    discount = total * 0.5;
                }
                else
                {
                    discount = 0;
                }
            }
        }

        totalAfterDiscount = total - discount;

        cout << "Total : $" << total << endl;
        cout << "Discount : $" << discount << endl;
        cout << "Total after discount : $" << totalAfterDiscount << endl;
    }
}