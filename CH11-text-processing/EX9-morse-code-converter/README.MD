# morse code converter

## Case

Design a program that asks the user to enter a string, and then converts that string to Morse code.
Morse code is a code where each letter of the English alphabet, each digit, and various punctuation characters are represented by a series of dots and dashes

<hr>

## Pseudocode

```
Module main()
    Declare String inputString
    Declare String convertedString
    Declare Integer index
    Declare Integer size

    Output "Enter  string : "
    Input inputString

    Set size = length(inputString) - 1;

    Set index = 0
    for index To size Then
        Set covertedString = append(convert(inputString[index]))
        Set covertedString = append(" ")
    End For

    Output "Morse Code : ", convertedString

End Module

Function String convert(Char character)
    Declare String result

    Select character :
        Case ' ':
            result = " "
        Case ',':
            result = "--..--"
        Case '.':
            result = ".-.-.-"
        Case '?':
            result = "..--.."
        Case '0' :
            result = "-----"
        Case '1' :
            result = ".----"
        Case '2' :
            result = "..---"
        Case '3' :
            result = "...--"
        Case '4' :
            result = "....-"
        Case '5' :
            result = "....."
        Case '6' :
            result = "-...."
        Case '7' :
            result = "--..."
        Case '8' :
            result = "---.."
        Case '9' :
            result = "----."
        Case 'A' :
            result = ".-"
        Case 'B' :
            result = "-..."
        Case 'C' :
            result = "-.-."
        Case 'D' :
            result = "-.."
        Case 'E' :
            result = "."
        Case 'F' :
            result = "..-."
        Case 'G' :
            result = "--."
        Case 'H' :
            result = ".…"
        Case 'I' :
            result = ".."
        Case 'J' :
            result = ".---"
        Case 'K' :
            result = "-.-"
        Case 'L' :
            result = ".-.."
        Case 'M' :
            result = "--"
        Case 'N' :
            result = "-."
        Case 'O' :
            result = "---"
        Case 'P' :
            result = ".---."
        Case 'Q' :
            result = "--.-"
        Case 'R' :
            result = ".-."
        Case 'S' :
            result = "..."
        Case 'T' :
            result = "-"
        Case 'U' :
            result = "..-"
        Case 'V' :
            result = "...-"
        Case 'W' :
            result = ".--"
        Case 'X' :
            result = "-..-"
        Case 'Y' :
            result = "-.--"
        Case 'Z' :
            result = "--.."
    End Select

    Return result
End Function
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
