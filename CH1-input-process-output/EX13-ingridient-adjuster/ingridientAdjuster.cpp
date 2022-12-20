#include <iostream>
using namespace std;

int main()
{
    int cookie;
    float sugar = 1.5;
    float butter = 1;
    float flour = 2.75;
    float totalSugar;
    float totalButter;
    float totalFlour;

    // Input
    cout << "How many cookie :";
    cin >> cookie;

    // Process
    totalSugar = sugar * cookie;
    totalButter = butter * cookie;
    totalFlour = flour * cookie;

    // Output
    cout << "Cookie      : " << cookie << endl;
    cout << "Need sugar  : " << totalSugar << " Cups" << endl;
    cout << "Need butter : " << totalButter << " Cups" << endl;
    cout << "Need flour  : " << totalFlour << " Cups" << endl;

    return 0;
}