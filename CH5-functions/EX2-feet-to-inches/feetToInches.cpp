#include <iostream>
using namespace std;

int feetToInches(int feet, int EQUALS)
{
    int result;

    result = EQUALS * feet;

    return result;
}

int main()
{
    const int EQUALS = 12;
    int feet;
    int inches;

    cout << "Enter a feet :";
    cin >> feet;

    inches = feetToInches(feet, EQUALS);

    cout << "Inches : " << inches << endl;
}