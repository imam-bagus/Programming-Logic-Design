Design a program that asks for the number of fat grams and calories in a food item. Validate the input as follows:

- Make sure the number of fat grams and calories is not less than 0.
- According to nutritional formulas, the number of calories cannot exceed fat grams × 9. Make sure that the number of calories entered is not greater than fat grams × 9.

Once correct data has been entered, the program should calculate and display the percentage of calories that come from fat. Use the following formula:

Percentage of calories from fat = (Fat grams × 9) ÷ Calories

Some nutritionists classify a food as “low fat” if less than 30 percent of its calories come from fat. If the results of this formula are less than 0.3, the program should display a message indicating the food is low in fat.

<hr>

## Pseudocode

```
Declare Real fatGrams
Declare Real calories
Declare Real percentageCalories

Output "Enter a fat grams : "
Input fatGrams

While fatGrams < 0 Then
    Output "ERROR : Fat grams cannot under 0"
    Output "Enter a fat grams : "
    Input fatGrams
EndWhile

Output "Enter a calories : "
Input calories

While calories < 0 Then
    Output "ERROR : Calories cannot under 0"
    Output "Enter a calories : "
    Input calories
EndWhile

While calories > fatGrams * 9 Then
    Output "ERROR : Calories cannot exceed fat grams x 9"
    Output "Enter a calories : "
    Input calories
EndWhile

Set percentageCalories = (fatGrams * 9) / calories

If percentageCalories < 0.3 Then
    Output "Food is low in fat."
EndIf
```

<hr>

## Flowchart

<img src="design/.png"  >

<hr>

## Source Code

- [C++](fatGramCalories.cpp)
- [Java](fatGramCalories.java)
- [Python](fatGramCalories.py)
- [PHP](fatGramCalories.php)
- [JavaScript](fatGramCalories.js)
