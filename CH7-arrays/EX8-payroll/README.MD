# Payroll

## Case

Design a program that uses the following parallel arrays:

- empId: An array of seven Integers to hold employee identification numbers.
  The array should be initialized with the following numbers:
  56588 45201 78951 87775 84512 13028 75804
- hours: An array of seven Integers to hold the number of hours worked by each employee.
- payRate: An array of seven Reals to hold each employee’s hourly pay rate.
- wages: An array of seven Reals to hold each employee’s gross wages.

The program should relate the data in each array through the subscripts.
For example, the number in element 0 of the hours array should be the number of hours worked by the employee whose identification number is stored in element 0 of the empId array.
That same employee’s pay rate should be stored in element 0 of the payRate array.

The program should display each employee number and ask the user to enter that employee’s hours and pay rate.
It should then calculate the gross wages for that employee (hours times pay rate), which should be stored in the wages array.
After the data has been entered for all the employees, the program should display each employee’s identification number and gross wages

<hr>

## Pseudocode

```
Constant Integer SIZE = 7
Declare Integer empID[SIZE] = 56588, 45201, 78951, 87775, 84512, 13028, 75804
Declare Integer hours[SIZE]
Declare Real payRate[SIZE]
Declare Real wages[SIZE]
Declare Integer index

Set index = 0
For index To (SIZE - 1) Then
    Output "Employee ID ", empID[index]
    Output "hours worked : "
    Input hours[index]
    Output "Pay rate :"
    Input payRate[index]
    Output "---------------"

    Set wages[index] = payRate[index] * hours[index]

    Set index = index + 1
End For

Output "================"

Set index = 0
For index To (SIZE - 1) Then
    Output "Employee ID : ", empID[index]
    Output "Gross Wages : ", wages[index]
    Output "---------------"
End For

```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](payroll.cpp)
- [Java](payroll.java)
- [Python](payroll.py)
- [PHP](payroll.php)
- [JavaScript](payroll.js)
