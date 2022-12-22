#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int index = 0;
    string number;
    int largest;

    fstream listNumbers;
    listNumbers.open("numbers.dat");

    getline(listNumbers, number, ',');
    largest = stoi(number);

    while (getline(listNumbers, number, ','))
    {
        if (stoi(number) > largest)
        {
            largest = stoi(number);
        }
    }

    cout << "Largest : " << largest;

    listNumbers.close();
}