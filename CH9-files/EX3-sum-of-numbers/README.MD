# Sum of Numbers

## Case

Assume that a file containing a series of integers is named numbers.dat and exists on the computer’s disk.
Design a program that reads all of the numbers stored in the file and calculates their total.

<hr>

## Pseudocode

```
Declare String number
Declare Integer total
Declare InputFile numbersList

Open numbersList "numbers.dat"

While NOT eof(numbersList) Then
    Read numbersList number
    Set total = total + toInt(number)
End While

Output "Total :", total

Close numbersList
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](sumOfNumbers.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
