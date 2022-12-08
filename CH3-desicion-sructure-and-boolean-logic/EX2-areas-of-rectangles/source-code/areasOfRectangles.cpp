#include <iostream>
using namespace std;

int main()
{
    double areaRectangle1;
    double areaRectangle2;
    double length1;
    double length2;
    double width1;
    double width2;

    cout << "Enter Length & Width rectangle 1" << endl;
    cout << "Length :";
    cin >> length1;
    cout << "Width :";
    cin >> width1;

    cout << "Enter Length & Width rectangle 2" << endl;
    cout << "Length :";
    cin >> length2;
    cout << "Width :";
    cin >> width2;

    areaRectangle1 = length1 * width1;
    areaRectangle2 = length2 * width2;

    if (areaRectangle1 == areaRectangle2)
    {
        cout << "Rectangle 1 and Rectangle 2 areas are the same" << endl;
    }
    else
    {
        if (areaRectangle1 > areaRectangle2)
        {
            cout << "Rectangle 1 has greater area than Rectangle 2" << endl;
        }
        else
            cout << "Rectangle 2 has greater area than Rectangle 1" << endl;
        {
        }
    }
}