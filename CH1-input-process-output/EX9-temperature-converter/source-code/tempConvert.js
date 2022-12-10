const prompt = require("prompt-sync")();

var celcius, farenheit;

// input
celcius = Number(prompt("Enter a Temperature(Celcius) :"));

// Process
farenheit = (celcius * 9) / 5 + 32;

// Output
console.log("Temperature is " + farenheit + " farenheit");
