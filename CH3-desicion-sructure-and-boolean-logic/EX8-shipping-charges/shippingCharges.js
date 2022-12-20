const input = require("prompt-sync")();

let weightPackage;
let shippingCharges;

weightPackage = input("Enter a weight of package :");

if (weightPackage <= 2) {
  shippingCharges = 1.1;
} else {
  if (weightPackage > 2 && weightPackage <= 6) {
    shippingCharges = 2.2;
  } else {
    if (weightPackage > 6 && weightPackage <= 10) {
      shippingCharges = 3.7;
    } else {
      shippingCharges = 3.8;
    }
  }
}

console.log("Shipping charges : $" + shippingCharges);
