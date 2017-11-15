#include "stdafx.h"
#include "string2.h"
#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

int String::num_strings = 0;

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const char * s)//�ù��캯�������ڽ�C����ַ�����ֵString����ʱ
{
	len = strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

int String::HowMany()
{
	return num_strings;
}

String::~String()
{
	--num_strings;
	delete[] str;
}

String::String(const String & st)//�ù��캯��������  ��String����ֵ����һ��String����ʱ  ���ƹ��캯��
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}


void String::stringlow()
{
	_strlwr(str);
}

void String::stringup()
{
	_strupr(str);
}

int String::has(char s)
{
	int total = 0;
	for (int i = 0;i < len;i++)
	{
		if (str[i] == s)
		{
			total++;
		}
	}
	return total;
}

String & String::operator = (const String & st)//�ø�ֵ���������ͬString�����ĸ�ֵ
{
	if (this == &st)
	{
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String & String::operator = (const char * s)//�ø�ֵ��������ڰ�C����ַ�������String����
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char & String::operator[](int i)//�ȿɶ����ֿ�дԪ��
{
	return str[i];
}

const char & String::operator[](int i)const//ֻ�ɶ�������д����const�޶�������Ϊ�˷�ֹԪ�ر��޸�
{
	return str[i];
}

bool operator<(const String & st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String & st1, const String & st2)
{
	return st2 < st1;
}

bool operator==(const String & st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

String  operator+(const String & st1, const String & st2)//������ǧ���ܷ���String & ���͵ģ���Ϊ��������֮��temp�ᱻ�����������٣����Է��ص���String���ͣ�������
{
	String temp;
	temp.str = new char[strlen(st1.str) + strlen(st2.str) + 1];
	strcpy(temp.str, "");
	strcat(temp.str, st1.str);
	strcat(temp.str, st2.str);
	temp.len = st1.len + st2.len;
	return temp;
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator >> (istream & is, String & st)//���Բ���������>>�����ʱ��const����Ȼû���޸���
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
	{
		st = temp;//ʹ�����صĸ�ֵ���������C����ַ�������String����
	}
	while (is&&is.get() != '\n')
	{
		continue;
	}
	return is;
}