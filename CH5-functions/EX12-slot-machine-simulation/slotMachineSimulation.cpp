#include <iostream>
using namespace std;

const string cherries = "Cherries";
const string oranges = "Oranges";
const string plums = "Plums";
const string bells = "Bells";
const string melons = "Melons";
const string bars = "Bars";

string getWord(int number)
{
    string result;

    switch (number)
    {
    case 1:
        result = cherries;
        break;
    case 2:
        result = oranges;
        break;
    case 3:
        result = plums;
        break;
    case 4:
        result = bells;
        break;
    case 5:
        result = melons;
        break;
    case 6:
        result = bars;
        break;
    }

    return result;
}

int main()
{
    int userMoney = 0;
    int totalUserMoney = 0;
    int totalWon = 0;
    int totalAmountWon = 0;
    int sameWord = 0;
    string word1;
    string word2;
    string word3;
    string playAgain;

    do
    {
        cout << "Enter Money : $";
        cin >> userMoney;

        word1 = getWord(rand() % 6 + 1);
        word2 = getWord(rand() % 6 + 1);
        word3 = getWord(rand() % 6 + 1);

        if (word1 == word2)
        {
            sameWord++;
        }

        if (word2 == word3)
        {
            sameWord++;
        }

        if (word3 == word1)
        {
            sameWord++;
        }

        totalUserMoney = totalUserMoney + userMoney;
        totalWon = userMoney * sameWord;
        totalAmountWon += totalWon;

        cout << word1 << " | " << word2 << " | " << word3 << endl;
        cout << "You won : $" << totalWon << endl;

        cout << " Enter 'Y' To Play again or 'N' for print : ";
        cin >> playAgain;

        sameWord = 0;
    } while (playAgain == "Y");

    cout << "total amount money entered : $" << totalUserMoney << endl;
    cout << "total amount won : $" << totalAmountWon << endl;
}