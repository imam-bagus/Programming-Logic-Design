#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string number;
    int total;
    int totalList = 0;
    float average;
    fstream numberList;

    numberList.open("numbers.dat");
    while (getline(numberList, number, ','))
    {
        total += stoi(number);
        totalList++;
    }

    average = total / totalList;

    cout << "Average : " << average << endl;
    numberList.close();
}