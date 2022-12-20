# Rainfall Statistic

## Case

Design a program that lets the user enter the total rainfall for each of 12 months into an array.

The program should calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts

<hr>

## Pseudocode

```
Declare Integer months = 11
Declare Real rainfall[month]
Declare Real totalRainfall
Declare Real averageRainfall
Declare Real highestRainfall
Declare Real lowestRainfall
Declare Integer month

Set month = 0
For month To months Then
    Output "Enter a total rainfall month ", month + 1, " : "
    Input rainfall[month]

    Set totalRainfall = totalRainfall + rainfall[month]

    Set month = month + 1
End For

highestRainfall = rainfall[0]

Set month = 1
For month To months Then
    If rainfall[month] > highestRainfall Then
        Set highestRainfall = rainfall[month]
    End If
End For

lowestRainfall = rainfall[0]

Set month = 1
For month To months Then
    If rainfall[month] < lowestRainfall Then
        Set lowestRainfall = rainfall[month]
    End If
End For

Set averageRainfall = totalRainfall / (months + 1)

Output "Total Rainfall : ", totalRainfall
Output "Average Rainfall : ", averageRainfall
Output "Highest Rainfall : ", highestRainfall
Output "Lowest Rainfall : ", lowestRainfall
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](rainfallStatistics.cpp)
- [Java](rainfallStatistics.java)
- [Python](rainfallStatistics.py)
- [PHP](rainfallStatistics.php)
- [JavaScript](rainfallStatistics.js)
