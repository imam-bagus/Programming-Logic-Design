#include <iostream>
using namespace std;

int main()
{
  string colorRed = "red";
  string colorBlue = "blue";
  string colorYellow = "yellow";
  string inputColor1;
  string inputColor2;
  string secondaryColor;
  bool flag1;
  bool flag2;

  cout << "Enter a color 1 : ";
  cin >> inputColor1;
  cout << "Enter a color 2 : ";
  cin >> inputColor2;

  if (inputColor1 == colorRed || inputColor1 == colorBlue || inputColor1 == colorYellow)
  {
    flag1 = true;
  }
  else
  {
    flag1 = false;
  }

  if (inputColor2 == colorRed || inputColor2 == colorBlue || inputColor2 == colorYellow)
  {
    flag2 = true;
  }
  else
  {
    flag2 = false;
  }

  if (flag1 && flag2)
  {
    if (inputColor1 != inputColor2)
    {
      if (inputColor1 == colorRed && inputColor2 == colorBlue || inputColor1 == colorBlue && inputColor2 == colorRed)
      {
        secondaryColor = "Purple";
      }
      else
      {
        if (inputColor1 == colorBlue && inputColor2 == colorYellow || inputColor1 == colorYellow && inputColor2 == colorBlue)
        {
          secondaryColor = "Green";
        }
        else
        {
          if (inputColor1 == colorRed && inputColor2 == colorYellow || inputColor1 == colorYellow && inputColor2 == colorRed)
          {
            secondaryColor = "Orange";
          }
        }
      }
      cout << "Secondary Color : " << secondaryColor << endl;
    }
    else
    {
      cout << "Please enter a different color !!";
    }
  }
  else
  {
    cout << "Please enter a red, blue, or yellow !!";
  }
}