# Automobile Costs Program

## Case

Design a modular program that asks the user to enter the monthly costs for the following expenses incurred from operating his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance.

The program should then display the total monthly cost of these expenses, and the total annual cost of these expenses

<hr>

## Pseudocode

```
Module main()
    declare Integer month = 1
    declare double loanPayment
    declare double insurance
    declare double gas
    declare double Oil
    declare double tires
    declare double maintenance
    declare double totalMonthly
    declare double totalAnnual

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance)
    Call processExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual)
    Call outputMonthlyExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly)

    Call outputAnnualExpenses(totalAnnual)
End Module


Module inputExpenses(Integer Ref month, double Ref  loanPayment, double Ref insurance, double Ref gas, double Ref oil, double Ref tires, double Ref maintenance)
    Output "Expenses month       :  " , month
    Output "Enter a Loan Payment : $"
    Input   loanPayment
    Output "Enter a Insurance    : $"
    Input   insurance
    Output "Enter a Gas          : $"
    Input   gas
    Output "Enter a Oil          : $"
    Input   oil
    Output "Enter a Tires        : $"
    Input   tires
    Output "Enter a Maintenance  : $"
    Input   maintenance
End Module

Module processExpenses(double Ref loanPayment, double Ref insurance, double Ref gas, double Ref oil, double Ref tires, maintenance, double Ref totalMonthly, double Ref totalAnnual)
    Set totalMonthly = loanPayment + insurance + gas + oil + tires + maintenance
    Set totalAnnual = totalAnnual +  totalMonthly
End Module

Module outputMonthlyExpenses(Integer Ref month, double Ref totalMonthly)
    Output "Total Monthly Expenses : $", totalMonthly
    Set month = month + 1
    Set totalMonthly = 0
End Module

Module outputAnnualExpenses(double Ref totalAnnual)
    Output "Total Annual Expenses : $", totalAnnual
End Module


```

<hr>

## Flowchart

<img src="automobileCostsFlowchart.png">

<hr>

## Hierarcy Chart

<img src="automobileCostsHierarchyChart.png">

<hr>

## Source Code

- [C++](automobileCosts.cpp)
- [Java](automobileCosts.java)
- [Python](automobileCosts.py)
- [PHP](automobileCosts.php)
- [JavaScript](automobileCosts.js)
