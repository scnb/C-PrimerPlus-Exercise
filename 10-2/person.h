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
	Person() { lname = ""; fname = "\0"; }//Ĭ�Ϲ��캯�����ú����Ѿ������ﶨ���ˣ��Ͳ��������¶�����
	Person(const std::string & ln, const std::string fn = "Heyyou");//һ�ַ�Ĭ�Ϲ��캯��
	//������ʾ���ֵķ�����
	void show() const;
	void FormalShow() const;
};
#endif