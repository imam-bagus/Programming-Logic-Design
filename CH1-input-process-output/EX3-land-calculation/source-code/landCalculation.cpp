#include <iostream>
using namespace std;

int main()
{
    int squareFoot;
    int acre;

    // Input
    cout << "Enter a Square Foot :";
    cin >> squareFoot;

    // Process
    acre = squareFoot / 43560;

    // Output
    cout << "acre :" << acre << endl;

    return 0;
}