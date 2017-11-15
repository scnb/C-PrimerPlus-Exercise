#pragma once
#ifndef COW_H_
#define COW_H_

class Cow
{
private:
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow & c);//复制构造函数
	~Cow();
	Cow & operator=(const Cow & c);//重载赋值运算符
	void ShowCow()const;//显示所有Cow的数据
};

#endif // !COW_H_
