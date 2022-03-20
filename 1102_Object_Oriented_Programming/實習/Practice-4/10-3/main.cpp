#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
	Rectangle r[3];
    int width, height;

    for(int i = 0; i < 3; i++)
    {
        cin >> width >> height;
        r[i].setWidth(width);
        r[i].setHeight(height);

        cout << r[i].getWidth() << " ";
        cout << r[i].getHeight() << " ";
        cout << r[i].getArea() << endl;
    }

    cout << r[0].getNumOfRect() << " Rectangles\n";

	return 0;
}