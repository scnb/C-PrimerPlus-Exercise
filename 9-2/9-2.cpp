// 9-2.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void strcount(string str);

int main()
{
	string input;
	cout << "Enter a line:\n";
	getline(cin, input);//�������뷽ʽ�ܹ��ѿ���Ҳ�����ȥ������cin>>input�Ͳ����������
	while (cin)//�������Ҫ��
	{	
		if (input == "")
		{
			break;
		}
		strcount(input);
		cout << "Enter next line(empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(string str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	while (str[count]!='\0')
	{
		count++;
	}
	total = total + count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}