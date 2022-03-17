#include <iostream>
using namespace std;

#include "Rectangle.h"

double sum(Rectangle rectArray[], int size)
{
    double sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += rectArray[i].getArea();
    }

    return sum;
}

void printRectangleArray(Rectangle rectArray[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << rectArray[i].getHeight() << " ";
        cout << rectArray[i].getWidth() << " ";
        cout << rectArray[i].getArea() << endl;
    }
}

int main()
{
	double width, height;
    Rectangle rec[4];

    for(int i = 0; i < 4; i++)
    {
        cin >> height >> width;

        rec[i].setHeight(height);
        rec[i].setWidth(width);
    }

    printRectangleArray(rec, 4);
    cout << "Total: " << sum(rec, 4) << endl;

	return 0;
}