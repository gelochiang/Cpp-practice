#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    double getArea();
    double getPerimeter();
    void setWidth(double);
    void setHeight(double);
};

#endif