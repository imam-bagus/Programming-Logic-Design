const input = require("prompt-sync")();

let bookPurchased;
let point;

bookPurchased = input("Number of books purchased :");

if (bookPurchased < 1) {
  point = 0;
} else {
  if (bookPurchased == 1) {
    point = 5;
  } else {
    if (bookPurchased == 2) {
      point = 15;
    } else {
      if (bookPurchased == 3) {
        point = 30;
      } else {
        point = 60;
      }
    }
  }
}

console.log("points awarded : " + point);
