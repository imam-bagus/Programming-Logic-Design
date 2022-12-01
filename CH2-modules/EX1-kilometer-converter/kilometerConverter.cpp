#include <iostream>
using namespace std;

void converts(double &kilometer)
{
    double miles;

    miles = kilometer * 0.6214;

    cout << "Distance in miles :" << miles << endl;
}

int main()
{
    double kilometer;

    cout << "Enter a Distance in kilometers :";
    cin >> kilometer;

    converts(kilometer);
}