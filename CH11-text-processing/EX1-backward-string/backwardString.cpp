#include <iostream>
using namespace std;

int main()
{
    string word;
    string backwardWord;
    int index;
    int strSize;

    cout << "Enter a string : ";
    cin >> word;

    strSize = word.length() - 1;
    index = 0;
    for (strSize; strSize >= index; strSize--)
    {
        backwardWord = backwardWord + word[strSize];
    }

    cout << "Backward string : " << backwardWord << endl;
}