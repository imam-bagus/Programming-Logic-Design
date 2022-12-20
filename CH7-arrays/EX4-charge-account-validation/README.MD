# Charge Account Validation

## Case

Design a program that asks the user to enter a charge account number.

The program should determine whether the number is valid by comparing it to the following list of valid charge account numbers:

5658845 4520125 7895122 8777541 8451277 1302850
8080152 4562555 5552012 5050552 7825877 1250255
1005231 6545231 3852085 7576651 7881200 4581002

These numbers should be stored in an array. Use the sequential search algorithm to locate the number entered by the user.

If the number is in the array, the program should display a message indicating the number is valid.

If the number is not in the array, the program should display a message indicating the number is invalid.

<hr>

## Pseudocode

```
Constant Integer ROWS = 3
Constant Integer COLUMNS = 6
Declare Integer validAccountNumber[ROWS][COLUMNS] = 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                                                    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                                                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002
Declare Integer accountNumber
Declare Boolean sentinel = True
Declare Boolean flag = False
Declare Integer row
Declare Integer column

Output "Enter a charge account number : "
Input accountNumber

Set row = 0
While sentinel == True AND row <= ROWS - 1 Then

    Set columns = 0
    While sentinel == True AND column <= COLUMNS - 1 Then

        If accountNumber == validAccountNumber[row][column] Then
            Set sentinel = False
            Set flag = True
        Else
            Set column = column + 1
        End If

    End While

    Set row = row + 1
End While

If flag == True Then
    Output "Number is valid"
Else
    Output "Number is invalid !!!"
EndIf
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](chargeAccountValidation.cpp)
- [Java](chargeAccountValidation.java)
- [Python](chargeAccountValidation.py)
- [PHP](chargeAccountValidation.php)
- [JavaScript](chargeAccountValidation.js)
