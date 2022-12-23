#

## Case

Modify program #2 that you wrote for Programming Exercise 6 so it also displays the name of the player with the best (lowest) golf score

<hr>

## Pseudocode

```

Declare String name
Declare Integer score
Declare String bestPlayer
Declare Integer bestScore
Declare Integer flag = 1
Declare InputFile golfFile

Open golfFile "golf.dat"

While !eof(golfFile) Then
    Read golfFile name

    If flag > 1 Then
        Output "-----------------"
    End If

    Output "Player name : ", name
    Read golfFile score
    Output "Player score : ", score

    If flag == 1 Then
        Set bestScore = score
        Set bestPlayer = name
        Set flag = flag + 1
    Else
        If score < bestScore Then
             Set bestScore = score
             Set bestPlayer = name
        End If
    End If
End While

Output "=========================="
Output "Best Player : ", bestPlayer
Output "With score  : ", bestScore

Close golfFile
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
