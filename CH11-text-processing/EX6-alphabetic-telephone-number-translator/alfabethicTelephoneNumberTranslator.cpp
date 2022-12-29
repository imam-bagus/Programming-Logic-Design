#include <iostream>
#include <string>
using namespace std;

int main()
{
    string telpNum;
    string result;
    int strLength;
    int index;

    cout << "Enter a telephone Number : ";
    cin >> telpNum;

    strLength = telpNum.length() - 1;

    result = telpNum.substr(0, 4);

    for (index = 4; index <= strLength; index++)
    {
        if (index == 7)
        {
            result = result + "-";
        }
        else
        {
            if (telpNum[index] == 'A' || telpNum[index] == 'B' || telpNum[index] == 'C')
            {
                result = result + "2";
            }
            else
            {
                if (telpNum[index] == 'D' || telpNum[index] == 'E' || telpNum[index] == 'F')
                {
                    result = result + "3";
                }
                else
                {
                    if (telpNum[index] == 'G' || telpNum[index] == 'H' || telpNum[index] == 'I')
                    {
                        result = result + "4";
                    }
                    else
                    {
                        if (telpNum[index] == 'J' || telpNum[index] == 'K' || telpNum[index] == 'L')
                        {
                            result = result + "5";
                        }
                        else
                        {
                            if (telpNum[index] == 'M' || telpNum[index] == 'N' || telpNum[index] == 'O')
                            {
                                result = result + "6";
                            }
                            else
                            {
                                if (telpNum[index] == 'P' || telpNum[index] == 'Q' || telpNum[index] == 'R' || telpNum[index] == 'S')
                                {
                                    result = result + "7";
                                }
                                else
                                {
                                    if (telpNum[index] == 'T' || telpNum[index] == 'U' || telpNum[index] == 'V')
                                    {
                                        result = result + "8";
                                    }
                                    else
                                    {
                                        if (telpNum[index] == 'W' || telpNum[index] == 'X' || telpNum[index] == 'Y' || telpNum[index] == 'Z')
                                        {
                                            result = result + "9";
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "Telephone Number : " << result;
}
