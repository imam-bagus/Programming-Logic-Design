#include <iostream>
using namespace std;

int main()
{
  float mass;
  float weight;

  cout << "Enter a object's mass";
  cin >> mass;

  weight = mass * 9.8;

  if (weight > 1000)
  {
    cout << "It is too Heavy";
  }

  if (weight < 10)
  {
    cout << "It is too light";
  }
}