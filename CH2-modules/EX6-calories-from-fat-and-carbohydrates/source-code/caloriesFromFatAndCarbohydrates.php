<?php

function getFatCarbohydrates(&$fat, &$carbohydrates)
{
 $fat           = readline("Enter a fat :");
 $carbohydrates = readline("Enter a carbohydrates :");
}

function processCaloriesFat(&$fat, &$caloriesFat)
{
 $caloriesFat = $fat * 9;
}

function processCaloriesCarbohydrates(&$carbohydrates, &$caloriesCarbohydrates)
{
 $caloriesCarbohydrates = $carbohydrates * 4;
}

function printCalories(&$caloriesFat, &$caloriesCarbohydrates)
{
 echo "Calories From Fat :" . $caloriesFat . "\n";
 echo "Calories From Carbohydrates :" . $caloriesCarbohydrates;

}

function main()
{
 $fat;
 $carbohydrates;
 $caloriesFat;
 $caloriesCarbohydrates;

 getFatCarbohydrates($fat, $carbohydrates);
 processCaloriesFat($fat, $caloriesFat);
 processCaloriesCarbohydrates($carbohydrates, $caloriesCarbohydrates);
 printCalories($caloriesFat, $caloriesCarbohydrates);
}

main();
