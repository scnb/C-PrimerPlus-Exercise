// 16-1.cpp : �������̨Ӧ�ó������ڵ㡣
//�ж��û�������ַ����ǲ��ǻ����ַ�����Ϊ�˼�㿼�ǣ������Ǵ�Сд�������źͿո�����⡣

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_huiwen(string st);

int main()
{
	string input;
	cout << "�����ַ��������ܰ��������ţ�����ȫ����д��Сд��\n";
	while (cin >> input)
	{
		if (input == "quit")
		{
			break;
		}
		else
		{
			if (is_huiwen(string(input)))
			{
				cout << "���ַ����ǻ����ַ�����\n";
			}
			else
			{
				cout << "���ַ������ǻ����ַ�����\n";
			}
			cout << "�����ַ��������ܰ��������ţ�����ȫ����д��Сд(quit to quit)��\n";
		}
	}
	getchar();
    return 0;
}

bool is_huiwen(string st)				//�ж��ǲ��ǻ����ַ���
{
	string temp;
	int i, j;
	for (i = st.size() - 1;i >= 0;i--)
	{
		temp += st[i];
	}
	return (st == temp);
}