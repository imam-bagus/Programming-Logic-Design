<?php
function inputReplacementCost(&$replacementCost)
{
 $replacementCost = readline("Enter a replacement cost : $");
}

function calculateInsurance(&$totalInsurance, &$replacementCost, &$minimumInsurance)
{
 $totalInsurance = ($replacementCost * $minimumInsurance) + $replacementCost;
}

function printTotalInsurance(&$totalInsurance)
{
 echo "Minimum amount insurance : $" . $totalInsurance;
}

function main()
{
 $replacementCost;
 $minimumInsurance = 0.8;
 $totalInsurance;

 inputReplacementCost($replacementCost);
 calculateInsurance($totalInsurance, $replacementCost, $minimumInsurance);
 printTotalInsurance($totalInsurance);
}

// Entry Point
main();
