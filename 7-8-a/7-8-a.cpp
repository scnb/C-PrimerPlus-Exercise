// 7-8-a.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int Seasons = 4;
void fill_array(double * exp);
void show_array(double exp[Seasons], const char * * s);


int main()
{
	const char * str[Seasons] = { "spring","summer","fall","winter" };
	double expenses[Seasons];
	fill_array(expenses);
	show_array(expenses,  str);
	getchar();
	getchar();
    return 0;
}

void fill_array(double * exp)
{
	double val;
	for (int i = 0;i < Seasons;i++)
	{
		cin >> val;
		*(exp + i) = val;
	}
}

void show_array(double exp[Seasons],const char * * s)//���ֻ��һ��*�ŵĻ������ǰ�������Ԫ�صĵ�ַ�����˽�ȥ������ľ���spring��ǰ�ĸ��ַ����������ַ����ʾ��������ĵ�ַ
{
	for (int i = 0;i < Seasons;i++)
	{
		cout << *(s + i) << ":" << exp[i] << endl;
	}
}

