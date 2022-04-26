#include <string>
using namespace std;

#ifndef COURSE_H
#define COURSE_H

class Course
{
public:
    Course(const string&, int);
    ~Course();
    string getCourseName() const;
    void addStudent(const string&);
    void dropStudent(const string&);
    string *getStudents() const;
    int getNumberOfStudents() const;

private:
    string courseName;
    string *students;
    int numberOfStudents;
    int capacity;
};

#endif