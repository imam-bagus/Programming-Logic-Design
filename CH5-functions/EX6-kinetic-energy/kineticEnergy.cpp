#include <iostream>
#include <cmath>
using namespace std;

double kineticEnergy(double m, double v)
{
    double result;

    result = (0.5) * m * pow(v, 2);

    return result;
}

int main()
{
    double KE;
    double m;
    double v;

    cout << "Enter mass (kg) : ";
    cin >> m;
    cout << "Enter velocity (m/s) : ";
    cin >> v;

    KE = kineticEnergy(m, v);

    cout << "Object's kinetic energy : " << KE << endl;
}
