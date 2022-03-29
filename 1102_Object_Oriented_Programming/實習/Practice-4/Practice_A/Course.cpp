#include <iostream>
#include <iomanip>
using namespace std;

#include "Course.h"

Course::Course() {}

Course::Course(int math, int english, int computer) :
    math(math), english(english), computer(computer) {}

void Course::setMath(int math)
{
    this->math = math;
}

void Course::setEnglish(int english)
{
    this->english = english;
}

void Course::setComputer(int computer)
{
    this->computer = computer;
}

int Course::getMath() const
{
    return math;
}

int Course::getEnglish() const
{
    return english;
}

int Course::getComputer() const
{
    return computer;
}

int Course::getSum() const
{
    return getMath()+getEnglish()+getComputer();
}

double Course::getAverage() const
{
    return getSum()/3.0;
}

void Course::printScore() const
{
    cout << getMath() << " ";
    cout << getEnglish() << " ";
    cout << getComputer() << " ";
    cout << "Sum:" << getSum() << " ";
    cout << "Average:" << fixed << setprecision(1) << getAverage() << endl;
}