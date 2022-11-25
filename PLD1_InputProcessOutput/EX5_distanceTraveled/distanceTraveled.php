<?php
$distance;
$speed = 60;
$time;

$time = readline("Enter a time :");

$distance = $speed * $time;

print("Distance the car travel in " . $time . " hours is : " . $distance . " Miles");
