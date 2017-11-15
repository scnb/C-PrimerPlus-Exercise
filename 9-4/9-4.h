#pragma once
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	//非交互式函数原型
	void setSales(Sales & s, const double ar[], int n);
	//交互式函数原型
	void setSales(Sales & s);
	//显式结构
	void showSales(const Sales & s);
}
