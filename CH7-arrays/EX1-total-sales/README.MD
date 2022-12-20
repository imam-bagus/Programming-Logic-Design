# Total Sales

## Case

Design a program that asks the user to enter a store's sales for each day of the week.

The amounts should be stored in an array.

Use a loop to calculate the total sales for the week and display the result.

<hr>

## Pseudocode

```
Declare Integer days = 6
Declare Real sales[days]
Declare Real totalSales
Declare Integer day

Set day = 0
For day To days Then
    Output "Enter a sales day ", day + 1, " : $"
    Input sales[day]

    Set totalSales = totalSales + sales[day]

    Set day = day + 1
End For

Output "Total Sales for the week : $", totalSales
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](totalSales.cpp)
- [Java](totalSales.java)
- [Python](totalSales.py)
- [PHP](totalSales.php)
- [JavaScript](totalSales.js)
