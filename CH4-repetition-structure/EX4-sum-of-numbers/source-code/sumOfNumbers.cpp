#include <iostream>
using namespace std;

int main()
{
  int numbers;
  int sum;

  while (numbers >= 0)
  {
    cout << "Enter a number :";
    cin >> numbers;

    if (numbers > 0)
    {
      sum = sum + numbers;
    }
  }
  cout << sum << endl;
}
