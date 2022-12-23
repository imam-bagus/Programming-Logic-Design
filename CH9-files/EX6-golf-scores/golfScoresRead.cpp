#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string result;
    fstream golfFile;

    golfFile.open("golf.dat");

    while (getline(golfFile, result, ','))
    {
        cout << "Player name : " << result << endl;
        getline(golfFile, result, ',');
        cout << "Player score : " << result << endl;
        cout << "=======================" << endl;
    }

    golfFile.close();
}
