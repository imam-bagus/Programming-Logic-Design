#include <iostream>
using namespace std;

void inputReplacementCost(double &replacementCost)
{
    cout << "Enter a replacement cost : $";
    cin >> replacementCost;
}

void calculateInsurance(double &totalInsurance, double &replacementCost, double &minimumInsurance)
{
    totalInsurance = (replacementCost * minimumInsurance) + replacementCost;
}

void printTotalInsurance(double &totalInsurance)
{

    cout << "Minimum amount insurance : $" << totalInsurance;
}

int main()
{

    double replacementCost;
    double minimumInsurance = 0.8;
    double totalInsurance;

    inputReplacementCost(replacementCost);
    calculateInsurance(totalInsurance, replacementCost, minimumInsurance);
    printTotalInsurance(totalInsurance);
}