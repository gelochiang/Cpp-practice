#include "Circle2.h"

Circle2::Circle2()
{
    setRadius(1);
}

void Circle2::setRadius(double radius)
{
    this->radius = radius;
}

double Circle2::getRadius() const
{
    return radius;
}

double Circle2::getArea() const
{
    return getRadius()*getRadius()*3.14159;
}