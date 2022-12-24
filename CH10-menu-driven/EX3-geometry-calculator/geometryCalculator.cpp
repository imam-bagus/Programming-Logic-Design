#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    int selection;
    double area;

    double radius;

    double width;
    double length;

    double base;
    double height;

    cout << "\t \t Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;

    cout << "Enter your choise ";
    cin >> selection;

    switch (selection)
    {
    case 1:
        cout << "Enter a radius circle :";
        cin >> radius;
        area = PI * (radius * 2);
        cout << "Circle area : " << area << endl;
        break;
    case 2:
        cout << "Enter a length :";
        cin >> length;
        cout << "Enter a width :";
        cin >> width;
        area = length * width;
        cout << "Rectangle area : " << area << endl;
        break;
    case 3:
        cout << "Enter a base :";
        cin >> base;
        cout << "Enter a height :";
        cin >> height;
        area = base * height * 0.05;
        cout << "Triangle area : " << area << endl;
        break;
    case 4:
        cout << "QUIT !!!" << endl;
        break;
    }
}