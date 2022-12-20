# Theater Seating Revenue with Input Validation

## Case

A dramatic theater has three seating sections, and it charges the following prices for tickets in each section: section A seats cost $20 each, section B seats cost $15 each, and section C seats cost $10 each.

The theater has 300 seats in section A, 500 seats in section B, and 200 seats in section C.

Design a program that asks for the number of tickets sold in each section and then displays the amount of income generated from ticket sales.

The program should validate the numbers that are entered for each section.

<hr>

## Pseudocode

```
Constant Real priceSectionA = 20
Constant Real priceSectionB = 15
Constant Real priceSectionC = 10
Constant Integer maxSeatSectionA = 300
Constant Integer maxSeatSectionB = 500
Constant Integer maxSeatSectionC = 200
Declare Integer ticketsSoldA
Declare Integer ticketsSoldB
Declare Integer ticketsSoldC
Declare Real income

Output "Enter a number of tickets sold in section A : "
Input ticketsSoldA

While ticketsSoldA < 0 AND ticketsSoldA > maxSeatSectionA Then
    Output "ERROR : Tickets just available ", maxSeatSectionA, " seat and cannot input minus value"
    Output "Enter a number of tickets sold in section A : "
    Input ticketsSoldA
End While


Output "Enter a number of tickets sold in section B : "
Input ticketsSoldB


While ticketsSoldB < 0 AND ticketsSoldB > maxSeatSectionB Then
    Output "ERROR : Tickets just available ", maxSeatSectionB, " seat and cannot input minus value"
    Output "Enter a number of tickets sold in section B : "
    Input ticketsSoldB
End While


Output "Enter a number of tickets sold in section C : "
Input ticketsSoldC

While ticketsSoldC < 0 AND ticketsSoldC > maxSeatSectionC Then
    Output "ERROR : Tickets just available ", maxSeatSectionC, " seat and cannot input minus value"
    Output "Enter a number of tickets sold in section C : "
    Input ticketsSoldC
End While


Set income = priceSectionA * ticketsSoldA + priceSectionB * ticketsSoldB + priceSectionC + ticketsSoldC

Output "The amount of income generated from ticket sales : $", income
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](theaterSeatingRevenueWithInputValidation.cpp)
- [Java](theaterSeatingRevenueWithInputValidation.java)
- [Python](theaterSeatingRevenueWithInputValidation.py)
- [PHP](theaterSeatingRevenueWithInputValidation.php)
- [JavaScript](theaterSeatingRevenueWithInputValidation.js)
