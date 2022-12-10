const input = require("prompt-sync")();

let areaRectangle1, areaRectangle2, length1, length2, width1, width2;

console.log("Enter Length & Width rectangle 1");
length1 = Number(input("Length :"));
width1 = Number(input("Width :"));

console.log("Enter Length & Width rectangle 2");
length2 = Number(input("Length :"));
width2 = Number(input("Width :"));

areaRectangle1 = length1 * width1;
areaRectangle2 = length2 * width2;

if (areaRectangle1 == areaRectangle2) {
  console.log("Rectangle 1 and Rectangle 2 areas are the same");
} else {
  if (areaRectangle1 > areaRectangle2) {
    console.log("Rectangle 1 has greater area than Rectangle 2");
  } else {
    console.log("Rectangle 2 has greater area than Rectangle 1");
  }
}
