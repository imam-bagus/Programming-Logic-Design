const prompt = require("prompt-sync")();

function inputTotalSale(totalSale) {
  totalSale.value = Number(prompt("Total Sale: $"));
}

function processTax(totalSale, totalStateTax, totalCountryTax, totalSalesTax) {
  let stateTax = 0.04;
  let countryTax = 0.02;
  totalStateTax.value = totalSale.value * stateTax;
  totalCountryTax.value = totalSale.value * countryTax;
  totalSalesTax.value = totalStateTax.value + totalCountryTax.value;
}

function printTax(totalStateTax, totalCountryTax, totalSalesTax) {
  console.log("State Sales Tax   : $" + totalStateTax.value);
  console.log("Country Sales Tax : $" + totalCountryTax.value);
  console.log("Total Sales Tax   : $" + totalSalesTax.value);
}

function main() {
  let totalStateTax = {
    value: 0,
  };
  let totalCountryTax = {
    value: 0,
  };
  let totalSalesTax = {
    value: 0,
  };
  let totalSale = {
    value: 0,
  };

  inputTotalSale(totalSale);
  processTax(totalSale, totalStateTax, totalCountryTax, totalSalesTax);
  printTax(totalStateTax, totalCountryTax, totalSalesTax);
}

// entry point
main();
