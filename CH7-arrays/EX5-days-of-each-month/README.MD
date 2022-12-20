# Days of Each Month

## Case

Design a program that displays the number of days in each month. The program’s output should be similar to this:

January has 31 days.
February has 28 days.
March has 31 days.
April has 30 days.
May has 31 days.
June has 30 days.
July has 31 days.
August has 31 days.
September has 30 days.
October has 31 days.
November has 30 days.
December has 31 days.

The program should have two parallel arrays: a 12-element String array that is initialized with the names of the months, and a 12-element Integer array that is initialized with the number of days in each month.

To produce the output specified, use a loop to step through the arrays getting the name of a month and the number of days in that month.

<hr>

## Pseudocode

```
Declare Integer size = 12
Declare String months[size] = "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
Declare Integer numberOfDays[size] = 31,28,31,30,31,30,31,31,30,31,30,31
Declare Integer index

Set index = 0
For index To (size - 1) Then
    Output months[index], " has ", numberOfDays[index], " days"
End For
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](daysOfEachMonth.cpp)
- [Java](daysOfEachMonth.java)
- [Python](daysOfEachMonth.py)
- [PHP](daysOfEachMonth.php)
- [JavaScript](daysOfEachMonth.js)
