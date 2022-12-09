#include <iostream>
using namespace std;

int main()
{
  int month;
  int day;
  int year;
  int result;

  cout << "Enter a month :";
  cin >> month;

  cout << "Enter a day   :";
  cin >> day;

  cout << "Enter a year  :";
  cin >> year;

  result = month * day;

  if (result == year)
  {
    cout << "the date is magic";
  }
  else
  {
    cout << "the date is not magic";
  }
}