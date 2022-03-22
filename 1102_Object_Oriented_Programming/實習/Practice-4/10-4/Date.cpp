#include "Date.h"

Date::Date(int month, int day, int year) :
    month(month), day(day), year(year) {}

void Date::setMonth(int month)
{
    this->month = month;
}

void Date::setDay(int day)
{
    this->day = day;
}

void Date::setYear(int year)
{
    this->year = year;
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

void Date::print() const
{
    cout << month << '/';
    cout << day << '/';
    cout << year;
}