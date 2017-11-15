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
		Sales(const double ar[], int n);//���캯��
		Sales();//�����汾�Ĺ��캯��
		void showsales()const;
	};
}

using namespace SALES;

SALES::Sales::Sales()
{
	double total = 0;
	for (int i = 0;i < QUARTERS;i++)
	{
		std::cout << "�����" << i + 1 << "������Ԫ��: ";
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
		std::cout << "��" << i + 1 << "��Ԫ��Ϊ: ";
		std::cout << sales[i];
		std::cout << std::endl;
	}
	std::cout << "ƽ����Ϊ��" << average << std::endl;
	std::cout << "���ֵΪ��" << max << std::endl;
	std::cout << "��СֵΪ��" << min << std::endl;
}