#include <iostream>
using namespace std;

int main()
{
  double tuition = 6000;
  int year;
  double totalFiveYear;
  double temp;

  for (year = 1; year <= 5; year++)
  {
    temp = tuition * 0.02;
    totalFiveYear = totalFiveYear + tuition + temp;
  }

  cout << "total tuition for next 5 years : $" << totalFiveYear << endl;
}