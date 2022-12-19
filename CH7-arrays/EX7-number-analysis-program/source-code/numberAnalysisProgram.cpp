#include <iostream>
using namespace std;

int main()
{
    int SIZE = 20;
    int numbers[SIZE];
    int index;
    int total;
    int lowest;
    int highest;
    float average;

    for (index = 0; index <= (SIZE - 1); index++)
    {
        cout << "Enter a number " << index + 1 << " : ";
        cin >> numbers[index];
        total = total + numbers[index];
    }

    lowest = numbers[0];
    for (index = 1; index <= (SIZE - 1); index++)
    {
        if (numbers[index] < lowest)
        {
            lowest = numbers[index];
        }
    }

    highest = numbers[0];
    for (index = 1; index <= (SIZE - 1); index++)
    {
        if (numbers[index] > highest)
        {
            highest = numbers[index];
        }
    }

    average = total / SIZE;

    cout << "The lowest number in the array : " << lowest << endl;
    cout << "The highest number in the array : " << highest << endl;
    cout << "The total of the numbers in the array : " << total << endl;
    cout << "The average of the numbers in the array : " << average << endl;
}