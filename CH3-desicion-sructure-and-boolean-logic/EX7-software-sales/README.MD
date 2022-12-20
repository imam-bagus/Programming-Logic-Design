# Software Sales

# Case

A software company sells a package that retails for $99. Quantity discounts are given according to the following table:

Quantity |Discount
10–19 |20%
20–49 |30%
50–99 |40%
100 or more |50%

Design a program that asks the user to enter the number of packages purchased. The program should then display the amount of the discount (if any) and the total amount of the purchase after the discount.

<hr>

## Pseudocode

```
Constant Integer PRICE = 99

Declare Integer quantity
Declare Real discount
Declare Real total
Declare Real totalAfterDiscount


Output "Enter number of packages purchased :"
Input quantity

Set total = PRICE * quantity

If quantity >= 10 AND quantity <= 19 Then
    Set discount = total * 0.2
Else
    If quantity >= 20 AND quantity <= 49 Then
        Set discount = total * 0.3
    Else
        If quantity >= 50 AND quantity <= 99 Then
            Set discount = total * 0.4
        else
            If quantity >= 100 Then
                Set discount = total * 0.5
            else
                Set discount = 0
            EndIf
        EndIf
    EndIf
EndIf

Set totalAfterDiscount = total - discount

Output "Total : $", total
Output "Discount : $", discount
Output "Total after discount : $", totalAfterDiscount
```

<hr>

## Flowchart

<img src="softwareSalesFlowchart.png >

<hr>

## Source Code

- [C++](softwareSales.cpp)
- [Java](softwareSales.java)
- [Python](softwareSales.py)
- [PHP](softwareSales.php)
- [JavaScript](softwareSales.js)
