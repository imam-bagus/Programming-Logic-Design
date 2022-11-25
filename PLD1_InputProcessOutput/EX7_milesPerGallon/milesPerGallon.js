const prompt = require("prompt-sync")();

var MPG, milesDriven, gallons;

milesDriven = Number(prompt("Miles Driven :"));
gallons = Number(prompt("Gallons Gas  :"));

MPG = milesDriven / gallons;

console.log("Miles-per-Gallon :" + parseInt(MPG));
