const prompt = require("prompt-sync")();

var MPG, milesDriven, gallons;

// Input
milesDriven = Number(prompt("Miles Driven :"));
gallons = Number(prompt("Gallons Gas  :"));

// Process
MPG = milesDriven / gallons;

// Output
console.log("Miles-per-Gallon :" + parseInt(MPG));
