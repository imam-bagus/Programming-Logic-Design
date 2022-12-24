# Phone Book Program

## Case

Design a program that you can use to keep all of your friends’ names and phone numbers in a file. The program should be menu-driven, and offer the following operations:

1. Add a new record
2. Search for a name.
3. Modify a phone number.
4. Delete a record.
5. Exit the program.

<hr>

## Pseudocode

```
Module main()
Declare Integer selection

Do
    Output "\t Phone Book "
    Output "1. Add a new record"
    Output "2. Search for a name."
    Output "3. Modify a phone number."
    Output "4. Delete a record"
    Output "5. Exit the program."

    Output "Enter your selection : "
    Input selection

    Select selection :
        Case 1 :
            Call addRecord()
        Case 2 :
            Call searchRecord()
        Case 3 :
            Call modifyRecord()
        Case 4 :
            Call deleteRecord()
        Default :
            Set selection = 5;
    End Select

While selection >= 1 AND selection <= 4

Output "Exit !!!"
End Module


Module addRecord()
    Declare OutputFile AppendMode phoneBookRecord
    Declare String name
    Declare String phoneNumber
    Declare String sentinel = "N"

    Open phoneBookRecord "phone-book.dat"

    Output "Add a new record "
    Output "================"

    Do
        Output "Enter a name :"
        Input name
        Write phoneBookRecord name, ","

        Output "Enter a Phone Number :"
        Input phoneNumber
        Write phoneBookRecord phoneNumber, ","

        Output "Do you want add record again ? 'Y' or 'N'"
        Input sentinel
    While sentinel == 'Y'

    Close phoneBookRecord
End Module


Module searchRecord()
    Declare InputFile phoneBookRecord
    Declare OutputFile phoneBookRecordModify
    Declare String name
    Declare String phoneNumber
    Declare String searchName
    Declare String sentinel
    Declare Boolean sentinelSearch = False

    Open phoneBookRecord "phone-book.dat"

    Output "Search for a name "
    Output "================"

    Do
        Output "Enter name search : "
        Input searchName

        While sentinelSearch == False AND  NOT eof(phoneBookRecord) Then
            Read phoneBookRecord name
            Read phoneBookRecord phoneNumber

            If name == searchName Then
                Set sentinelSearch = True
            End If
        End While

        If sentinelSearch == True Then
            Output "Name searched : ", name
            Output "Phone number : ", phoneNumber
        Else
            Output "Name is not found !!!"
        End If

        Set sentinelSearch = false

        Output "Do you want search again ? 'Y' or 'N'"
        Input sentinel
    While sentinel == 'Y'

    Close phoneBookRecord

End Module


Module modifyRecord()
    Declare InputFile phoneBookRecord
    Declare OutputFile tempFile
    Declare InputFile readTempFile
    Declare OutputFile newPhoneBookRecord
    Declare String name
    Declare String phoneNumber
    Declare String searchName
    Declare String newPhoneNumber
    Declare String sentinel
    Declare Boolean flag = False
    Declare Boolean sentinelSearch = False


    Output "Modify a phone number "
    Output "================"

    Do

        Open phoneBookRecord "phone-book.dat"
        Open tempFile "temp.dat"

        Output "Enter name you want modify: "
        Input searchName

        Output "Enter new phone number : "
        Input newPhoneNumber

        While NOT eof(phoneBookRecord) Then
            Read phoneBookRecord name
            Read phoneBookRecord phoneNumber

            If name == searchName Then
                Write temp name, ","
                Write temp newPhoneNumber, ","
                Set flag = True
            Else
                Write temp name, ","
                Write temp phoneNumber, ","
            End If
        End While

        If flag == True Then
            Output "Phone number has been updated !!!"
        Else
            Output "Name is not found !!!"
        End If

        Close phoneBookRecord
        Close tempFile


        Open newPhoneBookRecord "phone-book.dat"
        Open readTempFile "temp.dat"

        while NOT eof(readTempFile) Then
            Read readTempFile name
            Read readTempFile phoneNumber

            Write newPhoneBookRecord name, ","
            Write newPhoneBookRecord phoneNumber, ","
        End While

        Set flag = false

        Close newPhoneBookRecord
        Close readTempFile

        Output "Do you want modify again ? 'Y' or 'N'"
        Input sentinel
    While sentinel == 'Y'

End Module

Module deleteRecord()
    Declare InputFile phoneBookRecord
    Declare OutputFile newPhoneBookRecord
    Declare OutputFile tempFile
    Declare InputFile readTempFile

    Declare String name
    Declare String phoneNumber
    Declare String deletedName
    Declare Boolean flag

    Open phoneBookRecord "phone-book.dat"
    Open tempFile "temp.dat"

    Output "Enter a name of you want deleted ?"
    Input deletedName


    Close phoneBookRecord "phone-book.dat"
    Close tempFile "temp.dat"


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
