// 10-4.cpp : �������̨Ӧ�ó������ڵ㡣
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
		Sales(const double ar[], int n);//���캯��
		Sales();//�����汾�Ĺ��캯��
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
