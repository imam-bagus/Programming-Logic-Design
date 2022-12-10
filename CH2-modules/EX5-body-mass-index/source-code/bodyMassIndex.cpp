#include <iostream>
#include <iomanip>
using namespace std;

void getWeightHeight(float &weight, float &height)
{

  cout << "Enter a weight (lb) : ";
  cin >> weight;

  cout << "Enter a height (inches) : ";
  cin >> height;
}

void processBMI(float &weight, float &height, float &BMI)
{
  BMI = (weight * 703) / (height * height);
}

void printBMI(float &BMI)
{
  cout << fixed << setprecision(1);

  cout << "BMI : " << BMI << endl;
}

int main()
{
  float weight;
  float height;
  float BMI;

  getWeightHeight(weight, height);
  processBMI(weight, height, BMI);
  printBMI(BMI);
}