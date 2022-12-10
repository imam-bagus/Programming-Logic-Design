const input = require("prompt-sync")();

function inputReplacementCost(replacementCost) {
  replacementCost.value = Number(input("Enter a replacement cost : $"));
}
function calculateInsurance(totalInsurance, replacementCost, minimumInsurance) {
  totalInsurance.value =
    replacementCost.value * minimumInsurance.value + replacementCost.value;
}
function printTotalInsurance(totalInsurance) {
  console.log("Minimum amount insurance : $" + totalInsurance.value);
}

function main() {
  let replacementCost = {
    value: 0,
  };
  let minimumInsurance = {
    value: 0.8,
  };
  let totalInsurance = {
    value: 0,
  };

  inputReplacementCost(replacementCost);
  calculateInsurance(totalInsurance, replacementCost, minimumInsurance);
  printTotalInsurance(totalInsurance);
}

// entry point
main();
