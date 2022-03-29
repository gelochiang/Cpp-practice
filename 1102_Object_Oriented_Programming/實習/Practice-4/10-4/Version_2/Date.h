#ifndef D_H
#define D_H

class Date
{
private:
    int month;
    int day;
    int year;
public:
    Date(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void print() const;
};

#endif