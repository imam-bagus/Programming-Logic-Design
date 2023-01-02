# Personal Information class

## Case

Design a class that holds the following personal data: name, address, age, and phone number.
Write appropriate accessor and mutator methods. Also, design a program that creates three instances of the class.
One instance should hold your information, and the other two should hold your friends’ or family members’ information.

<hr>

## Pseudocode

```
Class PersonalData
    Private String name
    Private String address
    Private Integer age
    Private String phoneNumber

    Public Module PersonalData(String nameData, String addressData, Integer ageData, String phoneNumberData)
        Set name = nameData
        Set address = addressData
        Set age = ageData
        Set phoneNumber = phoneNumberData
    End Module

    Public Module setName(String nameData)
        Set name = nameData
    End Module

    Public Module setAddress(String addressData)
        Set address = addressData
    End Module

    Public Module setAge(Integer ageData)
        Set age = ageData
    End Module

    Public Module setPhoneNumber(String phoneNumberData)
        Set phoneNumber = phoneNumberData
    End Module

    Public Function String getName()
        Return name
    End Function

    Public Function String getAddress()
        Return address
    End Function

    Public Function Integer getAge()
        Return age
    End Function

    Public Function String getPhoneNumber()
        Return phoneNumber
    End Function

End Class


Module main()
    Declare PersonalData imamData
    Declare PersonalData ikiData
    Declare PersonalData yosepData
    Declare String name
    Declare String address
    Declare Integer age
    Declare String phoneNumber

    Output "Enter a name : "
    Input name
    Output "Enter a address : "
    Input address
    Output "Enter a age : "
    Input age
    Output "Enter a phone number : "
    Input phoneNumber

    imamData = New personalData(name, address, age, phoneNumber)

    Output "Enter a name : "
    Input name
    Output "Enter a address : "
    Input address
    Output "Enter a age : "
    Input age
    Output "Enter a phone number : "
    Input phoneNumber

    ikiData = New personalData(name, address, age, phoneNumber)

    Output "Enter a name : "
    Input name
    Output "Enter a address : "
    Input address
    Output "Enter a age : "
    Input age
    Output "Enter a phone number : "
    Input phoneNumber

    yosepData = New personalData(name, address, age, phoneNumber)

End Module
```

<hr>

## UML

<img src="Personal Information Class - UML.png"  >

<hr>

## Source Code

- [C++](personalInformationClass.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
