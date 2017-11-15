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
	static const int CINLIM = 80;//cin�������󳤶�
public:
	//���캯�����������������س��ȵĺ���
	String(const char * s);
	String();
	String(const String &);//���ƹ��캯��
	~String();
	void stringlow();
	void stringup();
	int has(char s);
	int length()const { return len; };
	//���������
	String & operator=(const String &);//���ظ�ֵ�����
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i)const;
	//����Ԫ�������������
	friend bool operator<(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend bool operator==(const String & st1, const String & st2);
	friend String  operator+(const String & st1, const String & st2);//����÷��ظ��������ܷ������ã��������ý���ԭ�������ٶ���Ч
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator >> (istream & is, String & st);//����>>��������Բ��ܼ�const����Ȼ����ô�޸İ�
															 //��̬����
	static int HowMany();
};

#endif // !STRING1_H