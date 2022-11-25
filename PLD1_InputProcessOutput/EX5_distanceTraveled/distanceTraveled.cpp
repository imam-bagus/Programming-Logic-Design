#include <iostream>
using namespace std;

int main()
{
    int distance;
    int speed = 60;
    int time;

    cout << "Enter a time : ";
    cin >> time;

    distance = speed * time;

    cout << "Distance the car travel in " << time << " hours is : " << distance << " Miles";

    return 0;
}