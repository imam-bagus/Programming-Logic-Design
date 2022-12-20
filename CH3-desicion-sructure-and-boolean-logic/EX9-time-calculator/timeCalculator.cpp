#include <iostream>
using namespace std;

int main()
{
    int second;
    int result;

    cout << "Enter a second :";
    cin >> second;

    if (second < 60)
    {
        result = second;
        cout << result << " Second" << endl;
    }
    else
    {
        if (second >= 60 && second < 3600)
        {
            result = second / 60;
            cout << result << " Minute" << endl;
        }
        else
        {
            if (second >= 3600 && second < 86400)
            {
                result = second / 3600;
                cout << result << " Hour" << endl;
            }
            else
            {
                result = second / 86400;
                cout << result << " Day" << endl;
            }
        }
    }
}