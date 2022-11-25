const prompt = require("prompt-sync")();

var squareFeet;
var acre;

squareFeet = Number(prompt("Enter a Square Feet :"));

acre = squareFeet / 43560;

console.log("Acre :" + acre);
