<?php
function getWeightHeight(&$weight, &$height)
{
 $weight = readline("Enter a weight (lb)     :");
 $height = readline("Enter a height (Inches) :");
}

function processBMI(&$weight, &$height, &$BMI)
{
 $BMI = ($weight * 703) / ($height * $height);
}

function printBMI(&$BMI)
{
 echo "BMI : " . number_format($BMI, 1, '.');
}

function main()
{

 $weight;
 $height;
 $BMI;

 getWeightHeight($weight, $height);
 processBMI($weight, $height, $BMI);
 printBMI($BMI);
}

main();
