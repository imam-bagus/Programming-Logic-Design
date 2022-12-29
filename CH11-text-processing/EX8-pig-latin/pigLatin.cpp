#include <iostream>
using namespace std;

int main()
{
    int index;
    int size;
    int min = 0;
    string text;
    string textResult;
    string temp;
    string temp2;

    cout << "Enter a Sentence : ";
    getline(cin, text);

    size = text.length() - 1;

    for (index = 0; index <= size; index++)
    {

        if (text[index] == ' ' || index == size)
        {
            if (index != size)
            {
                temp = text.substr(min, index - min);
            }
            else
            {
                temp = text.substr(min, index);
            }

            temp2 = temp[0];
            temp.erase(0, 1);
            temp.append(temp2);
            temp.append("AY");

            if (index != size)
            {
                temp.append(" ");
            }

            textResult.append(temp);

            min = index + 1;
        }
    }

    cout << "Result :" << textResult << endl;
}