<?php
$sugar  = 1.5;
$butter = 1;
$flour  = 2.75;

// Input
$cookie = readline("How many cookies :");

// Process
$totalSugar  = $sugar * $cookie;
$totalButter = $butter * $cookie;
$totalFlour  = $flour * $cookie;

// Output
echo "Cookie      : " . $cookie . "\n";
echo "Need sugar  : " . $totalSugar . " Cups \n";
echo "Need butter : " . $totalButter . " Cups \n";
echo "need flour  : " . $totalFlour . " Cups \n";
