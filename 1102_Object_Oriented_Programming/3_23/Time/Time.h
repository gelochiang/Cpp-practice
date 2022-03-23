#ifndef TIME_H
#define TIME_H

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int = 0, int = 0, int = 0);
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	void print() const;
};

#endif
