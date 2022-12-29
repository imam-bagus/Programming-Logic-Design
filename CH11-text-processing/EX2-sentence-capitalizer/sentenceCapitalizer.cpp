#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    string strResult;
    int index;
    int strSize;

    cout << "Enter a string : ";
    getline(cin, str);

    strSize = str.length() - 1;

    for (index = 0; index <= strSize; index++)
    {
        if (index == 0)
        {
            strResult = strResult + (char)toupper(str[index]);
        }
        else
        {
            if (str[index] == '.')
            {
                strResult = strResult + '.';
                strResult = strResult + ' ';
                strResult = strResult + (char)toupper(str[index + 2]);
                index += 2;
            }
            else
            {
                strResult = strResult + str[index];
            }
        }
    }

    cout << strResult;
}