// 9-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "9-4.h"


int main()
{
	using namespace SALES;
	double ar[QUARTERS] = { 1,2,3,4 };
	Sales s1, s2;
	setSales(s1);
	showSales(s1);
	setSales(s2, ar, 4);
	showSales(s2);
	getchar();
	getchar();

    return 0;
}

