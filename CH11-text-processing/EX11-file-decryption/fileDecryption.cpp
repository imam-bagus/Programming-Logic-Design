#include <iostream>
#include <fstream>
using namespace std;

string decrypt(char character)
{
    string result;

    switch (character)
    {
    case '_':
        result = " ";
        break;
    case 'Z':
        result = "A";
        break;
    case 'Y':
        result = "B";
        break;
    case 'X':
        result = "C";
        break;
    case 'W':
        result = "D";
        break;
    case 'V':
        result = "E";
        break;
    case 'U':
        result = "F";
        break;
    case 'T':
        result = "G";
        break;
    case 'S':
        result = "H";
        break;
    case 'R':
        result = "I";
        break;
    case 'Q':
        result = "J";
        break;
    case 'P':
        result = "K";
        break;
    case 'O':
        result = "L";
        break;
    case 'N':
        result = "M";
        break;
    case 'M':
        result = "N";
        break;
    case 'L':
        result = "O";
        break;
    case 'K':
        result = "P";
        break;
    case 'J':
        result = "Q";
        break;
    case 'I':
        result = "R";
        break;
    case 'H':
        result = "S";
        break;
    case 'G':
        result = "T";
        break;
    case 'F':
        result = "U";
        break;
    case 'E':
        result = "V";
        break;
    case 'D':
        result = "W";
        break;
    case 'C':
        result = "X";
        break;
    case 'B':
        result = "Y";
        break;
    case 'A':
        result = "Z";
        break;
    }

    return result;
}

int main()
{
    fstream documentEncrypt;
    fstream documentDecrypt;
    string decryptText;
    string encryptText;
    int index;
    int size;

    documentEncrypt.open("encrypt-file.dat");
    documentDecrypt.open("decrypt-file.dat");

    getline(documentEncrypt, encryptText);

    size = encryptText.length() - 1;

    for (index = 0; index <= size; index++)
    {
        decryptText = decryptText + decrypt(encryptText[index]);
    }

    documentDecrypt << decryptText;

    documentEncrypt.close();
    documentDecrypt.close();
}