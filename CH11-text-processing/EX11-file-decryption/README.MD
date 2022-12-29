# File Decryption

## Case

Design a program that decrypts the file produced by the program in Exercise 10

The decryption program should read the contents of the coded file, restore the data to its original state, and write it to another file.

<hr>

## Pseudocode

```
Module main()
    Declare FileInput documentEncrypt
    Declare FileOutput documentDecrypt
    Declare String decryptText
    Declare Integer index
    Declare Integer size

    Open documentEncrypt "encrypt-file.dat"
    Open documentDecrypt "decrypt-file.dat"

    Read documentEncrypt encryptText

    Set size = length(encryptText) - 1;

    Set index = 0
    for index To size
        Set decryptText = append(encryptText[index])
    End For

    Write documentDecrypt decryptText

    Close documentEncrypt
    Close documentDecrypt
End Module

Function String decrypt(char character)
    Declare String result

    Select character :
        Case "_" :
            Set result = " "
        Case "Z" :
            Set result = "A"
        Case "Y" :
            Set result = "B"
        Case "X" :
            Set result = "C"
        Case "W" :
            Set result = "D"
        Case "V" :
            Set result = "E"
        Case "U" :
            Set result = "F"
        Case "T" :
            Set result = "G"
        Case "S" :
            Set result = "H"
        Case "R" :
            Set result = "I"
        Case "Q" :
            Set result = "J"
        Case "P" :
            Set result = "K"
        Case "O" :
            Set result = "L"
        Case "N" :
            Set result = "M"
        Case "M" :
            Set result = "N"
        Case "L" :
            Set result = "O"
        Case "K" :
            Set result = "P"
        Case "J" :
            Set result = "Q"
        Case "I" :
            Set result = "R"
        Case "H" :
            Set result = "S"
        Case "G" :
            Set result = "T"
        Case "F" :
            Set result = "U"
        Case "E" :
            Set result = "V"
        Case "D" :
            Set result = "W"
        Case "C" :
            Set result = "X"
        Case "B" :
            Set result = "Y"
        Case "A" :
            Set result = "Z"
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
