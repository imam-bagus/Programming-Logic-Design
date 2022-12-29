#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string sentence;
    int index;
    int size;

    cout << "Enter a sentence : ";
    getline(cin, sentence);

    size = sentence.length();

    for (index = 0; index <= size; index++)
    {
        if (index != 0)
        {
            if (isupper(sentence[index]))
            {
                sentence.insert(index, " ");
                index++;
            }
        }
    }

    cout << "Sentence : " << sentence;
}