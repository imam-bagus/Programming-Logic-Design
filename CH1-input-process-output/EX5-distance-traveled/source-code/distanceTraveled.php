<?php
$distance;
$speed = 60;
$time;

// Input
$time = readline("Enter a time :");

// Process
$distance = $speed * $time;

// Output
print("Distance the car travel in " . $time . " hours is : " . $distance . " Miles");
