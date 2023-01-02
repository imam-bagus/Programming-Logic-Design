#include <iostream>
using namespace std;

class Pet
{
private:
    string name;
    string type;
    int age;

public:
    void setName(string petName)
    {
        name = petName;
    }
    void setType(string petType)
    {
        type = petType;
    }
    void setAge(int petAge)
    {
        age = petAge;
    }

    string getName()
    {
        return name;
    }
    string getType()
    {
        return type;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Pet petData;
    string name;
    string type;
    int age;

    cout << "Enter a pet name : ";
    cin >> name;

    cout << "Enter a pet type : ";
    cin >> type;

    cout << "Enter a pet age : ";
    cin >> age;

    petData.setName(name);
    petData.setType(type);
    petData.setAge(age);

    cout << "Pet Name :" << petData.getName() << endl;
    cout << "Pet Type :" << petData.getType() << endl;
    cout << "Pet Age :" << petData.getAge() << endl;
}