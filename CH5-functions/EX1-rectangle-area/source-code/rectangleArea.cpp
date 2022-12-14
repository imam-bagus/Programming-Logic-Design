#include <iostream>
using namespace std;

float calculateArea(float width, float length)
{
    float result;

    result = width * length;

    return result;
}

int main()
{
    float width;
    float length;
    float area;

    cout << "Enter a width : ";
    cin >> width;
    cout << "Enter a length : ";
    cin >> length;

    area = calculateArea(width, length);

    cout << "Rectangle's area : " << area << endl;
}