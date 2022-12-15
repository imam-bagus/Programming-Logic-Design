#include <iostream>
#include <cmath>
using namespace std;

const double g = 9.8;

double fallingDistance(double t)
{
    double result;

    result = (0.5) * g * pow(t, 2);

    return result;
}

int main()
{
    double distance;
    double t;
    int counter;
    int maxCounter;

    maxCounter = 10;
    for (counter = 1; counter <= maxCounter; counter++)
    {
        t = counter;

        distance = fallingDistance(t);

        cout << t << " seconds = " << distance << " m" << endl;
    }
}