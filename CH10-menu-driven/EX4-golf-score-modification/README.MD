# Golf Score Modification

## Case

Exercise 6 in Chapter 10 you designed the following two programs for the Springfork Amateur Golf Club

1. A program that reads each player’s name and golf score as keyboard input,
   and then saves these as records in a file named golf.dat.
2. A program that reads the records from the golf.dat file and displays them.

Consolidate these programs into a single program that presents a menu, allowing the user to select the operation he or she wants to perform.

<hr>

## Pseudocode

```

Module main()
    Declare Integer selection

    Output "\t \t Springfork Amateur Golf Club"
    Output "1. add record"
    Output "2. print record"
    Output "3. Exit"
    Output "Enter your selection ?"
    Input selection

    Select selection :
        Case 1:
            Call addRecord()
        Case 2:
            Call printRecord()
        Default:
            Output "Exit !!!"
    End Select
End Module

Module addRecord()
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
End Module

Module printRecord()
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
End Module
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
