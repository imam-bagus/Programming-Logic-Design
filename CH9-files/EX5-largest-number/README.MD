# Largest Number

## Case

Assume that a file containing a series of integers is named numbers.dat and exists on the computer’s disk.
Design a program that determines the largest number stored in the file.

<hr>

## Pseudocode

```
Declare Integer index = 0
Declare String number
Declare Integer largest
Declare InputFile listNumbers

Open listNumbers "numbers.dat"

Set largest = toInteger(listNumbers)

While NOT eof(listNumbers) Then

    Read listNumbers number
    If number > largest Then
        Set largest = number
    End If

End While

Output "Largest : ", largest

Close listNumbers

```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
