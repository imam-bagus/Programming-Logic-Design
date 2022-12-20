# Payroll Program with Input Validation

## Case

Design a payroll program that prompts the user to enter an employee’s hourly pay rate and the number of hours worked. Validate the user’s input so that only pay rates in the range of $7.50 through $18.25 and hours in the range of 0 through 40 are accepted. The program should display the employee’s gross pay.

<hr>

## Pseudocode

```
Declare Real hourlyPayRate
Declare Integer hoursWorked
Declare Real grossPay

Output "Enter a hourly pay rate : $"
Input hourlyPayRate

While hourlyPayRate < 7.50 OR hourlyPayRate > 18.25 Then
    Output "ERROR: Pay rates must in the range of $7.50 through $18.25."
    Output "Enter a hourly pay rate : $"
    Input hourlyPayRate
End While

Output "Enter a number hours worked : "
Input hoursWorked

While hoursWorked < 0 OR hoursWorked > 40 Then
    Output "ERROR: hours worked must in the range of 0 through 40."
    Output "Enter a number hours worked :"
    Input hoursWorked
End While


Set grossPay = hourlyPayRate * hoursWorked

Output "The employee's Gross pay : $", grossPay
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](payrollProgramWithInputValidation.cpp)
- [Java](payrollProgramWithInputValidation.java)
- [Python](payrollProgramWithInputValidation.py)
- [PHP](payrollProgramWithInputValidation.php)
- [JavaScript](payrollProgramWithInputValidation.js)
