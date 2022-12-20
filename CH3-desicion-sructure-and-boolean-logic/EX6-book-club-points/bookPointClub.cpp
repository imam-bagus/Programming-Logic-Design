#include <iostream>
using namespace std;

int main()
{
    int bookPurchased;
    int point;

    cout << "Number of books purchased : ";
    cin >> bookPurchased;

    if (bookPurchased < 1)
    {
        point = 0;
    }
    else
    {
        if (bookPurchased == 1)
        {
            point = 15;
        }
        else
        {
            if (bookPurchased == 3)
            {
                point = 30;
            }
            else
            {
                point = 60;
            }
        }
    }
    cout << "Points awarded : " << point << endl;
}
