#pragma once
#ifndef SALES_H_
#define SALES_H_

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

#endif // !SALES_H_
