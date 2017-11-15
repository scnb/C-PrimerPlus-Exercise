#pragma once
#ifndef STRING2_H
#define STRING2_H_

#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;//cin输入的最大长度
public:
	//构造函数，析构函数，返回长度的函数
	String(const char * s);
	String();
	String(const String &);//复制构造函数
	~String();
	void stringlow();
	void stringup();
	int has(char s);
	int length()const { return len; };
	//重载运算符
	String & operator=(const String &);//重载赋值运算符
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i)const;
	//用友元函数重载运算符
	friend bool operator<(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend bool operator==(const String & st1, const String & st2);
	friend String  operator+(const String & st1, const String & st2);//必须得返回副本，不能返回引用，否则引用将因原对象被销毁而无效
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator >> (istream & is, String & st);//重载>>运算符绝对不能加const，不然还怎么修改啊
															 //静态函数
	static int HowMany();
};

#endif // !STRING1_H