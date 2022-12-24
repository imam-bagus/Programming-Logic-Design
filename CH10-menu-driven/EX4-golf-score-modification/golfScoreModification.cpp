#include <iostream>
#include <fstream>
using namespace std;

void addRecord()
{
    string name;
    int score;
    string sentinelVal = "Y";

    ofstream golfFile("golf.dat");

    while (sentinelVal == "Y")
    {
        cout << "Enter a player name : ";
        cin >> name;

        cout << "Enter a player Score : ";
        cin >> score;
        cout << "=====================" << endl;

        golfFile << name << "," << score << ",";

        cout << "Enter 'Y' for input again or 'N' for stop ?";
        cin >> (sentinelVal);
    }

    cout << "File has been saved on 'golf.dat'";

    golfFile.close();
}

void printRecord()
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

int main()
{
    int selection;
    cout << "\t \t Springfork Amateur Golf Club" << endl;
    cout << "1. add record" << endl;
    cout << "2. print record" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your selection";
    cin >> selection;

    switch (selection)
    {
    case 1:
        addRecord();
        break;
    case 2:
        printRecord();
        break;
    default:
        cout << "Exit !!!";
    }
}