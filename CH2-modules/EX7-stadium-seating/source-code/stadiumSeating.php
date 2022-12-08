<?php

function getTicketSold(&$ticketClassA, &$ticketClassB, &$ticketClassC)
{
 $ticketClassA = readline("How many tickets class A were sold :");
 $ticketClassB = readline("How many tickets class B were sold :");
 $ticketClassC = readline("How many tickets class C were sold :");
}

function processSales(&$ticketClassA, &$ticketClassB, &$ticketClassC, &$amountIncome)
{
 $amountIncome = $ticketClassA * 15;
 $amountIncome = $amountIncome + $ticketClassB * 12;
 $amountIncome = $amountIncome + $ticketClassC * 9;

}

function printAmountIncome(&$amountIncome)
{
 echo "amount income generated from ticket sales : $" . $amountIncome;
}

function main()
{
 $ticketClassA;
 $ticketClassB;
 $ticketClassC;
 $amountIncome;

 getTicketSold($ticketClassA, $ticketClassB, $ticketClassC);
 processSales($ticketClassA, $ticketClassB, $ticketClassC, $amountIncome);
 printAmountIncome($amountIncome);
}

main();
