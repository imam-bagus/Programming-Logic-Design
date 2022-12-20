# Odd/Even counter

## Case

Design a program that generates 100 random numbers, and keeps a count of how many of those random numbers are even and how many are odd.

<hr>

## Pseudocode

```
Declare Integer number
Declare Integer even
Declare Integer odd
Declare Integer counter
Declare Integer maxCounter

Set counter = 1
Set maxCounter = 100
For counter To maxCounter Then
    Set number = random(1,100)

    If number MOD 2 == 0 Then
        Set even = even + 1
    Else
        Set odd = odd + 1
    End If

    Set counter = counter + 1
End For

Output "Even : ", even
Output "Odd : ", odd
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](oddEvenCounter.cpp)
- [Java](oddEvenCounter.java)
- [Python](oddEvenCounter.py)
- [PHP](oddEvenCounter.php)
- [JavaScript](oddEvenCounter.js)
