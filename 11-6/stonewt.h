#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };//ÿӢʯ��14��
	int stone;
	double pds_left;//Ӣʯ��С�����֣�ֻ������ת���ɰ�����ʽ
	double pounds;//������ֵ
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
