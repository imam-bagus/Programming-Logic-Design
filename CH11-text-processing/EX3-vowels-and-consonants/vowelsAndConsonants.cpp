#include <iostream>
using namespace std;

int main()
{
    string str;
    int vowels = 0;
    int consonants = 0;
    int index;
    int strSize;

    cout << "Enter a string : ";
    cin >> str;

    strSize = str.length() - 1;
    for (index = 0; index <= strSize; index++)
    {
        str[index] = (char)toupper(str[index]);
        if (str[index] == 'A' || str[index] == 'I' || str[index] == 'U' || str[index] == 'E' || str[index] == 'O')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Number of Vowels : " << vowels << endl;
    cout << "Number of consonants : " << consonants << endl;
}