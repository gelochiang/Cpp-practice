#include "Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
    numOfRect++;
}

void Rectangle::setHeight(double height)
{
    this->height = height;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getArea() const
{
    return width*height;
}

int Rectangle::getNumOfRect()
{
    return numOfRect;
}