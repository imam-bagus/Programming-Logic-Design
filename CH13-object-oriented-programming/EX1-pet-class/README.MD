# Pet Class

## Case

Design a class named Pet, which should have the following fields:

- name: The name field holds the name of a pet.
- type: The type field holds the type of animal that a pet is. Example values are "Dog", "Cat", and "Bird".
- age: The age field holds the pet’s age.
  The Pet class should also have the following methods:
- setName: The setName method stores a value in the name field.
- setType: The setType method stores a value in the type field.
- setAge: The setAge method stores a value in the age field.
- getName: The getName method returns the value of the name field.
- getType: The getType method returns the value of the type field.
- getAge: The getAge method returns the value of the age field.
  Once you have designed the class, design a program that creates an object of the class and prompts the user to enter the name, type, and age of his or her pet.
  This data should be stored in the object. Use the object’s accessor methods to retrieve the pet’s name, type, and age and display this data on the screen.

<hr>

## Pseudocode

```
Class Pet

  Private String name
  Private String type
  Private Integer age

  // Mutator
  Public Module setName(String petName)
    Set name = petName
  End Module

  Public Module setType(String petType)
    Set type = petType
  End Module

  Public Module setAge(String petAge)
    Set age = petAge
  End Module

  // Accessor
  Public Function String getName()
    Return name
  End Function

  Public Function String getType()
    Return type
  End Function

  Public Function Integer getAge()
    Return age
  End Function

End Class

Module main()

  Declare Pet petData
  Declare String name
  Declare String type
  Declare Integer age

  Output "Enter a pet name : "
  Input name

  Output "Enter a pet type : "
  Input type

  Output "Enter a pet age : "
  Input age

  Set petData = New pet()

  petData.setName(name)
  petData.setType(type)
  petData.setAge(age)

  Output "Pet name : ", petData.getName()
  Output "Pet type : ", petData.getType()
  Output "Pet age  : ", petData.getAge()

End Module

```

<hr>

## UML

<img src="Pet class - UML.png"  >

<hr>

## Source Code

- [C++](petClass.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
