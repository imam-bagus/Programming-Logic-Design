#include <iostream>
using namespace std;

int main()
{
    int distance;
    int speed = 60;
    int time;

    // Input
    cout << "Enter a time : ";
    cin >> time;

    // Process
    distance = speed * time;

    // Output
    cout << "Distance the car travel in " << time << " hours is : " << distance << " Miles";

    return 0;
}