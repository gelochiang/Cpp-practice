#include "Student.h"

Student::Student(string name, Date birthDay, int score) :
    name(name), birthDay(birthDay), score(score) {}

void Student::setName(string name)
{
    this->name = name;
}

string Student::getName() const
{
    return name;
}

void Student::setDate(Date birthDay)
{
    this->birthDay = birthDay;
}

Date Student::getDate() const
{
    return birthDay;
}

void Student::setScore(int score)
{
    this->score = score;
}

int Student::getScore() const
{
    return score;
}

void Student::print() const
{
    Date d(birthDay);
    cout << name << " ";
    d.print();
    cout << " " << score << endl;
}