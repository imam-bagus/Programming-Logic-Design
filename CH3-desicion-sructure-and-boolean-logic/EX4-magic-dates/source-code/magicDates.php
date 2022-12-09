<?php

$month;
$day;
$year;
$result;

$month = readline("Enter a month :");
$day   = readline("Enter a day   :");
$year  = readline("Enter a year  :");

$result = $month * $day;

if($result == $year){
  echo "the date is magic";
}else{
  echo "the date is not magic";
}
