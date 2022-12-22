# Average Of Numbers

## Case

Assume that a file containing a series of integers is named numbers.dat and exists on the computer’s disk.
Design a program that calculates the average of all the numbers stored in the file.

<hr>

## Pseudocode

```
Declare String number
Declare Integer total
Declare Integer totalList = 0
Declare Real average
Declare InputFile numbersList

Open numbersList "numbers.dat"

While NOT eof(numbersList) Then
    Read numbersList number
    Set total = total + toInt(number)
    Set totalList = totalList + 1
End While

Set average = total / totalList

Output "average :", average

Close numbersList
```

<hr>

## Flowchart

<img src="Flowchart.png" >

<hr>

## Source Code

- [C++](averageOfNumbers.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
