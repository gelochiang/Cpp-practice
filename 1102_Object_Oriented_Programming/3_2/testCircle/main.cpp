#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle c1;
	Circle c2(2.5);
	Circle c3(10);

	cout << "C1 area is : " << c1.countArea() << endl;
	cout << "C2 area is : " << c2.countArea() << endl;
	cout << "C3 area is : " << c3.countArea() << endl;

	c2.radius = 3;
	cout << "New c2 area is : " << c2.countArea() << endl;

	cout << "anonoymous circle area is : " << Circle(5).countArea() << endl;
}