#include "stdafx.h"
#include <iostream>
#include "9-4.h"

namespace SALES   //必须用名称空间将函数定义包起来，不能直接写using namespace SALES;
{
	void setSales(Sales & s, const double ar[], int n)
	{
		double total = 0;
		for (int i = 0;i < n;i++)
		{
			s.sales[i] = ar[i];
			total += ar[i];
		}
		s.average = total / n;
		s.max = ar[0];
		for (int i = 0;i < n;i++)
		{
			if (ar[i] > s.max)
			{
				s.max = ar[i];
			}
		}
		s.min = ar[0];
		for (int i = 0;i < n;i++)
		{
			if (ar[i] < s.min)
			{
				s.min = ar[i];
			}
		}
	}

	void setSales(Sales & s)
	{
		double total = 0;
		std::cout << "请依次输入" << QUARTERS << "个数：\n";
		for (int i = 0;i < QUARTERS;i++)
		{
			std::cout << "第" << i + 1 << "个数：";
			std::cin >> s.sales[i];
			total += s.sales[i];
		}
		s.average = total / QUARTERS;
		s.max = s.sales[0];
		for (int i = 0;i < QUARTERS;i++)
		{
			if (s.sales[i] > s.max)
			{
				s.max = s.sales[i];
			}
		}
		s.min = s.sales[0];
		for (int i = 0;i < QUARTERS;i++)
		{
			if (s.sales[i] < s.min)
			{
				s.min = s.sales[i];
			}
		}
	}

	void showSales(const Sales & s)
	{
		for (int i = 0;i < QUARTERS;i++)
		{
			std::cout << "第" << i + 1 << "个数：";
			std::cout << s.sales[i];
			std::cout << std::endl;
		}
		std::cout << "平均值：" << s.average << std::endl;
		std::cout << "最大值：" << s.max << std::endl;
		std::cout << "最小值：" << s.min << std::endl;
	}
}





