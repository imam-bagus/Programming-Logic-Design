#include <iostream>
using namespace std;

int main()
{
    int SIZE = 20;
    string correctAnswer[SIZE] = {"B", "D", "A", "A", "C", "A", "B", "A", "C", "D", "B", "C", "D", "A", "D", "C", "C", "B", "D", "A"};
    string studentAnswer[SIZE];
    int incorrectlyAnswerFlag[SIZE];
    int index;
    int totalCorrectly = 0;
    int totalIncorrectly = 0;

    for (index = 0; index <= (SIZE - 1); index++)
    {
        cout << "Enter a Student answer number " << index + 1 << ". : ";
        cin >> studentAnswer[index];
    }

    for (index = 0; index <= (SIZE - 1); index++)
    {
        if (studentAnswer[index] == correctAnswer[index])
        {
            totalCorrectly = totalCorrectly + 1;
            incorrectlyAnswerFlag[index] = 0;
        }
        else
        {
            totalIncorrectly++;
            incorrectlyAnswerFlag[index] = index + 1;
        }
    }

    cout << "Total number correctly answered question : " << totalCorrectly << endl;
    cout << "Total number incorrectly answered question : " << totalIncorrectly << endl;

    if (totalIncorrectly == 0)
    {
        cout << "None Incorrectly answered question" << endl;
    }
    else
    {
        cout << "Incorrectly answered question" << endl;

        for (index = 0; index <= (SIZE - 1); index++)
        {
            if (incorrectlyAnswerFlag[index] != 0)
            {
                cout << "Number : " << incorrectlyAnswerFlag[index] << endl;
            }
        }
    }
}