# Sorted Golf Scores

## Case

Design a program that asks the user to enter 10 golf scores. The scores should be stored in an Integer array. Sort the array in ascending order and display its contents.

<hr>

## Pseudocode

```
Declare Integer size = 10
Declare Integer golfScore[size]
Declare Integer index
Declare Integer index2
Declare Integer tempSwap

Set index2 = 0
For index2 To size Then
    Output index2 + 1, ". Enter a golf score : "
    Input golfScore[index2]
End For

Set index2 = 0
For index = (size - 1) To 1 Then - 1
    For index2 To (index - 1) Then
        If golfScore[index2] > golfScore[index2] + 1 Then
            Set tempSwap = golfScore[index2]
            Set golfScore[index2] = golfScore[index2 + 1]
            Set golfScore[index2 + 1] = tempSwap
        End If
    End For
End For


Set index2 = 0
For index2 To size Then
    Output index2 + 1, ". golf score : ", golfScore[index2]
End For

```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](sortedGolfScores.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
