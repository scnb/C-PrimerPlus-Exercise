// 7-8-a.cpp : 定义控制台应用程序的入口点。
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

void show_array(double exp[Seasons],const char * * s)//如果只有一个*号的话，就是把数组首元素的地址传递了进去，输出的就是spring的前四个字符，而两个字符则表示整个数组的地址
{
	for (int i = 0;i < Seasons;i++)
	{
		cout << *(s + i) << ":" << exp[i] << endl;
	}
}

