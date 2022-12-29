#include <iostream>
#include <fstream>
using namespace std;

string encrypt(char character)
{
    string result;

    switch (character)
    {
    case ' ':
        result = "_";
        break;
    case 'A':
        result = "Z";
        break;
    case 'B':
        result = "Y";
        break;
    case 'C':
        result = "X";
        break;
    case 'D':
        result = "W";
        break;
    case 'E':
        result = "V";
        break;
    case 'F':
        result = "U";
        break;
    case 'G':
        result = "T";
        break;
    case 'H':
        result = "S";
        break;
    case 'I':
        result = "R";
        break;
    case 'J':
        result = "Q";
        break;
    case 'K':
        result = "P";
        break;
    case 'L':
        result = "O";
        break;
    case 'M':
        result = "N";
        break;
    case 'N':
        result = "M";
        break;
    case 'O':
        result = "L";
        break;
    case 'P':
        result = "K";
        break;
    case 'Q':
        result = "J";
        break;
    case 'R':
        result = "I";
        break;
    case 'S':
        result = "H";
        break;
    case 'T':
        result = "G";
        break;
    case 'U':
        result = "F";
        break;
    case 'V':
        result = "E";
        break;
    case 'W':
        result = "D";
        break;
    case 'X':
        result = "C";
        break;
    case 'Y':
        result = "B";
        break;
    case 'Z':
        result = "A";
        break;
    }

    return result;
}

int main()
{
    fstream document;
    fstream documentEncrypt;
    string text;
    int index;
    int size;

    document.open("original-file.dat");
    documentEncrypt.open("encrypt-file.dat");

    cout << "Enter text :";
    getline(cin, text);

    size = text.length() - 1;

    for (index = 0; index <= size; index++)
    {
        document << text[index];
        documentEncrypt << encrypt(text[index]);
    }

    document.close();
    documentEncrypt.close();
}