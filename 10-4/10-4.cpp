// 10-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "sales.h"
#include <iostream>

namespace SALES
{
	const int QUARTERS = 4;
	class Sales
	{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double ar[], int n);//构造函数
		Sales();//交互版本的构造函数
		void showsales()const;
	};
}

int main()
{
	SALES::Sales s1;
	s1.showsales();
	double t[4] = { 1,2,3,4 };
	SALES::Sales s2(t,4);
	s2.showsales();
	getchar();
	getchar();
    return 0;
}
