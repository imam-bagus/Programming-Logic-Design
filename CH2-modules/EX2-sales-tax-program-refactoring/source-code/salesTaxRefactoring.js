const input = require("prompt-sync")();

function getPurchase(purchase) {
  purchase.value = Number(input("Amount Purchase : $"));
}

function calculateTotalStateTax(purchase, totalStateTax) {
  const stateTax = 0.04;
  totalStateTax.value = purchase.value * stateTax;
}

function calculateTotalCountryTax(purchase, totalCountryTax) {
  const countryTax = 0.02;
  totalCountryTax.value = purchase.value * countryTax;
}

function calculateSalesTax(totalSalesTax, totalStateTax, totalCountryTax) {
  totalSalesTax.value = totalStateTax.value + totalCountryTax.value;
}

function calculateTotalSale(totalSale, purchase, totalSalesTax) {
  totalSale.value = purchase.value + totalSalesTax.value;
}

function printAll(
  purchase,
  totalStateTax,
  totalCountryTax,
  totalSalesTax,
  totalSale
) {
  console.log("Purchase          : $" + purchase.value);
  console.log("State Sales Tax   : $" + totalStateTax.value);
  console.log("Country Sales Tax : $" + totalCountryTax.value);
  console.log("Total Sales Tax   : $" + totalSalesTax.value);
  console.log("Total Sale        : $" + totalSale.value);
}

function main() {
  let totalStateTax = { value: 0 };
  let totalCountryTax = { value: 0 };
  let purchase = { value: 0 };
  let totalSalesTax = { value: 0 };
  let totalSale = { value: 0 };

  getPurchase(purchase);
  calculateTotalStateTax(purchase, totalStateTax);
  calculateTotalCountryTax(purchase, totalCountryTax);
  calculateSalesTax(totalSalesTax, totalStateTax, totalCountryTax);
  calculateTotalSale(totalSale, purchase, totalSalesTax);
  printAll(purchase, totalStateTax, totalCountryTax, totalSalesTax, totalSale);
}

// entry point
main();
