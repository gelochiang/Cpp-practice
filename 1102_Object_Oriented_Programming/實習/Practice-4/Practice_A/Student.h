#include <string>
using namespace std;

#include "Course.h"

#ifndef S_H
#define S_H

class Student
{
private:
    string name;
    string ID;
    Course course;
    static int numOfStu;
public:
    Student();
    Student(string, string, Course);
    void setName(string);
    string getName() const;
    void setID(string);
    string getID() const;
    void setCourse(Course);
    Course getCourse() const;
    int getNumOfStu() const;
    void printStudent() const; 
};

#endif