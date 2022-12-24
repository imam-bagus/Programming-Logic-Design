# Geometry Calculator

## Case

Write a program that displays the following menu:

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
   Enter your choice (1-4).

If the user enters 1, the program should ask for the radius of the circle and then display its area. Use the following formula to calculate the circle’s area:

area = πr2

Use 3.14159 for π and the radius of the circle for r.

If the user enters 2, the program should ask for the length and width of the rectangle, and then display the rectangle’s area. Use the following formula to calculate the rectangle’s area:

area = length × width

If the user enters 3, the program should ask for the length of the triangle’s base and its height, and then display its area. Use the following formula to calculate the area of the triangle:

area = base × height × .5

If the user enters 4, the program should end.

<hr>

## Pseudocode

```
Constant Real PI = 3.14159
Declare Integer selection
Declare Real area

Declare Real radius

Declare Real width
Declare Real length

Declare Real base
Declare Real height

Output " \t \t Geometry Calculator"
Output "1. Calculate the Area of a Circle"
Output "2. Calculate the Area of a Rectangle"
Output "3. Calculate the Area of a Triangle"
Output "4. Quit"

Output "Enter your choise "
Input selection

Select selection :
    Case 1 :
        Output "Enter a radius circle :"
        Input radius
        area = PI * (radius * 2)
        Output "Circle area : ", area
    Case 2 :
        Output "Enter a length :"
        Input length
        Output "Enter a width :"
        Input width
        area = length * width
        Output "Rectangle area : ", area
    Case 3 :
        Output "Enter a base :"
        Input base
        Output "Enter a height :"
        Input height
        area = base * height * 0.05
        Output "Triangle area : ", area
    Default :
        Output "Quit !!!"
End Select

```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](geometryCalculator.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
