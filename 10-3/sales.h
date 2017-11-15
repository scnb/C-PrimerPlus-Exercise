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
		Sales(const double ar[], int n);//构造函数
		Sales();//交互版本的构造函数
		void showsales()const;
	};
}

#endif // !SALES_H_
