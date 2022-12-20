# Color Mixer

# Case

The colors red, blue, and yellow are known as the primary colors because they cannot be made by mixing other colors. When you mix two primary colors, you get a secondary color, as shown here

- When you mix red and blue, you get purple.
- When you mix blue and yellow, you get green.
- When you mix red and yellow, you get orange.

Design a program that prompts the user to enter the names of two primary colors to mix. If the user enters anything other than “red,” “blue,” or “yellow,” the program should display an error message. Otherwise, the program should display the name of the secondary color that results

<hr>

## Pseudocode

```
Declare String colorRed = "red"
Declare String colorBlue = "blue"
Declare String colorYellow = "yellow"
Declare String inputColor1
Declare String inputColor2
Declare String secondaryColor
Declare Boolean flag1
Declare Boolean flag2

Output "Enter a color 1 : "
Input inputColor1
Output "Enter a color 2 : "
Input inputColor2

If inputColor1 == colorRed OR inputColor1 == colorBlue OR inputColor1 == colorYellow Then
    Set flag1 = true
Else
    Set flag1 = false
EndIf

If inputColor2 == colorRed OR inputColor2 == colorBlue OR inputColor2 == colorYellow Then
    Set flag2 = true
Else
    Set flag2 = false
EndIf

If flag1 AND flag2 Then
    If inputColor1 != inputColor2 Then
        If inputColor1 == colorRed AND inputColor2 == colorBlue  OR  inputColor1 == colorBlue AND inputColor2 == colorRed Then
            Set secondaryColor = "Purple"
        Else
            If inputColor1 == colorBlue AND inputColor2 == colorYellow  OR  inputColor1 == colorYellow AND inputColor2 == colorBlue Then
                Set secondaryColor = "Green"
            Else
                If inputColor1 == colorRed AND inputColor2 == colorYellow  OR  inputColor1 == colorYellow AND inputColor2 == colorRed Then
                    Set secondaryColor = "Orange"
                EndIf
            EndIf
        EndIf
        Output "Secondary Color :", secondaryColor
    Else
        Output "Please enter a different color !!"
    EndIf
Else
    Output "Please enter a red, blue, or yellow !!"
EndIf
```

<hr>

## Flowchart

<img src="colorMixerFlowchart.png >

<hr>

## Source Code

- [C++](colorMixer.cpp)
- [Java](colorMixer.java)
- [Python](colorMixer.py)
- [PHP](colorMixer.php)
- [JavaScript](colorMixer.js)
