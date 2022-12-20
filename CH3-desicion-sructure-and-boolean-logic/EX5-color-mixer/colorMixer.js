const input = require("prompt-sync")();

let colorRed = "red";
let colorBlue = "blue";
let colorYellow = "yellow";
let inputColor1;
let inputColor2;
let secondaryColor;
let flag1;
let flag2;

inputColor1 = input("Enter a color 1 : ");
inputColor2 = input("Enter a color 2 : ");

if (
  inputColor1 == colorRed ||
  inputColor1 == colorBlue ||
  inputColor1 == colorYellow
) {
  flag1 = true;
} else {
  flag1 = false;
}

if (
  inputColor2 == colorRed ||
  inputColor2 == colorBlue ||
  inputColor2 == colorYellow
) {
  flag2 = true;
} else {
  flag2 = false;
}

if (flag1 && flag2) {
  if (inputColor1 != inputColor2) {
    if (
      (inputColor1 == colorRed && inputColor2 == colorBlue) ||
      (inputColor1 == colorBlue && inputColor2 == colorRed)
    ) {
      secondaryColor = "Purple";
    } else {
      if (
        (inputColor1 == colorBlue && inputColor2 == colorYellow) ||
        (inputColor1 == colorYellow && inputColor2 == colorBlue)
      ) {
        secondaryColor = "Green";
      } else {
        if (
          (inputColor1 == colorRed && inputColor2 == colorYellow) ||
          (inputColor1 == colorYellow && inputColor2 == colorRed)
        ) {
          secondaryColor = "Orange";
        }
      }
    }
    console.log("Secondary Color :" + secondaryColor);
  } else {
    console.log("Please enter a different color !!");
  }
} else {
  console.log("Please enter a red, blue, or yellow !!");
}
