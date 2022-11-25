const prompt = require("prompt-sync")();

var stateTax = 0.04,
  countryTax = 0.02,
  totalStateTax,
  purchase,
  totalSalesTax,
  totalSale;

purchase = Number(prompt("Amount Purchase : $"));

totalStateTax = purchase * stateTax;
totalCountryTax = purchase * countryTax;
totalSalesTax = totalStateTax + totalCountryTax;
totalSale = purchase + totalSalesTax;

console.log("Purchase          : $" + purchase);
console.log("State Sales Tax   : $" + totalStateTax);
console.log("Country Sales Tax : $" + totalCountryTax);
console.log("Total Sales Tax   : $" + totalSalesTax);
console.log("Total Sale        : $" + totalSale);
