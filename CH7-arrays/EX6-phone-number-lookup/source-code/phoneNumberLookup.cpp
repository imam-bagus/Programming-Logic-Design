#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int index;
    string names[SIZE] = {"bagus", "iky", "ramadhan", "fajar"};
    string phoneNumbers[SIZE] = {"081111111111", "082222222222", "083000000000", "084444444444"};
    string personName;
    bool sentinel = true;
    bool flag = false;

    cout << "Enter a name : ";
    cin >> personName;

    index = 0;
    while (sentinel == true && index <= (SIZE - 1))
    {
        if (names[index] == personName)
        {
            sentinel = false;
            flag = true;
        }
        else
        {
            index++;
        }
    }

    if (flag)
    {
        cout << "Phone number of " << names[index] << " is : " << phoneNumbers[index] << endl;
    }
    else
    {
        cout << "Person is not found";
    }
}