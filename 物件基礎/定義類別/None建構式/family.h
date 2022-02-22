#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Family
{
public:
    int ID;
    string appelation;
    string name;
    string birthday;
    int age;

    void printAll()
    {
        cout << "Member" << ID << " : " << setw(6) << appelation << " Name : ";
        cout << setw(8) << name << " Birthday : " << birthday << " Age : ";
        cout << setw(2) << age << endl;
    }
};