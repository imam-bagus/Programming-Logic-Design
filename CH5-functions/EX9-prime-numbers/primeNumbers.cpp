#include <iostream>
using namespace std;

bool isPrime(int number)
{
    int counter;
    int flag;
    bool result;

    flag = 0;
    for (counter = 1; counter <= number; counter++)
    {
        if (number % counter == 0)
        {
            flag++;
        }

        if (flag == 2)
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }

    return result;
}

int main()
{
    int number;
    bool isPrimeNumber;

    cout << "Enter a number : ";
    cin >> number;

    isPrimeNumber = isPrime(number);

    if (isPrimeNumber)
    {
        cout << number << " is a Prime number" << endl;
    }
    else
    {
        cout << number << " is not a Prime number" << endl;
    }
}