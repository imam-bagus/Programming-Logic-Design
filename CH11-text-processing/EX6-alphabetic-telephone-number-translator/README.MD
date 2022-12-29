# Alphabetic Telephone Number Translator

## Case

Many companies use telephone numbers like 555-GET-FOOD so the number is easier for their customers to remember.
On a standard telephone, the alphabetic letters are mapped to numbers in the following fashion:

A, B, and C = 2
D, E, and F = 3
G, H, and I = 4
J, K, and L = 5
M, N, and O = 6
P, Q, R, and S = 7
T, U, and V = 8
W, X, Y, and Z = 9

Design a program that asks the user to enter a 10-character telephone number in the format XXX-XXX-XXXX.
The program should display the telephone number with any alphabetic characters that appeared in the original translated to their numeric equivalent.
For example, if the user enters 555-GET-FOOD the program should display 555-438-3663.

<hr>

## Pseudocode

```
Declare String telpNum
Declare String result
Declare Integer strLength
Declare Integer index

Output "Enter a telephone number "
Input telpNum

Set strLength = length(strLength) - 1

Set index = 4
For index To strLength Then
    If index == 7 Then
        Set append(result,'-')
    Else
        If telpNum[index] == 'A' OR telpNum[index] == 'B' OR telpNum[index] == 'C' Then
            Set append(result, '2')
        Else
            If telpNum[index] == 'D' OR telpNum[index] == 'E' OR telpNum[index] == 'F' Then
                Set append(result, '3' )
            Else
                If telpNum[index] == 'G' OR telpNum[index] == 'H' OR telpNum[index] == 'I' Then
                    Set append(result, '4')
                Else
                    If telpNum[index] == 'J' OR telpNum[index] == 'K' OR telpNum[index] == 'L' Then
                        Set append(result, '5')
                    Else
                        If telpNum[index] == 'M' OR telpNum[index] == 'N' OR telpNum[index] == 'O' Then
                                Set append(result, '6')
                        Else
                            If telpNum[index] == 'P' OR telpNum[index] == 'Q' OR telpNum[index] == 'R' OR telpNum[index] == 'S' Then
                                Set append(result, '7')
                            Else
                                If telpNum[index] == 'T' OR telpNum[index] == 'U' OR telpNum[index] == 'V' Then
                                    Set append(result, '8')
                                Else
                                    If telpNum[index] == 'W' OR telpNum[index] == 'X' OR telpNum[index] == 'Y' OR telpNum[index] == 'Z' Then
                                            Set append(result, '9')
                                    End If
                                End If
                            End If
                        End If
                    End If
                End If
            End If
        End If
    End If
End For

Output "Telephone number : ", result
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](alfabethicTelephoneNumberTranslator.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
