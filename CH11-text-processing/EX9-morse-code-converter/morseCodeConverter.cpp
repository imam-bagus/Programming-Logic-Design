#include <iostream>
using namespace std;

string converted(char character)
{
    string result;

    switch (character)
    {
    case ' ':
        result = " ";
        break;
    case ',':
        result = "--..--";
        break;
    case '.':
        result = ".-.-.-";
        break;
    case '?':
        result = "..--..";
        break;
    case '0':
        result = "-----";
        break;
    case '1':
        result = ".----";
        break;
    case '2':
        result = "..---";
        break;
    case '3':
        result = "...--";
        break;
    case '4':
        result = "....-";
        break;
    case '5':
        result = ".....";
        break;
    case '6':
        result = "-....";
        break;
    case '7':
        result = "--...";
        break;
    case '8':
        result = "---..";
        break;
    case '9':
        result = "----.";
        break;
    case 'A':
        result = ".-";
        break;
    case 'B':
        result = "-...";
        break;
    case 'C':
        result = "-.-.";
        break;
    case 'D':
        result = "-..";
        break;
    case 'E':
        result = ".";
        break;
    case 'F':
        result = "..-.";
        break;
    case 'G':
        result = "--.";
        break;
    case 'H':
        result = ".…";
        break;
    case 'I':
        result = "..";
        break;
    case 'J':
        result = ".---";
        break;
    case 'K':
        result = "-.-";
        break;
    case 'L':
        result = ".-..";
        break;
    case 'M':
        result = "--";
        break;
    case 'N':
        result = "-.";
        break;
    case 'O':
        result = "---";
        break;
    case 'P':
        result = ".---.";
        break;
    case 'Q':
        result = "--.-";
        break;
    case 'R':
        result = ".-.";
        break;
    case 'S':
        result = "...";
        break;
    case 'T':
        result = "-";
        break;
    case 'U':
        result = "..-";
        break;
    case 'V':
        result = "...-";
        break;
    case 'W':
        result = ".--";
        break;
    case 'X':
        result = "-..-";
        break;
    case 'Y':
        result = "-.--";
        break;
    case 'Z':
        result = "--..";
        break;
    }

    return result;
}

int main()
{
    string inputString;
    string convertedString;
    int index;
    int size;

    cout << "Enter string : ";
    getline(cin, inputString);

    size = inputString.length() - 1;

    for (index = 0; index <= size; index++)
    {
        convertedString.append(converted(inputString[index]));

        if (index != size)
        {
            convertedString.append(" ");
        }
    }

    cout << "Morse code : " << convertedString << endl;
}