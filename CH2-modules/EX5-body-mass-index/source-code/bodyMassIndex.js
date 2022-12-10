const input = require("prompt-sync")();

function getWeightHeight(weight, height) {
  weight.value = input("Enter a weight (lb)     :");
  height.value = input("Enter a height (Inches) :");
}

function processBMI(weight, height, BMI) {
  BMI.value = (weight.value * 703) / (height.value * height.value);
}

function printBMI(BMI) {
  console.log("BMI :" + BMI.value.toFixed(1));
}

function main() {
  let weight = {
    value: 0,
  };
  let height = {
    value: 0,
  };
  let BMI = {
    value: 0,
  };

  getWeightHeight(weight, height);
  processBMI(weight, height, BMI);
  printBMI(BMI);
}

main();
