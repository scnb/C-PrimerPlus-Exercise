#pragma once

#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>

using std::ostream;

const int MAX_LEN = 81;

class Stock
{
private:
	char * company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares*share_val; }
public:
	Stock();
	Stock(const char co[MAX_LEN], long n, double pr);//构造函数
	~Stock();//析构函数
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	friend ostream & operator<<(ostream & os, const Stock & t);
	//void show()const;
	const Stock & topval(const Stock &) const;
};
#endif