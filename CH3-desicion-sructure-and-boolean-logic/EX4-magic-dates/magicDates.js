const input = require("prompt-sync")();

let month;
let day;
let year;
let result;

month = input("Enter a month :");
day = input("Enter a day   :");
year = input("Enter a year  :");

result = month * year;

if (result == year) {
  console.log("the date is magic");
} else {
  console.log("the date is not magic");
}
