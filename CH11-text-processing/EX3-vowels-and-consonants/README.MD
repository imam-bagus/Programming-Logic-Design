# Vowels and Consonants

## Case

Design a program that prompts the user to enter a string.
The program should then display the number of vowels and the number of consonants in the string.

<hr>

## Pseudocode

```
Declare string str
Declare Integer vowels = 0
Declare Integer consonants = 0
Declare Integer index
Declare Integer strSize

Output "Enter a string :"
Input str

Set strSize = length(str) - 1
Set index = 0
For index To strSize Then
    Set str[index] = toUpper(str[index])
    If str[index] == 'A' OR str[index] == 'I' OR str[index] == 'U' OR str[index] == 'E' OR str[index] == 'O' Then
        Set vowels = vowels + 1
    Else
        Set consonants = consonants + 1
    End If

    Set index = index + 1
End For

Output "Number of vowels : ", vowels
Output "Number of consonants : ", consonants

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
