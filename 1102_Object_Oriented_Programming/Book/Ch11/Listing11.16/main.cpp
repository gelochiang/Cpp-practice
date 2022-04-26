#include <iostream>
using namespace std;

#include "Course.h"

int main()
{
    Course course1("C++", 10);
    Course course2(course1);

    course1.addStudent("Peter Pan");
    course2.addStudent("Lisa Ma");

    cout << "Students in course1 : " << course1.getStudents()[0] << endl;
    cout << "Students in course2 : " << course2.getStudents()[0] << endl;

    return 0;
}