#include <iostream>
using namespace std;

int main()
{
    int celcius;
    int farenheit;

    // Input
    cout << "Enter a temperature(celcius) :";
    cin >> celcius;

    // Process
    farenheit = (celcius * 9 / 5) + 32;

    // Output
    cout << "Temperature is " << farenheit << " farenheit" << endl;

    return 0;
}