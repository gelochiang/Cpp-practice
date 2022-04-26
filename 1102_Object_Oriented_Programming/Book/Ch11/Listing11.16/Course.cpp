#include <iostream>
using namespace std;

#include "Course.h"

Course::Course(const string &courseName, int capacity):
    courseName(courseName), capacity(capacity)
    {
        numberOfStudents = 0;
        students = new string[capacity];
    }

Course::~Course()
{
    delete [] students;
}

string Course::getCourseName() const
{
    return courseName;
}

void Course::addStudent(const string &name)
{
    if(numberOfStudents >= capacity)
    {
        cout << "The maximum size of array exceeded" << endl;
        cout << "An exception is thrown" << endl;
        throw runtime_error("maximum enrollment exceeded");
    }

    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string &name)
{
    // Left as an exercise
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

Course::Course(Course &course)
{
    courseName = course.courseName;
    numberOfStudents = course.numberOfStudents;
    capacity = course.capacity;
    students = new string[capacity];
}
