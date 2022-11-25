const prompt = require("prompt-sync")();

var distance;
var speed = 60;
var time;

time = Number(prompt("Enter a time : "));

distance = speed * time;

console.log(
  "Distance the car travel in " + time + " hours is : " + distance + "miles"
);
