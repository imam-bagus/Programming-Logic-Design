<?php
function getPurchase(&$purchase)
{
 $purchase = readline("Amount Purchase : $");
}

function calculateTotalStateTax(&$purchase, &$totalStateTax)
{
 $stateTax      = 0.04;
 $totalStateTax = $purchase * $stateTax;
}

function calculateTotalCountryTax(&$purchase, &$totalCountryTax)
{
 $countryTax      = 0.02;
 $totalCountryTax = $purchase * $countryTax;
}

function calculateSalesTax(&$totalSalesTax, &$totalStateTax, &$totalCountryTax)
{
 $totalSalesTax = $totalStateTax + $totalCountryTax;
}

function calculateTotalSale(&$totalSale, &$purchase, &$totalSalesTax)
{
 $totalSale = $purchase + $totalSalesTax;
}

function printAll(&$purchase, &$totalStateTax, &$totalCountryTax, &$totalSalesTax, &$totalSale)
{
 echo "Purchase          : $" . $purchase . "\n";
 echo "State Sales Tax   : $" . $totalStateTax . "\n";
 echo "Country Sales Tax : $" . $totalCountryTax . "\n";
 echo "Total Sales Tax   : $" . $totalSalesTax . "\n";
 echo "Total Sale        : $" . $totalSale . "\n";
}

function main()
{
 $totalStateTax;
 $totalCountryTax;
 $purchase;
 $totalSalesTax;
 $totalSale;

 getPurchase($purchase);
 calculateTotalStateTax($purchase, $totalStateTax);
 calculateTotalCountryTax($purchase, $totalCountryTax);
 calculateSalesTax($totalSalesTax, $totalStateTax, $totalCountryTax);
 calculateTotalSale($totalSale, $purchase, $totalSalesTax);
 printAll($purchase, $totalStateTax, $totalCountryTax, $totalSalesTax, $totalSale);
}

// entry point
main();
