#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;
    static double totalArea;

public:
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
    double getArea() const;
    void addArea();
    double getTotalArea() const; 
};

#endif