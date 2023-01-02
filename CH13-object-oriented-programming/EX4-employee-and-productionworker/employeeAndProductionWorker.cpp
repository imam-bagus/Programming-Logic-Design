#include <iostream>
using namespace std;

class employee
{
private:
    string empName;
    string empNum;

public:
    employee(string name, string num)
    {
        empName = name;
        empNum = num;
    }

    void setEmpName(string name)
    {
        empName = name;
    }

    void setEmpNum(string num)
    {
        empNum = num;
    }

    string getEmpName()
    {
        return empName;
    }

    string getEmpNum()
    {
        return empNum;
    }
};

class ProductionWorker : public employee
{
private:
    int shiftNum;
    float hourlyPayRate;

public:
    ProductionWorker(string name, string num, int shift, float payRate) : employee(name, num)
    {
        shiftNum = shift;
        hourlyPayRate = payRate;
    }

    void setShiftNumber(int shift)
    {
        shiftNum = shift;
    }

    void setHourlyPayRate(float payRate)
    {
        hourlyPayRate = payRate;
    }

    int getShiftNum()
    {
        return shiftNum;
    }

    int getHourlyPayRate()
    {
        return hourlyPayRate;
    }
};

int main()
{
    string name;
    string number;
    int shift;
    float payRate;

    cout << "enter a employee name : ";
    cin >> name;
    cout << "enter a employee number : ";
    cin >> number;
    cout << "enter a shift : ";
    cin >> shift;
    cout << "enter a hourly pay rate : ";
    cin >> payRate;

    ProductionWorker empData(name, number, shift, payRate);

    cout << "Employee Name : " << empData.getEmpName() << endl;
    cout << "Employee Number : " << empData.getEmpNum() << endl;
    cout << "Employee Shift : " << empData.getShiftNum() << endl;
    cout << "Employee hourly pay rate : " << empData.getHourlyPayRate() << endl;
}