#include <iostream>
using namespace std;

int main()
{
    int cookies;
    int calories = 300;
    int totalCalories;

    // Input
    cout << "Enter a cookies ate : ";
    cin >> cookies;

    // Process
    totalCalories = cookies * calories;

    // Output
    cout << "Total Calories consumed :" << totalCalories << endl;

    return 0;
}