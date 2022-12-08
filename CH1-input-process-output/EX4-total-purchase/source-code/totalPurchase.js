const prompt = require("prompt-sync")();

var item1,
  item2,
  item3,
  item4,
  item5,
  subTotal,
  salesTax,
  total,
  tax = 0.06;

// Input
item1 = Number(prompt("Enter a Price Item 1 : $"));
item2 = Number(prompt("Enter a Price Item 2 : $"));
item3 = Number(prompt("Enter a Price Item 3 : $"));
item4 = Number(prompt("Enter a Price Item 4 : $"));
item5 = Number(prompt("Enter a Price Item 5 : $"));

// Process
subTotal = item1 + item2 + item3 + item4 + item5;
salesTax = subTotal * tax;
total = subTotal + salesTax;

// Output
console.log(`Sub Total : $${subTotal}`);
console.log(`Sales Tax : $${salesTax}`);
console.log(`Total     : $${total}`);
