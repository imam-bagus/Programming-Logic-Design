#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number1;
    int number2;
    int answer;
    int userAnswer;

    srand((unsigned int)time(NULL));
    number1 = rand() % 1000 + 1;
    number2 = rand() % 1000 + 1;

    cout << number1 << " + " << number2 << " = ";
    cin >> userAnswer;

    answer = number1 + number2;

    if (answer == userAnswer)
    {
        cout << "Congratulations your answer is correct !!";
    }
    else
    {
        cout << "your answer is incorrect !! , correct answer is : " << answer;
    }
}