#include <iostream>
using namespace std;

int main()
{
    int selection;

    cout << "1. English" << endl;
    cout << "2. Italia" << endl;
    cout << "3. Spanish" << endl;
    cout << "4. German" << endl;
    cout << "End the program" << endl;

    cout << "Enter your selection.";
    cin >> selection;

    switch (selection)
    {
    case 1:
        cout << "Good morning." << endl;
        break;
    case 2:
        cout << "Buongiorno." << endl;
        break;
    case 3:
        cout << "Buenos dias." << endl;
        break;
    case 4:
        cout << "Guten morgen" << endl;
        break;
    default:
        cout << "Program has stopped" << endl;
        break;
    }
}