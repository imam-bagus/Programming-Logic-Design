#include <iostream>
using namespace std;

void getTicketSold(int &ticketClassA, int &ticketClassB, int &ticketClassC)
{
  cout << "How many tickets class A were sold :";
  cin >> ticketClassA;
  cout << "How many tickets class B were sold :";
  cin >> ticketClassB;
  cout << "How many tickets class C were sold :";
  cin >> ticketClassC;
}

void processSales(int &ticketClassA, int &ticketClassB, int &ticketClassC, float &amountIncome)
{
  amountIncome = ticketClassA * 15;
  amountIncome = amountIncome + ticketClassB * 12;
  amountIncome = amountIncome + ticketClassC * 9;
}

void printAmountIncome(float &amountIncome)
{
  cout << "amount income generated from ticket sales : $" << amountIncome << endl;
}

int main()
{
  int ticketClassA;
  int ticketClassB;
  int ticketClassC;
  float amountIncome;

  getTicketSold(ticketClassA, ticketClassB, ticketClassC);
  processSales(ticketClassA, ticketClassB, ticketClassC, amountIncome);
  printAmountIncome(amountIncome);
}