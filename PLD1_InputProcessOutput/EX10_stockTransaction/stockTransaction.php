<?php
// input
$commission     = 0.02;
$stock          = 0;
$purchasedStock = 1000;
$purchasePrice  = 32.87;
$boughtCommission;
$totalPurchase;
$soldStock = 1000;
$sellPrice = 33.92;
$soldCommission;
$totalSell;
$total;

// Process
$stock            = $purchasedStock;
$totalPurchase    = $purchasePrice * $stock;
$boughtCommission = $totalPurchase * $commission;
$totalSell        = $sellPrice * $stock;
$soldCommission   = $totalSell * $commission;
$stock            = $purchasedStock - $soldStock;
$total            = $totalSale            = $totalPurchase - $boughtCommission - $soldCommission;

// Output
echo "Total Purchased              : $", $totalPurchase . "\n";
echo "Broker Commission (purchase) : $", $boughtCommission . "\n";
echo "Sold Stock                   : ", $soldStock . "\n";
echo "Broker Commission (sold)     : $", $soldCommission . "\n";
echo "Total Profit or loss         : $", $total . "\n";
