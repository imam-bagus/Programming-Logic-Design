const prompt = require("prompt-sync")();

var item1;
var item2;
var item3;
var item4;
var item5;
var subTotal;
var salesTax;
var total;
var tax = 0.06;

item1 = Number(prompt("Enter a Price Item 1 : $"));
item2 = Number(prompt("Enter a Price Item 2 : $"));
item3 = Number(prompt("Enter a Price Item 3 : $"));
item4 = Number(prompt("Enter a Price Item 4 : $"));
item5 = Number(prompt("Enter a Price Item 5 : $"));

subTotal = item1 + item2 + item3 + item4 + item5;
salesTax = subTotal * tax;
total = subTotal + salesTax;

console.log(`Sub Total : $${subTotal}`);
console.log(`Sales Tax : $${salesTax}`);
console.log(`Total     : $${total}`);
