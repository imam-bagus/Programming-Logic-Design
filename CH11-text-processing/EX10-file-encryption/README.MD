# File Encryption

## Case

File encryption is the science of writing the contents of a file in a secret code.
For this assignment you will design a program that opens a file and encrypts its contents.
Assume the file that you are encrypting contains a list of strings.
The program should open the file and read its contents, one string at a time.
As the program reads a string from the file, it substitutes each character of the string for an alternate character.
It then writes the encoded string out to a second file.
When the program is finished, the second file will be a version of the first file, but written in a secret code.

<hr>

## Pseudocode

```
Module main()
    Declare FileOutput document
    Declare FileOutput documentEncrypt
    Declare String text
    Declare Integer index
    Declare Integer size

    Open document "original-file.dat"
    Open documentEncrypt "encrypt-file.dat"

    Output "Enter text :"
    Input text

    Set size = length(text) - 1
    Set index = 0
    For index To size Then
        Write document text[index]
        Write documentEncrypt encrypt(text[index])
    End For

    Close document
    Close documentEncrypt
End Module

Function String encrypt(char character)
    Declare String result

    Select character :
        Case " " :
            Set result = "_"
        Case "A" :
            Set result = "Z"
        Case "B" :
            Set result = "Y"
        Case "C" :
            Set result = "X"
        Case "D" :
            Set result = "W"
        Case "E" :
            Set result = "V"
        Case "F" :
            Set result = "U"
        Case "G" :
            Set result = "T"
        Case "H" :
            Set result = "S"
        Case "I" :
            Set result = "R"
        Case "J" :
            Set result = "Q"
        Case "K" :
            Set result = "P"
        Case "L" :
            Set result = "O"
        Case "M" :
            Set result = "N"
        Case "N" :
            Set result = "M"
        Case "O" :
            Set result = "L"
        Case "P" :
            Set result = "K"
        Case "Q" :
            Set result = "J"
        Case "R" :
            Set result = "I"
        Case "S" :
            Set result = "H"
        Case "T" :
            Set result = "G"
        Case "U" :
            Set result = "F"
        Case "V" :
            Set result = "E"
        Case "W" :
            Set result = "D"
        Case "X" :
            Set result = "C"
        Case "Y" :
            Set result = "B"
        Case "Z" :
            Set result = "A"
    End Select

    Return result
End Function
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](fileEncyption.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
