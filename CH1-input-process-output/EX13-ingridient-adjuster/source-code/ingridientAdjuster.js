const input = require("prompt-sync")();

var cookie,
  sugar = 1.5,
  butter = 1,
  flour = 2.75,
  totalSugar,
  totalButter,
  totalFlour;

// Input
cookie = input("How many cookies :");

// Process
totalSugar = sugar * cookie;
totalButter = butter * cookie;
totalFlour = flour * cookie;

// Output
console.log("Cookie      :" + cookie);
console.log("Need sugar  :" + totalSugar + " Cups");
console.log("Need butter :" + totalButter + " Cups");
console.log("Need flour  :" + totalFlour + " Cups");
