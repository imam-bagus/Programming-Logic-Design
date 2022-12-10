const prompt = require("prompt-sync")();

var total,
  charge,
  tip = 0.15,
  totalTip,
  salesTax = 0.07,
  totalSalesTax;

// Input
charge = Number(prompt("Charge Food : $"));

// Process
totalTip = charge * tip;
totalTip = parseInt(totalTip);
totalSalesTax = charge * salesTax;
totalSalesTax = parseInt(totalSalesTax);
total = charge + totalTip + totalSalesTax;

// Output
console.log("Charge    : $" + charge);
console.log("Tip       : $" + totalTip);
console.log("Sales Tax : $" + totalSalesTax);
console.log("Total     : $" + total);
