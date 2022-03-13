#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
public:
    double width;
    double height;

    double getArea()
    {
        return width*height;
    }
    double getPerimeter()
    {
        return (width+height)*2;
    }
};

int main()
{
	Rectangle r1, r2;
    cin >> r1.height >> r1.width;
    cin >> r2.height >> r2.width;

    cout << fixed << setprecision(2) << r1.getArea() << " " << r1.getPerimeter() << endl;
    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

    r2.height = 5.0;
    r2.width = 2.5;

    cout << r2.getArea() << " " << r2.getPerimeter() << endl;

	return 0;
}