#include <iostream>
using namespace std;

int main()
{
    int size = 12;
    string months[size] = {"January",
                           "February",
                           "March",
                           "April",
                           "May",
                           "June",
                           "July",
                           "August",
                           "September",
                           "October",
                           "November",
                           "December"};

    int numberOfDays[size] = {31,
                              28,
                              31,
                              30,
                              31,
                              30,
                              31,
                              31,
                              30,
                              31,
                              30,
                              31};
    int index;

    for (index = 0; index <= (size - 1); index++)
    {
        cout << months[index] << " has " << numberOfDays[index] << " days" << endl;
    }
}