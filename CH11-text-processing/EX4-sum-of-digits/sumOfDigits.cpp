#include <iostream>
using namespace std;

int main()
{
    string str;
    int sum;
    int index;
    int size;

    cout << "Enter a digits : ";
    cin >> str;

    size = str.length() - 1;
    for (index = 0; index <= size; index++)
    {
        sum += stoi(string(1, str[index]));
    }
    cout << "Sum of digits in a string : " << sum << endl;
}