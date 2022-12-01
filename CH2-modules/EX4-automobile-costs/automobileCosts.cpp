#include <iostream>
using namespace std;

void inputExpenses(int &month, double &loanPayment, double &insurance, double &gas, double &oil, double &tires, double &maintenance)
{
    cout << endl;
    cout << "Expenses month " << month << endl;
    cout << "Enter a Loan Payment : $";
    cin >> loanPayment;
    cout << "Enter a Insurance    : $";
    cin >> insurance;
    cout << "Enter a Gas          : $";
    cin >> gas;
    cout << "Enter a Oil          : $";
    cin >> oil;
    cout << "Enter a Tires        : $";
    cin >> tires;
    cout << "Enter a Maintenance  : $";
    cin >> maintenance;
}

void processExpenses(int &month, double &loanPayment, double &insurance, double &gas, double &oil, double &tires, double &maintenance, double &totalMonthly, double &totalAnnual)
{
    totalMonthly = loanPayment + insurance + gas + oil + tires + maintenance;
    totalAnnual += totalMonthly;
}

void outputMonthlyExpenses(int &month, double &loanPayment, double &insurance, double &gas, double &oil, double &tires, double &maintenance, double &totalMonthly)
{
    cout << "Total : $" << totalMonthly << endl;
    month += 1;
    totalMonthly = 0;
}

void outputAnnualExpenses(double &totalAnnual)
{
    cout << endl;
    cout << "Total Annual Expenses : $" << totalAnnual << endl;
}

int main()
{
    int month = 1;
    double loanPayment = 0;
    double insurance = 0;
    double gas = 0;
    double oil = 0;
    double tires = 0;
    double maintenance = 0;
    double totalMonthly = 0;
    double totalAnnual = 0;

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
    processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual);
    outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly);

    outputAnnualExpenses(totalAnnual);
}