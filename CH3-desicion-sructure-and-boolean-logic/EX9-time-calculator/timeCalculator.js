const input = require("prompt-sync")();

let second;
let result;

second = input("Enter a second :");

if (second < 60) {
  result = second;
  console.log(result + " Second");
} else {
  if (second >= 60 && second < 3600) {
    result = second / 60;
    console.log(result + " Minute");
  } else {
    if (second >= 3600 && second < 86400) {
      result = second / 3600;
      console.log(result + " Hour");
    } else {
      result = second / 86400;
      console.log(result + " Day");
    }
  }
}
