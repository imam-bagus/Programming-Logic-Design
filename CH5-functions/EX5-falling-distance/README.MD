# Falling Distance

## Case

When an object is falling because of gravity, the following formula can be used to determine the distance the object falls in a specific time period:

d = (0.5) \* g \* t^2

The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the amount of time, in seconds, that the object has been falling.
Design a function named fallingDistance that accepts an object’s falling time (in seconds) as an argument.

The function should return the distance, in meters, that the object has fallen during that time interval.

Design a program that calls the function in a loop that passes the values 1 through 10 as arguments and displays the return value.

<hr>

## Pseudocode

```
Constant Real g = 9.8

Module main()
    Declare Real distance
    Declare Real t
    Declare Real counter
    Declare Real maxCounter

    Set counter = 1
    Set maxCounter = 10
    For counter To maxCounter Then

        Set t = counter

        Set distance = fallingDistance(t)

        Output t, " seconds = ", distance , " m"

        Set counter = counter + 1
    End For

End Module


Function Real fallingDistance(Real t)
    Declare Real result

    Set result = (0.5) * g * t ^ 2

    Return result
End Function
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](fallingDistance.cpp)
- [Java](fallingDistance.java)
- [Python](fallingDistance.py)
- [PHP](fallingDistance.php)
- [JavaScript](fallingDistance.js)
