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

using namespace SALES;

SALES::Sales::Sales()
{
	double total = 0;
	for (int i = 0;i < QUARTERS;i++)
	{
		std::cout << "输入第" << i + 1 << "个数组元素: ";
		std::cin >> sales[i];
	}
	for (int i = 0;i < QUARTERS;i++)
	{
		total += sales[i];
	}
	average = total / QUARTERS;
	max = sales[0];
	for (int i = 0;i < QUARTERS;i++)
	{
		if (max < sales[i])
		{
			max = sales[i];
		}
	}
	min = sales[0];
	for (int i = 0;i < QUARTERS;i++)
	{
		if (min > sales[i])
		{
			min = sales[i];
		}
	}
}

SALES::Sales::Sales(const double ar[], int n)
{
	double total = 0;
	for (int i = 0;i < n;i++)
	{
		sales[i] = ar[i];
	}
	for (int i = 0;i < n;i++)
	{
		total += sales[i];
	}
	average = total / n;
	max = sales[0];
	for (int i = 0;i < n;i++)
	{
		if (max < sales[i])
		{
			max = sales[i];
		}
	}
	min = sales[0];
	for (int i = 0;i < n;i++)
	{
		if (min > sales[i])
		{
			min = sales[i];
		}
	}
}

void SALES::Sales::showsales()const
{
	for (int i = 0;i < QUARTERS;i++)
	{
		std::cout << "第" << i + 1 << "个元素为: ";
		std::cout << sales[i];
		std::cout << std::endl;
	}
	std::cout << "平均数为：" << average << std::endl;
	std::cout << "最大值为：" << max << std::endl;
	std::cout << "最小值为：" << min << std::endl;
}