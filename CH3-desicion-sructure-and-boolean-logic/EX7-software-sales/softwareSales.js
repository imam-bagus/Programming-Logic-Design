const input = require("prompt-sync")();

const PRICE = 99;

let quantity;
let discount;
let total;
let totalAfterDiscount;

quantity = input("Enter number of packages purchased : ");

total = PRICE * quantity;

if ((quantity >= 10) & (quantity <= 19)) {
  discount = total * 0.2;
} else {
  if ((quantity >= 20) & (quantity <= 49)) {
    discount = total * 0.3;
  } else {
    if ((quantity >= 50) & (quantity <= 99)) {
      discount = total * 0.4;
    } else {
      if (quantity >= 100) {
        discount = 0.5;
      } else {
        discount = 0;
      }
    }
  }
}

totalAfterDiscount = total - discount;

console.log("Total : $" + total);
console.log("Discount : $" + discount);
console.log("Total after discount : $" + totalAfterDiscount);
