#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "BMI.h"

int main()
{
	string name;
    double weight, height;
    cin >> name >> weight >> height;

    BMI person;
    person.setName(name);
    person.setWeight(weight);
    person.setHeight(height);

    cout << name << " " << fixed << setprecision(2) << person.getBMI() << endl;

	return 0;
}