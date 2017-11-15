// 12-3.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "stock.h"
#include <iostream>

using std::cout;
using std::endl;

const int STKS = 4;

int main()
{
	//创建一个初始化了的数组
	Stock stocks[STKS] =
	{
		Stock("NanoSmart",12,20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithetic", 300, 4.0),
		Stock("Fleep size", 400, 30.0),
	};
	std::cout << "Stock holdings:\n";
	int st;
	for (st = 0;st < STKS;st++)
	{
		cout << stocks[st];
	}
	const Stock * top = &stocks[0];
	for (st = 0;st < STKS;st++)
	{
		top = &top->topval(stocks[st]);
	}
	std::cout << "最大值：\n";
	cout << *top;
	getchar();
	return 0;
}
