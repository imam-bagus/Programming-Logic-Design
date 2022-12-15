#include <iostream>
using namespace std;

int calAverage(int totalScore)
{
	int average;

	average = totalScore / 5;

	return average;
}

string determineGrade(int score)
{
	string grade;

	if (score >= 90)
	{
		grade = "A";
	}
	else
	{
		if (score >= 80)
		{
			grade = "B";
		}
		else
		{
			if (score >= 70)
			{
				grade = "C";
			}
			else
			{
				if (score >= 60)
				{
					grade = "D";
				}
				else
				{
					grade = "F";
				}
			}
		}
	}

	return grade;
}

int main()
{
	int score;
	int totalScore;
	string grade;
	int average;
	int counter;
	int maxCounter;

	maxCounter = 5;
	for (counter = 1; counter <= maxCounter; counter++)
	{
		cout << "Enter a score " << counter << " : ";
		cin >> score;

		totalScore += score;
		grade = determineGrade(score);

		cout << "Score " << score << " : grade " << grade << endl;
	}

	average = calAverage(totalScore);

	cout << "Average : " << average << endl;
}