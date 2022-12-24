# University Meal Plan Selector

## Case

The university offers the following meal plans:

Plan 1: 7 meals per week for $560 per semester
Plan 2: 14 meals per week for $1,095 per semester
Plan 3: Unlimited meals for $1,500 per semester

Design a menu-driven program that allows the user to select a meal plan.
The program should ask the user for the number of semesters and then display the total price for the plan.

<hr>

## Pseudocode

```
Declare Integer selection
Declare Integer semester
Declare Integer totalPrice

Output "Plan 1: 7 meals per week for $560 per semester"
Output "Plan 2: 14 meals per week for $1,095 per semester"
Output "Plan 3: Unlimited meals for $1,500 per semester"
Output "4 for exit"

Output "select meal plan ?"
Input selection

Select selection Then
    Case 1 :
        Output "Enter the number of semesters"
        Input semester
        Set totalPrice = 560 * semester
        Output "Total : $", totalPrice
    Case 2 :
        Output "Enter the number of semesters"
        Input semester
        Set totalPrice = 1095 * semester
        Output "Total : $", totalPrice
    Case 3 :
        Output "Enter the number of semesters"
        Input semester
        Set totalPrice = 1500 * semester
        Output "Total : $", totalPrice
    Default :
        Output "Exit !!!"
End Selection
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](universityMealPlanSelector.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
