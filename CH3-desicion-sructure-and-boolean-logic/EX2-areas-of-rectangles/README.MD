# Areas of Rectangles

## Case

The area of a rectangle is the rectangle’s length times its width. Design a program that asks for the length and width of two rectangles. The program should tell the user which rectangle has the greater area, or whether the areas are the same

<hr>

## Pseudocode

```
Declare Real areaRectangle1
Declare Real areaRectangle2
Declare Real length1
Declare Real length2
Declare Real width1
Declare Real width2

Output "Enter Length & Width rectangle 1"
Output "Length :"
Input length1
Output "Width :"
Input width1

Output "Enter Length & Width rectangle 2"
Output "Length :"
Input length2
Output "Width :"
Input length2

Set areaRectangle1 = length1 * width1
Set areaRectangle2 = length2 * width2

If areaRectangle1 == areaRectangle2 Then
    Output "Rectangle 1 and Rectangle 2 areas are the same"
Else
    If areaRectangle1 > areaRectangle2 Then
        Output "Rectangle 1 has greater area than Rectangle 2"
    Else
        Output "Rectangle 2 has greater area than Rectangle 1"
    End If
End If
```

<hr>

## Flowchart

<img src="areasOfRectanglesFlowchart.png"  >

<hr>

## Source Code

- [C++](areasOfRectangles.cpp)
- [Java](areasOfRectangles.java)
- [Python](areasOfRectangles.py)
- [PHP](areasOfRectangles.php)
- [JavaScript](areasOfRectangles.js)
