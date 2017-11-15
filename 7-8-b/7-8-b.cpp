// 7-8-b.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int Seasons = 4;

void fill_array(struct exp * stu);
void show_array(const char **s, struct exp * stu);

struct exp
{
	double expenses[Seasons];
};

int main()
{
	const char * str[Seasons] = { "spring","summer","fall","winter" };
	struct exp expense;
	fill_array(&expense);
	show_array(str, &expense);
	getchar();
	getchar();
    return 0;
}

void fill_array(struct exp * stu)
{
	double val;
	for (int i = 0;i < Seasons;i++)
	{
		cin >> val;
		stu->expenses[i] = val;
	}
}

void show_array(const char **s, struct exp * stu)
{
	for (int i = 0;i < Seasons;i++)
	{
		cout << *(s + i) << ":" << stu->expenses[i] << endl;
	}
}

