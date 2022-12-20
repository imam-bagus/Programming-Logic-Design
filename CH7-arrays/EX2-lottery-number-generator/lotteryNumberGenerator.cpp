#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int lotteryDigit[SIZE];
    int index;

    for (index = 0; index <= SIZE; index++)
    {
        lotteryDigit[index] = rand() % 9;
    }

    for (index = 0; index <= SIZE; index++)
    {
        cout << lotteryDigit[index];
    }
}