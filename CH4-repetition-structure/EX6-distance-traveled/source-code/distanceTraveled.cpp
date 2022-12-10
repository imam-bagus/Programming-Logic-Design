#include <iostream>
using namespace std;

int main()
{
  int speed;
  int hoursTraveled;
  int distance;
  int time;

  cout << "What is the speed of the vehicle in mph? ";
  cin >> speed;
  cout << "How many hours has it traveled? ";
  cin >> hoursTraveled;

  cout << "Hour     Distance Travelled" << endl;
  cout << "---------------------------" << endl;

  for (time = 1; time <= hoursTraveled; time++)
  {
    distance = speed * time;

    cout << " " << time << "              " << distance << endl;
  }
}