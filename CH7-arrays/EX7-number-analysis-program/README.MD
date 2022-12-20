# Number Analysis Program

## Case

Design a program that asks the user to enter a series of 20 numbers. The program should store the numbers in an array and then display the following data:

- The lowest number in the array
- The highest number in the array
- The total of the numbers in the array
- The average of the numbers in the array

<hr>

## Pseudocode

```
Constant Integer SIZE = 20
Declare Integer numbers[SIZE]
Declare Integer index
Declare Integer total
Declare Integer lowest
Declare Integer highest
Declare Real average

Set index = 0
For index to SIZE - 1 Then
    Output "Enter a number", index + 1, " : "
    Input numbers[index]

    Set total = total + numbers[index]

    Set index = index + 1
End For


Set lowest = numbers[0]
Set index = 1
For index To SIZE - 1 Then
    If numbers[index] < lowest Then
        Set lowest = numbers[index]
    Else

    Set index = index + 1
End For


Set highest = numbers[0]
Set index = 1
For index To SIZE - 1 Then
    If numbers[index] > highest Then
        Set highest = numbers[index]
    End If

    Set index = index + 1
End For

Set average = total / SIZE


Output "The lowest number in the array : ", lowest
Output "The highest number in the array : ", highest
Output "The total of the numbers in the array : ", total
Output "The average of the numbers in the array : ", average
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](numberAnalysisProgram.cpp)
- [Java](numberAnalysisProgram.java)
- [Python](numberAnalysisProgram.py)
- [PHP](numberAnalysisProgram.php)
- [JavaScript](numberAnalysisProgram.js)
