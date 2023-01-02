#include <iostream>
using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;

public:
    Car(int ym, string m, int s)
    {
        yearModel = ym;
        make = m;
        speed = s;
    }

    void setYearModel(int ym)
    {
        yearModel = ym;
    }

    void setMake(string m)
    {
        make = m;
    }

    void setSpeed(int s)
    {
        speed = s;
    }

    void accelerate()
    {
        speed = speed + 5;
    }

    void brake()
    {
        speed = speed - 5;
    }

    int getYearModel()
    {
        return yearModel;
    }
    string getMake()
    {
        return make;
    }
    int getSpeed()
    {
        return speed;
    }
};

int main()
{
    int yearModel;
    string make;

    cout << "Enter car year model : ";
    cin >> yearModel;

    cout << "Enter car make : ";
    cin >> make;

    Car carSpeed(yearModel, make, 0);

    carSpeed.accelerate();
    carSpeed.accelerate();
    carSpeed.accelerate();
    carSpeed.accelerate();
    carSpeed.accelerate();

    cout << "Car Speed :" << carSpeed.getSpeed() << endl;

    carSpeed.brake();
    carSpeed.brake();
    carSpeed.brake();
    carSpeed.brake();
    carSpeed.brake();

    cout << "Car Speed :" << carSpeed.getSpeed() << endl;
}