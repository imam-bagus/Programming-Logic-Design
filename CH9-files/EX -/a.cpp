#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    string namePrint;

    ofstream friendData("myFriends.dat");

    while (name != "STOP")
    {
        cout << "Enter a name friends :";
        cin >> name;

        if (name != "STOP")
        {
            friendData << name + ',';
        }
    }

    friendData.close();

    ifstream data("myFriends.dat");

    while (getline(data, namePrint, ','))
    {
        cout << namePrint << endl;
    }
    data.close();

    fstream changeFriends;
    changeFriends.open("myFriends.dat", ios::app);
    name = "";
    while (name != "STOP")
    {
        cout << "Enter a name friends :";
        cin >> name;

        if (name != "STOP")
        {
            changeFriends << name + ',';
        }
    }
    changeFriends.close();
}