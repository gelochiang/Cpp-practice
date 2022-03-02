#include "Circle.h"

Circle::Circle()
{
	this->radius = 1;
}

Circle::Circle(double r)
{
	this->radius = r;
}

double Circle::countArea()
{
	return this->radius* this->radius * 3.1415926;
}