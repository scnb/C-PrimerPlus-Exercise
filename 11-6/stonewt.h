#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };//每英石有14磅
	int stone;
	double pds_left;//英石的小数部分，只不过是转换成磅的形式
	double pounds;//磅整个值
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	bool operator=(const Stonewt & t)const;
	bool operator!=(const Stonewt & t)const;
	bool operator>(const Stonewt & t)const;
	bool operator<(const Stonewt & t)const;
	bool operator>=(const Stonewt & t)const;
	bool operator<=(const Stonewt & t)const;
	friend Stonewt  creat_stone(int stn, double lbs);
	friend void change_stone(Stonewt & t, int stn, double lbs);
	friend void swap(Stonewt & t1, Stonewt & t2);
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & t);
};

#endif
