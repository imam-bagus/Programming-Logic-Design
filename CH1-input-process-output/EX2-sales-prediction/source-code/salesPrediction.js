const prompt = require("prompt-sync")();

var profit;
var totalSales;

// Input
totalSales = Number(prompt("Enter a total Sales : $"));

// Process
profit = totalSales * 0.23;

// Output
console.log(`Profit : $${profit}`);
