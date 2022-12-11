<?php

define("PRICE", 99);

$quantity;
$discount;
$total;
$totalAfterDiscount;

$quantity = readline("Enter number of packages purchased : ");

$total = PRICE * $quantity;

if ($quantity >= 10 & $quantity <= 19) {
 $discount = $total * 0.2;
} else {
 if ($quantity >= 20 & $quantity <= 49) {
  $discount = $total * 0.3;
 } else {
  if ($quantity >= 50 & $quantity <= 99) {
   $discount = $total * 0.4;
  } else {
   if ($quantity >= 100) {
    $discount = $total * 0.5;
   } else {
    $discount = 0;
   }
  }
 }
}

$totalAfterDiscount = $total - $discount;

echo "Total : $" . $total . "\n";
echo "Discount : $" . $discount . "\n";
echo "Total after discount : $" . $totalAfterDiscount . "\n";
