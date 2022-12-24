#include <iostream>
#include <fstream>
using namespace std;

void addRecord()
{
    fstream phoneBookRecord;
    string name;
    string phoneNumber;
    string sentinel = "N";

    phoneBookRecord.open("phone-book.dat", ios::app);

    cout << "Add a new record" << endl;
    cout << "============" << endl;

    do
    {
        cout << "Enter a name : ";
        cin >> name;
        phoneBookRecord << name << ",";

        cout << "Enter a phone number : ";
        cin >> phoneNumber;
        phoneBookRecord << phoneNumber << ",";

        cout << "Do you want add record again ? 'Y' or 'N'";
        cin >> sentinel;
    } while (sentinel == "Y");

    phoneBookRecord.close();
}

void searchRecord()
{
    fstream phoneBookRecord;
    fstream phoneBookRecordModify;
    string name;
    string phoneNumber;
    string searchName;
    string sentinel;
    bool sentinelSearch = false;

    cout << "Search for a name" << endl;
    cout << "====================" << endl;

    do
    {
        phoneBookRecord.open("phone-book.dat");

        cout << "Enter name search : ";
        cin >> searchName;

        while (sentinelSearch == false && getline(phoneBookRecord, name, ','))
        {

            getline(phoneBookRecord, phoneNumber, ',');

            if (name == searchName)
            {
                sentinelSearch = true;
            }
        }

        if (sentinelSearch == true)
        {
            cout << "Name searched : " << name << endl;
            cout << "Phone number : " << phoneNumber << endl;
        }
        else
        {
            cout << "Name is not found !!!" << endl;
        }

        sentinelSearch = false;
        phoneBookRecord.close();

        cout << "Do you want search again ? 'Y' or 'N'";
        cin >> sentinel;
    } while (sentinel == "Y");
}

void modifyRecord()
{
    fstream phoneBookRecord;
    fstream tempFile;
    fstream readTempFile;
    fstream newPhoneBookRecord;
    string name;
    string phoneNumber;
    string searchName;
    string newPhoneNumber;
    string sentinel;
    bool flag = false;

    cout << "Modify a phone number " << endl;
    cout << "======================" << endl;

    do
    {
        phoneBookRecord.open("phone-book.dat");
        tempFile.open("temp.dat");

        cout << "Enter name you want modify : ";
        cin >> searchName;

        cout << "Enter new phone number : ";
        cin >> newPhoneNumber;

        while (getline(phoneBookRecord, name, ','))
        {
            getline(phoneBookRecord, phoneNumber, ',');

            if (name == searchName)
            {
                tempFile << name << ",";
                tempFile << newPhoneNumber << ",";
                flag = true;
            }
            else
            {
                tempFile << name << ",";
                tempFile << phoneNumber << ",";
            }
        }

        if (flag == true)
        {
            cout << "Phone number has been updated !!!" << endl;
        }
        else
        {
            cout << "Name is not found !!!" << endl;
        }

        flag = false;

        phoneBookRecord.close();
        tempFile.close();

        newPhoneBookRecord.open("phone-book.dat");
        readTempFile.open("temp.dat");

        while (getline(readTempFile, name, ','))
        {
            getline(readTempFile, phoneNumber, ',');

            newPhoneBookRecord << name << ",";
            newPhoneBookRecord << phoneNumber << ",";
        }

        newPhoneBookRecord.close();
        readTempFile.close();

        cout << "Do you want modify again ? 'Y' or 'N'";
        cin >> sentinel;

    } while (sentinel == "Y");
}

int main()
{
    int selection;

    do
    {
        cout << "\t Phone Book " << endl;
        cout << "1. Add a new record" << endl;
        cout << "2. Search for a name" << endl;
        cout << "3. Modify a phone number." << endl;
        cout << "4. Delete a record" << endl;
        cout << "5. Exit the program." << endl;

        cout << "Enter your selection : ";
        cin >> selection;

        switch (selection)
        {
        case 1:
            addRecord();
            break;
        case 2:
            searchRecord();
            break;
        case 3:
            modifyRecord();
            break;
        default:
            selection = 5;
            break;
        }

    } while (selection >= 1 && selection <= 4);

    cout << "Exit !!!";
}