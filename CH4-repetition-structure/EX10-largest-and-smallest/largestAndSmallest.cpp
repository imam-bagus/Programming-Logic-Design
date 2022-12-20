#include <iostream>
using namespace std;

int main()
{
    int numbers;
    int largest;
    int smallest;
    int flag = 1;

    cout << "Enter a number :";
    cin >> numbers;

    while (numbers != -99)
    {
        if (flag == 1)
        {
            largest = numbers;
            smallest = numbers;
        }

        if (numbers > largest)
        {
            largest = numbers;
        }
        else
        {
            if (numbers < smallest)
            {
                smallest = numbers;
            }
        }

        cout << "Enter a number :";
        cin >> numbers;

        flag = flag + 1;
    }

    cout << "Largest number :" << largest << endl;
    cout << "Smallest number :" << smallest << endl;
}