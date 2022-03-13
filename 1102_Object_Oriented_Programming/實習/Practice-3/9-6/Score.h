#include <string>
#include <iostream>
using namespace std;

#ifndef SCORE_H
#define SCORE_H

class Score
{
private:
    string name;
    int math;

public:
    Score(string, int);
    void setName(string);
    void setMath(int);
    string getName();
    int getMath();
    void print();
};

#endif