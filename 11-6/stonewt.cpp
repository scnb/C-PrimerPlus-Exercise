#include "stdafx.h"
#include "stonewt.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn*Lbs_per_stn + lbs;
}

void change_stone(Stonewt & t, int stn, double lbs)
{
	t.stone = stn;
	t.pds_left = lbs;
	t.pounds = stn*t.Lbs_per_stn + lbs;
}

void swap(Stonewt & t1, Stonewt & t2)
{
	t1.stone = t2.stone;
	t1.pds_left = t2.pds_left;
	t1.pounds = t2.pounds;
}

Stonewt  creat_stone(int stn, double lbs)
{
	Stonewt temp(2, 0);
	temp.stone = stn;
	temp.pds_left = lbs;
	temp.pounds = stn*temp.Lbs_per_stn + lbs;
	return temp;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

bool Stonewt::operator=(const Stonewt & t)const
{
	if (stone == t.stone)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stonewt::operator!=(const Stonewt & t)const
{
	if (stone != t.stone)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stonewt::operator>(const Stonewt & t)const
{
	if (stone > t.stone)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stonewt::operator<(const Stonewt & t)const
{
	if (stone < t.stone)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stonewt::operator>=(const Stonewt & t)const
{
	if (stone >= t.stone)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stonewt::operator<=(const Stonewt & t)const
{
	if (stone <= t.stone)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::ostream & operator<<(std::ostream & os, const Stonewt & t)
{
	os << t.stone << " stone, " << t.pds_left << " pound\n";
	os << t.pounds << " pounds\n";
	return os;
}
