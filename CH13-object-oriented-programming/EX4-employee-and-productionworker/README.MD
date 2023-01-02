# Employee And Production Worker

## Case

Design an Employee class that has fields for the following pieces of information:

- Employee name
- Employee number
  Next, design a class named ProductionWorker that extends the Employee class.
  The ProductionWorker class should have fields to hold the following information:
- Shift number (an integer, such as 1, 2, or 3)
- Hourly pay rate
  The workday is divided into two shifts: day and night. The shift field will hold an
  integer value representing the shift that the employee works. The day shift is shift 1
  and the night shift is shift 2. Design the appropriate accessor and mutator methods
  for each class.
  Once you have designed the classes, design a program that creates an object of the
  ProductionWorker class and prompts the user to enter data for each of the
  object’s fields. Store the data in the object and then use the object’s accessor meth-
  ods to retrieve it and display it on the screen.

<hr>

## Pseudocode

```
Class Employee
    Private String empName
    Private String empNum

    Public Module Employee(String name, String num)
        Set empName = name
        Set empNum = num
    End Module

    Public Module setEmpName(String name)
        Set empName = name
    End Modules

    Public Module setEmpNum(String num)
        Set empNum = num
    End Modules

    Public Function String getEmpName()
        Return empName
    End Function

    Public Function String getEmpNum()
        Return empNum
    End Function
End Class

Class ProductionWorker Extends Employee
    Private Integer shiftNum
    Private Real hourlyPayRate

    Public Module ProductionWorker(String name, String num, Integer shift, Real payRate)
        Set shiftNum = shift
        Set hourlyPayRate = payRate

        Call Employee(name, num)
    End Module

    Public Module setShiftNum(Integer shift)
        Set shiftNum = shift
    End Module

    Public Module setHourlyPayRate(Real payRate)
        Set hourlyPayRate = payRate
    End Module

    Public Function Integer getShiftNum()
        Return shiftNum
    End Function

    Public Function Real getHourlyPayRate()
        Return hourlyPayRate
    End Function
End Class

Module main()
    Declare ProductionWorker empData
    Declare String name
    Declare String number
    Declare Integer shift
    Declare Real payRate

    Output "Enter a Employee name : "
    Input name
    Output "Enter a Employee number : "
    Input number
    Output "Enter a shift : "
    Input shift
    Output "Enter a hourly pay rate : "
    Input payRate

    empData = New ProductionWorker(name, number, shift, payRate)

    Output "Employee Name : ", empData.getEmpName()
    Output "Employee Number : ", empData.getEmpNum()
    Output "Employee Shift : ", empData.getShiftNum()
    Output "Employee hourly pay rate : ", empData.getHourlyPayRate()
End Module

```

<hr>

## UML

<img src=".png"  >

<hr>

## Source Code

- [C++](employeeAndProductionWorker.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
