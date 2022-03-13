#include <string>
using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI
{
private:
    string name;
    double weight;
    double height;

public:
    double getBMI();
    void setName(string);
    void setWeight(double);
    void setHeight(double);
};

#endif