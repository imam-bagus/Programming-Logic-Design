#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  int day;
  int days;
  float salary;
  float totalPay;

  cout << fixed;
  cout << setprecision(2);

  cout << "Enter a days :";
  cin >> days;

  cout << "_____________________" << endl;
  cout << "|  Day  |   salary  |" << endl;

  for (day = 1; day <= days; day++)
  {
    salary = (float)day / 100;
    totalPay = totalPay + salary;

    cout << "|   " << day << "   |   $" << salary << "   |" << endl;
  }

  cout << "|  TOTAL  |   $" << totalPay << " |" << endl;
}