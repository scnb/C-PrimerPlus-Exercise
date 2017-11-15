#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_

#include<iostream>

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
	Stonewt operator+(const Stonewt & t)const;
	Stonewt operator-(const Stonewt & t)const;
	Stonewt operator*(double mult)const;
	friend Stonewt operator*(double mult, const Stonewt & t);
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & t);//千万别忘了添加iostream头文件，和用std::作用域解析运算符
};

#endif
