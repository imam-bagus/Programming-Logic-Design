<?php
$tax = 0.06;

// Input
$item1 = readline("Enter a Price Item 1 : $");
$item2 = readline("Enter a Price Item 2 : $");
$item3 = readline("Enter a Price Item 3 : $");
$item4 = readline("Enter a Price Item 4 : $");
$item5 = readline("Enter a Price Item 5 : $");

// Process
$subTotal = $item1 + $item2 + $item3 + $item4 + $item5;
$salesTax = $subTotal * $tax;
$total = $subTotal + $salesTax;

// Output
print("subtotal  : " . $subTotal . "\n");
print("sales tax : " . $salesTax . "\n");
print("Total     : " . $total    . "\n");
