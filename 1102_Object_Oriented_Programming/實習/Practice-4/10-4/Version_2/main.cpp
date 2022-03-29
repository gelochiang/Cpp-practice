#include <iostream>
using namespace std;

#include "Date.h"
#include "Student.h"

int main()
{
	Student student1("John", Date(6, 1, 1999), 90);
	Student student2("Marry", Date(10, 8, 1997), 80);

	string name;
	int year, month, day;

	cin >> name >> month >> day >> year;

	student1.setName(name);
	student2.setDate(Date(month, day, year));

	student1.print();
	student2.print();

	return 0;
}