const prompt = require("prompt-sync")();

// Input
calories = 300;
cookies = Number(prompt("Enter a cookies ate : "));

// Process
totalCalories = cookies * calories;

// Output
console.log("Total calories consumed :" + totalCalories);
