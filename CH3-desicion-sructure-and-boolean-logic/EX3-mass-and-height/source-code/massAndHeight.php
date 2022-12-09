<?php
$mass;
$weight;

$mass = readline("Enter a object's mass");

$weight = $mass * 9.8;

if (weight > 1000) {
 echo "It is too Heavy";
}

if (weight < 10) {
 echo "It is too light";
}
