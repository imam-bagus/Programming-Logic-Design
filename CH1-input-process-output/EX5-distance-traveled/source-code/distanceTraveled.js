const prompt = require("prompt-sync")();

var distance;
var time;
var speed = 60;

// Input
time = Number(prompt("Enter a time : "));

// Process
distance = speed * time;

// Output
console.log(
  "Distance the car travel in " + time + " hours is : " + distance + "miles"
);
