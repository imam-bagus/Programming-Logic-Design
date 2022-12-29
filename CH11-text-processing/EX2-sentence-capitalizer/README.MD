# Sentence Capitalizer

## Case

Design a program that prompts the user to enter a string containing multiple sentences, and then displays the string with the first character of each sentence capitalized.
For instance, if the user enters “hello. my name is Joe. what is your name?”
the program should display “Hello. My name is Joe. What is your name?”

<hr>

## Pseudocode

```
Declare String str
Declare String strResult
Declare Integer index
Declare Integer strSize

Output "Enter a string :"
Input str

Set strSize = length(str) - 1

Set index = 0
For index To strSize Then
    If index == 0 Then
        Set strResult = strResult + toUpper(str[index])
    Else
        If str[index] == "." Then
            Set strResult = strResult + "."
            Set strResult = strResult + " "
            Set strResult = strResult + toUpper(str[index + 2]
            Set index = index + 2
        Else
            Set strResult = strResult + str[index]
        End If
    End If
    Set index = index + 1
End For

Output strResult
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
