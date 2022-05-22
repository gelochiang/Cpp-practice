#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date() : year(2003), month(2), day(18) {};

    Date(int year, int month, int day) : 
        year(year), month(month), day(day) {};

    friend class AccessDate;

private:
    int year;
    int month;
    int day;
};

#endif