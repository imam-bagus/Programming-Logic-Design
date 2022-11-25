<?php
$milesDriven = readline("Miles Driven :");
$gallons = readline("Gallons Gas :");

$MPG = $milesDriven /  $gallons;
$MPG = number_format((float)$MPG, 1, '.', '');


echo "Miles-per-Gallon :" . $MPG;
