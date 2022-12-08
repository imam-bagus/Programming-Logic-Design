const prompt = require("prompt-sync")();

male = Number.parseFloat(prompt("Enter number of males : "));
female = Number.parseFloat(prompt("Enter number of males : "));

totalStudent = male + female;
percentageMale = (male / totalStudent) * 100;
percentageFemale = (female / totalStudent) * 100;

console.log(
  "Percentage Males student   : " + Number.parseInt(percentageMale) + "%"
);
console.log(
  "Percentage Females student : " + Number.parseInt(percentageFemale) + "%"
);
