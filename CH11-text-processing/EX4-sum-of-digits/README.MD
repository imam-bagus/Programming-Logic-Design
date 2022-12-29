# Sum of Digits in a String

## Case

Design a program that asks the user to enter a string containing a series of single digit numbers with nothing separating them.
The program should display the sum of all the single digit numbers in the string.
For example, if the user enters 2514, the method should return 12, which is the sum of 2, 5, 1, and 4.

<hr>

## Pseudocode

```
Declare String str
Declare Integer sum = 0
Declare Integer index
Declare Integer size

Output "Enter a digits : "
Input str

Set size = length(str) - 1
Set index = 0

For index To size Then
    Set sum = sum + strToInteger(str[index])
    Set index = index + 1
End For

Output "Sum of digits in a string : ", sum
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](sumOfDigits.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
