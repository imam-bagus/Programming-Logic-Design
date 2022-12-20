#include <iostream>
using namespace std;

void getFatCarbohydrates(int &fat, int &carbohydrates)
{
  cout << "Enter a fat :";
  cin >> fat;
  cout << "Enter a carbohydrates :";
  cin >> carbohydrates;
}
void processCaloriesFat(int &fat, int &caloriesFat)
{
  caloriesFat = fat * 9;
}

void processCaloriesCarbohydrates(int &carbohydrates, int &caloriesCarbohydrates)
{
  caloriesCarbohydrates = carbohydrates * 4;
}

void printCalories(int &caloriesFat, int &caloriesCarbohydrates)
{
  cout << "Calories From Fat :" << caloriesFat << endl;
  cout << "Calories From Carbohydrates :" << caloriesCarbohydrates << endl;
}

int main()
{
  int fat;
  int carbohydrates;
  int caloriesFat;
  int caloriesCarbohydrates;

  getFatCarbohydrates(fat, carbohydrates);
  processCaloriesFat(fat, caloriesFat);
  processCaloriesCarbohydrates(carbohydrates, caloriesCarbohydrates);
  printCalories(caloriesFat, caloriesCarbohydrates);
}