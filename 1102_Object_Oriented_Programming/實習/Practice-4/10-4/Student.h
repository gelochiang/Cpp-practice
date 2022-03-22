#include <string>
using namespace std;

#include "Date.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
    string name;
    Date birthDay;
    int score;
public:
    Student(string, Date, int);
    void setName(string);
    string getName() const;
    void setDate(Date);
    Date getDate() const;
    void setScore(int);
    int getScore() const;
    void print() const;
};

#endif