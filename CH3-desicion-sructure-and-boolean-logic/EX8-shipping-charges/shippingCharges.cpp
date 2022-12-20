#include <iostream>
using namespace std;

int main()
{
    float weightPackage;
    double shippingCharges;

    cout << "Enter a weight of a package : ";
    cin >> weightPackage;

    if (weightPackage <= 2)
    {
        shippingCharges = 1.10;
    }
    else
    {
        if (weightPackage > 2 && weightPackage <= 6)
        {
            shippingCharges = 2.20;
        }
        else
        {
            if (weightPackage > 6 && weightPackage <= 10)
            {
                shippingCharges = 3.70;
            }
            else
            {
                shippingCharges = 3.80;
            }
        }
    }

    cout << "Shipping charges : $" << shippingCharges << endl;
}