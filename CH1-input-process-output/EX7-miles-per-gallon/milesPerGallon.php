<?php
// Input
$milesDriven = readline("Miles Driven :");
$gallons     = readline("Gallons Gas :");

// Process
$MPG = $milesDriven / $gallons;
$MPG = number_format((float) $MPG, 1, '.', '');

// Output
echo "Miles-per-Gallon :" . $MPG;
