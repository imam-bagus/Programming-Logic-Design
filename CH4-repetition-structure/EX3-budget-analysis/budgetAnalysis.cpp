#include <iostream>
using namespace std;

int main()
{

  float budgeted;
  float totalExpenses;
  float expenses;
  float amount;

  cout << "Enter a budgeted for a month : $";
  cin >> budgeted;

  do
  {
    cout << "Enter a expenses (or 0 for stop) : $";
    cin >> expenses;

    totalExpenses = totalExpenses + expenses;

  } while (expenses != 0);

  amount = budgeted - totalExpenses;

  if (budgeted == totalExpenses)
  {
    cout << "Expenses & budget are same" << endl;
  }
  else
  {
    if (budgeted < totalExpenses)
    {
      cout << "Total : $" << amount << " (Expenses over budget)" << endl;
    }
    else
    {
      cout << "Total : $" << amount << " (Expenses under budget)" << endl;
    }
  }
}