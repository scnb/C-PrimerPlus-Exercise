#pragma once
#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person
{
private:
	std::string lname;
	std::string fname;
public:
	Person() { lname = ""; fname = "\0"; }//默认构造函数，该函数已经在这里定义了，就不用再重新定义了
	Person(const std::string & ln, const std::string fn = "Heyyou");//一种非默认构造函数
	//两种显示名字的方法：
	void show() const;
	void FormalShow() const;
};
#endif