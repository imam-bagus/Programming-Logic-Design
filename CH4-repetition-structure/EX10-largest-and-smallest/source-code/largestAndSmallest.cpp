#include <iostream>
using namespace std;

int main()
{
    int numbers;
    int largest = 0;
    int smallest = 0;
    int flag = 1;

    do
    {
        if (flag == 1)
        {
            largest = numbers;
        }
        else
        {
            if (flag == 2)
            {
                smallest = numbers;
            }
            else
            {
                if (numbers > largest)
                {
                    largest = numbers;
                }

                if (numbers < smallest)
                {
                    smallest = numbers;
                }
            }
        }
        flag = flag + 1;
    } while (numbers != -99);
}