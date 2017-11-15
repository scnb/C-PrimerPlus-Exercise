// 7-10.cpp : 定义控制台应用程序的入口点。
//考察函数指针

#include "stdafx.h"
#include <iostream>
using namespace std;

double add(double x, double y);
double diff(double x, double y);
void calculate(double a, double b, double(*pf1)(double x, double y), double(*pf2)(double x, double y));

int main()
{
	double x, y;
	cout << "enter two double numbers:";
	while (cin >> x >> y)
	{
		calculate(x, y,add,diff);
		cout << "enter two double numbers:";
	}
    return 0;
}

double add(double x, double y)
{
	return x + y;
}

double diff(double x, double y)
{
	if (x - y >= 0)
	{
		return x - y;
	}
	else
	{
		return y - x;
	}
}

void calculate(double a, double b, double(*pf1)(double x, double y), double(*pf2)(double x, double y))
{
	cout << "two double numbers'sum is :" << pf1(a, b) << endl;
	cout << "two double numbers' difference is " << pf2(a, b) << endl;
}
