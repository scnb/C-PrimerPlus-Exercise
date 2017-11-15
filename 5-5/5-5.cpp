// 5-5.cpp : 定义控制台应用程序的入口点。
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
		cout << "请输入 " << Months[i] << " 的销售量：";
		cin >> num[i];
	}
	int sum=0;
	for (int i = 0;i < MONTH;i++)
	{
		sum = sum + num[i];
	}
	cout << "一年的销售总额是" << sum << endl;
	getchar();
	getchar();
    return 0;
}

