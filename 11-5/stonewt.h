#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_

#include<iostream>

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
	Stonewt operator+(const Stonewt & t)const;
	Stonewt operator-(const Stonewt & t)const;
	Stonewt operator*(double mult)const;
	friend Stonewt operator*(double mult, const Stonewt & t);
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & t);//ǧ����������iostreamͷ�ļ�������std::��������������
};

#endif
