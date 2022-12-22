#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string number;
    int total;
    fstream numberList;

    numberList.open("numbers.dat");
    while (getline(numberList, number, ','))
    {
        total += stoi(number);
    }

    cout << "Total : " << total << endl;
    numberList.close();
}