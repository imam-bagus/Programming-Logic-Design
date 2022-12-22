#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string number;
    fstream listNumbers;
    listNumbers.open("numbers.dat");

    while (getline(listNumbers, number, ','))
    {
        cout << number << endl;
    }

    listNumbers.close();
}