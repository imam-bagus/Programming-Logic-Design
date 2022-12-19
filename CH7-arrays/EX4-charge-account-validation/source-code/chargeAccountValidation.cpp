#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 6;
    int validAccountNumber[ROWS][COLUMNS] = {{5658845, 4520125, 7895122, 8777541, 8451277, 1302850},
                                             {8080152, 4562555, 5552012, 5050552, 7825877, 1250255},
                                             {1005231, 6545231, 3852085, 7576651, 7881200, 4581002}};
    int accountNumber;
    bool sentinel = true;
    bool flag = false;
    int row;
    int column;

    cout << "Enter a charge account number : ";
    cin >> accountNumber;

    row = 0;
    while (sentinel == true && row <= (ROWS - 1))
    {
        column = 0;
        while (sentinel == true && column <= (COLUMNS - 1))
        {
            if (accountNumber == validAccountNumber[row][column])
            {
                sentinel = false;
                flag = true;
            }
            else
            {
                column++;
            }
        }
        row++;
    }

    if (flag == true)
    {
        cout << "Number is valid";
    }
    else
    {
        cout << "Number is invalid !!!";
    }
}
