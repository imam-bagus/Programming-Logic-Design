#include <iostream>
using namespace std;

int main()
{
    float male;
    float female;
    float totalStudent;
    float percentageMale;
    float percentageFemale;

    cout << "Enter number of males : ";
    cin >> male;
    cout << "Enter number of females : ";
    cin >> female;

    totalStudent = male + female;
    percentageMale = male / totalStudent * 100;
    percentageFemale = female / totalStudent * 100;

    cout << "Percentages of male student   : " << percentageMale << "%" << endl;
    cout << "Percentages of female student : " << percentageFemale << "%" << endl;

    return 0;
}