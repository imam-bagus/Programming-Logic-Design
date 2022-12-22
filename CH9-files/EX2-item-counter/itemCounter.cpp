#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int numberNames = 0;
    fstream listNames;

    listNames.open("names.dat");

    while (getline(listNames, name, ','))
    {
        numberNames++;
    }

    cout << "the number of names stored :" << numberNames << endl;

    listNames.close();
}