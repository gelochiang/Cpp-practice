#ifndef C_H
#define C_H

class Course
{
private:
    int math;
    int english;
    int computer;
public:
    Course();
    Course(int, int, int);
    void setMath(int);
    void setEnglish(int);
    void setComputer(int);
    int getMath() const;
    int getEnglish() const;
    int getComputer() const;
    int getSum() const;
    double getAverage() const;
    void printScore() const;
};

#endif