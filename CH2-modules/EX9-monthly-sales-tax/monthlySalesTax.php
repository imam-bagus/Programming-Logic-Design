<?php
function inputTotalSale(&$totalSale)
{
 $totalSale = readline("Amount Purchase : $");
}

function processTax(&$totalSale, &$totalStateTax, &$totalCountryTax, &$totalSalesTax)
{
 $stateTax        = 0.04;
 $countryTax      = 0.02;
 $totalStateTax   = $totalSale * $stateTax;
 $totalCountryTax = $totalSale * $countryTax;
 $totalSalesTax   = $totalStateTax + $totalCountryTax;
}

function printTax(&$totalStateTax, &$totalCountryTax, &$totalSalesTax)
{
 echo "State Sales Tax   : $" . $totalStateTax . "\n";
 echo "Country Sales Tax : $" . $totalCountryTax . "\n";
 echo "Total Sales Tax   : $" . $totalSalesTax . "\n";
}

function main()
{
 $totalStateTax   = 0;
 $totalCountryTax = 0;
 $totalSale       = 0;
 $totalSalesTax   = 0;

 inputTotalSale($totalSale);
 processTax($totalSale, $totalStateTax, $totalCountryTax, $totalSalesTax);
 printTax($totalStateTax, $totalCountryTax, $totalSalesTax);
}

// entry point
main();
