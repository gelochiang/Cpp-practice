#include "BMI.h"

double BMI::getBMI()
{
    return weight/(height*height);
}

void BMI::setName(string n)
{
    name = n;
}

void BMI::setHeight(double h)
{
    height = h;
}

void BMI::setWeight(double w)
{
    weight = w;
}