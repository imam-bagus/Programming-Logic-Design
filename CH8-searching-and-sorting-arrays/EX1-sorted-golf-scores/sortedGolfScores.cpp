#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int golfScore[size];
    int index;
    int index2;
    int tempSwap;

    for (index2 = 0; index2 <= (size - 1); index2++)
    {
        cout << index2 + 1 << ". Enter a golf score : ";
        cin >> golfScore[index2];
    }

    for (index = size - 1; index >= 1; index--)
    {
        for (index2 = 0; index2 <= (index - 1); index2++)
        {
            if (golfScore[index2] > golfScore[index2 + 1])
            {
                tempSwap = golfScore[index2];
                golfScore[index2] = golfScore[index2 + 1];
                golfScore[index2 + 1] = tempSwap;
            }
        }
    }

    for (index2 = 0; index2 <= size - 1; index2++)
    {
        cout << index2 + 1 << ". golf score : " << golfScore[index2] << endl;
    }
}