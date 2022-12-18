#include <iostream>
using namespace std;

const float priceSectionA = 20;
const float priceSectionB = 15;
const float priceSectionC = 10;
const int maxSeatSectionA = 300;
const int maxSeatSectionB = 500;
const int maxSeatSectionC = 200;

int main()
{
    int ticketsSoldA;
    int ticketsSoldB;
    int ticketsSoldC;
    double income;

    cout << "Enter a number of tickets sold in section A : ";
    cin >> ticketsSoldA;

    while (ticketsSoldA < 0 || ticketsSoldA > maxSeatSectionA)
    {
        cout << "ERROR : Tickets just available " << maxSeatSectionA << " seat and cannot input minus value" << endl;
        cout << "Enter a number of tickets sold in section A : ";
        cin >> ticketsSoldA;
    }

    cout << "Enter a number of tickets sold in section B : ";
    cin >> ticketsSoldB;

    while (ticketsSoldB < 0 || ticketsSoldB > maxSeatSectionB)
    {
        cout << "ERROR : Tickets just available " << maxSeatSectionB << " seat and cannot input minus value" << endl;
        cout << "Enter a number of tickets sold in section B : ";
        cin >> ticketsSoldB;
    }

    cout << "Enter a number of tickets sold in section C : ";
    cin >> ticketsSoldC;

    while (ticketsSoldC < 0 || ticketsSoldC > maxSeatSectionC)
    {
        cout << "ERROR : Tickets just available " << maxSeatSectionC << " seat and cannot input minus value" << endl;
        cout << "Enter a number of tickets sold in section C : ";
        cin >> ticketsSoldC;
    }

    income = priceSectionA * ticketsSoldA + priceSectionB * ticketsSoldB + priceSectionC + ticketsSoldC;

    cout << "The amount of income generated from ticket sales : $" << income << endl;
}
