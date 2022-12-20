#include <iostream>
using namespace std;

int main()
{
    int max = 10;
    int arr[max] = {9,
                    6,
                    8,
                    4,
                    3,
                    5,
                    2,
                    1,
                    10,
                    7};

    int temp;
    int index;
    int index2;
    int count = 1;

    for (index2 = 0; index2 <= (max - 2); index2++)
    {
        for (index = 0; index <= (max - 2); index++)
        {
            if (arr[index] > arr[index + 1])
            {
                temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
            }
            count++;
        }
    }
    for (index = 0; index <= 9; index++)
    {
        cout << arr[index] << endl;
    }

    cout << count;
}