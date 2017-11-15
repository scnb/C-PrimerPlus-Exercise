#include "stdafx.h"
#include "mytime.h"
#include <iostream>

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

Time operator+(const Time & t1,const Time & t2)
{
	Time sum;
	sum.minutes = t1.minutes + t2.minutes;
	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
	sum.minutes = sum.minutes % 60;
	return sum;
}

Time operator-(const Time & t1,const Time & t2)
{
	Time diff;
	int tot1, tot2;
	tot1 = t1.hours * 60 + t1.minutes;
	tot2 = t2.hours * 60 + t2.minutes;
	diff.minutes = tot1 - tot2;
	diff.hours = diff.minutes / 60;
	diff.minutes = diff.minutes - diff.hours * 60;
	return diff;

}

Time operator*(double mult,const Time & t)
{
	Time result;
	long totalminutes = t.hours * 60 * mult + t.minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << "Hours = " << t.hours << " , minutes = " << t.minutes << std::endl;
	return os;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}