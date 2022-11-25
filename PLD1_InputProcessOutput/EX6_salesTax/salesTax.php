<?php
$stateTax = 0.04;
$countryTax = 0.02;

$purchase = readline("Amount Purchase : $");

$totalStateTax = $purchase * $stateTax;
$totalCountryTax = $purchase * $countryTax;
$totalSalesTax = $totalStateTax + $totalCountryTax;
$totalSale = $purchase + $totalSalesTax;

echo "Purchase          : $" . $purchase . "\n";
echo "State Sales Tax   : $" . $totalStateTax . "\n";
echo "Country Sales Tax : $" . $totalCountryTax . "\n";
echo "Total Sales Tax   : $" . $totalSalesTax . "\n";
echo "Total Sale        : $" . $totalSale . "\n";
