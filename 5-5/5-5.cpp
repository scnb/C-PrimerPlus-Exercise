// 5-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#define MONTH 12

int main()
{
	char * Months[MONTH] = { "January","Feburery","March","April","May","June","July","August","September","October","November","December" };
	int num[MONTH] = {};
	for (int i = 0;i < MONTH;i++)
	{
		cout << "������ " << Months[i] << " ����������";
		cin >> num[i];
	}
	int sum=0;
	for (int i = 0;i < MONTH;i++)
	{
		sum = sum + num[i];
	}
	cout << "һ��������ܶ���" << sum << endl;
	getchar();
	getchar();
    return 0;
}

