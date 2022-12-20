# Lottery Number Generator

## Case

Design a program that generates a 7-digit lottery number.

The program should have an Integer array with 7 elements.

Write a loop that steps through the array, randomly generating a number in the range of 0 through 9 for each element.

Then write another loop that displays the contents of the array

<hr>

## Pseudocode

```
Constant Integer SIZE = 6
Declare Integer lotteryDigit[SIZE]
Declare Integer index

Set index = 0
For index To SIZE Then
    Set lotteryDigit[index] = random(0,9)
End For

Set index = 0
For index To SIZE Then
    Output lotteryDigit[index]
End For

```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](lotteryNumberGenerator.cpp)
- [Java](lotteryNumberGenerator.java)
- [Python](lotteryNumberGenerator.py)
- [PHP](lotteryNumberGenerator.php)
- [JavaScript](lotteryNumberGenerator.js)
