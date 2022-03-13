#include "Rectangle.h"

double Rectangle::getArea()
{
    return width*height;
}

double Rectangle::getPerimeter()
{
    return (width+height)*2;
}