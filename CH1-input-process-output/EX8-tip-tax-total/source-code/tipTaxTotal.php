<?php
// Input
$tip      = 0.15;
$salesTax = 0.07;
$charge   = readline("Charge Food : $");

// Process
$totalTip      = $charge * $tip;
$totalSalesTax = $charge * $salesTax;
$total         = $charge + $totalTip + $totalSalesTax;

// Output
echo "Charge    : $" . $charge . "\n";
echo "Tip       : $" . $totalTip . "\n";
echo "Sales Tax : $" . $totalSalesTax . "\n";
echo "Total     : $" . $total . "\n";
