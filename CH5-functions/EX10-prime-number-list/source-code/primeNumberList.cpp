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
    }
    if (flag == 2)
    {
        result = true;
    }
    else
    {
        result = false;
    }

    return result;
}

int main()
{
    int number;
    bool isPrimeNumber;

    cout << "Prime number" << endl;

    for (number = 1; number <= 100; number++)
    {

        isPrimeNumber = isPrime(number);

        if (isPrimeNumber)
        {
            cout << number << endl;
        }
    }
}