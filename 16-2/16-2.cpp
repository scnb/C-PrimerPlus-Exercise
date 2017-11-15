// 16-2.cpp : �������̨Ӧ�ó������ڵ㡣
//�ж��û�������ַ����ǲ��ǻ����ַ����������16-1���ó����п��Ǳ����š��ո񡢴�Сд�����⡣
/*
	���㿼�ǣ�
		�ٰ������ַ�����ת���ɴ�д��ʽ
		�ڰѿո�ͱ����Ŷ�ɾ��

	������cctypeͷ�ļ��еļ���������
		��isnum()���ж��Ƿ�������
		��isalpha()���ж��Ƿ�����ĸ

	�Զ���������������
		��convert()�����ַ�����ת���ɴ�д��ʽ��Ȼ��ѿո�ͱ�㶼ɾ��
		��is_huiwen()���ж�ת��֮����ַ����Ƿ��ǻ����ַ���
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_huiwen(string st);
string  convert(string & st);

int main()
{
	string input;
	cout << "�����ַ�����\n";
	while (getline(cin,input))
	{
		if (input == "quit")
		{
			break;
		}
		else
		{
			input = convert(input);
			if (is_huiwen(string(input)))
			{
				cout << "���ַ����ǻ����ַ�����\n";
			}
			else
			{
				cout << "���ַ������ǻ����ַ�����\n";
			}
			cout << "�����ַ���(quit to quit)��\n";
		}
	}
	getchar();
	return 0;
}

string  convert(string & st)
{
	string temp;
	int i;
	for (i = 0;i < st.size();i++)
	{
		if (isalnum(st[i]) || isalpha(st[i]))
		{
			st[i] = toupper(st[i]);
			temp += st[i];
		}	
	}
	cout << "ת������ַ�����" << temp << endl;
	return temp;
}

bool is_huiwen(string st)				//�ж��ǲ��ǻ����ַ���
{
	string temp;
	int i;
	for (i = st.size() - 1;i >= 0;i--)
	{
		temp += st[i];
	}
	return (st == temp);
}
