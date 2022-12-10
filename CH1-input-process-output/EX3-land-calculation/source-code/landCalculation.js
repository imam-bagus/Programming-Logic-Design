const prompt = require("prompt-sync")();

var squareFeet;
var acre;

// Input
squareFeet = Number(prompt("Enter a Square Feet :"));

// Process
acre = squareFeet / 43560;

// Output
console.log("Acre :" + acre);
