const input = require("prompt-sync")();

let mass;
let weight;

weight = mass * 9.8;

if (weight > 1000) {
  console.log("It is too Heavy");
}

if (weight < 10) {
  console.log("It is too light");
}
