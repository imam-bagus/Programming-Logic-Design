# Car Class

## Case

Design a class named Car that has the following fields:

- yearModel: The yearModel field is an Integer that holds the car’s year model.
- make: The make field references a String that holds the make of the car.
- speed: The speed field is an Integer that holds the car’s current speed.
  In addition, the class should have the following constructor and other methods:
- Constructor: The constructor should accept the car’s year model and make as
  arguments. These values should be assigned to the object’s yearModel and make
  fields. The constructor should also assign 0 to the speed field.
- Accessors: Design appropriate accessor methods to get the values stored in an
  object’s yearModel, make, and speed fields.
- accelerate: The accelerate method should add 5 to the speed field each
  time it is called.
- brake: The brake method should subtract 5 from the speed field each time it is
  called.
  Next, design a program that creates a Car object, and then calls the accelerate
  method five times. After each call to the accelerate method, get the current speed
  of the car and display it. Then call the brake method five times. After each call to
  the brake method, get the current speed of the car and display it.

<hr>

## Pseudocode

```
Class Car
    Private Integer yearModel
    Private String make
    Private Integer speed

    // constructor
    Public Module Car(Integer ym, String m, Integer s)
        Set yearModel = ym
        Set make = m
        Set speed = s
    End Module

    // Mutator
    Public Module setYearModel(Integer ym)
        Set yearModel = ym
    End Module

    Public Module setMake(String m)
        Set make = m
    End Module

    Public Module setSpeed(Integer s)
        Set speed = s
    End Module

    Public Module accelerate()
        Set speed = speed + 5
    End Module

    Public Module brake()
        Set speed = speed - 5
    End Module

    // Accessor
    Public Function Integer getYearModel()
        Return yearModel
    End Function

    Public Function String getMake()
        Return make
    End Function

    Public Function Integer getSpeed()
        Return speed
    End Function

End Class

Module main()
    Declare Car carSpeed
    Declare Integer yearModel
    Declare String make

    Output "Enter car year model : "
    Input yearModel

    Output "Enter car make : "
    Input make

    carSpeed = New Car(yearModel, make, 0)

    carSpeed.accelerate()
    carSpeed.accelerate()
    carSpeed.accelerate()
    carSpeed.accelerate()
    carSpeed.accelerate()

    Output "Car Speed : ", carSpeed.getSpeed()

    carSpeed.brake()
    carSpeed.brake()
    carSpeed.brake()
    carSpeed.brake()
    carSpeed.brake()

    Output "Car Speed : ", carSpeed.getSpeed()
End Module

```

<hr>

## UML

<img src="Car class - UML.png"  >

<hr>

## Source Code

- [C++](carClass.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
