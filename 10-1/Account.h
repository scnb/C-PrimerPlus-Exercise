#pragma once
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class ACCOUNT
{
private:
	std::string name;
	int ID;
	double balance;//���
public:
	ACCOUNT();//���캯�������ֱ�������������ͬ
	ACCOUNT(const std::string & str, int id, double money);//ǧ���������stringǰ�����std::
	void deposit(double money);//���
	int withdraw(double money);//ȡ��
	void show() const;
};
#endif