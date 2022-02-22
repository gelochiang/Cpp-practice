#include <string>
#include <iostream>

#include "family.h"

using namespace std;

Family::Family(int ID, string appelation, string name, string birthday, int age)
{
    this->ID = ID; // this 指的是 object 的指標, ex. member1
    this->appelation = appelation;
    this->name = name;
    this->birthday = birthday;
    this->age = age;
}

void Family::printAll()
{
    cout << "Member" << ID << " : " << setw(6) << appelation << " Name : ";
    cout << setw(8) << name << " Birthday : " << birthday << " Age : ";
    cout << setw(2) << age << endl;
}

void Family::riseAge(int amount)
{
    if(this->age+amount > 100)
        cout << "To old!!!" << endl;
    else
        this->age += amount;
}

void Family::dropAge(int amount)
{
    if(this->age-amount < 0)
        cout << "Don't joke." << endl;
    else
        this->age -= amount;
}