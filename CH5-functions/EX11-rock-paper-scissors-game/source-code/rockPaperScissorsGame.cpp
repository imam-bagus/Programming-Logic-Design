#include <iostream>
using namespace std;

const string rock = "rock";
const string paper = "paper";
const string scissors = "scissors";

string determineWinner(string computerChoise, string userChoise)
{
    string result;

    if (computerChoise == userChoise)
    {
        result = "same";
    }
    else
    {
        if (computerChoise == rock && userChoise == scissors)
        {
            result = "computer win";
        }
        else
        {
            if (userChoise == rock && computerChoise == scissors)
            {
                result = "You win";
            }
            else
            {
                if (computerChoise == scissors && userChoise == paper)
                {
                    result = "computer win";
                }
                else
                {
                    if (userChoise == scissors && computerChoise == paper)
                    {
                        result = "You win";
                    }
                    else
                    {
                        if (computerChoise == paper && userChoise == rock)
                        {
                            result = "computer win";
                        }
                        else
                        {
                            if (userChoise == paper && computerChoise == rock)
                            {
                                result = "You win";
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}

string rockPaperScissors(int number)
{
    string result;

    if (number == 1)
    {
        result = rock;
    }
    else
    {
        if (number == 2)
        {
            result = paper;
        }
        else
        {
            result = scissors;
        }
    }
    return result;
}
int main()
{
    int computerNumber;
    string winner;
    string computerChoise;
    string userChoise;

    do
    {
        computerNumber = rand() % 3 + 1;
        computerChoise = rockPaperScissors(computerNumber);

        cout << "Choise 'rock', 'paper' or 'scissors' : ";
        cin >> userChoise;

        winner = determineWinner(computerChoise, userChoise);

        if (winner == "same")
        {
            cout << "computer & you have same choise, game will played again !!" << endl;
        }

    } while (winner == "same");

    cout << "Computer Choise : " << computerChoise << endl;
    cout << "your Choise : " << userChoise << endl;
    cout << winner << " !!!" << endl;
}