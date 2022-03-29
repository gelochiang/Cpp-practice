#include <iostream>
using namespace std;

#include "Student.h"

int Student::numOfStu = 0;

Student::Student() {}

Student::Student(string name, string ID, Course course) :
    name(name), ID(ID), course(course) {numOfStu++;}

void Student::setName(string name)
{
    this->name = name;
}

string Student::getName() const
{
    return name;
}

void Student::setID(string ID)
{
    this->ID = ID;
}

string Student::getID() const
{
    return ID;
}

void Student::setCourse(Course course)
{
    this->course = course;
}

Course Student::getCourse() const
{
    return course;
}
int Student::getNumOfStu() const
{
    return numOfStu;
}

void Student::printStudent() const
{
    cout << name << " ";
    cout << ID << " ";
    Course(course).printScore();
}
