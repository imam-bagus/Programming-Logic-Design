const input = require("prompt-sync")();

function getFatCarbohydrates(fat, carbohydrates) {
  fat.value = input("Enter a fat :");
  carbohydrates.value = input("Enter a carbohydrates :");
}

function processCaloriesFat(fat, caloriesFat) {
  caloriesFat.value = fat.value * 9;
}

function processCaloriesCarbohydrates(carbohydrates, caloriesCarbohydrates) {
  caloriesCarbohydrates.value = carbohydrates.value * 4;
}

function printCalories(caloriesFat, caloriesCarbohydrates) {
  console.log("Calories From Fat :" + caloriesFat.value);
  console.log("Calories From Carbohydrates :" + caloriesCarbohydrates.value);
}

function main() {
  let fat = {
    value: 0,
  };
  let carbohydrates = {
    value: 0,
  };
  let caloriesFat = {
    value: 0,
  };
  let caloriesCarbohydrates = {
    value: 0,
  };

  getFatCarbohydrates(fat, carbohydrates);
  processCaloriesFat(fat, caloriesFat);
  processCaloriesCarbohydrates(carbohydrates, caloriesCarbohydrates);
  printCalories(caloriesFat, caloriesCarbohydrates);
}

main();
