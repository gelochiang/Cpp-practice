#include <iostream>
using namespace std;

#include "Course.h"

int main()
{
    Course course1("Data Structures", 10);
    Course course2("Database Systems", 15);

    course1.addStudent("Peter Jones");
    course1.addStudent("Brian Smith");
    course1.addStudent("Anne Kennedy");

    course2.addStudent("Peter Jones");
    course2.addStudent("Steve Smith");

    cout << "Number of students in course1 : "
        << course1.getNumberOfStudents() << endl;

    string *students = course2.getStudents();

    for(int i = 0; i < course1.getNumberOfStudents(); i++)
    {
        cout << students[i] << ", ";
    }

    cout << "\nNumber of students in course2 : "
        << course2.getNumberOfStudents() << endl;

    students = course2.getStudents();

    for(int i = 0; i < course2.getNumberOfStudents(); i++)
    {
        cout << students[i] << ", ";
    }

    return 0;
}