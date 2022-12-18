#include <iostream>
using namespace std;

int main()
{
    float fatGrams;
    float calories;
    float percentageCalories;

    cout << "Enter a fat grams : ";
    cin >> fatGrams;

    while (fatGrams < 0)
    {
        cout << "ERROR : Fat grams cannot under 0" << endl;
        cout << "Enter a fat grams : ";
        cin >> fatGrams;
    }

    cout << "Enter a calories : ";
    cin >> calories;

    while (calories < 0)
    {
        cout << "ERROR : calories cannot under 0" << endl;
        cout << "Enter a calories : ";
        cin >> calories;
    }

    while (calories > fatGrams * 9)
    {
        cout << "ERROR : Calories cannot exceed fat grams x 9" << endl;
        cout << "Enter a calories : ";
        cin >> calories;
    }

    percentageCalories = (fatGrams * 9) / calories;

    if (percentageCalories < 0.3)
    {

        cout << "Percentage calories : " << percentageCalories << endl;
        cout << "Food is low in fat.";
    }
    else
    {
        cout << "Percentage calories : " << percentageCalories << endl;
    }
}