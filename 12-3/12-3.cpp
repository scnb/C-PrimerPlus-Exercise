// 12-3.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "stock.h"
#include <iostream>

using std::cout;
using std::endl;

const int STKS = 4;

int main()
{
	//����һ����ʼ���˵�����
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
	std::cout << "���ֵ��\n";
	cout << *top;
	getchar();
	return 0;
}
