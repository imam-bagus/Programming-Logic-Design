# Golf Scores

## Case

The Springfork Amateur Golf Club has a tournament every weekend.
The club president has asked you to design two programs.

1. A program that will read each player’s name and golf score as keyboard input, and then save these as records in a file named golf.dat. (Each record will have a field for the player’s name and a field for the player’s score.)
2. A program that reads the records from the golf.dat file and displays them.

<hr>

## Pseudocode

```
// Program 1

Declare String name
Declare Integer score
Declare OutputFile golfFile
Declare String sentinelVal = "Y"

Open golfFile "golf.dat"

While sentinelVal == "Y" Then
    Output "Enter a player name : "
    Input name
    Output "Enter a player score : "
    Input score
    Output "====================="
    Write golfFile name, ',' , score, ','

    Output "Enter 'Y' for input again or 'N' for stop ?"
    Input toLower(sentinelVal)
End While

    Output "File has been saved on 'golf.dat'"

Close golfFile

// ----------------------------------------------------------------

// Program 2
Declare String result
Declare InputFile golfFile

Open golfFile "golf.dat"

While !eof(golfFile) Then
    Read golfFile result
    Output "Player name : ", result
    Read golfFile result
    Output "Player score : ", result
    Output "======================="
End While

Close golfFile
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](golfScores.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
