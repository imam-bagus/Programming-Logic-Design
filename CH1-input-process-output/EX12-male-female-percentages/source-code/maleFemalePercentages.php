<?php

// Input
$male   = (float) readline("Enter number of males     : ");
$female = (float) readline("Enter number of females   : ");

$totalStudent     = $male + $female;
$percentageMale   = (int) $male / $totalStudent * 100;
$percentageFemale = (int) $female / $totalStudent * 100;

echo "Percentage Males student   : " . $percentageMale . "% \n";
echo "Percentage Females student : " . $percentageFemale . "% \n";
