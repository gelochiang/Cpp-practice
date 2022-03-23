#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.h"

Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second);
}

void Time::setTime(int hour, int minute, int second)
{
	setHour(hour);
	setMinute(minute);
	setSecond(second);
}

void Time::setHour(int hour)
{
	if(hour >= 0 && hour < 24)
		this->hour = hour;
}

void Time::setMinute(int minute)
{
	if (minute >= 0 && minute < 60)
		this->minute = minute;
}

void Time::setSecond(int second)
{
	if (second >= 0 && second < 60)
		this->second = second;
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

void Time::print() const
{
	cout << setfill('0') << setw(2) << getHour() << ":";
	cout << setw(2) << getMinute() << ":";
	cout << setw(2) << getSecond() << endl;
}