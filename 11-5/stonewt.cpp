#include "stdafx.h"
#include "stonewt.h"
#include <iostream>
using std::cout;


Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);//英石的小数部分，只不过是转换成磅的形式
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn*Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

Stonewt Stonewt::operator+(const Stonewt & t)const
{
	Stonewt result;
	result.stone = stone + t.stone;
	result.pounds = pounds + t.pounds;
	result.pds_left = pds_left + t.pds_left;
	return result;
}

Stonewt Stonewt::operator-(const Stonewt & t)const
{
	Stonewt result;
	result.stone = stone - t.stone;
	result.pounds = pounds - t.pounds;
	result.pds_left = pds_left - t.pds_left;
	return result;
}

Stonewt Stonewt::operator*(double mult)const
{
	Stonewt result;
	result.stone = mult*stone;
	result.pounds = mult*pounds;
	result.pds_left = mult*pds_left - Lbs_per_stn*(int(mult*pds_left) / Lbs_per_stn);
	result.stone = int(mult*pds_left) / Lbs_per_stn + result.stone;
	return result;
}

Stonewt operator*(double mult, const Stonewt & t)
{
	return t*mult;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & t)
{
	os << t.stone << " stones, " << t.pds_left << " pounds\n";
	os << t.pounds << " pounds\n";
	return os;
}