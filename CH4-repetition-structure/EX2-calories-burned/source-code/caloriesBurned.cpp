#include <iostream>
using namespace std;

int main()
{
  float calories = 3.9;
  double totalCalories;
  int minutes;
  int maxMinutes = 30;

  for (minutes = 1; minutes <= maxMinutes; minutes++)
  {
    totalCalories = calories * minutes;

    switch (minutes)
    {
    case 10:
      cout << "Calories Burned after " << minutes << " minutes : " << totalCalories << endl;
      break;
    case 15:
      cout << "Calories Burned after " << minutes << " minutes : " << totalCalories << endl;
      break;
    case 20:
      cout << "Calories Burned after " << minutes << " minutes : " << totalCalories << endl;
      break;
    case 25:
      cout << "Calories Burned after " << minutes << " minutes : " << totalCalories << endl;
      break;
    case 30:
      cout << "Calories Burned after " << minutes << " minutes : " << totalCalories << endl;
      break;
    }
  }
}
