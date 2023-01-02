#include <iostream>
using namespace std;

class PersonalData
{
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    PersonalData(string nameData, string addressData, int ageData, string phoneNumberData)
    {
        name = nameData;
        address = addressData;
        age = ageData;
        phoneNumber = phoneNumberData;
    }

    void setName(string nameData)
    {
        name = nameData;
    }

    void setAddress(string addressData)
    {
        address = addressData;
    }

    void setAge(int ageData)
    {
        age = ageData;
    }

    void setPhoneNumber(string phoneNumberData)
    {
        phoneNumber = phoneNumberData;
    }

    string getName()
    {
        return name;
    }

    string getAddress()
    {
        return address;
    }
    int getAge()
    {
        return age;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    string name;
    string address;
    int age;
    string phoneNumber;

    cout << "Enter a name : ";
    cin >> name;
    cout << "Enter a address : ";
    cin >> address;
    cout << "Enter a age : ";
    cin >> age;
    cout << "Enter a phone number : ";
    cin >> phoneNumber;

    PersonalData imamData(name, address, age, phoneNumber);

    cout << "Enter a name : ";
    cin >> name;
    cout << "Enter a address : ";
    cin >> address;
    cout << "Enter a age : ";
    cin >> age;
    cout << "Enter a phone number : ";
    cin >> phoneNumber;

    PersonalData ikiData(name, address, age, phoneNumber);

    cout << "Enter a name : ";
    cin >> name;
    cout << "Enter a address : ";
    cin >> address;
    cout << "Enter a age : ";
    cin >> age;
    cout << "Enter a phone number : ";
    cin >> phoneNumber;

    PersonalData yosepData(name, address, age, phoneNumber);
}