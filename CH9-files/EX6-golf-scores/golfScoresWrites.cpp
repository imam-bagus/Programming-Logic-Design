#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
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
