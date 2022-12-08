const input = require("prompt-sync")();

function converts(kilometer) {
  let miles;
  miles = kilometer.value * 0.6214;
  console.log("Distance in miles :" + miles);
}

function main() {
  let miles = {
    value: 0,
  };

  miles.value = Number(input("Enter a Distance in kilometers :"));

  converts(miles);
}

// Entry Point
main();
