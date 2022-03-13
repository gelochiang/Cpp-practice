#include "Rectangle.h"

double Rectangle::getArea()
{
    return width*height;
}

double Rectangle::getPerimeter()
{
    return (width+height)*2;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setHeight(double h)
{
    height = h;
}