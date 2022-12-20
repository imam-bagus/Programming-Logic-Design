# Phone Number Lookup

## Case

Design a program that has two parallel arrays: a String array named people that is initialized with the names of seven of your friends, and a String array named phone-Numbers that is initialized with your friends’ phone numbers.

The program should allow the user to enter a person’s name (or part of a person’s name).

It should then search for that person in the people array. If the person is found, it should get that person’s phone number from the phoneNumbers array and display it.

If the person is not found in the people array, the program should display a message indicating so

<hr>

## Pseudocode

```
Constant Integer SIZE = 7
Declare Integer index
Declare String names[SIZE] = "bagus", "iky", "ramadhan", "fajar"
Declare String phoneNumbers[SIZE] = "081111111111", "082222222222", "083000000000", "084444444444", "085555555555"
Declare String personName
Declare Boolean sentinel = TRUE
Declare Boolean flag = FALSE

Output "Enter a name : "
Input personName

Set index = 0
While sentinel == TRUE && index <= SIZE - 1 Then
    If names[index] == personName Then
        Set sentinel = FALSE
        Set flag = TRUE
    Else
        index = index + 1
    End If
End While

If flag == TRUE Then
    Output "Phone number of ", names[index], " is : ", phoneNumbers[index]
Else
    Output "Person is not found"
End If
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](phoneNumberLookup.cpp)
- [Java](phoneNumberLookup.java)
- [Python](phoneNumberLookup.py)
- [PHP](phoneNumberLookup.php)
- [JavaScript](phoneNumberLookup.js)
