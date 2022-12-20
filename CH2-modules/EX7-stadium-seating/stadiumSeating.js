const input = require("prompt-sync")();

function getTicketSold(ticketClassA, ticketClassB, ticketClassC) {
  ticketClassA.value = input("How many tickets class A were sold :");
  ticketClassB.value = input("How many tickets class B were sold :");
  ticketClassC.value = input("How many tickets class C were sold :");
}
function processSales(ticketClassA, ticketClassB, ticketClassC, amountIncome) {
  amountIncome.value = ticketClassA.value * 15;
  amountIncome.value = amountIncome.value + ticketClassB.value * 12;
  amountIncome.value = amountIncome.value + ticketClassC.value * 9;
}
function printAmountIncome(amountIncome) {
  console.log(
    "amount income generated from ticket sales : $" + amountIncome.value
  );
}
function main() {
  let ticketClassA = {
    value: 0,
  };
  let ticketClassB = {
    value: 0,
  };
  let ticketClassC = {
    value: 0,
  };
  let amountIncome = {
    value: 0,
  };

  getTicketSold(ticketClassA, ticketClassB, ticketClassC);
  processSales(ticketClassA, ticketClassB, ticketClassC, amountIncome);
  printAmountIncome(amountIncome);
}

main();
