const prompt = require("prompt-sync")();

var profit;
var totalSales;

totalSales = Number(prompt("Enter a total Sales : $"));

profit = totalSales * 0.23;

console.log(`Profit : $${profit}`);
