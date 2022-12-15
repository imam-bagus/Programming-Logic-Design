#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int number;
    int even;
    int odd;
    int counter;
    int maxCounter;

    srand(time(0));

    maxCounter = 100;
    for (counter = 1; counter <= 100; counter++)
    {
        number = rand() % 100 + 1;

        if (number % 2 == 0)
        {
            even += 1;
            cout << "Number " << number << " is even" << endl;
        }
        else
        {
            odd += 1;
            cout << "Number " << number << " is odd" << endl;
        }
    }

    cout << "Even :" << even << endl;
    cout << "Odd :" << odd << endl;
}