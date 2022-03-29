#include <iostream>
#include <iomanip>
using namespace std;

#include "Course.h"
#include "Student.h"

void printAve(Student stuArray[])
{
	double math, english, computer;
	math = english = computer = 0;
	int n = stuArray[0].getNumOfStu();

	for(int i = 0; i < n; i++)
	{
		math += Course(stuArray[i].getCourse()).getMath();
		english += Course(stuArray[i].getCourse()).getEnglish();
		computer += Course(stuArray[i].getCourse()).getComputer();
	}
	cout << "mathAverage:" << fixed << setprecision(1) << math/n << endl;
	cout << "englishAverage:" << fixed << setprecision(1) << english/n << endl;
	cout << "computerAverage:" << fixed << setprecision(1) << computer/n << endl;
}

int main(){
	Student student[5];
	int n, math, english, computer;
	string name, ID;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> name >> ID;
		cin >> math >> english >> computer;
		student[i] = Student(name, ID, Course(math, english, computer));
		student[i].printStudent();
	}

	printAve(student);

	return 0;
}