# Backward String

## Case

Design a program that prompts the user to enter a string and then displays the string contents backward.
For instance, if the user enters “gravity” the program should display “ytivarg.”

<hr>

## Pseudocode

```
Declare String word
Declare String backwardWord
Declare Integer index
Declare Integer strSize


Output "Enter a string :"
Input word

Set strSize = length(word) - 1

Set index = 0
For strSize To index Then
    Set backwardWord = backwardWord + word[strSize]
    Set index = index + 1
End For

Output "Backward string : ", backwardWord
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](backwardString.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
