# Word Separator

## Case

Design a program that accepts as input a sentence in which all of the words are run together, but the first character of each word is uppercase.

Convert the sentence to a string in which the words are separated by spaces and only the first word starts with an uppercase letter.

For example, the string “StopAndSmellTheRoses.” would be converted to “Stop and smell the roses.

<hr>

## Pseudocode

```
Declare String sentence
Declare Integer index
Declare Integer size

Output "Enter a sentence : "
Input sentence

Set size = length(sentence) - 1

Set index = 0
For index To size Then
    If index != 0 Then
        If isUpper(sentence[index]) Then
            Set insert(sentence, index, ' ')
            Set index = index + 1
        End If
    End If
    Set index = index + 1
End For

Output "Sentence : ", sentence

```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](wordSeparator.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
