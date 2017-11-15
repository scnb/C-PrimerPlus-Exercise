#pragma once
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class ACCOUNT
{
private:
	std::string name;
	int ID;
	double balance;//存款
public:
	ACCOUNT();//构造函数的名字必须与类型名相同
	ACCOUNT(const std::string & str, int id, double money);//千万别忘了在string前面加上std::
	void deposit(double money);//存款
	int withdraw(double money);//取款
	void show() const;
};
#endif