#include <iostream>
#include <iomanip>
using namespace std;

#include "Circle2.h"

double sum(const Circle2 circleArray[], int size)
{
    double sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += circleArray[i].getArea();
    }

    return sum;
}

void printCircleArray(const Circle2 circleArray[], int size)
{
    cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << setw(35) << left << circleArray[i].getRadius() << setw(8)
            << circleArray[i].getArea() << endl;
    }

    cout << "--------------------------------------------\n";

    cout << setw(35) << left << "The total area of circles is" << setw(8)
        << sum(circleArray, size) << endl;
}

int main()
{
    const int SIZE = 10;

    Circle2 circleArray[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        circleArray[i].setRadius(i+1);
    }

    printCircleArray(circleArray, SIZE);

    return 0;
}