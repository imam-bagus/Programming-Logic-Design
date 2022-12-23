#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;
    string temp;
    int score;
    int flag = 1;
    int bestScore;
    string bestPlayer;
    fstream golfFile;

    golfFile.open("golf.dat");

    while (getline(golfFile, name, ','))
    {
        if (flag > 1)
        {
            cout << "-------------" << endl;
        }

        cout << "Player name : " << name << endl;

        getline(golfFile, temp, ',');
        score = stoi(temp);

        cout << "Player score : " << score << endl;

        if (flag == 1)
        {
            bestScore = score;
            bestPlayer = name;
            flag++;
        }
        else
        {
            if (score < bestScore)
            {
                bestScore = score;
                bestPlayer = name;
            }
        }
    }

    cout << "=======================" << endl;
    cout << "Best Player : " << bestPlayer << endl;
    cout << "With Score : " << bestScore << endl;
    golfFile.close();
}
