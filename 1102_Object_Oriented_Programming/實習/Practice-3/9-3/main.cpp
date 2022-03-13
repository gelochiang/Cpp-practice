#include <iostream>
#include <iomanip>
using namespace std;

#include "Rectangle.h"

int main()
{
	double width, height;
    cin >> width >> height;

    Rectangle r1, r2;
    r1.setWidth(width);
    r1.setHeight(height);

    cin >> width >> height;
    r2.setWidth(width);
    r2.setHeight(height);

    cout << fixed << setprecision(2) << r1.getArea() << " " << r1.getPerimeter() << endl;
    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

    r2.setWidth(2.5);
    r2.setHeight(5.0);

    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

	return 0;
}