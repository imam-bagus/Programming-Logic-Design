#include <iostream>
using namespace std;

int main()
{
    int squareFoot;
    int acre;

    cout << "Enter a Square Foot :";
    cin >> squareFoot;

    acre = squareFoot / 43560;

    cout << "acre :" << acre << endl;

    return 0;
}